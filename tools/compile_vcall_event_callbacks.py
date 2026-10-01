#!/usr/bin/env python3
"""Recover event-dispatch vcall callbacks (this-8 receiver, guard locals)."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant, auxiliary_bindings, funclet_jump_target
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 232
SLOTS = ('dword ptr [eax + 0xc]', 'dword ptr [edx + 4]', 'dword ptr [eax + 0x18]',
         None, 'dword ptr [eax + 0x14]', 'dword ptr [eax + 8]', 'dword ptr [eax + 8]')


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
    if 'param_1 + -8' not in text or '(short)param_3' not in text:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    calls = [i for i in instructions if i.mnemonic == 'call']
    if any(not i.op_str.startswith('dword ptr') for i in calls):
        return None
    slots = [i.op_str for i in calls]
    if len(slots) != len(SLOTS):
        return None
    for got, want in zip(slots, SLOTS):
        if want is not None and got != want:
            return None
    m = re.match(r'dword ptr \[eax \+ (0x[0-9a-f]+)\]$', slots[3])
    if not m:
        return None
    slot = int(m.group(1), 16)
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['8']:
        return None
    if count(instructions, 'lea', 'ebx, [esi - 8]') != 1:
        return None
    if count(instructions, 'mov', 'esi, ecx') != 1:
        return None
    if count(instructions, 'mov', 'word ptr [esi + 0x1c], ax') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [esi + 0x28]') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi + 0x14], 0') != 1:
        return None
    if count(instructions, 'mov', 'ecx, dword ptr [esi + 4]') != 1:
        return None
    if count(instructions, 'mov', 'ecx, dword ptr [esi + 8]') != 1:
        return None
    if count(instructions, 'push', 'dword ptr [ebp + 0xc]') != 1:
        return None
    if count(instructions, 'push', 'dword ptr [ebp + 8]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov'
           and i.op_str in ('dword ptr [esi + 4], 0', 'dword ptr [esi + 8], 0')) != 4:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov'
           and i.op_str == 'eax, dword ptr [esi + 0x20]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov'
           and i.op_str == 'eax, dword ptr [esi + 0x24]') != 1:
        return None
    if count(instructions, 'mov', 'eax, dword ptr [ebp + 0xc]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'je') != 8:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'cmp'
           and i.op_str == 'byte ptr [eax], 0') != 2:
        return None
    if count(instructions, 'xor', 'edi, edi') != 1:
        return None
    klass = 'NativeVcallHost_FUN_' + entry
    source = (
        f'void {klass}::FUN_{entry}(unsigned int param_2, unsigned int param_3) {{\n'
        f'NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);\n'
        f'NativeVcallObj *piVar2 = 0;\n'
        f'if (piVar1 != 0) {{\n'
        f'  piVar2 = piVar1->vC();\n'
        f'  piVar2->v4();\n'
        f'}}\n'
        f'f1c = (unsigned short)param_3;\n'
        f'{{\n'
        f'NativeVcallPair pair = {{piVar1, piVar2}};\n'
        f'f14 = 0;\n'
        f'm28.v18();\n'
        f'if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {{\n'
        f'  piVar1->v{slot:x}();\n'
        f'}}\n'
        f'if (f4 != 0) {{\n'
        f'  f4->v14(param_2, param_3);\n'
        f'  NativeVcallObj *t = f8;\n'
        f'  if (t != 0) {{\n'
        f'    f4 = 0; f8 = 0;\n'
        f'    t->v8();\n'
        f'  }}\n'
        f'  f4 = 0; f8 = 0;\n'
        f'}}\n'
        f'}}\n'
        f'}}\n')
    return {**record, 'source': source, 'vclass': klass}


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
        raise SystemExit('No vcall event callback accepted')
    library = LIBRARY
    library += ('struct NativeVcallObj { virtual void *v0(); virtual void v4(); virtual void v8(); };\n'
                'struct NativeVcallTwoArg { virtual void *v0(); virtual void *v4(); virtual void *v8();\n'
                'virtual void *vC(); virtual void *v10(); virtual void v14(unsigned int, unsigned int); };\n'
                'struct NativeVcallThis8 { virtual void *v0(); virtual void *v4(); virtual void *v8();\n'
                'virtual NativeVcallObj *vC();\n')
    for slot in range(0x10, 0x64, 4):
        library += f'virtual void *v{slot:x}();\n'
    library += ('};\n'
                'struct NativeVcallM28 { virtual void *v0(); virtual void *v4(); virtual void *v8();\n'
                'virtual void *vC(); virtual void *v10(); virtual void *v14(); virtual void v18(); };\n')
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    for r in candidates:
        resolved = funclet_jump_target(int(evidence[r['entry']]['metadata']['address'], 16), 0, read)
        if resolved is None:
            raise SystemExit(f'No pair-destructor funclet for {r["entry"]}')
        r['pair_class'] = f'NativeVcallPair_{resolved[0]:08x}'
        r['source'] = r['source'].replace('NativeVcallPair', r['pair_class'])
    for pair in sorted({r['pair_class'] for r in candidates}):
        library += (f'struct {pair} {{ NativeVcallThis8 *rep; NativeVcallObj *next;\n'
                    f'  __forceinline ~{pair}() noexcept {{\n'
                    f'    NativeVcallObj *t = next;\n'
                    f'    if (t != 0) {{ rep = 0; next = 0; t->v8(); }} }}\n'
                    f'}};\n')
    for r in candidates:
        klass = r['vclass']
        library += (f'struct {klass} {{\n'
                    f'void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;\n'
                    f'void *fc; void *f10; void *f14; void *f18;\n'
                    f'unsigned short f1c; unsigned short f1e; char *f20; char *f24;\n'
                    f'NativeVcallM28 m28;\n'
                    f'void FUN_{r["entry"]}(unsigned int param_2, unsigned int param_3);\n}};\n')
    candidates = [{**r, 'abi_declarations': {'vcall_library': library}} for r in candidates]
    roles = [(f'??1{r["pair_class"]}@@QAE@XZ', r['entry'], 0) for r in candidates]
    emit_variant('vcall_event_callbacks', candidates, evidence, roles)


if __name__ == '__main__':
    main()
