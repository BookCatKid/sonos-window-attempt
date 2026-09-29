#!/usr/bin/env python3
"""Recover the common two-pointer owner as an ordinary C++ RAII local."""
import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER, load_records, width_preserving_pointer_casts, msvc_compatible_labels
from compile_scstr_cpp import (
    normalize_definition, restore_pointer_width_casts, restore_virtual_zero_arg_calls,
    cpp_source, split_valid, eligible,
)
from compile_vftable_cpp import VFTABLE, symbol_name
from recovered_call_abi import CallABI

CTOR = "thunk_FUN_101f6530"
DTOR_TARGET = "1001d21e"
OWNER = "RecoveredOwner_FUN_1001d21e"
OWNER_VIRTUAL = "RecoveredOwnerVirtualSlot10"


def restore_owner_virtual(source):
    pattern = re.compile(
        r"\(\*\*\(code \*\*\)\(\*recovered_owner\.first \+ (?:0x28|40)\)\)"
        r"\(([^;\n]+)\)"
    )
    count = 0
    def replace(match):
        nonlocal count
        from recovered_call_abi import arguments
        values = arguments(match.group(1))
        if len(values) != 3:
            return match.group(0)
        count += 1
        cast = ", ".join(f"(void *)({value})" for value in values)
        return f"(({OWNER_VIRTUAL} *)recovered_owner.first)->VirtualSlot10({cast})"
    return pattern.sub(replace, source), count


def lower(record, evidence, abi):
    meta = evidence["metadata"]
    actions = meta["actions"]
    if not (
        meta["state_count"] == 2 and len(actions) == 2 and
        actions[0]["next_state"] == -1 and actions[1]["next_state"] == -1 and
        actions[1]["action"] == "1148cdcf" and
        len(actions[0]["instructions"]) == 4 and
        actions[0]["instructions"][1] == f"jmp 0x{DTOR_TARGET}" and
        actions[0]["instructions"][2:] == ["int3", "int3"] and
        not any(meta["words"][3:8])
    ):
        return None
    source = normalize_definition(record)
    cleanup = re.search(
        r"(?P<temp>\w+)\s*=\s*(?P<second>local_[0-9a-f]+);\s*"
        r"local_8\s*=\s*1;\s*"
        r"if\s*\(\s*(?P=second)\s*!=\s*\(int \*\)0x0\s*\)\s*\{\s*"
        r"(?P<first>local_[0-9a-f]+)\s*=\s*\(int \*\)0x0;\s*"
        r"(?P=second)\s*=\s*\(int \*\)0x0;\s*"
        r"\(\*\*\(code \*\*\)\(\*(?P=temp) \+ 8\)\)\(\);\s*\}",
        source, re.S,
    )
    if not cleanup:
        return None
    first, second = cleanup.group("first"), cleanup.group("second")
    if first == second:
        return None
    constructor = re.compile(
        rf"\b{CTOR}\s*\(\s*&{re.escape(first)}\s*,\s*"
        r"DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc\s*\)\s*;"
    )
    matches = list(constructor.finditer(source))
    if len(matches) != 1:
        return None
    source = source[:cleanup.start()] + source[cleanup.end():]
    source = constructor.sub(f"{OWNER} recovered_owner;", source)
    for name in (first, second):
        source, count = re.subn(rf"(?m)^\s*int \*{re.escape(name)};", "", source)
        if count != 1:
            return None
    source = re.sub(rf"\b{re.escape(first)}\b", "recovered_owner.first", source)
    source = re.sub(rf"\b{re.escape(second)}\b", "recovered_owner.second", source)
    for pattern in [
        r"void \*local_10;", r"undefined1 \*puStack_c;", r"undefined4 local_8;",
        r"local_8 = 0xffffffff;", r"local_8 = 0;",
        r"local_10 = ExceptionList;", r"puStack_c = &LAB_[0-9a-f]{8};",
        r"ExceptionList = &local_10;", r"ExceptionList = local_10;",
    ]:
        source = re.sub(r"(?m)^\s*" + pattern, "", source)
    if re.search(r"\b(?:ExceptionList|local_8|local_10|puStack_c|LAB_|stack0x|DAT_12126b84)", source):
        return None
    head, separator, body = source.partition("{")
    if meta["words"][8] & 4:
        source = head.rstrip() + " noexcept\n" + separator + body
    source = width_preserving_pointer_casts(restore_pointer_width_casts(source))
    labels = sorted(set(VFTABLE.findall(source)))
    for label in sorted(labels, key=len, reverse=True):
        source = source.replace(label, f"(undefined4)&{symbol_name(label)}")
    source = msvc_compatible_labels(source)
    source, owner_virtual_count = restore_owner_virtual(source)
    if owner_virtual_count != 1:
        return None
    source, virtual_count, slots = restore_virtual_zero_arg_calls(source)
    source, declarations, typed_count = abi.lower(source)
    if source is None or not eligible(source):
        return None
    declarations[CTOR] = f"extern void __cdecl abi_call_{CTOR}(void *receiver);"
    declarations[OWNER_VIRTUAL] = (
        f"struct {OWNER_VIRTUAL} {{ " +
        " ".join(f"virtual int Reserved{slot}();" for slot in range(10)) +
        " virtual int VirtualSlot10(void *, void *, void *); };"
    )
    declarations[OWNER] = (
        f"struct {OWNER} {{ int *first; int *second; "
        f"{OWNER}() {{ abi_call_{CTOR}(this); }} "
        f"~{OWNER}() noexcept {{ if (second) {{ int *value = second; first = 0; second = 0; "
        f"((RecoveredVirtualSlots *)value)->VirtualSlot2(); }} }} }};"
    )
    return {
        **record, "source": source, "vftables": labels,
        "virtual_slots": sorted(set(slots) | {2}), "abi_declarations": declarations,
        "typed_calls": typed_count, "virtual_calls": virtual_count,
        "reference_handler": evidence["handler"], "reference_metadata": meta["address"],
        "reference_state_count": meta["state_count"],
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exports", nargs="+", type=Path)
    parser.add_argument("--evidence", type=Path, default=ROOT / "analysis/eh-lifetime-evidence.jsonl")
    parser.add_argument("--output-dir", type=Path, default=ROOT / "analysis/compiled-cpp-owner-pair-raii")
    parser.add_argument("--emit-source", type=Path, default=ROOT / "src/generated/owner_pair_raii.cpp")
    parser.add_argument("--emit-index", type=Path, default=ROOT / "src/generated/owner-pair-raii-index.tsv")
    args = parser.parse_args()
    records = load_records(args.exports)
    abi = CallABI(args.exports, recover_implicit_register=True)
    candidates = []
    for line in args.evidence.open():
        evidence = json.loads(line)
        if evidence["entry"] in records:
            item = lower(records[evidence["entry"]], evidence, abi)
            if item:
                candidates.append(item)
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
    (args.output_dir / "reference-eh-inventory.json").write_text(json.dumps([
        {key: row[key] for key in ["entry", "reference_handler", "reference_metadata", "reference_state_count"]}
        for row in accepted
    ], indent=2) + "\n")
    metrics = {"compiled_functions": len(accepted), "compiled_reference_body_bytes": sum(x["body_bytes"] for x in accepted), "syntax_rejected": len(failures)}
    (args.output_dir / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
