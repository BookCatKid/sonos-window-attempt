#!/usr/bin/env python3
"""Compile Ghidra functions that use DAT/PTR globals as x86 C++.

This expands the conservative compiler gate with mechanically declared globals
and unresolved FUN call stubs. A successful compile is only a source/object
coverage result; it does not claim instruction or linked-DLL matching.
"""

import argparse
import csv
import json
import os
import re
import subprocess
from collections import Counter, defaultdict
from pathlib import Path

from compile_ghidra_cpp import COMPILER, HEADER, KNOWN_CALLS, ROOT, load_records


GLOBAL = re.compile(
    r"\b(?:DAT_[0-9a-f]{8}|_DAT_[0-9a-f]{8}|PTR_[A-Za-z0-9_]+|"
    r"_?UNK_[0-9a-f]+|Ordinal_\d+|switchD_[0-9a-f]+|s_[A-Za-z0-9_]+)\b")
FUN = re.compile(r"\b(?:thunk_)?FUN_[0-9a-f]{8}\b")
FUNCTION_POINTER_USE = re.compile(r"\(\s*\*\s*(?P<name>" + GLOBAL.pattern[2:-2] + r")\s*\)\s*\(")
LOCAL_DECL = re.compile(
    r"(?m)^\s*(?P<type>(?:undefined\d*|undefined|int|uint|ulong|long|short|ushort|"
    r"char|byte|float|double|bool)(?:\s*\*)*)\s*(?P<name>[A-Za-z_]\w*)\s*;")
PARAM = re.compile(
    r"(?P<type>(?:undefined\d*|undefined|int|uint|ulong|long|short|ushort|"
    r"char|byte|float|double|bool)(?:\s*\*)*)\s*(?P<name>param_\w+)")
CALL = re.compile(r"\b(?P<name>[A-Za-z_]\w*)\s*\(")
DECLARATION_ALIASES = """
using byte = unsigned char;
using uchar = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using ulonglong = unsigned long long;
using float10 = long double;
using DWORD = unsigned long;
using BOOL = int;
using LPCSTR = const char *;
using __time64_t = long long;
struct FILE;
struct tm;
struct ThrowInfo;
"""
STRUCTURAL_BLOCK = re.compile(
    r"\b(?:LAB_|ExceptionList|stack0x|SUB\d+|CONCAT\d+|ZEXT\d+|SEXT\d+)")
COMPLEX = re.compile(r"\._\d+_\d+_|::")


def global_types(records):
    """Infer only enough global type to make common Ghidra expressions legal."""
    hints = defaultdict(Counter)
    called_as_function = set()
    called_directly = {match.group("name") for record in records
                       for match in CALL.finditer(record.get("decompiled_c", ""))}

    for record in records:
        source = record["decompiled_c"]
        variable_types = {m.group("name"): re.sub(r"\s+", "", m.group("type"))
                          for m in LOCAL_DECL.finditer(source)}
        variable_types.update({m.group("name"): re.sub(r"\s+", "", m.group("type"))
                               for m in PARAM.finditer(source.split("{", 1)[0])})
        symbols = set(GLOBAL.findall(source))
        called_as_function.update(m.group("name") for m in FUNCTION_POINTER_USE.finditer(source))

        # Pointer/null comparisons provide a strong pointer-type hint.
        for symbol in symbols:
            for match in re.finditer(
                    r"\b" + re.escape(symbol) +
                    r"\s*(?:==|!=)\s*\((?P<type>[A-Za-z_]\w*(?:\s*\*)+)\)\s*(?:0x)?0\b",
                    source):
                hints[symbol][re.sub(r"\s+", "", match.group("type"))] += 4

        # Assignments from a global into a declared pointer, and the reverse.
        for match in re.finditer(
                r"\b(?P<var>[A-Za-z_]\w*)\s*=\s*(?P<address>&)?(?P<global>" +
                GLOBAL.pattern[2:-2] + r")\b",
                source):
            typ = variable_types.get(match.group("var"), "")
            if not typ:
                continue
            if match.group("address"):
                if "*" in typ:
                    hints[match.group("global")][typ.rsplit("*", 1)[0]] += 2
            elif "*" in typ:
                hints[match.group("global")][typ] += 3
        for match in re.finditer(
                r"\b(?P<global>" + GLOBAL.pattern[2:-2] +
                r")\s*=\s*(?P<address>&)?(?P<var>[A-Za-z_]\w*)\b",
                source):
            typ = variable_types.get(match.group("var"), "")
            if not typ:
                continue
            if match.group("address"):
                if "*" in typ:
                    hints[match.group("global")][typ.rsplit("*", 1)[0]] += 2
            else:
                hints[match.group("global")][typ] += 3

    result = {}
    for record in records:
        for symbol in GLOBAL.findall(record["decompiled_c"]):
            if symbol in called_directly and symbol not in called_as_function:
                continue
            if symbol in result:
                continue
            if symbol in called_as_function:
                result[symbol] = "code *"
            elif symbol.startswith("s_"):
                result[symbol] = "char []"
            elif symbol.startswith("PTR_"):
                result[symbol] = "undefined4 *"
            elif hints[symbol]:
                # Stable tie-break avoids output depending on dictionary order.
                result[symbol] = sorted(hints[symbol].items(),
                                        key=lambda item: (-item[1], item[0]))[0][0]
            else:
                # Ghidra commonly emits untyped data labels as 32-bit values.
                result[symbol] = "undefined4"
    return result


def make_source(records, global_type_cache=None):
    all_types = global_type_cache if global_type_cache is not None else global_types(records)
    used_globals = {symbol for record in records for symbol in GLOBAL.findall(record["decompiled_c"])}
    types = {symbol: all_types[symbol] for symbol in used_globals if symbol in all_types}
    declarations = []
    for name, typ in sorted(types.items()):
        if typ.endswith("[]"):
            declarations.append(f"extern {typ[:-2]} {name}[];")
        else:
            declarations.append(f"extern {typ} {name};")

    calls = set()
    call_result_types = defaultdict(Counter)
    rewritten = {record["entry"]: rewrite_definition_name(record)
                 for record in records}
    for record in records:
        source = rewritten[record["entry"]]
        calls.update(FUN.findall(source))
        header = source.split("{", 1)[0]
        variable_types = {m.group("name"): re.sub(r"\s+", "", m.group("type"))
                          for m in LOCAL_DECL.finditer(source)}
        variable_types.update({m.group("name"): re.sub(r"\s+", "", m.group("type"))
                               for m in PARAM.finditer(header)})
        for match in re.finditer(r"\b(?P<var>[A-Za-z_]\w*)\s*=\s*(?P<call>[A-Za-z_]\w*)\s*\(", source):
            typ = variable_types.get(match.group("var"))
            if typ:
                call_result_types[match.group("call")][typ] += 1

    known_names = KNOWN_CALLS | {
        "SCStr", "operator", "byte", "uchar", "ushort", "for",
        "ThrowInfo", "code", "undefined", "undefined1", "undefined2", "undefined4",
        "undefined8", "__thiscall", "__fastcall", "__cdecl", "__stdcall",
    }
    for record in records:
        calls.update(match.group("name") for match in CALL.finditer(record["decompiled_c"])
                     if match.group("name") not in known_names and
                     not match.group("name").startswith("FUN_"))
    for name in sorted(calls):
        if name in types or name.startswith("s_"):
            continue
        result_type = "int"
        if call_result_types[name]:
            result_type = sorted(call_result_types[name].items(),
                                 key=lambda item: (-item[1], item[0]))[0][0]
        declarations.append(f"extern {result_type} {name}(...);")

    functions = "\n".join(
        f"// Reference entry {record['entry']}; body size {record['body_bytes']} bytes.\n"
        f"namespace recovered_{record['entry']} {{\n"
        f"#line 1 \"ENTRY_{record['entry']}\"\n{rewritten[record['entry']]}\n"
        "}\n"
        for record in records)
    return HEADER + DECLARATION_ALIASES + "\n" + "\n".join(declarations) + "\n" + functions


def rewrite_definition_name(record):
    """Give every object function its inventory entry as a stable match key."""
    source = record["decompiled_c"]
    header_stop = source.find("{")
    if header_stop < 0:
        return source
    header = source[:header_stop]
    match = re.search(r"\b([A-Za-z_]\w*)\s*\(", header)
    if not match:
        return source
    return (source[:match.start(1)] + f"FUN_{record['entry']}" +
            source[match.end(1):])


def syntax_ok(records, scratch, global_type_cache):
    scratch.write_text(make_source(records, global_type_cache))
    result = subprocess.run(
        [str(COMPILER), "/nologo", "/Zs", "/clang:--target=i686-pc-windows-msvc",
         "/clang:-ferror-limit=0", os.path.relpath(scratch, ROOT)],
        cwd=ROOT, capture_output=True, text=True)
    return result.returncode == 0, result.stderr


def split_valid(records, scratch, failures, global_type_cache):
    if not records:
        return []
    valid, error = syntax_ok(records, scratch, global_type_cache)
    if valid:
        return records
    diagnostic = {}
    for match in re.finditer(r"ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)", error):
        diagnostic.setdefault(match.group(1), match.group(2))
    if diagnostic:
        failures.extend((record["entry"], diagnostic[record["entry"]])
                        for record in records if record["entry"] in diagnostic)
        rejected = set(diagnostic)
        return split_valid([record for record in records if record["entry"] not in rejected],
                           scratch, failures, global_type_cache)
    if len(records) == 1:
        failures.append((records[0]["entry"], error.splitlines()[0] if error else "syntax error"))
        return []
    middle = len(records) // 2
    return (split_valid(records[:middle], scratch, failures, global_type_cache) +
            split_valid(records[middle:], scratch, failures, global_type_cache))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exports", nargs="+", type=Path)
    parser.add_argument("--output-dir", type=Path, default=ROOT / "analysis" / "compiled-cpp-globals")
    parser.add_argument("--batch-size", type=int, default=50)
    parser.add_argument("--max-functions", type=int,
                        help="Optional address-ordered cap for a quick pilot")
    args = parser.parse_args()
    if args.batch_size < 1 or (args.max_functions is not None and args.max_functions < 1):
        parser.error("batch size and max-functions must be positive")
    if not COMPILER.is_file():
        parser.error(f"Missing clang-cl: {COMPILER}")

    records = sorted(load_records(args.exports).values(), key=lambda row: int(row["entry"], 16))
    candidates = []
    for record in records:
        source = record.get("decompiled_c", "")
        body = source[source.find("{"):]
        if not source or not GLOBAL.search(body):
            continue
        if STRUCTURAL_BLOCK.search(body) or COMPLEX.search(source):
            continue
        candidates.append(record)
    if args.max_functions is not None:
        candidates = candidates[:args.max_functions]

    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    global_type_cache = global_types(candidates)
    print(f"Loaded {len(records)} decompiled functions; DAT/PTR candidate tier: "
          f"{len(candidates)} functions, "
          f"{sum(int(row['body_bytes']) for row in candidates):,} reference body bytes", flush=True)

    scratch = output / ".syntax-probe.cpp"
    failures = []
    accepted = []
    for offset in range(0, len(candidates), args.batch_size):
        batch = candidates[offset:offset + args.batch_size]
        accepted.extend(split_valid(batch, scratch, failures, global_type_cache))
        print(f"Checked {min(offset + len(batch), len(candidates))}/{len(candidates)}; "
              f"accepted {len(accepted)}", flush=True)
    scratch.unlink(missing_ok=True)

    source_path = output / "ghidra_recovered.cpp"
    source_path.write_text(make_source(accepted, global_type_cache))
    obj = output / "ghidra_recovered.obj"
    result = subprocess.run(
        [str(COMPILER), "/nologo", "/O2", "/c", "/clang:--target=i686-pc-windows-msvc",
         f"/Fo{obj}", os.path.relpath(source_path, ROOT)],
        cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit("Aggregate object compilation failed:\n" + result.stderr)

    with (output / "compiled-index.tsv").open("w", newline="") as file:
        writer = csv.writer(file, delimiter="\t")
        writer.writerow(["entry", "name", "reference_body_bytes"])
        writer.writerows((row["entry"], row["name"], row["body_bytes"]) for row in accepted)
    (output / "failures.tsv").write_text("entry\terror\n" + "".join(
        f"{entry}\t{error}\n" for entry, error in failures))

    total_bytes = sum(int(row["body_bytes"]) for row in candidates)
    accepted_bytes = sum(int(row["body_bytes"]) for row in accepted)
    metrics = {
        "input_decompiled_functions": len(records),
        "dat_candidate_functions": len(candidates),
        "dat_candidate_reference_body_bytes": total_bytes,
        "compiled_functions": len(accepted),
        "compiled_reference_body_bytes": accepted_bytes,
        "candidate_function_compilation_percent": round(100 * len(accepted) / len(candidates), 4) if candidates else 0,
        "candidate_body_byte_compilation_percent": round(100 * accepted_bytes / total_bytes, 4) if total_bytes else 0,
        "syntax_rejected_functions": len(failures),
        "object_bytes": obj.stat().st_size,
        "compiler": str(COMPILER),
        "target": "i686-pc-windows-msvc",
        "scope": "Ghidra body source compiled as an x86 C++ object; globals/calls are inferred stubs; no match claimed",
    }
    (output / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
