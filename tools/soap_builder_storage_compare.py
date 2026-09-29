#!/usr/bin/env python3
"""Compile and relocation-normalize the storage-constructor candidate."""

import shutil
import tempfile
from pathlib import Path

import soap_builder_compare as compare

ROOT = Path(__file__).resolve().parents[1]
compare.SOURCE = ROOT / "src" / "soap_builder_storage_candidate.cpp"
compare.TARGET_VA = 0x111C3530
compare.TARGET_SIZE = 286
compare.HELPERS = {
    "@soap_builder_base_initialize@4": 0x10090B65,
    "?Initialize@SoapHeaderStorageInit@@QAEXPADI@Z": 0x1007BCBF,
    "_soap_builder_bounded_copy": 0x1001131A,
}


def main():
    compiler = shutil.which("clang-cl") or "/opt/homebrew/opt/llvm/bin/clang-cl"
    with tempfile.TemporaryDirectory(prefix="soap-storage-") as temp:
        obj = Path(temp) / "candidate.obj"
        compare.compile_candidate(compiler, obj)
        actual, applied, unresolved = compare.coff_object_bytes(obj.read_bytes())
    expected, file_offset = compare.pe_reference_bytes()

    common = min(len(actual), len(expected))
    matches = sum(left == right for left, right in zip(actual[:common], expected[:common]))
    differences = [i for i in range(common) if actual[i] != expected[i]]
    print(f"target VA: 0x{compare.TARGET_VA:08x}; PE file offset: 0x{file_offset:x}")
    print(f"reference function: {len(expected)} bytes; candidate .text: {len(actual)} bytes")
    print(f"resolved COFF relocations: {len(applied)}; unresolved: {len(unresolved)}")
    for offset, name, address in applied:
        print(f"  relocation +0x{offset:x}: {name} -> 0x{address:08x}")
    for name, reloc_type, offset in unresolved:
        print(f"  UNRESOLVED +0x{offset:x}: {name}, relocation type 0x{reloc_type:04x}")
    print(f"byte-equal positions in common prefix: {matches}/{common}")
    if differences:
        print(f"first differing offset: +0x{differences[0]:x} "
              f"(reference {expected[differences[0]]:02x}, candidate {actual[differences[0]]:02x})")
    elif len(actual) == len(expected):
        print("EXACT FUNCTION-BODY MATCH")
    else:
        print("Common prefix matches; function lengths differ")
    if unresolved:
        raise SystemExit("Cannot interpret all candidate relocations")


if __name__ == "__main__":
    main()
