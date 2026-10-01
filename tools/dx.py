#!/usr/bin/env python3
"""Quick disassembly helper.

Usage:
  python3 tools/dx.py obj <path.obj> <symbol-substr>   # disasm symbol's section
  python3 tools/dx.py ref <va-hex> [size]              # disasm reference DLL bytes
"""
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

DLL = Path(__file__).resolve().parents[1] / 'reference' / 'SonosV2' / 'sclib-csharp.dll'
MD = Cs(CS_ARCH_X86, CS_MODE_32)


def u16(d, o):
    return struct.unpack_from('<H', d, o)[0]


def u32(d, o):
    return struct.unpack_from('<I', d, o)[0]


def coff_symbols(data):
    """Return (symbols, sections) for normal or bigobj x86 COFF."""
    if u16(data, 0) == 0 and u16(data, 2) == 0xffff:
        sc, ss, ns = u32(data, 44), u32(data, 48), u32(data, 52)
        so, sz, secno = 56, 20, 12
    else:
        sc, ss, ns = u16(data, 2), u32(data, 8), u32(data, 12)
        so, sz, secno = 20 + u16(data, 16), 18, 12
    strings = ss + ns * sz
    sections = []
    for i in range(sc):
        h = so + 40 * i
        sections.append({
            'name': data[h:h + 8].split(b'\0')[0].decode(errors='replace'),
            'vsize': u32(data, h + 16), 'raw': u32(data, h + 20),
        })
    i, syms = 0, []
    while i < ns:
        e = ss + i * sz
        if u32(data, e) == 0 and u32(data, e + 4) != 0:
            zo = u32(data, e + 4)
            name = data[strings + zo:].split(b'\0')[0].decode(errors='replace')
        else:
            name = data[e:e + 8].split(b'\0')[0].decode(errors='replace')
        syms.append({'name': name, 'value': u32(data, e + 8),
                     'sec': u16(data, e + secno) - 1})
        i += 1 + data[e + sz - 1]  # aux entries
    return syms, sections


def disasm_obj(path, needle):
    data = Path(path).read_bytes()
    syms, secs = coff_symbols(data)
    for s in syms:
        if needle in s['name'] and 0 <= s['sec'] < len(secs):
            sec = secs[s['sec']]
            raw = sec['raw'] + s['value']
            end = raw
            # disasm until the next symbol in the same section, or section end
            limit = sec['raw'] + sec['vsize']
            nxt = min((t['value'] for t in syms
                       if t['sec'] == s['sec'] and t['value'] > s['value']),
                      default=sec['vsize'])
            code = data[raw:sec['raw'] + nxt]
            print(f'; {s["name"]}  sec={sec["name"]} off={s["value"]:x}')
            for ins in MD.disasm(code, 0):
                print(f'{ins.address:04x}  {ins.mnemonic:8} {ins.op_str}')


def disasm_ref(va, size):
    data = DLL.read_bytes()
    pe = u32(data, 0x3C)
    coff = pe + 4
    opt = coff + 20
    base = u32(data, opt + 28)
    hdr = opt + u16(data, coff + 16)
    secs = [(u32(data, h := hdr + 40 * i + 12),
             u32(data, h + 4), u32(data, h + 8))
            for i in range(u16(data, coff + 2))]
    rva = va - base
    for s, l, r in secs:
        if s <= rva and rva + size <= s + l:
            code = data[r + rva - s:r + rva - s + size]
            for ins in MD.disasm(code, va):
                print(f'{ins.address:08x}  {ins.mnemonic:8} {ins.op_str}')
            return
    print('va not in any section', file=sys.stderr)


def pe_disasm(path, va, size):
    data = Path(path).read_bytes()
    pe = u32(data, 0x3C)
    coff = pe + 4
    opt = coff + 20
    base = u32(data, opt + 28)
    hdr = opt + u16(data, coff + 16)
    secs = [(u32(data, h := hdr + 40 * i + 12),
             u32(data, h + 4), u32(data, h + 8))
            for i in range(u16(data, coff + 2))]
    rva = va - base
    if 0 <= rva:
        for s, l, r in secs:
            if s <= rva and rva + size <= s + l:
                code = data[r + rva - s:r + rva - s + size]
                for ins in MD.disasm(code, va):
                    print(f'{ins.address:08x}  {ins.mnemonic:8} {ins.op_str}')
                return
        print('va not in any section', file=sys.stderr)
        return
    # raw offset
    for s, l, r in secs:
        if r <= va and va + size <= r + l:
            code = data[va:va + size]
            for ins in MD.disasm(code, va):
                print(f'{ins.address:08x}  {ins.mnemonic:8} {ins.op_str}')
            return
    print('offset not in any section', file=sys.stderr)


def pe_sections(path):
    data = Path(path).read_bytes()
    pe = u32(data, 0x3C)
    coff = pe + 4
    opt = coff + 20
    hdr = opt + u16(data, coff + 16)
    for i in range(u16(data, coff + 2)):
        h = hdr + 40 * i
        name = data[h:h + 8].split(b'\0')[0].decode(errors='replace')
        print(f'{name:12} va={u32(data, h + 12):08x} vsz={u32(data, h + 8):06x} raw={u32(data, h + 20):08x} rsz={u32(data, h + 16):06x}')


if __name__ == '__main__':
    if sys.argv[1] == 'obj':
        disasm_obj(sys.argv[2], sys.argv[3])
    elif sys.argv[1] == 'pe':
        pe_disasm(sys.argv[2], int(sys.argv[3], 16),
                  int(sys.argv[4]) if len(sys.argv) > 4 else 0x200)
    elif sys.argv[1] == 'pesec':
        pe_sections(sys.argv[2])
    elif sys.argv[1] == 'ref':
        disasm_ref(int(sys.argv[2], 16), int(sys.argv[3]) if len(sys.argv) > 3 else 0x100)
