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
    return data[start:start + section["raw_size"]], section["relocation_count"], len(text_sections)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("artifact_dir", type=Path, help="Directory containing downloaded CI objects")
    args = parser.parse_args()
    all_matched = True
    for name, object_name in OBJECT_NAMES.items():
        target = FACTORY if name == "factory" else TARGETS[name]
        expected, _ = reference_bytes(target)
        actual, relocations, code_sections = object_code(args.artifact_dir / object_name)
        first = next((i for i, (a, b) in enumerate(zip(expected, actual)) if a != b),
                     min(len(expected), len(actual)))
        exact = actual == expected and relocations == 0
        all_matched &= exact
        print(f"{name}: reference {len(expected)} bytes, object {len(actual)} bytes, "
              f"first difference {first}, relocations {relocations}, code sections {code_sections}, "
              f"{'EXACT' if exact else 'MISMATCH'}")
    if not all_matched:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
