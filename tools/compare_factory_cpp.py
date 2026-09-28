#!/usr/bin/env python3
"""Compile the semantic C++ factory candidate and compare its machine code."""
import shutil
import subprocess
from pathlib import Path

from match_functions import FACTORY, reference_bytes, section_headers, u16

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src" / "zonegroup_factory_candidate.cpp"
OBJECT = ROOT / "build" / "zonegroup_factory_candidate.obj"


def code_bytes():
    data = OBJECT.read_bytes()
    if u16(data, 0) != 0x14c:
        raise RuntimeError("Expected an i386 COFF object")
    sections = list(section_headers(data, 20 + u16(data, 16), u16(data, 2)))
    code = [section for section in sections
            if section["name"] == ".text" and section["raw_size"]]
    if len(code) != 1:
        raise RuntimeError(f"Expected one nonempty code section, found {len(code)}")
    section = code[0]
    start = section["raw_pointer"]
    return data[start:start + section["raw_size"]]


def main():
    compiler = shutil.which("clang-cl") or "/opt/homebrew/opt/llvm/bin/clang-cl"
    OBJECT.parent.mkdir(exist_ok=True)
    subprocess.run([
        compiler, "/clang:--target=i686-pc-windows-msvc", "/O2", "/Oy-", "/c",
        "/GS-", "/GR-", "/EHs-", f"/Fo:{OBJECT}", "--", str(SOURCE),
    ], check=True)
    expected, offset = reference_bytes(FACTORY)
    actual = code_bytes()
    first = next((i for i, (a, b) in enumerate(zip(expected, actual)) if a != b),
                 min(len(expected), len(actual)))
    print(f"reference: {len(expected)} bytes at PE file offset 0x{offset:x}")
    print(f"C++ object: {len(actual)} bytes")
    print(f"first differing offset: 0x{first:x}")
    print(f"reference prefix: {expected[:32].hex()}")
    print(f"C++ prefix:       {actual[:32].hex()}")
    print("EXACT FUNCTION-BODY MATCH" if actual == expected else "MISMATCH")
    if actual != expected:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
