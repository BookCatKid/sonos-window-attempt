#!/usr/bin/env python3
"""Summarize destination recovery, decompilation, and unique function-body coverage."""
import argparse
import csv
import json
from collections import Counter
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def read_tsv(path):
    with path.open(newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def function_body_union(rows):
    total = 0
    intervals = []
    for row in rows:
        total += int(row["body_bytes"])
        for item in row["ranges"].split(","):
            if item:
                start, end = (int(value, 16) for value in item.split("-"))
                intervals.append((start, end + 1))
    intervals.sort()
    covered = 0
    current_start = None
    current_end = None
    for start, end in intervals:
        if current_end is None or start > current_end:
            if current_end is not None:
                covered += current_end - current_start
            current_start, current_end = start, end
        else:
            current_end = max(current_end, end)
    if current_end is not None:
        covered += current_end - current_start
    return total, covered, len(intervals)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--run-dir", type=Path, default=ROOT / "analysis" / "thunk-recovery-full")
    parser.add_argument("--baseline-inventory", type=Path,
                        default=ROOT / "analysis" / "function-inventory.tsv")
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()

    run_dir = args.run_dir
    enumeration = json.loads((run_dir / "enumeration.json").read_text())
    recovered = read_tsv(run_dir / "ghidra-recovery.tsv")
    ranges = read_tsv(run_dir / "recovered-function-ranges.tsv")
    final_inventory = read_tsv(run_dir / "final-function-inventory.tsv")
    baseline_inventory = read_tsv(args.baseline_inventory)

    statuses = Counter(row["status"] for row in recovered)
    total_body, unique_body, range_count = function_body_union(ranges)
    baseline_entries = {row["entry"].lower() for row in baseline_inventory}
    final_entries = {row["entry"].lower() for row in final_inventory}
    created = [row for row in recovered if row["status"] == "CREATED"]
    decompiled = [row for row in recovered
                  if row["status"] == "CREATED" and row["decompiled"] == "true"]
    summary = {
        "enumeration": enumeration,
        "target_status_counts": dict(statuses),
        "new_functions_defined": len(created),
        "new_functions_decompiled": len(decompiled),
        "creation_time_body_bytes_sum": sum(int(row["body_bytes"]) for row in created),
        "saved_body_bytes_sum": total_body,
        "saved_unique_body_bytes": unique_body,
        "saved_body_range_count": range_count,
        "saved_body_range_overlap_bytes": total_body - unique_body,
        "baseline_inventory_functions": len(baseline_inventory),
        "final_ghidra_functions": len(final_inventory),
        "final_functions_absent_from_baseline_inventory": len(final_entries - baseline_entries),
        "pseudocode_jsonl_bytes": (run_dir / "recovered-targets.jsonl").stat().st_size,
        "function_ranges_tsv_bytes": (run_dir / "recovered-function-ranges.tsv").stat().st_size,
    }
    output = args.output or run_dir / "recovery-summary.json"
    output.write_text(json.dumps(summary, indent=2) + "\n")
    print(json.dumps(summary, indent=2))
    print(f"Wrote {output}")


if __name__ == "__main__":
    main()
