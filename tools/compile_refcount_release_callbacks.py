#!/usr/bin/env python3
"""Recover refcount-release callbacks with an RAII guard and vtable teardown."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

GUARD_CTOR = 0x101b9190
DECREMENT = 0x1123fcd0
UNLOCK = 0x101b9240
GUARD_DTOR = 0x101b91d0
BODY_BYTES = 123


def thunk_target(read, va):
    seen = set()
    while va not in seen:
        seen.add(va)
        code = read(va, 5)
        if len(code) != 5 or code[0] != 0xe9:
            return va
        va = (va + 5 + struct.unpack_from('<i', code, 1)[0]) & 0xffffffff
    raise ValueError('Cyclic linker jump')


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if text.count('thunk_FUN_101b9190(') != 1 or text.count('SCThreadSafeDec(') != 1:
        return None
    if text.count('thunk_FUN_101b9240(') != 1 or text.count('thunk_FUN_101b91d0(') != 1:
        return None
    if text.count('(**(code **)(*param_1 + 0x10))(1);') != 1:
        return None
    if text.count('param_1 != (int *)0x0') != 1:
        return None
    if text.count('return iVar2;') != 1:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [GUARD_CTOR, DECREMENT, UNLOCK, GUARD_DTOR]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    if count(instructions, 'mov', 'esi, ecx') != 1 or count(instructions, 'mov', 'edi, eax') != 1:
        return None
    if count(instructions, 'mov', 'eax, edi') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [ebp - 0x14]') != 3:
        return None
    if count(instructions, 'lea', 'eax, [esi + 4]') != 1:
        return None
    if count(instructions, 'test', 'edi, edi') != 1 or count(instructions, 'test', 'esi, esi') != 1:
        return None
    if count(instructions, 'mov', 'edx, dword ptr [esi]') != 1:
        return None
    if count(instructions, 'call', 'dword ptr [edx + 0x10]') != 1:
        return None
    start = next(i.address for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, ecx')
    pushes = [i.op_str for i in instructions if i.address > start and i.mnemonic == 'push']
    if pushes != ['esi', 'eax', '1']:
        return None
    source = (f'int NativeRefCountedHost::FUN_{entry}() {{\n'
              f'NativeGuard guard((int *)this);\n'
              f'int r = SCThreadSafeDec(&this->refcount);\n'
              f'if (r == 0) {{\n'
              f'guard.thunk_FUN_101b9240();\n'
              f'if (this != 0) ((NativeRefVtable *)this)->slot4(1);\n}}\n'
              f'return r;\n}}\n')
    return {**record, 'source': source}


def main():
    index = ROOT/'analysis/compiled-cpp-empty-tree-arguments-none-nontrivial-homes-ordered/compiled-index.tsv'
    proof = json.loads((ROOT/'analysis/recovery-msvc-tree-barrier-atomic-arity/summary.json').read_text())['variants'][0]
    if proof['exact_functions'] != 90 or hashlib.sha256(index.read_bytes()).hexdigest() != proof['index_sha256']:
        raise SystemExit('External event constructors lack the pinned ninety-function proof')
    reference = DLL.read_bytes()
    base, sections = section_map(reference)
    candidates = []
    for export in sorted(ROOT.glob('analysis/bulk*/**/*.jsonl')):
        for line in export.open():
            try:
                record = json.loads(line)
            except json.JSONDecodeError:
                if not line.endswith('\n'):
                    break
                raise
            if record.get('body_bytes') != BODY_BYTES:
                continue
            candidate = lower(record, reference, base, sections)
            if candidate is not None:
                candidates.append(candidate)
    if not candidates:
        raise SystemExit('No refcount release callback accepted')
    library = LIBRARY
    library += ('int __cdecl SCThreadSafeDec(int *);\n'
                'struct NativeRefVtable { virtual void r0(); virtual void r1(); '
                'virtual void r2(); virtual void r3(); virtual void slot4(int); };\n'
                'struct NativeGuard {\n'
                'void *owner;\n'
                'void thunk_FUN_101b9190(int *);\n'
                'void thunk_FUN_101b9240();\n'
                'void thunk_FUN_101b91d0();\n'
                '__forceinline NativeGuard(int *p) { thunk_FUN_101b9190(p); }\n'
                '__forceinline ~NativeGuard() { thunk_FUN_101b91d0(); }\n};\n')
    library += ('struct NativeRefCountedHost { void *vtbl; int refcount; ' +
                ''.join(f"int FUN_{r['entry']}(); " for r in candidates) + '};\n')
    candidates = [{**r, 'abi_declarations': {'refcount_release_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('refcount_release_callbacks', candidates, evidence, [])


if __name__ == '__main__':
    main()
