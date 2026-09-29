#!/usr/bin/env python3
"""Recover sequential multi-state terminate regions as ordinary C++ scopes."""
import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER, load_records, width_preserving_pointer_casts, msvc_compatible_labels
from compile_scstr_cpp import (
    normalize_definition, rewrite_calls, restore_scstr_byte_offsets,
    restore_pointer_width_casts, restore_virtual_zero_arg_calls, cpp_source,
    split_valid, eligible, call_end, split_first_argument,
)
from compile_single_state_guards import DELETE, mask_strings
from compile_vftable_cpp import VFTABLE, symbol_name
from recovered_call_abi import CallABI


def multi_guard_regions(source, state_count):
    """Replace sequential state spans with inlineable noexcept lambdas."""
    matches = list(re.finditer(r"\blocal_8\s*=\s*(0x[0-9a-f]+|\d+)\s*;", source))
    states = {}
    for match in matches:
        value = int(match.group(1), 0)
        if 0 <= value < state_count:
            if value in states:
                return None
            states[value] = match
    if set(states) != set(range(state_count)):
        return None
    ordered = [states[x] for x in range(state_count)]
    if ordered != sorted(ordered, key=lambda x: x.start()):
        return None
    end_match = re.search(r"\bExceptionList\s*=\s*local_10\s*;", source[ordered[-1].end():])
    if not end_match:
        return None
    final_end = ordered[-1].end() + end_match.start()

    masked = mask_strings(source)
    depths = {}
    depth = 0
    span_ends = []
    for index, match in enumerate(ordered):
        limit = ordered[index + 1].start() if index + 1 < state_count else final_end
        reset = re.search(r"\blocal_8\s*=\s*0xffffffff\s*;", source[match.end():limit])
        span_ends.append(match.end() + reset.start() if reset else limit)
    checkpoints = {m.start() for m in ordered} | set(span_ends)
    for pos, char in enumerate(masked):
        if pos in checkpoints:
            depths[pos] = depth
        depth += (char == "{") - (char == "}")
    expected = depths.get(ordered[0].start())
    if expected is None or any(depths.get(pos) != expected for pos in checkpoints):
        return None

    spans = []
    for index, match in enumerate(ordered):
        end = span_ends[index]
        body = source[match.end():end]
        if re.search(r"\b(?:return|goto|break|continue|local_8|ExceptionList)\b", mask_strings(body)):
            return None
        spans.append((match.start(), end, body))
    for start, end, body in reversed(spans):
        source = source[:start] + "([&]() noexcept {\n" + body + "\n})();\n" + source[end:]
    return source


def lower(record, evidence, abi):
    meta = evidence["metadata"]
    if record["body_bytes"] <= 5 or meta["state_count"] <= 1:
        return None
    if any(meta["words"][3:8]) or any(action["action"] != "1148cdcf" for action in meta["actions"]):
        return None
    source = normalize_definition(record)
    if "local_10 = ExceptionList;" not in source or not re.search(r"puStack_c\s*=\s*&LAB_", source):
        return None

    cookie = re.search(r"(\w+)\s*=\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc;", source)
    cookie_name = cookie.group(1) if cookie else None
    if cookie_name:
        # Ghidra commonly appends the EH cookie temporary as a fictitious final
        # call argument. It is computed from the frame address and the module
        # cookie, so it cannot be a source-language value passed by the caller.
        source = re.sub(r",\s*" + re.escape(cookie_name) + r"(?=\s*\))", "", source)
        source = re.sub(r"(?<=\()\s*" + re.escape(cookie_name) + r"\s*(?=\))", "", source)
    delete_used = False
    for match in reversed(list(re.finditer(r"\b" + DELETE + r"\s*\(", source))):
        end = call_end(source, match.end() - 1)
        pointer, tail = split_first_argument(source[match.end():end])
        size, last = split_first_argument(tail)
        if last and (not cookie_name or last != cookie_name):
            return None
        if not size:
            return None
        source = source[:match.start()] + f"{DELETE}((void *)({pointer}), {size})" + source[end + 1:]
        delete_used = True
    if cookie_name:
        source = re.sub(r"(?m)^\s*" + re.escape(cookie_name) + r"\s*=\s*DAT_12126b84[^;]+;", "", source)
        source = re.sub(r"(?m)^\s*uint " + re.escape(cookie_name) + r";", "", source)
        if re.search(r"\b" + re.escape(cookie_name) + r"\b", source):
            return None
    if "DAT_12126b84" in source:
        return None

    source = multi_guard_regions(source, meta["state_count"])
    if source is None:
        return None
    for pattern in [
        r"void \*local_10;", r"undefined1 \*puStack_c;", r"undefined4 local_8;",
        r"local_8 = 0xffffffff;", r"local_10 = ExceptionList;",
        r"puStack_c = &LAB_[0-9a-f]{8};", r"ExceptionList = &local_10;",
        r"ExceptionList = local_10;",
    ]:
        source = re.sub(r"(?m)^\s*" + pattern, "", source)
    if re.search(r"\b(?:ExceptionList|local_8|local_10|puStack_c|LAB_|stack0x)", source):
        return None
    head, separator, body = source.partition("{")
    if meta["words"][8] & 4:
        source = head.rstrip() + " noexcept\n" + separator + body
    source, _ = restore_scstr_byte_offsets(source)
    if "SCStr::" in source:
        source = rewrite_calls(source)
        if source is None:
            return None
    source = width_preserving_pointer_casts(restore_pointer_width_casts(source))
    labels = sorted(set(VFTABLE.findall(source)))
    for label in sorted(labels, key=len, reverse=True):
        source = source.replace(label, f"(undefined4)&{symbol_name(label)}")
    source = msvc_compatible_labels(source)
    source, virtual_count, slots = restore_virtual_zero_arg_calls(source)
    if not eligible(source):
        return None
    source, declarations, typed_count = abi.lower(source)
    if source is None:
        return None
    if delete_used:
        declarations[DELETE] = f"extern void {DELETE}(void *allocation, unsigned int bytes) noexcept;"
    return {
        **record, "source": source, "vftables": labels, "virtual_slots": sorted(slots),
        "abi_declarations": declarations, "typed_calls": typed_count,
        "virtual_calls": virtual_count, "reference_handler": evidence["handler"],
        "reference_metadata": meta["address"],
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exports", nargs="+", type=Path)
    parser.add_argument("--evidence", type=Path, default=ROOT / "analysis/eh-lifetime-evidence.jsonl")
    parser.add_argument("--output-dir", type=Path, default=ROOT / "analysis/compiled-cpp-multistate-terminate")
    parser.add_argument("--emit-source", type=Path, default=ROOT / "src/generated/multistate_terminate_guards.cpp")
    parser.add_argument("--emit-index", type=Path, default=ROOT / "src/generated/multistate-terminate-guards-index.tsv")
    args = parser.parse_args()
    records = load_records(args.exports)
    abi = CallABI(args.exports)
    candidates = []
    for line in args.evidence.open():
        evidence = json.loads(line)
        if evidence["entry"] in records:
            candidate = lower(records[evidence["entry"]], evidence, abi)
            if candidate:
                candidates.append(candidate)
    candidates.sort(key=lambda row: row["entry"])
    print("Candidates:", len(candidates), "bytes:", sum(x["body_bytes"] for x in candidates), flush=True)
    args.output_dir.mkdir(parents=True, exist_ok=True)
    accepted, failures = [], []
    scratch = args.output_dir / ".syntax-probe.cpp"
    for start in range(0, len(candidates), 100):
        accepted += split_valid(candidates[start:start + 100], scratch, failures)
        print("Checked", min(start + 100, len(candidates)), "accepted", len(accepted), flush=True)
    scratch.unlink(missing_ok=True)
    generated = cpp_source(accepted)
    source_path = args.output_dir / "ghidra_recovered.cpp"
    source_path.write_text(generated)
    obj = args.output_dir / "ghidra_recovered.obj"
    result = subprocess.run([
        str(COMPILER), "/nologo", "/O2", "/MD", "/GS", "/EHsc", "/c",
        "/clang:--target=i686-pc-windows-msvc", f"/Fo{obj}", os.path.relpath(source_path, ROOT),
    ], cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit(result.stdout + result.stderr)
    index_path = args.output_dir / "compiled-index.tsv"
    with index_path.open("w", newline="") as file:
        writer = csv.writer(file, delimiter="\t")
        writer.writerow(["entry", "name", "reference_body_bytes"])
        writer.writerows((x["entry"], x["name"], x["body_bytes"]) for x in accepted)
    args.emit_source.write_text(generated)
    args.emit_index.write_text(index_path.read_text())
    metrics = {
        "compiled_functions": len(accepted),
        "compiled_reference_body_bytes": sum(x["body_bytes"] for x in accepted),
        "syntax_rejected": len(failures),
        "typed_call_sites": sum(x["typed_calls"] for x in accepted),
        "virtual_call_sites": sum(x["virtual_calls"] for x in accepted),
    }
    (args.output_dir / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
    (args.output_dir / "failures.tsv").write_text("entry\terror\n" + "".join(f"{e}\t{error}\n" for e, error in failures))
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
