#!/usr/bin/env python3
"""Recover by-value two-word owner parameters and their nested EH graphs."""
import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER, load_records, width_preserving_pointer_casts
from compile_scstr_cpp import normalize_definition, cpp_source, split_valid, eligible

BAD_CALL = "thunk_FUN_1148a05a"


def lower(record, evidence):
    meta = evidence["metadata"]
    actions = meta["actions"]
    if not (
        meta["state_count"] == 2 and len(actions) == 2 and
        actions[0]["next_state"] == -1 and actions[1]["next_state"] == -1 and
        actions[1]["action"] == "1148cdcf" and
        len(actions[0]["instructions"]) == 4 and
        actions[0]["instructions"][0] == "lea ecx, [ebp + 8]" and
        re.fullmatch(r"jmp 0x[0-9a-f]{8}", actions[0]["instructions"][1]) and
        actions[0]["instructions"][2:] == ["int3", "int3"] and
        not any(meta["words"][3:8])
    ):
        return None
    target = actions[0]["instructions"][1].split("0x", 1)[1]
    owner = f"RecoveredParamOwner_FUN_{target}"
    source = normalize_definition(record)
    header, separator, body = source.partition("{")
    signature = re.fullmatch(
        r"\s*void\s+__thiscall\s+FUN_[0-9a-f]{8}\s*\(int param_1,undefined4 param_2,int \*param_3\)\s*",
        header,
    )
    if not signature or not separator:
        return None
    has_extra = "stack0x0000000c" in body
    callback = "RecoveredOwnerParameterCallback2" if has_extra else "RecoveredOwnerParameterCallback1"
    header = re.sub(
        r"\(int param_1,undefined4 param_2,int \*param_3\)",
        f"(int param_1,{owner} recovered_owner" + (",undefined4 param_4)" if has_extra else ")"),
        header,
    )
    source = header + separator + body
    cleanup = re.search(
        r"(?P<temp>\w+)\s*=\s*param_3;\s*local_8\s*=\s*1;\s*"
        r"if\s*\(param_3\s*!=\s*\(int \*\)0x0\)\s*\{\s*"
        r"param_2\s*=\s*0;\s*param_3\s*=\s*\(int \*\)0x0;\s*"
        r"\(\*\*\(code \*\*\)\(\*(?P=temp) \+ 8\)\)\(\);\s*\}",
        source, re.S,
    )
    if not cleanup:
        return None
    source = source[:cleanup.start()] + source[cleanup.end():]
    source = re.sub(r"\bparam_2\b", "recovered_owner.first", source)
    source = re.sub(r"\bparam_3\b", "recovered_owner.second", source)
    source = source.replace("stack0x0000000c", "param_4")
    # The cookie expression is decompiler spill noise, never a source argument.
    source = re.sub(
        r",\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc(?=\s*\))", "", source)
    indirect = re.compile(
        r"\(\*\*\(code \*\*\)\(\*\*\(int \*\*\)\(param_1 \+ 0x24\) \+ 8\)\)"
        r"\s*\(([^;]+?)\)", re.S
    )
    calls = list(indirect.finditer(source))
    if len(calls) != 1:
        return None
    expected = ["&recovered_owner.first"] + (["&param_4"] if has_extra else [])
    from recovered_call_abi import arguments
    values = arguments(calls[0].group(1))
    if values != expected:
        return None
    args = ", ".join(f"(void *)({value})" for value in values)
    replacement = (
        f"(({callback} *)*(int **)(param_1 + 0x24))->"
        f"VirtualSlot2({args})"
    )
    source = source[:calls[0].start()] + replacement + source[calls[0].end():]
    source = source.replace("std::_Xbad_function_call()", f"{BAD_CALL}()")
    for pattern in [
        r"void \*local_10;", r"undefined1 \*puStack_c;", r"undefined4 local_8;",
        r"local_8 = 0;", r"local_10 = ExceptionList;",
        r"puStack_c = &LAB_[0-9a-f]{8};", r"ExceptionList = &local_10;",
        r"ExceptionList = local_10;",
    ]:
        source = re.sub(r"(?m)^\s*" + pattern, "", source)
    if re.search(r"\b(?:ExceptionList|local_8|local_10|puStack_c|LAB_|stack0x|DAT_12126b84)", source):
        return None
    source = width_preserving_pointer_casts(source)
    if not eligible(source):
        return None
    callback_args = "void *" + (", void *" if has_extra else "")
    declarations = {
        owner: (
            f"struct {owner} {{ unsigned int first; int *second; "
            f"~{owner}() noexcept {{ if (second) {{ int *value = second; first = 0; second = 0; "
            f"((RecoveredVirtualSlots *)value)->VirtualSlot2(); }} }} }};"
        ),
        callback: (
            f"struct {callback} {{ virtual int Reserved0(); virtual int Reserved1(); "
            f"virtual int VirtualSlot2({callback_args}); }};"
        ),
        BAD_CALL: f"extern __declspec(noreturn) void __cdecl {BAD_CALL}(void);",
    }
    return {
        **record, "source": source, "virtual_slots": [2],
        "abi_declarations": declarations, "reference_handler": evidence["handler"],
        "reference_metadata": meta["address"], "reference_state_count": meta["state_count"],
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exports", nargs="+", type=Path)
    parser.add_argument("--evidence", type=Path, default=ROOT / "analysis/eh-lifetime-evidence.jsonl")
    parser.add_argument("--output-dir", type=Path, default=ROOT / "analysis/compiled-cpp-owner-parameter-raii")
    parser.add_argument("--emit-source", type=Path, default=ROOT / "src/generated/owner_parameter_raii.cpp")
    parser.add_argument("--emit-index", type=Path, default=ROOT / "src/generated/owner-parameter-raii-index.tsv")
    args = parser.parse_args()
    records = load_records(args.exports)
    candidates = []
    for line in args.evidence.open():
        evidence = json.loads(line)
        if evidence["entry"] in records:
            item = lower(records[evidence["entry"]], evidence)
            if item:
                candidates.append(item)
    candidates.sort(key=lambda row: row["entry"])
    print("Candidates:", len(candidates), "bytes:", sum(x["body_bytes"] for x in candidates), flush=True)
    args.output_dir.mkdir(parents=True, exist_ok=True)
    accepted, failures = [], []
    scratch = args.output_dir / ".syntax-probe.cpp"
    for start in range(0, len(candidates), 100):
        accepted += split_valid(candidates[start:start + 100], scratch, failures)
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
