#!/usr/bin/env python3
"""Compare Windows CI COFF objects with local reference function bodies."""

import argparse
from pathlib import Path

from match_functions import FACTORY, TARGETS, reference_bytes, section_headers, u16

OBJECT_NAMES = {
    "state-field": "zonegroup_getter.obj",
    "result-code": "zonegroup_result.obj",
    "factory": "zonegroup_factory_candidate.obj",
}
VARIANT_NAMES = {
    "factory-frame": "factory_frame_pointer.obj",
    "factory-lifetime": "factory_lifetime.obj",
    "factory-owner": "factory_owner.obj",
}


def object_code(path: Path):
    data = path.read_bytes()
    if u16(data, 0) != 0x14C:
        raise ValueError(f"{path}: expected x86 COFF object")
    sections = list(section_headers(data, 20 + u16(data, 16), u16(data, 2)))
    text_sections = [s for s in sections if s["name"].startswith(".text") and s["raw_size"]]
    if not text_sections:
        raise ValueError(f"{path}: no nonempty code section")
    # MSVC emits .text$mn COMDAT sections. The factory also has small outlined
    # helpers; its largest code section holds the named candidate function.
    section = max(text_sections, key=lambda s: s["raw_size"])
    start = section["raw_pointer"]
    section_index = sections.index(section)
    header = 20 + u16(data, 16) + section_index * 40
    relocation_pointer = int.from_bytes(data[header + 24:header + 28], "little")
    relocation_offsets = [int.from_bytes(data[relocation_pointer + index * 10:
                                              relocation_pointer + index * 10 + 4], "little")
                          for index in range(section["relocation_count"])]
    return data[start:start + section["raw_size"]], relocation_offsets, len(text_sections)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("artifact_dir", type=Path, help="Directory containing downloaded CI objects")
    parser.add_argument("--variants", action="store_true", help="also compare factory frame and ownership variants")
    args = parser.parse_args()
    all_matched = True
    names = {**OBJECT_NAMES, **(VARIANT_NAMES if args.variants else {})}
    for name, object_name in names.items():
        target = FACTORY if name.startswith("factory") else TARGETS[name]
        expected, _ = reference_bytes(target)
        actual, relocation_offsets, code_sections = object_code(args.artifact_dir / object_name)
        first = next((i for i, (a, b) in enumerate(zip(expected, actual)) if a != b),
                     min(len(expected), len(actual)))
        relocated_bytes = {offset for start in relocation_offsets for offset in range(start, start + 4)}
        first_fixed = next((i for i, (a, b) in enumerate(zip(expected, actual))
                            if i not in relocated_bytes and a != b),
                           min(len(expected), len(actual)))
        exact = actual == expected and not relocation_offsets
        all_matched &= exact
        print(f"{name}: reference {len(expected)} bytes, object {len(actual)} bytes, "
              f"first difference {first}, first fixed-byte difference {first_fixed}, "
              f"relocations {len(relocation_offsets)}, code sections {code_sections}, "
              f"{'EXACT' if exact else 'MISMATCH'}")
    if not all_matched:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
