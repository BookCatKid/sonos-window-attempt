#!/usr/bin/env python3
"""Check readable C++ leaf templates against common 3-byte native bodies."""

import argparse
import csv
from collections import Counter
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map
from compare_ci_objects import object_code


PATTERNS = {
    "true": bytes.fromhex("b0 01 c3"),
    "false": bytes.fromhex("32 c0 c3"),
    "self": bytes.fromhex("8b c1 c3"),
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("artifact_dir", type=Path)
    args = parser.parse_args()
    data = DLL.read_bytes()
    image_base, sections = section_map(data)
    counts = Counter()
    with INVENTORY.open(newline="") as file:
        for row in csv.DictReader(file, delimiter="\t"):
            if row["thunk"] == "true" or int(row["body_bytes"]) != 3:
                continue
            body = function_bytes(data, int(row["entry"], 16), 3, image_base, sections)
            counts[body] += 1
    all_matched = True
    for name, expected in PATTERNS.items():
        actual, relocations, sections_count = object_code(args.artifact_dir / f"leaf_{name}.obj")
        exact = actual == expected and not relocations
        all_matched &= exact
        print(f"{name}: {counts[expected]:,} reference functions with {expected.hex(' ')}, "
              f"compiled {actual.hex(' ')}, relocations {len(relocations)}, "
              f"code sections {sections_count}, {'EXACT' if exact else 'MISMATCH'}")
    if not all_matched:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
