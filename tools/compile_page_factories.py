#!/usr/bin/env python3
"""Recover placement-new wizard page factories."""
import csv
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

OPERATOR_NEW = 0x1148a4d2
HELPER = 0x10eae120
CTOR = 0x10eb64f0
SIZED_DELETE = 0x1148a50e
VPTR_OFFSETS = (0x0, 0x10, 0x8c, 0xa8)
BODY_BYTES = 168


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
    compact = re.sub(r'\s+', ' ', text)
    if text.count('thunk_FUN_10eae120(') != 1 or text.count('thunk_FUN_10eb64f0(') != 1:
        return None
    if 'operator_new(' not in text or compact.count('::vftable') != 4:
        return None
    if 'return (undefined4 *)0x0;' not in text or 'return puVar1;' not in text:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [OPERATOR_NEW, HELPER, CTOR]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['8', '8']:
        return None
    if count(instructions, 'mov', 'edi, ecx') != 1 or count(instructions, 'mov', 'esi, eax') != 1:
        return None
    if count(instructions, 'test', 'esi, esi') != 1 or count(instructions, 'xor', 'eax, eax') != 1:
        return None
    if count(instructions, 'mov', 'eax, esi') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [ebp - 0x1c]') != 1:
        return None
    start = next(i.address for i in instructions if i.mnemonic == 'mov' and i.op_str == 'edi, ecx')
    pushes = [i for i in instructions if i.address > start and i.mnemonic == 'push']
    if sum(1 for i in pushes if i.op_str == 'edi') != 1:
        return None
    if sum(1 for i in pushes if i.op_str == 'dword ptr [ebp + 8]') != 1:
        return None
    if sum(1 for i in pushes if i.op_str == 'dword ptr [ebp + 0xc]') != 1:
        return None
    vptrs = [i for i in instructions if i.mnemonic == 'mov' and i.op_str.startswith('dword ptr [esi')]
    if len(vptrs) != 4:
        return None
    offsets = []
    for i in vptrs:
        match = re.match(r'dword ptr \[esi(?: \+ (0x[0-9a-f]+))?\], 0x([0-9a-f]+)', i.op_str)
        if match is None:
            return None
        offsets.append(int(match.group(1), 16) if match.group(1) else 0)
    if offsets != list(VPTR_OFFSETS):
        return None
    vtables = [int(i.op_str.rsplit('0x', 1)[1], 16) for i in vptrs]
    alloc = [i for i in pushes if i.op_str.startswith('0x') and int(i.op_str, 16) < 0x10000]
    if len(alloc) != 1:
        return None
    size = int(alloc[0].op_str, 16)
    if size < 0xac:
        return None
    klass = 'NativeWizardPage_FUN_' + entry
    source = (f'NativePageHelper helper;\n'
              f'return new {klass}(helper.thunk_FUN_10eae120(this, param_2, param_3));\n')
    body = (f'{klass} *NativePageFactory::FUN_{entry}(unsigned int param_2, unsigned int param_3) {{\n'
            + source + '}\n')
    return {**record, 'source': body, 'page_class': klass, 'vtables': vtables,
            'alloc_size': size}


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
        raise SystemExit('No page factory accepted')
    library = LIBRARY
    for va in sorted({va for r in candidates for va in r['vtables']}):
        library += f'extern unsigned int DAT_{va:08x};\n'
    library += 'void thunk_FUN_1148a50e(void *, unsigned int);\n'
    library += '__forceinline void *operator new(unsigned int size) { return operator_new(size); }\n'
    library += ('__forceinline void operator delete(void *p, unsigned int size)'
                ' { thunk_FUN_1148a50e(p, size); }\n'
                'struct NativePageHelper { '
                'unsigned int thunk_FUN_10eae120(void *owner, unsigned int a, unsigned int b); };\n')
    for r in candidates:
        klass = r['page_class']
        v0, v1, v2, v3 = r['vtables']
        tail = r['alloc_size'] - 0xac
        library += (f'struct {klass} {{\nvoid *v0; char p0[12]; void *v1; char p1[120]; '
                    f'void *v2; char p2[24]; void *v3; char tail[{tail}];\n'
                    f'void thunk_FUN_10eb64f0(unsigned int);\n'
                    f'__forceinline {klass}(unsigned int arg) {{\n'
                    f'thunk_FUN_10eb64f0(arg);\n'
                    f'v0 = &DAT_{v0:08x}; v1 = &DAT_{v1:08x}; v2 = &DAT_{v2:08x}; v3 = &DAT_{v3:08x};\n}};\n}};\n')
    library += ('struct NativePageFactory { ' +
                ''.join(f"{r['page_class']} *FUN_{r['entry']}(unsigned int, unsigned int); "
                        for r in candidates) + '};\n')
    candidates = [{**r, 'abi_declarations': {'page_factory_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('page_factories', candidates, evidence, [])


if __name__ == '__main__':
    main()
