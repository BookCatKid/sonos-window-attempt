#!/usr/bin/env python3
"""Mechanically recover C records for reference functions too small for the
Ghidra export to have produced decompilation for.

The missing population is dominated by MSVC boilerplate: `this`-adjustor
thunks (``lea ecx,[ecx-N]; jmp impl``), import/IAT forwarders, trivial field
getters and empty bodies. Each disassembles to a fixed instruction pattern
that maps to a short Ghidra-style C body, which compile_bulk_mass.py then
lowers into generated source like any other record.

Usage: recover_tiny_functions.py <dll> <inventory.tsv> <out.jsonl>
--have <jsonl>... marks entries already recovered.
"""

import argparse
import collections
import glob
import json
import re
import struct

import capstone


def pe_sections(blob):
    e_lfanew = struct.unpack('<I', blob[0x3c:0x40])[0]
    opt = e_lfanew + 24
    szopt = struct.unpack('<H', blob[e_lfanew + 20:e_lfanew + 22])[0]
    nsec = struct.unpack('<H', blob[e_lfanew + 6:e_lfanew + 8])[0]
    sec = opt + szopt
    out = {}
    for i in range(nsec):
        name = blob[sec + i * 40:sec + i * 40 + 8].rstrip(b'\0').decode('latin1')
        vs, va, rs, rp = struct.unpack('<IIII', blob[sec + i * 40 + 8:
                                                    sec + i * 40 + 24])
        out[name] = (va, vs, rs, rp)
    return out


def rec(entry, sig, body):
    src = '\n' + sig + '\n\n{\n' + body + '}\n\n'
    return {'target': entry, 'entry': entry, 'name': 'FUN_' + entry,
            'body_bytes': 0, 'decompiled_c': src, 'decompiled': True,
            'status': 'CREATED-TINY'}


def emit(insns, entry, want_name):
    """Map a decoded instruction list to a Ghidra-style record or None."""
    ops = [(i.mnemonic, i.op_str) for i in insns]
    n = len(ops)

    def mem_disp(op):  # [reg + K] -> (reg, K)
        m = re.fullmatch(r'\[(\w+) ([+-]) (0x[0-9a-f]+|\d+)\]', op)
        if not m:
            m = re.fullmatch(r'\[(\w+)\]', op)
            return (m.group(1), 0) if m else None
        k = int(m.group(3), 0)
        return m.group(1), -k if m.group(2) == '-' else k

    # ret / ret imm
    if n == 1 and ops[0][0] == 'ret':
        return rec(entry, 'void FUN_%s(void)' % entry, '  return;\n')

    # mov eax, ecx ; ret  (this getter)
    if n == 2 and ops[0] == ('mov', 'eax, ecx') and ops[1][0] == 'ret':
        return rec(entry, 'undefined4 __thiscall FUN_%s(int param_1)'
                          % entry,
                   '  return param_1;\n')

    # xor al, al / xor eax, eax ; ret
    if n == 2 and ops[0][0] == 'xor' and ops[0][1].replace(' ', '') in (
            'al,al', 'eax,eax') and ops[1][0] == 'ret':
        ty = 'undefined1' if 'al' in ops[0][1] else 'undefined4'
        return rec(entry, '%s FUN_%s(void)' % (ty, entry), '  return 0;\n')

    # mov eax/al, [ecx+K] ; ret   (field getter)
    if n == 2 and ops[0][0] == 'mov' and ops[1][0] == 'ret':
        d, s = ops[0][1].split(', ', 1)
        if d in ('eax', 'al'):
            md = mem_disp(s)
            if md and md[0] == 'ecx':
                ty = 'undefined4' if d == 'eax' else 'undefined1'
                return rec(entry,
                           '%s __thiscall FUN_%s(int param_1)' % (ty, entry),
                           '  return *(%s *)(param_1 + %d);\n' % (ty, md[1]))

    # cmp dword [ecx+K], imm ; setcc al ; ret
    if n == 3 and ops[0][0] == 'cmp' and ops[0][1].startswith(
            'dword ptr [ecx') and ops[1][0].startswith('set') \
            and ops[2][0] == 'ret':
        mem, imm = ops[0][1].split(', ', 1)
        md = mem_disp(mem[len('dword ptr '):])
        op = {'sete': '==', 'setne': '!=', 'seta': '>', 'setae': '>=',
              'setb': '<', 'setbe': '<=', 'setg': '>', 'setge': '>=',
              'setl': '<', 'setle': '<=', 'sets': '<', 'setns': '>='}.get(
                  ops[1][0].split(' ', 1)[0])
        if md and op:
            return rec(entry,
                       'undefined1 __thiscall FUN_%s(int param_1)' % entry,
                       '  return *(int *)(param_1 + %d) %s %s;\n'
                       % (md[1], op, imm))

    # lea ecx, [ecx - K] ; jmp T   /   sub ecx, K ; jmp T
    if n == 2 and ops[0][0] == 'lea' and ops[0][1].startswith('ecx, [ecx') \
            and ops[1][0] == 'jmp':
        md = mem_disp(ops[0][1][len('ecx, '):])
        t = int(ops[1][1], 16)
        if md:
            return rec(entry,
                       'void __thiscall FUN_%s(int param_1)' % entry,
                       '  FUN_%08x(param_1 + %d);\n' % (t, md[1]))
    if n == 2 and ops[0][0] in ('sub', 'add') and \
            ops[0][1].startswith('ecx, ') and ops[1][0] == 'jmp':
        try:
            k = int(ops[0][1].split(', ')[1], 16)
        except ValueError:
            return None
        if ops[0][0] == 'sub':
            k = -k
        t = int(ops[1][1], 16)
        return rec(entry, 'void __thiscall FUN_%s(int param_1)' % entry,
                   '  FUN_%08x(param_1 + %d);\n' % (t, k))

    # mov ecx, [esp+4] ; (add|sub ecx, K) ; jmp T   (stack-param adjustor)
    if n in (2, 3) and ops[0] == ('mov', 'ecx, dword ptr [esp + 4]') \
            and ops[-1][0] == 'jmp':
        k = 0
        if n == 3:
            if ops[1][0] not in ('add', 'sub') or \
                    not ops[1][1].startswith('ecx, '):
                return None
            try:
                k = int(ops[1][1].split(', ')[1], 16)
            except ValueError:
                return None
            if ops[1][0] == 'sub':
                k = -k
        t = int(ops[-1][1], 16)
        return rec(entry, 'void FUN_%s(int param_1)' % entry,
                   '  FUN_%08x(param_1 + %d);\n' % (t, k))

    # jmp T  (pure thunk)
    if n == 1 and ops[0][0] == 'jmp' and re.fullmatch(
            r'0x[0-9a-f]+', ops[0][1]):
        t = int(ops[0][1], 16)
        return rec(entry, 'void FUN_%s(void)' % entry,
                   '  FUN_%08x();\n' % t)

    # mov ecx, [esp+4] ; mov eax, [ecx] ; call [eax+K] ; ret 4 (vcall fwd)
    if n == 4 and ops[0] == ('mov', 'ecx, dword ptr [esp + 4]') \
            and ops[1] == ('mov', 'eax, dword ptr [ecx]') \
            and ops[2][0] == 'call' and ops[3][0] == 'ret':
        md = mem_disp(ops[2][1].replace('dword ptr ', ''))
        if md and md[0] == 'eax':
            return rec(entry, 'void FUN_%s(int param_1)' % entry,
                       '  (**(code **)(*(int *)param_1 + %d))();\n' % md[1])

    # mov ecx, [esp+4] ; mov eax, [ecx+K] ; jmp/call [eax+J] ; ret N
    if n == 4 and ops[0] == ('mov', 'ecx, dword ptr [esp + 4]') \
            and ops[1][0] == 'mov' and ops[1][1].startswith('eax, dword ptr [ecx') \
            and ops[2][0] in ('call', 'jmp') and ops[3][0] == 'ret':
        md = mem_disp(ops[1][1].replace('eax, dword ptr ', ''))
        if md and md[0] == 'ecx':
            return rec(entry, 'void FUN_%s(int param_1)' % entry,
                       '  (**(code **)(*(int *)(param_1 + %d) + %d))();\n'
                       % (md[1], int(ops[2][1].split('+')[1].strip(' ]'), 16)
                          if '+' in ops[2][1] else 0))

    # push esi ; mov esi, ecx ; push [esi] ; call [IAT] ; mov [esi], eax ;
    # pop esi ; ret      ->   *this = IAT(*this)
    if n == 7 and ops[0] == ('push', 'esi') and ops[1] == ('mov', 'esi, ecx') \
            and ops[2][0] == 'push' and ops[3][0] == 'call' \
            and ops[4] == ('mov', 'dword ptr [esi], eax') \
            and ops[5] == ('pop', 'esi') and ops[6][0] == 'ret':
        slot = ops[3][1].replace('dword ptr ', '').strip('[]')
        try:
            va = int(slot, 16)
            return rec(entry,
                       'undefined4 __thiscall FUN_%s(int param_1)' % entry,
                       '  *(undefined4 *)param_1 = (*(code *)DAT_%08x)'
                       '(*(undefined4 *)param_1);\n  return *(undefined4 *)'
                       'param_1;\n' % va)
        except ValueError:
            return None

    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('dll')
    ap.add_argument('inventory')
    ap.add_argument('out')
    ap.add_argument('--have', nargs='*', default=[])
    ap.add_argument('--max-bytes', type=int, default=64)
    args = ap.parse_args()

    blob = open(args.dll, 'rb').read()
    secs = pe_sections(blob)
    tva, tvs, trs, trp = secs['.text']
    imgbase = 0x10000000

    def raw(va, n):
        rva = va - imgbase
        off = trp + (rva - tva)
        if rva < tva or rva >= tva + tvs:
            return b''
        return blob[off:off + n]

    have = set()
    for pat in args.have:
        for p in glob.glob(pat):
            for line in open(p):
                try:
                    j = json.loads(line)
                except ValueError:
                    continue
                if j.get('decompiled_c'):
                    have.add(str(j.get('entry')))

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True

    out = open(args.out, 'w')
    unmatched = collections.Counter()
    n_emit = n_seen = 0
    for line in open(args.inventory):
        f = line.rstrip('\n').split('\t')
        if len(f) < 5 or f[0] == 'entry' or f[0] in have:
            continue
        try:
            nb = int(f[2] or 0)
        except ValueError:
            continue
        if not (0 < nb <= args.max_bytes):
            continue
        va = int(f[0], 16)
        code = raw(va, nb)
        if not code:
            unmatched['out-of-text'] += 1
            continue
        insns = list(md.disasm(code, va))
        n_seen += 1
        r = emit(insns, f[0], f[1])
        if r is None:
            unmatched[';'.join(i.mnemonic for i in insns)] += 1
            continue
        r['body_bytes'] = nb
        out.write(json.dumps(r) + '\n')
        n_emit += 1
    print(f'{n_seen} missing fns examined, {n_emit} records emitted')
    for s, c in unmatched.most_common(20):
        print(f'{c:7d}  {s[:100]}')


if __name__ == '__main__':
    main()
