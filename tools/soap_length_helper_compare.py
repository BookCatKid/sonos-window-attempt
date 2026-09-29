#!/usr/bin/env python3
"""Compile and compare the readable 0x11253130 parameter-length helper."""

import argparse
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from classify_functions import DLL, function_bytes, section_map
from soap_length_compare import coff_sections_and_symbols


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "src" / "soap_length_parameter_helper.cpp"
ENTRY = 0x11253130
BODY_SIZE = 188
REFERENCE_THUNKS = {
    "thunk_FUN_11285d80": 0x10053FB2,
    "thunk_FUN_11291ee0": 0x1005D33C,
}
REL_I386_REL32 = 0x0014
DISASSEMBLER = Cs(CS_ARCH_X86, CS_MODE_32)


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def function_body(path):
    sections, symbols = coff_sections_and_symbols(path)
    functions = [symbol for symbol in symbols
                 if "soap_length_parameter_helper" in symbol["name"]
                 and symbol["storage"] == 2 and symbol["type"] & 0x20]
    if len(functions) != 1:
        raise ValueError(f"Expected one helper function symbol, found {len(functions)}")
    function = functions[0]
    section = sections[function["section"] - 1]
    following = [other["offset"] for other in symbols
                 if other["section"] == function["section"]
                 and other["offset"] > function["offset"]
                 and other["storage"] == 2 and other["type"] & 0x20]
    end = min(following) if following else len(section["code"])
    body = section["code"][function["offset"]:end]
    instructions = list(DISASSEMBLER.disasm(body, 0))
    while instructions and instructions[-1].mnemonic in ("nop", "int3"):
        instructions.pop()
    if instructions:
        body = body[:instructions[-1].address + instructions[-1].size]

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
            start = string_start + u32(data, head + 4)
            stop = data.index(b"\0", start)
            name = data[start:stop].decode("utf-8", "replace")
        else:
            name = raw_name.split(b"\0")[0].decode("utf-8", "replace")
        names[index] = name
        index += 1 + data[head + 17]

    relocations = []
    for offset, symbol_index, kind in section["relocations"]:
        if function["offset"] <= offset < function["offset"] + len(body):
            relocations.append((offset - function["offset"],
                                names.get(symbol_index, "<unknown>"), kind))
    return body, relocations


def compile_candidate(compiler, output):
    command = [compiler, "/nologo", "/O2", "/MD", "/GS", "/GR",
               "/EHsc", "/Zi", "/c",
               "/clang:--target=i686-pc-windows-msvc",
               # Keep the local NUL scans inline instead of introducing calls
               # to the host C runtime's strlen implementation.
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
    actual, relocations = function_body(path)

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
        target = next((address for helper, address in REFERENCE_THUNKS.items()
                       if helper in name), None)
        if kind == REL_I386_REL32 and target is not None:
            struct.pack_into("<i", patched, offset,
                             target - (ENTRY + offset + 4))
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
    print(f"helper relocations resolved to reference thunks: {resolved}")
    print(f"first difference after relocation resolution: {first_layout_difference}; "
          f"reference tail beyond candidate: {max(0, len(expected) - len(actual))} bytes; "
          f"candidate tail beyond reference: {max(0, len(actual) - len(expected))} bytes")
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
        with tempfile.TemporaryDirectory(prefix="soap-length-helper-") as temporary:
            object_path = Path(temporary) / "soap_length_parameter_helper.obj"
            compile_candidate(args.compiler, object_path)
            compare(object_path)


if __name__ == "__main__":
    main()
