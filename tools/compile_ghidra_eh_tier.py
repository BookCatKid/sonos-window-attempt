#!/usr/bin/env python3
"""Compile Ghidra C output after removing x86 MSVC EH metadata artifacts.

This tier strips only recognizable SEH registration and unwind-state bookkeeping.
It preserves ordinary Ghidra control-flow labels and replaces the compiler cookie's
stack pseudo-symbol with a real C++ local slot. The result is a syntax/object
coverage experiment; it is not a claim of equivalent exception behavior or bytes.
"""

import argparse
import csv
import json
import os
import re
import subprocess
from collections import Counter
from pathlib import Path

from compile_globals_cpp import COMPLEX, ROOT, global_types, make_source
from compile_ghidra_cpp import COMPILER, load_records


COOKIE_SLOT = "ghidra_cookie_frame_slot"
COOKIE_STACK = re.compile(r"\bstack0xfffffffc\b", re.I)
EH_MARKER = re.compile(
    r"\bExceptionList\b|\bstack0xfffffffc\b|"
    r"\bpuStack_\w+\s*=\s*&LAB_[0-9a-f]+\b|"
    r"\blocal_8(?:\._\d+_\d+_)?\s*=",
    re.I,
)
DECL_LINE = re.compile(
    r"(?m)^\s*(?:void\s*\*|undefined\d*\s*\*?|uint\s*\*?|int\s*\*?)\s*"
    r"(?P<name>local_10|puStack_\w+)\s*;\s*$"
)
EH_STATE_DECL = re.compile(r"(?m)^\s*undefined\d*\s+(?P<name>local_8)\s*;\s*$")
EH_LABEL_ASSIGN = re.compile(
    r"\bpuStack_\w+\s*=\s*&LAB_[0-9a-f]+\s*;", re.I
)
EXCEPTION_ASSIGN = re.compile(
    r"\b(?:local_\w+)\s*=\s*ExceptionList\s*;|"
    r"\bExceptionList\s*=\s*(?:&local_\w+|local_\w+)\s*;"
)
EH_STATE_ASSIGN = re.compile(
    r"\blocal_8(?:\._\d+_\d+_)?\s*=\s*[^;]+;", re.I
)
COOKIE_USE = re.compile(r"\bstack0x(?!fffffffc\b)[0-9a-f]+\b", re.I)
UNSUPPORTED = re.compile(
    r"\b(?:SUB\d+|CONCAT\d+|ZEXT\d+|SEXT\d+|ExceptionList|stack0x)\b|"
    r"\bpuStack_\w+\s*=\s*&LAB_",
    re.I,
)


def strip_comments(text):
    # Keep line structure for compiler diagnostics and match reports.
    return re.sub(r"(?m)^\s*/\*.*?\*/\s*$", "", text, flags=re.S)


def normalize(record):
    """Return transformed record plus a reason when conservative rules reject it."""
    source = record.get("decompiled_c", "")
    if not source or not EH_MARKER.search(source):
        return None, "no_eh_marker"

    source = strip_comments(source)
    original = source

    # Keep the stack-cookie dataflow shape, but express its frame slot as ordinary
    # C++ storage. The compiler chooses the slot; the original x86 offset is not
    # represented and therefore this cannot count as an instruction match.
    cookie_count = len(COOKIE_STACK.findall(source))
    if cookie_count:
        source = COOKIE_STACK.sub(COOKIE_SLOT, source)
        open_brace = source.find("{")
        if open_brace < 0:
            return None, "missing_function_body"
        source = (source[:open_brace + 1] +
                  f"\n  undefined4 {COOKIE_SLOT};" + source[open_brace + 1:])

    # These assignments install/restore the per-thread x86 SEH chain and point
    # the runtime at an unwind table. They are compiler scaffolding, not source
    # level statements. The LAB labels themselves are retained for real gotos.
    source = EH_LABEL_ASSIGN.sub("((void)0);", source)
    source = EXCEPTION_ASSIGN.sub("((void)0);", source)

    # local_8 is the compiler's EH state byte/word in this output. Remove it only
    # when it is never read as program data after its state writes are removed.
    if EH_STATE_ASSIGN.search(source):
        without_writes = EH_STATE_ASSIGN.sub("((void)0);", source)
        without_state_decl = EH_STATE_DECL.sub("", without_writes)
        if re.search(r"\blocal_8\b", without_state_decl):
            return None, "eh_state_also_used_as_data"
        source = without_state_decl

    # Drop now-dead pseudo locals used solely to hold ExceptionList or the
    # unwind-table pointer. Retain declarations if another expression uses them.
    source = DECL_LINE.sub(
        lambda m: "" if not re.search(r"\b" + re.escape(m.group("name")) + r"\b",
                                     source_without_decl(source, m.start(), m.end())) else m.group(0),
        source,
    )
    if COOKIE_USE.search(source):
        return None, "non_cookie_stack_pseudovariable"
    if UNSUPPORTED.search(source) or COMPLEX.search(source):
        return None, "other_ghidra_constructs_remain"

    # Struct member slices such as local_18._0_1_ are not ordinary members;
    # CONCAT/SUB and the corresponding type recovery are still needed.
    if re.search(r"\._\d+_\d+_|\b(?:CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+)\b", source):
        return None, "ghidra_bitfield_or_concat_remains"

    normalized = dict(record)
    normalized["decompiled_c"] = source
    normalized["eh_original_bytes"] = int(record.get("body_bytes", 0))
    normalized["eh_cookie_slots"] = cookie_count
    normalized["eh_source_changed"] = source != original
    return normalized, None


def source_without_decl(text, start, end):
    return text[:start] + text[end:]


def compiler_check(records, scratch, types):
    scratch.write_text(make_source(records, types))
    proc = subprocess.run(
        [str(COMPILER), "/nologo", "/Zs", "/clang:--target=i686-pc-windows-msvc",
         "/clang:-ferror-limit=0", os.path.relpath(scratch, ROOT)],
        cwd=ROOT, capture_output=True, text=True,
    )
    return proc.returncode == 0, proc.stderr


def split_valid(records, scratch, failures, types):
    if not records:
        return []
    valid, error = compiler_check(records, scratch, types)
    if valid:
        return records
    diagnostics = {}
    for match in re.finditer(r"ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)", error):
        diagnostics.setdefault(match.group(1), match.group(2))
    if diagnostics:
        bad = set(diagnostics)
        failures.extend((r["entry"], diagnostics[r["entry"]])
                        for r in records if r["entry"] in bad)
        return split_valid([r for r in records if r["entry"] not in bad],
                           scratch, failures, types)
    if len(records) == 1:
        failures.append((records[0]["entry"], error.splitlines()[0] if error else "syntax error"))
        return []
    mid = len(records) // 2
    return (split_valid(records[:mid], scratch, failures, types) +
            split_valid(records[mid:], scratch, failures, types))


def compile_groups(records, output, types, failures, batch_size):
    """Emit independently compilable objects, splitting batches on codegen errors."""
    objects = []
    accepted = []
    sequence = 0

    def compile_group(group):
        nonlocal sequence
        if not group:
            return
        sequence += 1
        stem = f"part-{sequence:05d}"
        source_path = output / f".{stem}.probe.cpp"
        obj_path = output / f".{stem}.probe.obj"
        source_path.write_text(make_source(group, types))
        proc = subprocess.run(
            [str(COMPILER), "/nologo", "/O2", "/c",
             "/clang:--target=i686-pc-windows-msvc", f"/Fo{obj_path}",
             os.path.relpath(source_path, ROOT)],
            cwd=ROOT, capture_output=True, text=True,
        )
        if proc.returncode == 0:
            final_source = output / f"{stem}.cpp"
            final_obj = output / f"{stem}.obj"
            source_path.replace(final_source)
            obj_path.replace(final_obj)
            objects.append(final_obj)
            accepted.extend(group)
            return
        source_path.unlink(missing_ok=True)
        obj_path.unlink(missing_ok=True)
        if len(group) == 1:
            failures.append((group[0]["entry"],
                             proc.stderr.splitlines()[0] if proc.stderr else "object compile failed"))
            return
        middle = len(group) // 2
        compile_group(group[:middle])
        compile_group(group[middle:])

    for start in range(0, len(records), batch_size):
        compile_group(records[start:start + batch_size])
        completed = min(start + batch_size, len(records))
        print(f"Object compile pass: {completed:,}/{len(records):,} candidates; "
              f"compiled {len(accepted):,}", flush=True)
    return accepted, objects


def compare_objects(records, objects):
    """Compare COFF bodies to the installed reference using the repository matcher."""
    import sys
    sys.path.insert(0, str(ROOT / "tools"))
    from classify_functions import DLL, function_bytes, section_map
    from compare_compiled_ghidra import function_symbols, read_coff

    reference = DLL.read_bytes()
    image_base, pe_sections = section_map(reference)
    compiled = {}
    for object_path in objects:
        sections, symbols, symbols_by_index = read_coff(object_path)
        compiled.update(function_symbols(sections, symbols, symbols_by_index))
    rows = []
    for record in records:
        expected = function_bytes(reference, int(record["entry"], 16),
                                  int(record["body_bytes"]), image_base, pe_sections)
        body, relocs = compiled.get(record["entry"], (b"", []))
        relocated = {offset for reloc in relocs
                     for offset in range(reloc['offset'], reloc['offset'] + 4)}
        common = min(len(expected), len(body))
        fixed = [index for index in range(common) if index not in relocated]
        matching = sum(expected[index] == body[index] for index in fixed)
        rows.append({
            "entry": record["entry"], "name": record["name"],
            "reference_bytes": len(expected), "compiled_bytes": len(body),
            "relocations": len(relocs), "fixed_compared": len(fixed),
            "fixed_matching": matching,
            "exact": bool(expected) and body == expected and not relocs,
            "same_length_fixed_match": bool(expected) and len(body) == len(expected)
            and matching == len(fixed),
        })
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exports", nargs="+", type=Path)
    parser.add_argument("--output-dir", type=Path,
                        default=ROOT / "analysis" / "compiled-cpp-eh")
    parser.add_argument("--batch-size", type=int, default=50)
    parser.add_argument("--max-functions", type=int,
                        help="Optional address-ordered cap for a pilot")
    args = parser.parse_args()
    if args.batch_size < 1 or (args.max_functions is not None and args.max_functions < 1):
        parser.error("batch size and max-functions must be positive")
    if not COMPILER.is_file():
        parser.error(f"Missing clang-cl: {COMPILER}")

    records = sorted(load_records(args.exports).values(), key=lambda row: int(row["entry"], 16))
    transformed = []
    rejected = Counter()
    for record in records:
        candidate, reason = normalize(record)
        if candidate is not None:
            transformed.append(candidate)
        else:
            rejected[reason] += 1
    if args.max_functions is not None:
        transformed = transformed[:args.max_functions]

    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    type_cache = global_types(transformed)
    candidate_bytes = sum(r["eh_original_bytes"] for r in transformed)
    print(f"Loaded {len(records):,} decompiled functions; EH transformed tier: "
          f"{len(transformed):,} functions, {candidate_bytes:,} reference body bytes",
          flush=True)

    scratch = output / ".syntax-probe.cpp"
    accepted = []
    failures = []
    for offset in range(0, len(transformed), args.batch_size):
        batch = transformed[offset:offset + args.batch_size]
        accepted.extend(split_valid(batch, scratch, failures, type_cache))
        print(f"Checked {min(offset + len(batch), len(transformed)):,}/"
              f"{len(transformed):,}; accepted {len(accepted):,}", flush=True)
    scratch.unlink(missing_ok=True)

    object_failures = []
    compiled, objects = compile_groups(accepted, output, type_cache,
                                       object_failures, args.batch_size)
    accepted = compiled
    match_rows = compare_objects(accepted, objects)

    with (output / "compiled-index.tsv").open("w", newline="") as file:
        writer = csv.writer(file, delimiter="\t")
        writer.writerow(["entry", "name", "reference_body_bytes"])
        writer.writerows((r["entry"], r["name"], r["eh_original_bytes"]) for r in accepted)
    with (output / "match-report.tsv").open("w", newline="") as file:
        writer = csv.DictWriter(file, fieldnames=match_rows[0].keys(), delimiter="\t") if match_rows else None
        if writer:
            writer.writeheader()
            writer.writerows(match_rows)
    all_failures = failures + object_failures
    (output / "failures.tsv").write_text("entry\terror\n" + "".join(
        f"{entry}\t{error}\n" for entry, error in all_failures))

    accepted_bytes = sum(r["eh_original_bytes"] for r in accepted)
    baseline_entries = set()
    for index in (ROOT / "analysis").glob("compiled-cpp*/compiled-index.tsv"):
        if index.parent.resolve() == output:
            continue
        try:
            with index.open(newline="") as file:
                baseline_entries.update(row["entry"] for row in csv.DictReader(file, delimiter="\t"))
        except (OSError, KeyError):
            pass
    incremental = [r for r in accepted if r["entry"] not in baseline_entries]
    incremental_bytes = sum(r["eh_original_bytes"] for r in incremental)
    metrics = {
        "input_decompiled_functions": len(records),
        "transformed_candidate_functions": len(transformed),
        "transformed_candidate_reference_body_bytes": candidate_bytes,
        "compiled_functions": len(accepted),
        "compiled_reference_body_bytes": accepted_bytes,
        "newly_compiled_functions_vs_existing_ghidra_tiers": len(incremental),
        "newly_compiled_reference_body_bytes_vs_existing_ghidra_tiers": incremental_bytes,
        "candidate_function_compilation_percent": round(100 * len(accepted) / len(transformed), 4) if transformed else 0,
        "candidate_body_byte_compilation_percent": round(100 * accepted_bytes / candidate_bytes, 4) if candidate_bytes else 0,
        "syntax_rejected_functions": len(failures),
        "object_codegen_rejected_functions": len(object_failures),
        "pre_compile_rejection_reasons": dict(rejected),
        "security_cookie_stack_slots_rewritten": sum(r["eh_cookie_slots"] for r in accepted),
        "object_count": len(objects),
        "object_bytes": sum(path.stat().st_size for path in objects),
        "exact_function_bodies": sum(row["exact"] for row in match_rows),
        "exact_reference_body_bytes": sum(row["reference_bytes"] for row in match_rows if row["exact"]),
        "same_length_fixed_match_functions": sum(row["same_length_fixed_match"] for row in match_rows),
        "same_length_fixed_match_reference_body_bytes": sum(row["reference_bytes"] for row in match_rows if row["same_length_fixed_match"]),
        "fixed_matching_bytes_in_common_prefix": sum(row["fixed_matching"] for row in match_rows),
        "fixed_compared_bytes_in_common_prefix": sum(row["fixed_compared"] for row in match_rows),
        "compiler": str(COMPILER),
        "target": "i686-pc-windows-msvc",
        "scope": "Ghidra source with EH metadata normalized to C++; semantic/unwind equivalence and byte match are not implied",
    }
    (output / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
