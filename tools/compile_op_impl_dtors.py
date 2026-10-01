#!/usr/bin/env python3
"""Recover SCOpImpl multi-base destructors with inlined member teardown."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from compile_op_impl_ctors import thunk_target
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 260
CALL_TUPLE = (0x101a4bf0, 0x101a4bf0, 0x101ba0d0, 0x11240850)
VTABLE_COUNT = 8
ZERO_OFFSETS = [0xc, 0x10, 0x28, 0x2c]
ZERO_STORE_COUNT = 8


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if compact.count('SCStr::int_release') != 2 or compact.count('g_lSCObjCount = g_lSCObjCount + -1') != 2:
        return None
    if 'thunk_FUN_101ba0d0' not in text or 'thunk_FUN_11240850' not in text:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != list(CALL_TUPLE):
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    vtables = [int(i.op_str.rsplit('0x', 1)[1], 16) for i in instructions
               if i.mnemonic == 'mov'
               and re.match(r'dword ptr \[(?:esi|edi|ebx|ecx)(?: \+ (?:0x[0-9a-f]+|[0-9]+))?\], 0x[0-9a-f]+', i.op_str)
               and int(i.op_str.rsplit('0x', 1)[1], 16) > 0x10000]
    if len(vtables) != VTABLE_COUNT:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'dec'
           and i.op_str == 'dword ptr [0x121a0e68]') != 2:
        return None
    if count(instructions, 'mov', 'ecx, dword ptr [edi + 0x10]') != 2:
        return None
    if count(instructions, 'call', 'dword ptr [eax + 8]') != 2:
        return None
    if count(instructions, 'lea', 'ecx, [edi + 0x2c]') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [edi + 0x28]') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [edi + 0x14]') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [edi + 8]') != 1:
        return None
    if count(instructions, 'cmp', 'dword ptr [edi + 0xc], 0') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'je') != 3:
        return None
    klass = 'NativeOpDtor_FUN_' + entry
    v2, v3, v30a, v30b, v5, v1, v0a, scobj = vtables
    if v30b != scobj:
        return None
    source = (
        f'{klass}::~{klass}() {{\n'
        f'v0 = (void *)&DAT_{v2:08x};\n'
        f'm8.vptr = (void *)&DAT_{v3:08x};\n'
        f'if (fc.rep != 0) {{\n'
        f'  void *p = fc.next;\n'
        f'  if (p != 0) {{ fc.rep = 0; fc.next = 0; ((NativeOpDtorIface *)p)->slot8(); }}\n'
        f'  fc.rep = 0; fc.next = 0;\n'
        f'}}\n'
        f'v30 = (void *)&DAT_{v30a:08x};\n'
        f'g_lSCObjCount--;\n'
        f'v30 = (void *)&DAT_{v30b:08x};\n'
        f'}}\n')
    return {**record, 'source': source, 'op_class': klass,
            'derived_vtables': (v2, v3), 'vtables': vtables,
            'm14_vtable': f'{v5:08x}', 'm8_vtable': f'{v1:08x}',
            'base_vtable': f'{v0a:08x}', 'scobj_vtable': f'{scobj:08x}'}


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
        raise SystemExit('No op-impl destructor accepted')
    library = LIBRARY
    for va in sorted({va for r in candidates for va in r['vtables']}):
        library += f'extern unsigned int DAT_{va:08x};\n'
    library += ('extern unsigned int g_lSCObjCount;\n'
                'struct NativeOpDtorIface { virtual void slot0(); virtual void slot4(); '
                'virtual void slot8(); };\n')
    for r in candidates:
        klass = r['op_class']
        e = r['entry']
        library += (
            f'struct NativeOpDS8_{e} {{ void *vptr; void thunk_FUN_11240850();\n'
            f'__forceinline ~NativeOpDS8_{e}() {{ vptr = (void *)&DAT_{r["m8_vtable"]}; '
            f'thunk_FUN_11240850(); }} }};\n'
            f'struct NativeOpDC_{e} {{ void *rep; void *next;\n'
            f'__forceinline ~NativeOpDC_{e}() {{ void *p = next; if (p != 0) {{ rep = 0; '
            f'next = 0; ((NativeOpDtorIface *)p)->slot8(); }} }} }};\n'
            f'struct NativeOpD14_{e} {{ void *vptr; void *f4; void *f8; void thunk_FUN_101ba0d0();\n'
            f'__forceinline ~NativeOpD14_{e}() {{ vptr = (void *)&DAT_{r["m14_vtable"]}; '
            f'thunk_FUN_101ba0d0(); }} }};\n'
            f'struct NativeOpDStr_{e} {{ void *rep; void thunk_FUN_101a4bf0();\n'
            f'__forceinline ~NativeOpDStr_{e}() {{ thunk_FUN_101a4bf0(); rep = 0; }} }};\n'
            f'struct NativeOpDBase_{e} {{ void *v0; void *f4;\n'
            f'__forceinline ~NativeOpDBase_{e}() {{ v0 = (void *)&DAT_{r["base_vtable"]}; '
            f'g_lSCObjCount--; v0 = (void *)&DAT_{r["scobj_vtable"]}; }} }};\n'
            f'struct {klass} : NativeOpDBase_{e} {{\n'
            f'NativeOpDS8_{e} m8; NativeOpDC_{e} fc; NativeOpD14_{e} m14;\n'
            f'void *f20; unsigned short f24; NativeOpDStr_{e} s28; NativeOpDStr_{e} s2c;\n'
            f'void *v30; void *f34; unsigned long long f38; void *f40; void *f44;\n'
            f'~{klass}();\n}};\n')
    candidates = [{**r, 'abi_declarations': {'op_impl_dtor_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('op_impl_dtors', candidates, evidence, [])


if __name__ == '__main__':
    main()
