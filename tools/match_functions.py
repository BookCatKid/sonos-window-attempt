#!/usr/bin/env python3
"""Compile recovered x86 functions and compare each full machine-code body."""
import argparse
import json
import shutil
import struct
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"
LINKED = ROOT / "build" / "zonegroup_functions.dll"
FACTORY = {
    "va": 0x10373c40,
    "size": 707,
}
TARGETS = {
    "state-field": {
        "export": "GetZoneGroupStateField",
        "symbol": "?GetZoneGroupStateField@ZoneGroupOperation@@QAEPAEXZ",
        "source": ROOT / "src" / "zonegroup_getter.cpp",
        "object": ROOT / "build" / "zonegroup_getter.obj",
        "va": 0x10383540,
        "size": 9,  # ends at RET 0x10383548, before CC alignment padding
    },
    "result-code": {
        "export": "GetZoneGroupOperationResult",
        "symbol": "?GetZoneGroupOperationResult@ZoneGroupOperation@@QBEGXZ",
        "source": ROOT / "src" / "zonegroup_result.cpp",
        "object": ROOT / "build" / "zonegroup_result.obj",
        "va": 0x1037e840,
        "size": 5,  # ends at RET 0x1037e844
    },
}


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def section_headers(data, start, count):
    for index in range(count):
        offset = start + index * 40
        name = data[offset:offset + 8].split(b"\0", 1)[0].decode("ascii")
        yield {
            "name": name,
            "virtual_size": u32(data, offset + 8),
            "virtual_address": u32(data, offset + 12),
            "raw_size": u32(data, offset + 16),
            "raw_pointer": u32(data, offset + 20),
            "relocation_count": u16(data, offset + 32),
        }


def reference_bytes(target):
    data = REFERENCE.read_bytes()
    pe = u32(data, 0x3c)
    assert data[pe:pe + 4] == b"PE\0\0"
    coff = pe + 4
    assert u16(data, coff) == 0x14c  # i386
    count = u16(data, coff + 2)
    optional = coff + 20
    assert u16(data, optional) == 0x10b  # PE32
    image_base = u32(data, optional + 28)
    rva = target["va"] - image_base
    sections = section_headers(data, optional + u16(data, coff + 16), count)
    for section in sections:
        start = section["virtual_address"]
        if start <= rva and rva + target["size"] <= start + section["raw_size"]:
            file_offset = section["raw_pointer"] + rva - start
            return data[file_offset:file_offset + target["size"]], file_offset
    raise RuntimeError("Target VA is not in a raw PE section")


def object_bytes(target):
    data = target["object"].read_bytes()
    assert u16(data, 0) == 0x14c  # i386 COFF
    sections = list(section_headers(data, 20 + u16(data, 16), u16(data, 2)))
    code = next(section for section in sections
                if section["name"] == ".text" and section["raw_size"] > 0)
    if code["relocation_count"] != 0:
        raise RuntimeError("Getter object unexpectedly has relocations")
    start = code["raw_pointer"]
    return data[start:start + code["raw_size"]]


def compare_target(name, target, compiler):
    source = target["source"]
    output = target["object"]
    output.parent.mkdir(exist_ok=True)
    subprocess.run([
        compiler, "/clang:--target=i686-pc-windows-msvc", "/O2", "/c",
        "/GS-", "/GR-", "/EHs-", f"/Fo:{output}", "--", str(source),
    ], check=True)
    expected, offset = reference_bytes(target)
    actual = object_bytes(target)
    print(f"{name}: target VA 0x{target['va']:08x}, PE file offset 0x{offset:x}")
    print(f"  reference ({len(expected)} bytes): {expected.hex()}")
    print(f"  compiled  ({len(actual)} bytes): {actual.hex()}")
    if actual != expected:
        print("  MISMATCH")
        return False
    print("  EXACT FUNCTION-BODY MATCH")
    return True


def compare_linked(names):
    linker = shutil.which("lld-link") or "/opt/homebrew/bin/lld-link"
    command = [linker, "/DLL", "/NOENTRY", "/NODEFAULTLIB", "/MACHINE:X86",
               f"/OUT:{LINKED}"]
    command += [f"/EXPORT:{TARGETS[name]['export']}={TARGETS[name]['symbol']}"
                for name in names]
    command += [str(TARGETS[name]["object"]) for name in names]
    subprocess.run(command, check=True)
    result = subprocess.run(["r2", "-q", "-c", "iEj", str(LINKED)],
                            capture_output=True, text=True, check=True)
    exports = json.loads(result.stdout[result.stdout.find("["):])
    exported = {entry["name"]: entry for entry in exports}
    data = LINKED.read_bytes()
    matched = []
    for name in names:
        target = TARGETS[name]
        entry = exported[target["export"]]
        expected, _ = reference_bytes(target)
        actual = data[entry["paddr"]:entry["paddr"] + target["size"]]
        okay = actual == expected
        print(f"{name}: linked DLL export VA 0x{entry['vaddr']:08x}: "
              f"{'EXACT FUNCTION-BODY MATCH' if okay else 'MISMATCH'}")
        matched.append(okay)
    return all(matched)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--target", choices=["all", *TARGETS], default="all")
    args = parser.parse_args()
    compiler = shutil.which("clang-cl") or "/opt/homebrew/opt/llvm/bin/clang-cl"
    names = list(TARGETS) if args.target == "all" else [args.target]
    matched = [compare_target(name, TARGETS[name], compiler) for name in names]
    linked = compare_linked(names)
    if not all(matched) or not linked:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
