#!/usr/bin/env python3
"""Map named PE exports through linker jump thunks to implementation addresses."""

import csv
import struct
from collections import defaultdict
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
DLL = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"
EXPORTS = ROOT / "analysis" / "exports.csv"
INVENTORY = ROOT / "analysis" / "function-inventory.tsv"
OUTPUT = ROOT / "analysis" / "export-aliases.tsv"


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def pe_sections(data):
    pe = u32(data, 0x3C)
    coff = pe + 4
    optional = coff + 20
    image_base = u32(data, optional + 28)
    section_start = optional + u16(data, coff + 16)
    sections = []
    for index in range(u16(data, coff + 2)):
        header = section_start + index * 40
        sections.append((u32(data, header + 12), u32(data, header + 16),
                         u32(data, header + 20)))
    return image_base, sections


def offset_for_va(va, image_base, sections):
    rva = va - image_base
    for start, size, raw in sections:
        if start <= rva < start + size:
            return raw + rva - start
    return None


def follow_direct_jumps(va, data, image_base, sections):
    seen = set()
    jumps = 0
    while jumps < 8 and va not in seen:
        seen.add(va)
        offset = offset_for_va(va, image_base, sections)
        if offset is None or offset + 5 > len(data) or data[offset] != 0xE9:
            break
        displacement = struct.unpack_from("<i", data, offset + 1)[0]
        va = (va + 5 + displacement) & 0xFFFFFFFF
        jumps += 1
    return va, jumps


def main():
    data = DLL.read_bytes()
    image_base, sections = pe_sections(data)
    with INVENTORY.open(newline="") as file:
        functions = {row["entry"] for row in csv.DictReader(file, delimiter="\t")}
    rows = []
    by_target = defaultdict(list)
    with EXPORTS.open(newline="") as file:
        for export in csv.DictReader(file):
            export_va = int(export["address"])
            target, jumps = follow_direct_jumps(export_va, data, image_base, sections)
            target_hex = f"{target:08x}"
            label = export["demangled"] or export["name"]
            rows.append((target_hex, f"{export_va:08x}", jumps,
                         export["kind"], export["name"], label,
                         target_hex in functions))
            by_target[target_hex].append(label)
    with OUTPUT.open("w", newline="") as file:
        writer = csv.writer(file, delimiter="\t")
        writer.writerow(("target", "export", "direct_jumps", "kind", "name",
                         "readable_alias", "target_is_function"))
        writer.writerows(rows)
    print(f"Exports: {len(rows)}; resolved to inventoried functions: "
          f"{sum(row[-1] for row in rows)}; unique targets: {len(by_target)}")
    print(OUTPUT)


if __name__ == "__main__":
    main()
