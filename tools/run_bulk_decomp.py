#!/usr/bin/env python3
"""Run resumable headless Ghidra decompilation over a function-size tier."""

import argparse
import csv
import json
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
GHIDRA = Path("/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless")
PROJECT = ROOT / "analysis" / "ghidra"
INVENTORY = ROOT / "analysis" / "function-inventory.tsv"


def eligible_count(minimum, maximum, include_thunks):
    with INVENTORY.open(newline="") as file:
        return sum(
            1 for row in csv.DictReader(file, delimiter="\t")
            if int(row["body_bytes"]) >= minimum
            and (maximum == 0 or int(row["body_bytes"]) < maximum)
            and (include_thunks or row["thunk"] == "false")
        )


def inspect_chunk(path):
    successes = 0
    count = 0
    with path.open() as file:
        for line in file:
            record = json.loads(line)
            count += 1
            successes += "decompiled_c" in record
    return count, successes


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--min-size", type=int, default=0)
    parser.add_argument("--max-size", type=int, default=0, help="Exclusive; 0 means no maximum")
    parser.add_argument("--include-thunks", action="store_true")
    parser.add_argument("--chunk-size", type=int, default=10000)
    parser.add_argument("--workers", type=int, default=1,
                        help="Parallel Ghidra decompilers; 1 uses the serial exporter")
    parser.add_argument("--start", type=int, default=0)
    parser.add_argument("--stop", type=int, help="Exclusive eligible-function index")
    parser.add_argument("--output-dir", type=Path, required=True)
    args = parser.parse_args()
    if args.min_size < 0 or args.chunk_size < 1 or args.start < 0 or args.workers < 1:
        parser.error("Sizes, start, and chunk size must be nonnegative; chunk size must be positive")
    if args.max_size and args.max_size <= args.min_size:
        parser.error("--max-size must exceed --min-size")
    if not GHIDRA.is_file() or not (PROJECT / "WindowAttempt.gpr").is_file():
        parser.error("Installed Ghidra and saved WindowAttempt project are required")
    total = eligible_count(args.min_size, args.max_size, args.include_thunks)
    stop = min(args.stop if args.stop is not None else total, total)
    if stop < args.start:
        parser.error("--stop must be at least --start")
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    print(f"Eligible functions: {total}; processing [{args.start}, {stop})", flush=True)

    for start in range(args.start, stop, args.chunk_size):
        count = min(args.chunk_size, stop - start)
        path = output / f"chunk-{start:06d}.jsonl"
        if path.is_file():
            found, successes = inspect_chunk(path)
            if found == count:
                print(f"Reusing {path.name}: {successes}/{found} decompiled", flush=True)
                continue
        log = output / f"chunk-{start:06d}.log"
        script = "BulkDecompile.java" if args.workers == 1 else "ParallelBulkDecompile.java"
        script_args = ([str(path), str(start), str(count), str(args.min_size),
                        str(args.max_size), str(args.include_thunks).lower()]
                       + ([str(args.workers)] if args.workers > 1 else []))
        command = [
            str(GHIDRA), str(PROJECT), "WindowAttempt",
            "-process", "sclib-csharp.dll", "-noanalysis", "-readOnly",
            "-scriptPath", str(ROOT / "tools" / "ghidra"),
            "-postScript", script, *script_args,
            "-log", str(log),
        ]
        with log.open("w") as log_file:
            result = subprocess.run(command, stdout=log_file, stderr=subprocess.STDOUT)
        if result.returncode or not path.is_file():
            raise SystemExit(f"Ghidra failed for {path.name}; see {log}")
        found, successes = inspect_chunk(path)
        if found != count:
            raise SystemExit(f"Incomplete {path.name}: {found}/{count}; see {log}")
        print(f"Completed {path.name}: {successes}/{found} decompiled", flush=True)


if __name__ == "__main__":
    main()
