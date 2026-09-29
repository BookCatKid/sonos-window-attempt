#!/usr/bin/env python3
"""Compile and byte-compare the getHousehold reconstruction candidate."""

import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

from match_functions import reference_bytes, section_headers, u16, u32

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src" / "discovery_get_household.cpp"
COMPILER = shutil.which("clang-cl") or "/opt/homebrew/opt/llvm/bin/clang-cl"
TARGET = {"va": 0x102F7150, "size": 97}


def candidate_function(object_path):
    data = object_path.read_bytes()
    if u16(data, 0) != 0x14C:
        raise ValueError("Expected an x86 COFF object")
    section_count = u16(data, 2)
    symbol_start = u32(data, 8)
    symbol_count = u32(data, 12)
    section_start = 20 + u16(data, 16)
    sections = list(section_headers(data, section_start, section_count))
    strings = symbol_start + symbol_count * 18

    symbols = []
    index = 0
    while index < symbol_count:
        offset = symbol_start + index * 18
        raw_name = data[offset:offset + 8]
        if raw_name[:4] == b"\0\0\0\0":
            string_pos = strings + u32(raw_name, 4)
            end = data.index(b"\0", string_pos)
            name = data[string_pos:end].decode("utf-8", errors="replace")
        else:
            name = raw_name.split(b"\0", 1)[0].decode("utf-8", errors="replace")
        section_number = struct.unpack_from("<h", data, offset + 12)[0]
        aux_count = data[offset + 17]
        value = u32(data, offset + 8)
        symbol_type = u16(data, offset + 14)
        if section_number > 0 and symbol_type & 0x20:
            symbols.append((name, section_number - 1, value))
        index += 1 + aux_count
    symbol = next((entry for entry in symbols
                   if entry[0].startswith("?getHousehold@SCLibrary@@")), None)
    if symbol is None:
        raise ValueError("Could not locate the getHousehold function symbol")

    _, section_number, start = symbol
    section = sections[section_number]
    later_functions = [value for _, number, value in symbols
                       if number == section_number and value > start]
    size = min(later_functions) - start if later_functions else section["raw_size"] - start
    code = data[section["raw_pointer"] + start:section["raw_pointer"] + start + size]
    section_header = section_start + section_number * 40
    relocation_pointer = u32(data, section_header + 24)
    relocation_count = u16(data, section_header + 32)
    relocations = []
    for item in range(relocation_count):
        position = u32(data, relocation_pointer + item * 10)
        if start <= position < start + size:
            relocations.append(position - start)
    return code, relocations


def main():
    if not Path(COMPILER).is_file():
        raise SystemExit(f"Missing clang-cl: {COMPILER}")
    with tempfile.TemporaryDirectory(prefix="discovery_tmp_", dir=ROOT / "tools") as temp_dir:
        object_path = Path(temp_dir) / "discovery_get_household.obj"
        subprocess.run([
            COMPILER, "/nologo", "/O2", "/c", "/GS", "/GR", "/EHsc", "/MD",
            "/clang:--target=i686-pc-windows-msvc", f"/Fo{object_path}", "--", str(SOURCE),
        ], check=True)
        actual, relocations = candidate_function(object_path)

    expected, file_offset = reference_bytes(TARGET)
    relocated = {byte for start in relocations for byte in range(start, start + 4)}
    shared = min(len(expected), len(actual))
    fixed_positions = [i for i in range(shared) if i not in relocated]
    fixed_matches = sum(expected[i] == actual[i] for i in fixed_positions)
    first_difference = next(
        (i for i, (want, got) in enumerate(zip(expected, actual)) if want != got),
        shared,
    )
    first_fixed_difference = next(
        (i for i in fixed_positions if expected[i] != actual[i]), shared
    )

    print(f"target: SCLibrary::getHousehold at VA 0x{TARGET['va']:08x}")
    print(f"reference PE offset: 0x{file_offset:x}")
    print(f"reference body: {len(expected)} bytes")
    print(f"candidate function: {len(actual)} bytes")
    print(f"compiler: {COMPILER}")
    print("flags: /O2 /GS /GR /EHsc /MD /clang:--target=i686-pc-windows-msvc")
    print(f"COFF relocation slots: {relocations}")
    print(f"first difference: 0x{first_difference:x}")
    print(f"fixed-byte score over common prefix: {fixed_matches}/{len(fixed_positions)}")
    print(f"first fixed-byte difference: 0x{first_fixed_difference:x}")
    print(f"reference: {expected.hex()}")
    print(f"candidate: {actual.hex()}")
    if actual == expected and not relocations:
        print("EXACT FUNCTION-BODY MATCH")
    else:
        print("MISMATCH (relocated call bytes excluded from fixed-byte score)")
        raise SystemExit(1)


if __name__ == "__main__":
    main()
