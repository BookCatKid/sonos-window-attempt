#!/usr/bin/env python3
"""Extract reproducible build fingerprints from the copied Windows DLL."""
import hashlib
import json
import struct
import uuid
from pathlib import Path

REFERENCE = Path(__file__).resolve().parents[1] / "reference/SonosV2/sclib-csharp.dll"


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def main():
    data = REFERENCE.read_bytes()
    pe = u32(data, 0x3c)
    assert data[pe:pe + 4] == b"PE\0\0"
    coff = pe + 4
    assert u16(data, coff) == 0x14c
    optional = coff + 20
    assert u16(data, optional) == 0x10b
    image_base = u32(data, optional + 28)
    sections = []
    for index in range(u16(data, coff + 2)):
        offset = optional + u16(data, coff + 16) + index * 40
        sections.append({
            "name": data[offset:offset + 8].split(b"\0")[0].decode("ascii"),
            "rva": u32(data, offset + 12),
            "raw_size": u32(data, offset + 16),
            "file_offset": u32(data, offset + 20),
        })

    def rva_to_file(rva):
        for section in sections:
            if section["rva"] <= rva < section["rva"] + section["raw_size"]:
                return section["file_offset"] + rva - section["rva"]
        raise ValueError(f"RVA 0x{rva:x} is outside raw sections")

    rich = data.find(b"Rich", 0, pe)
    assert rich >= 0
    key = u32(data, rich + 4)
    dans = next(offset for offset in range(0x40, rich, 4)
                if u32(data, offset) ^ key == 0x536e6144)
    rich_records = []
    for offset in range(dans + 16, rich, 8):
        product_build = u32(data, offset) ^ key
        rich_records.append({
            "product_id": f"0x{product_build >> 16:04x}",
            "build": product_build & 0xffff,
            "count": u32(data, offset + 4) ^ key,
        })

    directories = optional + 96
    debug_rva, debug_size = struct.unpack_from("<II", data, directories + 6 * 8)
    debug_entries = []
    pdb = None
    for index in range(debug_size // 28):
        offset = rva_to_file(debug_rva) + index * 28
        _, timestamp, major, minor, kind, size, _, file_offset = struct.unpack_from(
            "<IIHHIIII", data, offset)
        debug_entries.append({"type": kind, "size": size, "timestamp": timestamp})
        if kind == 2 and data[file_offset:file_offset + 4] == b"RSDS":
            pdb = {
                "guid": str(uuid.UUID(bytes_le=data[file_offset + 4:file_offset + 20])),
                "age": u32(data, file_offset + 20),
                "path": data[file_offset + 24:file_offset + size].split(b"\0")[0].decode(),
            }

    config_rva, _ = struct.unpack_from("<II", data, directories + 10 * 8)
    config = rva_to_file(config_rva)
    text = next(section for section in sections if section["name"] == ".text")
    thunk_start_file = text["file_offset"] + 5
    thunk_start_va = image_base + text["rva"] + 5
    count = 0
    internal_targets = 0
    image_end = image_base + u32(data, optional + 56)
    offset = thunk_start_file
    while offset + 5 <= text["file_offset"] + text["raw_size"] and data[offset] == 0xe9:
        target = thunk_start_va + count * 5 + 5 + struct.unpack_from("<i", data, offset + 1)[0]
        internal_targets += image_base <= target < image_end
        count += 1
        offset += 5

    export_rva, _ = struct.unpack_from("<II", data, directories)
    export = rva_to_file(export_rva)
    named_exports = u32(data, export + 24)
    functions = rva_to_file(u32(data, export + 28))
    ordinals = rva_to_file(u32(data, export + 36))
    exports_in_jump_run = 0
    thunk_end_va = thunk_start_va + count * 5
    for index in range(named_exports):
        ordinal = u16(data, ordinals + index * 2)
        export_va = image_base + u32(data, functions + ordinal * 4)
        exports_in_jump_run += thunk_start_va <= export_va < thunk_end_va

    print(json.dumps({
        "sha256": hashlib.sha256(data).hexdigest(),
        "machine": "i386",
        "linker_version": f"{data[optional + 2]}.{data[optional + 3]}",
        "coff_timestamp": u32(data, coff + 4),
        "image_base": f"0x{image_base:08x}",
        "file_alignment": u32(data, optional + 36),
        "section_alignment": u32(data, optional + 32),
        "dll_characteristics": f"0x{u16(data, optional + 70):04x}",
        "rich_records": rich_records,
        "debug_entries": debug_entries,
        "pdb": pdb,
        "security_cookie_va": f"0x{u32(data, config + 0x3c):08x}",
        "seh_table_va": f"0x{u32(data, config + 0x40):08x}",
        "seh_count": u32(data, config + 0x44),
        "guard_check_va": f"0x{u32(data, config + 0x48):08x}",
        "guard_function_count": u32(data, config + 0x54),
        "guard_flags": f"0x{u32(data, config + 0x58):08x}",
        "five_byte_jump_run": {
            "start_va": f"0x{thunk_start_va:08x}",
            "count": count,
            "bytes": count * 5,
            "internal_targets": internal_targets,
            "named_exports_in_run": exports_in_jump_run,
            "named_exports_total": named_exports,
        },
    }, indent=2))


if __name__ == "__main__":
    main()
