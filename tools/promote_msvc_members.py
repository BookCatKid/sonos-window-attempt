#!/usr/bin/env python3
"""Promote existing primitive Ghidra batches to genuine MSVC member definitions.

Preserve the original local source/index. This changes only definitions with an
explicit Ghidra thiscall receiver; provisional callees remain provisional.
"""
import argparse
import csv
import hashlib
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import COMPILER, ROOT, msvc_compatible_labels
from compile_scstr_cpp import make_msvc_member

MARKER = re.compile(r"(?m)^// Reference entry ([0-9a-f]{8}); body size \d+ bytes\.\n")


def promote(source):
    markers = list(MARKER.finditer(source))
    if not markers:
        raise ValueError("No address-indexed function markers")
    parts = [source[:markers[0].start()]]
    changed = 0
    for index, marker in enumerate(markers):
        end = markers[index + 1].start() if index + 1 < len(markers) else len(source)
        block = source[marker.end():end]
        declaration, definition = make_msvc_member(block, marker.group(1))
        if declaration:
            # Place the class inside any existing recovered namespace, before
            # the definition. Keep #line immediately before the function.
            line = re.search(r'(?m)^#line 1 "ENTRY_[0-9a-f]{8}"\n', definition)
            if not line:
                definition = declaration + f'\n#line 1 "ENTRY_{marker.group(1)}"\n' + definition
            else:
                definition = definition[:line.start()] + declaration + "\n" + definition[line.start():]
            changed += 1
        if "__thiscall" in definition:
            raise ValueError(f"Unlowered thiscall in {marker.group(1)}")
        parts.extend([marker.group(0), msvc_compatible_labels(definition)])
    return "".join(parts), changed


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("directories", nargs="+", type=Path)
    parser.add_argument("--output-root", type=Path, default=ROOT / "analysis")
    parser.add_argument("--emit-dir", type=Path, default=ROOT / "src/generated/member_abi")
    args = parser.parse_args()
    args.output_root = args.output_root.resolve()
    if not args.output_root.is_relative_to(ROOT):
        parser.error("--output-root must be inside the repository for portable tranche paths")
    args.emit_dir.mkdir(parents=True, exist_ok=True)
    manifest = []
    for directory in args.directories:
        source = directory / "ghidra_recovered.cpp"
        text, count = promote(source.read_text())
        stem = directory.name.removeprefix("compiled-cpp-").replace("-", "_") + "_members"
        output = args.output_root / ("compiled-cpp-" + stem.replace("_", "-"))
        output.mkdir(parents=True, exist_ok=True)
        target = output / "ghidra_recovered.cpp"
        target.write_text(text)
        obj = output / "ghidra_recovered.obj"
        result = subprocess.run([
            str(COMPILER), "/nologo", "/O2", "/bigobj", "/MD", "/GS", "/GR", "/EHsc", "/Zi", "/c",
            "/clang:--target=i686-pc-windows-msvc", f"/Fo{obj}", os.path.relpath(target, ROOT),
        ], cwd=ROOT, capture_output=True, text=True)
        if result.returncode:
            raise SystemExit(result.stdout + result.stderr)
        index = directory / "compiled-index.tsv"
        (output / index.name).write_bytes(index.read_bytes())
        rows = list(csv.DictReader(index.open(), delimiter="\t"))
        metrics = {"compiled_functions": len(rows), "member_definitions": count,
                   "compiled_reference_body_bytes": sum(int(row["reference_body_bytes"]) for row in rows),
                   "source_directory": str(directory), "pinned_msvc_verified": False,
                   "input_source_sha256": hashlib.sha256(source.read_bytes()).hexdigest(),
                   "generated_source_sha256": hashlib.sha256(text.encode()).hexdigest(),
                   "index_sha256": hashlib.sha256(index.read_bytes()).hexdigest()}
        (output / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
        (args.emit_dir / (stem + ".cpp")).write_text(text)
        (args.emit_dir / (stem + "-index.tsv")).write_bytes(index.read_bytes())
        manifest.append({"object": stem + "_reference_flags", "directory": str(output.relative_to(ROOT))})
        print(json.dumps(metrics), flush=True)
    (args.emit_dir / "tranches.json").write_text(json.dumps(manifest, indent=2) + "\n")


if __name__ == "__main__":
    main()
