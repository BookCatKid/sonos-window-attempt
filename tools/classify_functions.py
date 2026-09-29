#!/usr/bin/env python3
"""Separate direct thunks and frame-relative tail jumps from other functions."""

import csv
import struct
from collections import Counter
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
DLL = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"
INVENTORY = ROOT / "analysis" / "function-inventory.tsv"
OUTPUT = ROOT / "analysis" / "function-classes.tsv"


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def section_map(data):
    pe = u32(data, 0x3C)
    coff = pe + 4
    optional = coff + 20
    image_base = u32(data, optional + 28)
    headers = optional + u16(data, coff + 16)
    sections = []
    for index in range(u16(data, coff + 2)):
        header = headers + 40 * index
        sections.append((u32(data, header + 12), u32(data, header + 16),
                         u32(data, header + 20)))
    return image_base, sections


def function_bytes(data, va, size, image_base, sections):
    rva = va - image_base
    for start, length, raw in sections:
        if start <= rva and rva + size <= start + length:
            offset = raw + rva - start
            return data[offset:offset + size]
    return b""


def classify(row, code):
    size = int(row["body_bytes"])
    if row["thunk"] == "true":
        return "ghidra_thunk"
    # x86 cleanup/adjustor pattern: load a caller-frame address into ECX,
    # then tail-jump. These are identified by shape, not by a guessed source name.
    if size == 8 and len(code) == 8 and code[3] == 0xE9 and code[:2] in (
        b"\x8d\x4d", b"\x8b\x4d"
    ):
        return "frame_tail_jump_8"
    if (size == 11 and len(code) == 11 and code[6] == 0xE9 and
        code[:2] in (b"\x8d\x4d", b"\x8b\x4d") and
        code[3:5] in (b"\x83\xc1", b"\x83\xe9")):
        return "frame_tail_jump_11"
    return "other"


def main():
    data = DLL.read_bytes()
    image_base, sections = section_map(data)
    counts = Counter()
    body_bytes = Counter()
    with INVENTORY.open(newline="") as input_file, OUTPUT.open("w", newline="") as output_file:
        reader = csv.DictReader(input_file, delimiter="\t")
        writer = csv.writer(output_file, delimiter="\t")
        writer.writerow(("entry", "class", "body_bytes"))
        for row in reader:
            size = int(row["body_bytes"])
            code = function_bytes(data, int(row["entry"], 16), size, image_base, sections)
            category = classify(row, code)
            writer.writerow((row["entry"], category, size))
            counts[category] += 1
            body_bytes[category] += size
    for category in sorted(counts):
        print(f"{category}: {counts[category]:,} functions, {body_bytes[category]:,} body bytes")
    print(OUTPUT)


if __name__ == "__main__":
    main()
