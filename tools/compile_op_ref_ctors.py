#!/usr/bin/env python3
"""Recover RControlAIOpRef-style two-vtable reference member constructors."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from compile_op_impl_ctors import thunk_target
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 114
ADDREF = 0x1123fce0


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if 'param_1[1] = param_2;' not in text or 'param_2 != 0' not in re.sub(r'\s+', ' ', text):
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [ADDREF]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['4']:
        return None
    vtables = [int(i.op_str.rsplit('0x', 1)[1], 16) for i in instructions
               if i.mnemonic == 'mov' and i.op_str.startswith('dword ptr [esi], 0x')]
    if len(vtables) != 2:
        return None
    if count(instructions, 'lea', 'eax, [esi + 4]') != 1:
        return None
    lea = next((j for j, i in enumerate(instructions)
                if i.mnemonic == 'lea' and i.op_str == 'eax, [ecx + 4]'), -1)
    if lea < 0:
        return None
    if [i.mnemonic for i in instructions[lea + 1:lea + 3]] != ['push', 'call']:
        return None
    if instructions[lea + 1].op_str != 'eax':
        return None
    if count(instructions, 'mov', 'dword ptr [esi + 8], 0') != 1:
        return None
    if count(instructions, 'mov', 'ecx, dword ptr [ebp + 8]') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [eax], ecx') != 1:
        return None
    if count(instructions, 'add', 'esp, 4') != 1:
        return None
    if count(instructions, 'test', 'ecx, ecx') != 1 or sum(1 for i in instructions if i.mnemonic == 'je') != 1:
        return None
    if count(instructions, 'mov', 'eax, esi') != 1:
        return None
    va, vb = vtables
    klass = 'NativeOpRefCtor_FUN_' + entry
    source = (
        f'{klass}::{klass}(void *param_2)\n'
        f'    : m4(param_2) {{\n'
        f'f8 = 0;\n'
        f'vptr = (void *)&DAT_{vb:08x};\n'
        f'}}\n')
    return {**record, 'source': source, 'op_class': klass,
            'first_vtable': f'{va:08x}'}


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
        raise SystemExit('No op-ref constructor accepted')
    library = LIBRARY
    for va in sorted({va for r in candidates for va in
                      re.findall(r'DAT_([0-9a-f]{8})', r['source'] + ' DAT_' + r['first_vtable'])}):
        library += f'extern unsigned int DAT_{va};\n'
    library += 'void __cdecl thunk_FUN_1123fce0(void *);\n'
    library += 'int __cdecl thunk_FUN_1123fcd0(void *);\n'
    # m4 is a nested tracked member: rep is an implicit-default-init'd
    # sub-object whose p store runs inside m4's armed construction scope,
    # producing MSVC's construction-this repoint + bare-CTL funclet
    library += ('struct NativeOpRefSub { void *p; ~NativeOpRefSub(); };\n'
                'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
                'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep.p = p;\n'
                'if (p != 0) thunk_FUN_1123fce0((char *)p + 4); }\n'
                '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
                'struct NativeOpRefTarget { virtual ~NativeOpRefTarget(); };\n'
                'NativeOpRefSub::~NativeOpRefSub() {\n'
                'void *v = p;\n'
                'if (v != 0) {\n'
                'if (thunk_FUN_1123fcd0((char *)v + 4) == 0)\n'
                'delete (NativeOpRefTarget *)v;\n'
                '}\n'
                '}\n')
    for r in candidates:
        klass = r['op_class']
        library += (f'struct NativeOpRefBase_FUN_{r["entry"]} {{ void *vptr;\n'
                    f'__forceinline NativeOpRefBase_FUN_{r["entry"]}() {{ vptr = (void *)&DAT_{r["first_vtable"]}; }} }};\n'
                    f'struct {klass} : NativeOpRefBase_FUN_{r["entry"]} {{\n'
                    f'NativeOpRefMember_thunk_FUN_101ba1b0 m4;\n'
                    f'void *f8;\n'
                    f'{klass}(void *param_2); }};\n')
    candidates = [{**r, 'abi_declarations': {'op_ref_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = [('??1NativeOpRefSub@@QAE@XZ', r['entry'], 0) for r in candidates]
    emit_variant('op_ref_ctors', candidates, evidence, roles)


if __name__ == '__main__':
    main()
