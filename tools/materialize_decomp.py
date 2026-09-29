#!/usr/bin/env python3
"""Turn Ghidra JSONL exports into browsable pseudocode and coverage metrics."""

import argparse
import csv
import json
import re
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
INVENTORY = ROOT / "analysis" / "function-inventory.tsv"
DEFAULT_ALIASES = ROOT / "analysis" / "export-aliases.tsv"


def inventory():
    with INVENTORY.open(newline="") as file:
        return {row["entry"]: row for row in csv.DictReader(file, delimiter="\t")}


def export_records(paths):
    records = {}
    for path in paths:
        with path.open() as file:
            for line in file:
                if not line.strip():
                    continue
                record = json.loads(line)
                records[record["entry"]] = record
    return records


def percent(part, whole):
    return 100 * part / whole if whole else 0


def labels_from(path):
    if path is None:
        return {}
    labels = {}
    for line in path.read_text().splitlines():
        address, separator, label = line.partition("#")
        address = address.strip()
        if address and separator and label.strip():
            labels[f"{int(address, 16):08x}"] = label.strip()
    return labels


def aliases_from(path):
    if path is None or not path.is_file():
        return {}
    aliases = {}
    with path.open(newline="") as file:
        for row in csv.DictReader(file, delimiter="\t"):
            if row["target_is_function"] == "True":
                aliases.setdefault(row["target"], row["readable_alias"])
    return aliases


def string_clues(source):
    clues = []
    for match in re.finditer(r'"([^"\n]{4,80})"', source):
        clue = match.group(1).replace("\t", " ").replace("\r", " ")
        if clue not in clues:
            clues.append(clue)
        if len(clues) == 3:
            break
    return " | ".join(clues)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exports", nargs="+", type=Path, help="BulkDecompile JSONL files")
    parser.add_argument("--output-dir", type=Path, required=True)
    parser.add_argument("--functions-per-file", type=int, default=100)
    parser.add_argument("--labels-file", type=Path, help="Optional address # human label file")
    parser.add_argument("--aliases-file", type=Path, default=DEFAULT_ALIASES,
                        help="PE export aliases mapped through direct jump thunks")
    args = parser.parse_args()
    if args.functions_per_file < 1:
        parser.error("--functions-per-file must be positive")

    known = inventory()
    records = export_records(args.exports)
    labels = labels_from(args.labels_file)
    aliases = aliases_from(args.aliases_file)
    successful = {entry: record for entry, record in records.items()
                  if "decompiled_c" in record and entry in known}
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    sorted_records = sorted(successful.values(), key=lambda record: int(record["entry"], 16))

    for part, offset in enumerate(range(0, len(sorted_records), args.functions_per_file)):
        path = output / f"part-{part:05d}.pseudo.c"
        with path.open("w") as file:
            file.write("/* Ghidra-generated C-like pseudocode from sclib-csharp.dll.\n"
                       "   For inspection; these files are not recovered, buildable C++ source. */\n\n")
            for record in sorted_records[offset:offset + args.functions_per_file]:
                label = labels.get(record["entry"], aliases.get(record["entry"], ""))
                label = label.replace("*/", "* /").replace("\n", " ")[:180]
                file.write(f"/* {record['entry']} {record['name']} "
                           f"({record['body_bytes']} reference body bytes)"
                           f"{(' — ' + label) if label else ''} */\n")
                file.write(record["decompiled_c"].rstrip() + "\n\n")

    all_rows = list(known.values())
    nonthunks = [row for row in all_rows if row["thunk"] == "false"]
    def row_bytes(rows):
        return sum(int(row["body_bytes"]) for row in rows)
    success_rows = [known[entry] for entry in successful]
    success_nonthunks = [row for row in success_rows if row["thunk"] == "false"]
    named = sum(not record["name"].startswith(("FUN_", "thunk_FUN_"))
                for record in sorted_records)
    no_unknown_types = sum(not re.search(r"\bundefined\d*\b", record["decompiled_c"])
                           for record in sorted_records)
    aliased = sum(record["entry"] in aliases for record in sorted_records)
    metrics = {
        "identified_functions": len(all_rows),
        "decompiled_functions": len(success_rows),
        "function_coverage_percent": percent(len(success_rows), len(all_rows)),
        "identified_body_bytes": row_bytes(all_rows),
        "decompiled_body_bytes": row_bytes(success_rows),
        "body_byte_coverage_percent": percent(row_bytes(success_rows), row_bytes(all_rows)),
        "identified_nonthunk_functions": len(nonthunks),
        "decompiled_nonthunk_functions": len(success_nonthunks),
        "nonthunk_function_coverage_percent": percent(len(success_nonthunks), len(nonthunks)),
        "identified_nonthunk_body_bytes": row_bytes(nonthunks),
        "decompiled_nonthunk_body_bytes": row_bytes(success_nonthunks),
        "nonthunk_body_byte_coverage_percent": percent(row_bytes(success_nonthunks), row_bytes(nonthunks)),
        "not_included_or_failed_functions": len(known) - len(success_rows),
        "pseudocode_files": (len(sorted_records) + args.functions_per_file - 1) // args.functions_per_file,
        "decompiled_functions_with_existing_names": named,
        "decompiled_functions_with_export_aliases": aliased,
        "decompiled_functions_without_unknown_type_tokens": no_unknown_types,
    }
    (output / "coverage.json").write_text(json.dumps(metrics, indent=2) + "\n")
    (output / "index.tsv").write_text("entry\tname\tlabel\texport_alias\tstring_clues\tpart\tbody_bytes\n" + "".join(
        f"{record['entry']}\t{record['name']}\t"
        f"{labels.get(record['entry'], '')}\t"
        f"{aliases.get(record['entry'], '')}\t"
        f"{string_clues(record['decompiled_c'])}\t"
        f"part-{index // args.functions_per_file:05d}.pseudo.c\t{record['body_bytes']}\n"
        for index, record in enumerate(sorted_records)))
    (output / "README.md").write_text(
        "# Decompiled pseudocode\n\n"
        "These `.pseudo.c` files are address-indexed C-like output from Ghidra. "
        "They are readable inspection material, not recovered buildable C++ "
        "and not evidence of a byte-identical rebuild.\n\n"
        f"- Decompiled identified functions: {len(success_rows):,}/{len(all_rows):,} "
        f"({metrics['function_coverage_percent']:.2f}%).\n"
        f"- Decompiled identified function-body bytes: {row_bytes(success_rows):,}/"
        f"{row_bytes(all_rows):,} ({metrics['body_byte_coverage_percent']:.2f}%).\n"
        f"- Non-thunk function coverage: {len(success_nonthunks):,}/{len(nonthunks):,} "
        f"({metrics['nonthunk_function_coverage_percent']:.2f}%).\n"
        f"- Existing human-readable names: {named:,}/{len(success_rows):,}.\n"
        f"- Mapped export aliases: {aliased:,}/{len(success_rows):,}.\n"
        f"- No `undefined` type tokens: {no_unknown_types:,}/{len(success_rows):,}.\n\n"
        "The denominator is the set of functions identified by Ghidra in the saved "
        "DLL analysis. It does not represent the whole DLL file, data sections, or "
        "a count of recompiled source functions. Use `index.tsv` to locate a function "
        "by address.\n"
    )
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
