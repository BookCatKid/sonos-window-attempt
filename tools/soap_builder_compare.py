#!/usr/bin/env python3
"""Compile and relocation-normalize the SOAP header-builder candidate."""

import argparse
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"
SOURCE = ROOT / "src" / "soap_builder_candidate.cpp"
TARGET_VA = 0x111C52E0
TARGET_SIZE = 392

HELPERS = {
    "_soap_builder_format": 0x10086CB9,
    "_soap_builder_append_format": 0x1000749B,
    "?Name@SoapHeaderStorage@@QAEPBDI@Z": 0x10089B49,
    "?Value@SoapHeaderStorage@@QAEPBDPBD@Z": 0x100675D0,
    "?Length@SoapBody@@QAEIXZ": 0x10017B43,
    "_soap_builder_user_agent": 0x10032E3E,
    "_soap_builder_log": 0x1002A63A,
    "_soap_builder_cookie_check": 0x100382F3,
    "@soap_builder_cookie_check@4": 0x100382F3,
    "_alloca_probe": 0x10019146,
    "___chkstk_ms": 0x10019146,
    "__chkstk": 0x10019146,
    "_chkstk": 0x10019146,
}


def u16(data, at):
    return struct.unpack_from("<H", data, at)[0]


def u32(data, at):
    return struct.unpack_from("<I", data, at)[0]


def c_string(data, at):
    end = data.find(b"\0", at)
    if end < 0:
        end = len(data)
    return data[at:end].decode("ascii", errors="replace")


def pe_reference_bytes():
    data = REFERENCE.read_bytes()
    pe = u32(data, 0x3c)
    if data[pe:pe + 4] != b"PE\0\0":
        raise RuntimeError("Reference is not a PE image")
    coff = pe + 4
    if u16(data, coff) != 0x14c:
        raise RuntimeError("Reference is not i386")
    section_count = u16(data, coff + 2)
    optional = coff + 20
    if u16(data, optional) != 0x10b:
        raise RuntimeError("Reference is not PE32")
    image_base = u32(data, optional + 28)
    rva = TARGET_VA - image_base
    section_start = optional + u16(data, coff + 16)
    for index in range(section_count):
        at = section_start + index * 40
        va = u32(data, at + 12)
        raw_size = u32(data, at + 16)
        raw_ptr = u32(data, at + 20)
        if va <= rva and rva + TARGET_SIZE <= va + raw_size:
            file_offset = raw_ptr + rva - va
            return data[file_offset:file_offset + TARGET_SIZE], file_offset
    raise RuntimeError("Target function VA is not in a raw PE section")


def coff_object_bytes(data):
    if u16(data, 0) != 0x14c:
        raise RuntimeError("Compiler output is not i386 COFF")
    section_count = u16(data, 2)
    symbol_offset = u32(data, 8)
    symbol_count = u32(data, 12)
    optional_size = u16(data, 16)
    section_start = 20 + optional_size
    string_table_at = symbol_offset + symbol_count * 18
    string_table_size = u32(data, string_table_at) if symbol_offset else 0
    string_table = data[string_table_at:string_table_at + string_table_size]

    sections = []
    for index in range(section_count):
        at = section_start + index * 40
        raw_name = data[at:at + 8].split(b"\0", 1)[0]
        if raw_name.startswith(b"/"):
            name = c_string(string_table, int(raw_name[1:]))
        else:
            name = raw_name.decode("ascii", errors="replace")
        sections.append({
            "name": name,
            "raw_size": u32(data, at + 16),
            "raw_ptr": u32(data, at + 20),
            "reloc_ptr": u32(data, at + 24),
            "reloc_count": u16(data, at + 32),
        })

    symbols = {}
    index = 0
    while index < symbol_count:
        at = symbol_offset + index * 18
        name_field = data[at:at + 8]
        if name_field[:4] == b"\0\0\0\0":
            name = c_string(string_table, u32(name_field, 4))
        else:
            name = name_field.split(b"\0", 1)[0].decode("ascii", errors="replace")
        value = u32(data, at + 8)
        section_number = struct.unpack_from("<h", data, at + 12)[0]
        aux_count = data[at + 17]
        symbols[index] = {"name": name, "value": value, "section": section_number}
        index += 1 + aux_count

    code_section_index = next(
        i for i, section in enumerate(sections)
        if section["name"] == ".text" and section["raw_size"]
    )
    section = sections[code_section_index]
    code = bytearray(data[section["raw_ptr"]:section["raw_ptr"] + section["raw_size"]])
    applied = []
    unresolved = []
    for n in range(section["reloc_count"]):
        at = section["reloc_ptr"] + n * 10
        patch_at = u32(data, at)
        symbol_index = u32(data, at + 4)
        reloc_type = u16(data, at + 8)
        symbol = symbols[symbol_index]
        name = symbol["name"]
        target = HELPERS.get(name)
        if target is None:
            unresolved.append((name, reloc_type, patch_at))
            continue

        if reloc_type == 0x0014:  # IMAGE_REL_I386_REL32
            addend = struct.unpack_from("<i", code, patch_at)[0]
            displacement = target + addend - (TARGET_VA + patch_at + 4)
            struct.pack_into("<i", code, patch_at, displacement)
        elif reloc_type == 0x0006:  # IMAGE_REL_I386_DIR32
            addend = u32(code, patch_at)
            struct.pack_into("<I", code, patch_at, (target + addend) & 0xffffffff)
        else:
            unresolved.append((name, reloc_type, patch_at))
            continue
        applied.append((patch_at, name, target))
    return bytes(code), applied, unresolved


def compile_candidate(compiler, output, extra_flags=()):
    command = [
        compiler,
        "/clang:--target=i686-pc-windows-msvc",
        "/O2", *extra_flags, "/c", "/GS-", "/GR-", "/EHs-",
        f"/Fo:{output}", "--", str(SOURCE),
    ]
    subprocess.run(command, check=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--compiler", default=None)
    args = parser.parse_args()
    compiler = args.compiler or shutil.which("clang-cl") or "/opt/homebrew/opt/llvm/bin/clang-cl"
    with tempfile.TemporaryDirectory(prefix="soap-builder-") as temp:
        obj = Path(temp) / "candidate.obj"
        compile_candidate(compiler, obj)
        actual, applied, unresolved = coff_object_bytes(obj.read_bytes())
    expected, file_offset = pe_reference_bytes()

    common = min(len(actual), len(expected))
    matches = sum(left == right for left, right in zip(actual[:common], expected[:common]))
    differences = [i for i in range(common) if actual[i] != expected[i]]
    print(f"target VA: 0x{TARGET_VA:08x}; PE file offset: 0x{file_offset:x}")
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
