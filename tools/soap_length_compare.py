#!/usr/bin/env python3
"""Compile and compare the readable 0x11252c80 SOAP-length candidate."""

import argparse
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from classify_functions import DLL, function_bytes, section_map


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src" / "soap_length_candidate.cpp"
ENTRY = 0x11252C80
BODY_SIZE = 255
HELPER_THUNK = 0x1009890F
REL_I386_REL32 = 0x0014
DISASSEMBLER = Cs(CS_ARCH_X86, CS_MODE_32)


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def coff_sections_and_symbols(path):
    data = path.read_bytes()
    if u16(data, 0) != 0x14C:
        raise ValueError(f"{path}: expected x86 COFF")
    section_count = u16(data, 2)
    symbol_start = u32(data, 8)
    symbol_count = u32(data, 12)
    section_start = 20 + u16(data, 16)
    string_start = symbol_start + symbol_count * 18
    sections = []
    for index in range(section_count):
        header = section_start + index * 40
        raw_size = u32(data, header + 16)
        raw_start = u32(data, header + 20)
        relocation_start = u32(data, header + 24)
        relocation_count = u16(data, header + 32)
        name = data[header:header + 8].split(b"\0")[0].decode("ascii", "replace")
        relocations = []
        for rel_index in range(relocation_count):
            rel = relocation_start + rel_index * 10
            relocations.append((u32(data, rel), u32(data, rel + 4), u16(data, rel + 8)))
        sections.append({"name": name, "code": data[raw_start:raw_start + raw_size],
                         "relocations": relocations})

    symbols = []
    index = 0
    while index < symbol_count:
        head = symbol_start + index * 18
        raw_name = data[head:head + 8]
        if raw_name[:4] == b"\0\0\0\0":
            string_pos = string_start + u32(raw_name, 4)
            end = data.index(b"\0", string_pos)
            name = data[string_pos:end].decode("utf-8", "replace")
        else:
            name = raw_name.split(b"\0")[0].decode("utf-8", "replace")
        section = struct.unpack_from("<h", data, head + 12)[0]
        symbol_type = u16(data, head + 14)
        storage = data[head + 16]
        aux_count = data[head + 17]
        if section > 0:
            symbols.append({"name": name, "offset": u32(data, head + 8),
                            "section": section, "type": symbol_type,
                            "storage": storage})
        index += 1 + aux_count
    return sections, symbols


def candidate_body(path):
    sections, symbols = coff_sections_and_symbols(path)
    candidates = [symbol for symbol in symbols
                  if "soap_length_candidate" in symbol["name"]
                  and symbol["storage"] == 2 and symbol["type"] & 0x20]
    if len(candidates) != 1:
        raise ValueError(f"Expected one candidate function symbol, found {len(candidates)}")
    symbol = candidates[0]
    section = sections[symbol["section"] - 1]
    following = [other["offset"] for other in symbols
                 if other["section"] == symbol["section"]
                 and other["offset"] > symbol["offset"]
                 and other["storage"] == 2 and other["type"] & 0x20]
    end = min(following) if following else len(section["code"])
    body = section["code"][symbol["offset"]:end]
    instructions = list(DISASSEMBLER.disasm(body, 0))
    while instructions and instructions[-1].mnemonic in ("nop", "int3"):
        instructions.pop()
    if instructions:
        end_of_code = instructions[-1].address + instructions[-1].size
        body = body[:end_of_code]
    relocations = [(offset - symbol["offset"], symbol_index, kind)
                   for offset, symbol_index, kind in section["relocations"]
                   if symbol["offset"] <= offset < symbol["offset"] + len(body)]

    # COFF relocation symbol indexes include auxiliary records; retain the raw
    # symbol table once more to resolve only the external helper call target.
    data = path.read_bytes()
    symbol_start = u32(data, 8)
    symbol_count = u32(data, 12)
    string_start = symbol_start + symbol_count * 18
    names = {}
    index = 0
    while index < symbol_count:
        head = symbol_start + index * 18
        raw_name = data[head:head + 8]
        if raw_name[:4] == b"\0\0\0\0":
            start = string_start + u32(raw_name, 4)
            stop = data.index(b"\0", start)
            name = data[start:stop].decode("utf-8", "replace")
        else:
            name = raw_name.split(b"\0")[0].decode("utf-8", "replace")
        names[index] = name
        index += 1 + data[head + 17]
    return body, [(offset, names.get(index, "<unknown>"), kind)
                  for offset, index, kind in relocations]


def compile_candidate(compiler, output):
    command = [compiler, "/nologo", "/O2", "/MD", "/GS", "/GR",
               "/EHsc", "/Zi", "/c",
               "/clang:--target=i686-pc-windows-msvc",
               # Keep the hand-written NUL scans inline, as in the reference
               # MSVC output, instead of lowering them to external strlen calls.
               "/clang:-fno-builtin",
               f"/Fo{output}", "--", str(SOURCE)]
    subprocess.run(command, cwd=ROOT, check=True)


def reference_file_offset(data, base, sections):
    rva = ENTRY - base
    for start, length, raw in sections:
        if start <= rva and rva + BODY_SIZE <= start + length:
            return raw + rva - start
    raise ValueError(f"Reference function 0x{ENTRY:08x} is outside the mapped sections")


def compare(path):
    reference = DLL.read_bytes()
    base, sections = section_map(reference)
    expected = function_bytes(reference, ENTRY, BODY_SIZE, base, sections)
    if len(expected) != BODY_SIZE:
        raise ValueError("Reference function body could not be read")
    actual, relocations = candidate_body(path)

    relocated_bytes = {offset + byte for offset, _name, _kind in relocations
                       for byte in range(4)}
    compared = min(len(expected), len(actual))
    fixed_positions = [i for i in range(compared) if i not in relocated_bytes]
    fixed_matches = sum(expected[i] == actual[i] for i in fixed_positions)
    first_raw_difference = next((i for i, (left, right) in enumerate(zip(expected, actual))
                                 if left != right), min(len(expected), len(actual)))
    fixed_difference = next((i for i in fixed_positions if expected[i] != actual[i]),
                            min(len(expected), len(actual)))

    patched = bytearray(actual)
    unresolved = []
    resolved = 0
    for offset, name, kind in relocations:
        if kind == REL_I386_REL32 and "thunk_FUN_11253130" in name:
            displacement = HELPER_THUNK - (ENTRY + offset + 4)
            struct.pack_into("<i", patched, offset, displacement)
            resolved += 1
        else:
            unresolved.append((offset, name, kind))
    relocated_exact = (len(actual) == len(expected) and not unresolved
                       and bytes(patched) == expected)
    first_layout_difference = next(
        (i for i, (left, right) in enumerate(zip(expected, patched)) if left != right),
        min(len(expected), len(patched)))

    print(f"reference: {len(expected)} bytes at 0x{ENTRY:08x} "
          f"(file offset 0x{reference_file_offset(reference, base, sections):x})")
    print(f"candidate object body: {len(actual)} bytes; {len(relocations)} relocations")
    print(f"first raw difference: {first_raw_difference}; "
          f"first fixed-byte difference: {fixed_difference}")
    print(f"fixed-byte match: {fixed_matches}/{len(fixed_positions)}")
    print(f"helper relocations resolved to the reference thunk: {resolved}")
    print(f"first difference after relocation resolution: {first_layout_difference}; "
          f"reference tail beyond candidate: {max(0, len(expected) - len(actual))} bytes")
    if unresolved:
        print("unresolved relocations: " + ", ".join(
            f"+0x{offset:x} {name} type=0x{kind:04x}"
            for offset, name, kind in unresolved))
    print("reference-layout relocated body: "
          + ("EXACT" if relocated_exact else "MISMATCH"))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--compiler", default=(shutil.which("clang-cl")
                                                 or "/opt/homebrew/opt/llvm/bin/clang-cl"))
    parser.add_argument("--object", type=Path,
                        help="compare a previously compiled x86 COFF object")
    args = parser.parse_args()
    if args.object:
        compare(args.object)
    else:
        with tempfile.TemporaryDirectory(prefix="soap-length-") as temporary:
            object_path = Path(temporary) / "soap_length_candidate.obj"
            compile_candidate(args.compiler, object_path)
            compare(object_path)


if __name__ == "__main__":
    main()
