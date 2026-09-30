#!/usr/bin/env python3
"""Probe implicit thiscall receivers on Ghidra virtual calls with word arguments.

Only simple vptr receiver expressions and positive, aligned slots are lowered.
The declarations are ABI hypotheses; pinned body/EH verification is mandatory.
"""
import csv
import argparse
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER
from compile_scstr_cpp import call_end
from recovered_call_abi import arguments
from promote_msvc_members import MARKER

VIRTUAL = re.compile(
    r"\(\*\*\(code \*\*\)\(\*(?P<receiver>[A-Za-z_]\w*|\*?\(int \*\*?\)\([^()\n]+\)) \+ (?P<offset>0x[0-9a-f]+|\d+)\)\)\("
)


def lower(source):
    declarations = {}
    count = 0
    for match in reversed(list(VIRTUAL.finditer(source))):
        offset = int(match.group("offset"), 0)
        if offset % 4 or offset > 1020:
            continue
        end = call_end(source, match.end() - 1)
        values = arguments(source[match.end():end])
        if not values or len(values) > 8:
            continue
        # A receiver already present among textual arguments is ambiguous;
        # this probe targets the common omitted-receiver form only.
        if values[0].strip() == match.group("receiver"):
            continue
        slot = offset // 4
        name = f"RecoveredVirtualArgumentsSlot{slot}Count{len(values)}"
        declarations[name] = (
            f"struct {name} {{ " +
            " ".join(f"virtual int Reserved{i}();" for i in range(slot)) +
            " virtual int Invoke(" + ", ".join("void *" for _ in values) + "); };"
        )
        args = ", ".join(f"(void *)({value})" for value in values)
        replacement = f"(({name} *){match.group('receiver')})->Invoke({args})"
        source = source[:match.start()] + replacement + source[end + 1:]
        count += 1
    return source, declarations, count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("directory", nargs="?", type=Path,
                        default=ROOT / "analysis/compiled-cpp-multistate-terminate")
    args = parser.parse_args()
    original = args.directory
    source = (original / "ghidra_recovered.cpp").read_text()
    family = original.name.removeprefix("compiled-cpp-")
    stem = family.replace("-", "_") + "_virtual_arguments"
    markers = list(MARKER.finditer(source))
    blocks, declarations, calls = {}, {}, 0
    for index, marker in enumerate(markers):
        end = markers[index + 1].start() if index + 1 < len(markers) else len(source)
        changed, decls, count = lower(source[marker.start():end])
        if count:
            blocks[marker.group(1)] = changed
            declarations.update(decls)
            calls += count
    prefix = source[:markers[0].start()] + "\n".join(declarations.values()) + "\n"
    output = ROOT / "analysis" / ("compiled-cpp-" + family + "-virtual-arguments")
    output.mkdir(parents=True, exist_ok=True)
    target = output / "ghidra_recovered.cpp"
    rejected = {}
    while blocks:
        target.write_text(prefix + "".join(blocks.values()))
        result = subprocess.run([
            str(COMPILER), "/nologo", "/Zs", "/clang:--target=i686-pc-windows-msvc", "/clang:-ferror-limit=0",
            os.path.relpath(target, ROOT),
        ], cwd=ROOT, capture_output=True, text=True)
        if not result.returncode:
            break
        errors = dict(re.findall(r"ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)", result.stderr))
        removed = set(errors) & blocks.keys()
        if not removed:
            raise SystemExit(result.stdout + result.stderr)
        for entry in removed:
            rejected[entry] = errors[entry]
            del blocks[entry]
    if not blocks:
        raise SystemExit("No virtual argument candidates survived syntax checking")
    obj = output / "ghidra_recovered.obj"
    result = subprocess.run([
        str(COMPILER), "/nologo", "/O2", "/MD", "/GS", "/GR", "/EHsc", "/Zi", "/c",
        "/clang:--target=i686-pc-windows-msvc", f"/Fo{obj}", os.path.relpath(target, ROOT),
    ], cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit(result.stdout + result.stderr)
    rows = [row for row in csv.DictReader((original / "compiled-index.tsv").open(), delimiter="\t") if row["entry"] in blocks]
    with (output / "compiled-index.tsv").open("w", newline="") as file:
        writer = csv.DictWriter(file, fieldnames=list(rows[0]), delimiter="\t")
        writer.writeheader()
        writer.writerows(rows)
    inventory_path = original / "reference-eh-inventory.json"
    if inventory_path.exists():
        inventory = [row for row in json.loads(inventory_path.read_text()) if row["entry"] in blocks]
        (output / "reference-eh-inventory.json").write_text(json.dumps(inventory, indent=2) + "\n")
    emit_dir = ROOT / "src/generated/member_abi"
    (emit_dir / (stem + ".cpp")).write_text(target.read_text())
    (emit_dir / (stem + "-index.tsv")).write_bytes((output / "compiled-index.tsv").read_bytes())
    metrics = {"compiled_functions": len(rows), "reference_body_bytes": sum(int(row["reference_body_bytes"]) for row in rows),
               "candidate_virtual_calls": calls, "syntax_rejected": rejected, "pinned_msvc_verified": False}
    (output / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
    manifest_path = ROOT / "src/generated/member_abi/tranches.json"
    manifest = json.loads(manifest_path.read_text())
    object_name = stem + "_reference_flags"
    manifest = [row for row in manifest if row["object"] != object_name]
    manifest.append({"object": object_name, "directory": str(output.relative_to(ROOT))})
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n")
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
