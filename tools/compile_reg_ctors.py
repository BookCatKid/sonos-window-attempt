#!/usr/bin/env python3
"""Recover event-registration constructors (named string + FactoryTree dispatch)."""
import hashlib
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from compile_op_impl_ctors import thunk_target
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 160
ALLOC_REP = 0x101a4890
OPERATOR_NEW = 0x1148a4d2
DISPATCH = 0x10dee620
RELEASE = 0x101a4bf0


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def c_literal(data):
    out = []
    for b in data:
        if b == 0x5c:
            out.append('\\\\')
        elif b == 0x22:
            out.append('\\"')
        elif 0x20 <= b < 0x7f:
            out.append(chr(b))
        else:
            out.append(f'\\x{b:02x}')
    return ''.join(out)


def read_cstring(read, va):
    data = bytearray()
    while True:
        chunk = read(va + len(data), 16)
        if not chunk:
            return None
        end = chunk.find(b'\0')
        if end >= 0:
            data += chunk[:end]
            return bytes(data)
        data += chunk
        if len(data) > 512:
            return None


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if ('thunk_FUN_10dee620' not in compact or 'int_allocRep' not in compact
            or 'operator_new' not in compact or 'int_release' not in compact):
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [ALLOC_REP, OPERATOR_NEW, DISPATCH, RELEASE]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    alloc = next((j for j, i in enumerate(instructions)
                  if i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x10]'), -1)
    if alloc < 1 or instructions[alloc - 1].mnemonic != 'push' \
            or not instructions[alloc - 1].op_str.startswith('0x'):
        return None
    name_va = int(instructions[alloc - 1].op_str, 16)
    name = read_cstring(read, name_va)
    if name is None or not name:
        return None
    if not all(0x20 <= b < 0x7f for b in name):
        return None
    dispatch = next(j for j, i in enumerate(instructions)
                    if i.mnemonic == 'call' and i.op_str.startswith('0x')
                    and thunk_target(read, int(i.op_str, 16)) == DISPATCH)
    tail = [i.op_str for i in instructions[max(0, dispatch - 6):dispatch]]
    pushes = [i for i in instructions[max(0, dispatch - 6):dispatch] if i.mnemonic == 'push']
    if [i.mnemonic for i in instructions[dispatch - 2:dispatch]] != ['push', 'push'] \
            or instructions[dispatch - 1].op_str != 'eax':
        return None
    imm_op = instructions[dispatch - 2].op_str
    if imm_op == 'eax':
        return None
    imm = int(imm_op, 0)
    if not 0 <= imm <= 0x1000:
        return None
    if count(instructions, 'sub', 'esp, 8') != 2:
        return None
    if count(instructions, 'mov', 'esi, esp') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi], 0') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi + 4], 0') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi], eax') != 1:
        return None
    if count(instructions, 'mov', 'edi, ecx') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 0x10], edi') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 0x14], esi') != 1:
        return None
    if count(instructions, 'mov', 'ecx, edi') != 1:
        return None
    if count(instructions, 'mov', 'eax, edi') != 1:
        return None
    if count(instructions, 'push', '0x1c') != 1:
        return None
    if count(instructions, 'push', '0') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [eax], eax') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [eax + 4], eax') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [eax + 8], eax') != 1:
        return None
    if count(instructions, 'mov', 'word ptr [eax + 0xc], 0x101') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 4], 0') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 4], 1') != 1:
        return None
    if count(instructions, 'lea', 'eax, [ebp - 0x10]') != 1:
        return None
    if count(instructions, 'lea', 'ecx, [ebp - 0x10]') != 2:
        return None
    if count(instructions, 'add', 'esp, 4') != 1:
        return None
    klass = 'NativeRegCtor_FUN_' + entry
    string = f'NativeRegStr_{entry}'
    source = (
        f'{klass}::{klass}() {{\n'
        f'{string} text{{(*(volatile unsigned int *)&text = (unsigned int)this, _ReadWriteBarrier(), (char *)&DAT_{name_va:08x})}};\n'
        f'((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, {imm}, 0, FactoryTree());\n'
        f'}}\n')
    return {**record, 'source': source, 'vclass': klass, 'string_class': string,
            'name_va': name_va}


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
        raise SystemExit('No registration constructor accepted')
    library = LIBRARY
    for va in sorted({r['name_va'] for r in candidates}):
        library += f'extern unsigned int DAT_{va:08x};\n'
    for r in candidates:
        klass = r['vclass']
        string = r['string_class']
        library += (f'struct {string} {{ unsigned int rep;\n'
                    f'  __forceinline {string}(const char *text) {{ ((SCStr *)this)->int_allocRep((char *)text); }}\n'
                    f'  ~{string}() noexcept {{ ((SCStr *)this)->int_release(); rep = 0; }} }};\n'
                    f'struct {klass} {{ {klass}(); }};\n')
    candidates = [{**r, 'abi_declarations': {'reg_ctor_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = [(f'??1{r["string_class"]}@@QAE@XZ', r['entry'], 0) for r in candidates]
    emit_variant('reg_ctors', candidates, evidence, roles)


if __name__ == '__main__':
    main()
