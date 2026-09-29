#!/usr/bin/env python3
"""Rank repeated short native bodies for readable C++ reconstruction."""

import csv
from collections import defaultdict

from classify_functions import DLL, INVENTORY, OUTPUT as CLASSES, function_bytes, section_map


OUTPUT = INVENTORY.parent / "body-clusters.tsv"


def main():
    data = DLL.read_bytes()
    image_base, sections = section_map(data)
    with CLASSES.open(newline="") as file:
        categories = {row["entry"]: row["class"] for row in csv.DictReader(file, delimiter="\t")}
    clusters = defaultdict(list)
    with INVENTORY.open(newline="") as file:
        for row in csv.DictReader(file, delimiter="\t"):
            size = int(row["body_bytes"])
            if categories.get(row["entry"]) != "other" or size > 64:
                continue
            body = function_bytes(data, int(row["entry"], 16), size, image_base, sections)
            if len(body) == size:
                clusters[body].append(row["entry"])
    ranked = sorted(clusters.items(), key=lambda pair: (-len(pair[1]) * len(pair[0]),
                                                       -len(pair[1]), pair[1][0]))
    with OUTPUT.open("w", newline="") as file:
        writer = csv.writer(file, delimiter="\t")
        writer.writerow(("body_bytes", "instances", "total_bytes", "representative", "body_hex"))
        for body, addresses in ranked:
            writer.writerow((len(body), len(addresses), len(body) * len(addresses),
                             addresses[0], body.hex()))
    print(f"{len(ranked):,} distinct short bodies; top 10 by repeated bytes:")
    for body, addresses in ranked[:10]:
        print(f"{len(addresses):,} x {len(body)} bytes at {addresses[0]}: {body.hex(' ')[:75]}")
    print(OUTPUT)


if __name__ == "__main__":
    main()
