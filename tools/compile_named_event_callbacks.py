#!/usr/bin/env python3
"""Recover callbacks that set a named SCStr property via vtable then dispatch."""
import csv
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

SCSTR_CTOR = 0x101a4890
SCSTR_DTOR = 0x101a4bf0
DISPATCH = 0x10df15a0
DESTRUCTOR = 0x10def0d0
SLOT = '0x28'
BODY_BYTES = 149


def thunk_target(read, va):
    seen = set()
    while va not in seen:
        seen.add(va)
        code = read(va, 5)
        if len(code) != 5 or code[0] != 0xe9:
            return va
        va = (va + 5 + struct.unpack_from('<i', code, 1)[0]) & 0xffffffff
    raise ValueError('Cyclic linker jump')


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if text.count('SCStr::int_allocRep(') != 1 or text.count('SCStr::int_release(') != 1:
        return None
    if text.count('thunk_FUN_10df15a0(') != 1 or text.count('thunk_FUN_10def0d0()') != 1:
        return None
    literal = re.search(r'SCStr::int_allocRep\([^,]+,"((?:[^"\\]|\\.)*)"\)', text)
    vcall = re.search(r'\(\*\*\(code \*\*\)\(\*\*\(int \*\*\)\(\w+ \+ 8\) \+ 0x28\)\)\(&\w+,param_1\);', text)
    if literal is None or vcall is None:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if len(calls) != 5 or calls[1] != SCSTR_CTOR or calls[2] != SCSTR_DTOR:
        return None
    if calls[3] != DISPATCH or calls[4] != DESTRUCTOR:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['4']:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'edi, ecx') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, eax') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'ecx, dword ptr [esi + 8]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'call' and i.op_str == 'dword ptr [edx + 0x28]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'push' and i.op_str == 'dword ptr [ebp + 8]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x28]') != 2:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x10]') != 2:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'ecx, [edi - 0x10]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'dword ptr [ebp - 0x10], 0') != 1:
        return None
    start = next(i.address for i in instructions if i.mnemonic == 'mov' and i.op_str == 'edi, ecx')
    pushes = [i for i in instructions if i.address > start and i.mnemonic == 'push' and i.op_str.startswith('0x')]
    if len(pushes) != 1:
        return None
    name_va = int(pushes[0].op_str, 16)
    decoded = literal.group(1).encode('utf-8').decode('unicode_escape').encode('latin1') + b'\0'
    if function_bytes(reference, name_va, len(decoded), base, sections) != decoded:
        return None
    constructor = calls[0]
    event = 'NativeNamedEvent_FUN_' + f'{constructor:08x}'
    source = (f'void NativeNamedEventCallback::FUN_{entry}(unsigned int arg) {{\n'
              f'{event} event;\n'
              f'{event} *pe = &event;\n'
              f'((NativeEventProperties *)pe->representation.properties)'
              f'->slot(RecoveredString_FUN_1008c50b("{literal.group(1)}"), arg);\n'
              f'((NativeEventDispatcher *)((char *)this - 0x10))->thunk_FUN_10df15a0(pe);\n}}\n')
    return {**record, 'source': source, 'event_class': event, 'constructor': f'{constructor:08x}'}


def main():
    index = ROOT/'analysis/compiled-cpp-empty-tree-arguments-none-nontrivial-homes-ordered/compiled-index.tsv'
    proof = json.loads((ROOT/'analysis/recovery-msvc-tree-barrier-atomic-arity/summary.json').read_text())['variants'][0]
    if proof['exact_functions'] != 90 or hashlib.sha256(index.read_bytes()).hexdigest() != proof['index_sha256']:
        raise SystemExit('External event constructors lack the pinned ninety-function proof')
    ctors = {int(r['entry'], 16) for r in csv.DictReader(index.open(), delimiter='\t')}
    reference = DLL.read_bytes()
    base, sections = section_map(reference)
    call_pattern = re.compile(r'(?:thunk_)?FUN_([0-9a-f]{8})\(')
    exports = sorted(ROOT.glob('analysis/bulk*/**/*.jsonl')) + [
        ROOT/'analysis/thunk-recovery-full/recovered-targets.jsonl']
    candidates = []
    for export in exports:
        for line in export.open():
            try:
                record = json.loads(line)
            except json.JSONDecodeError:
                if not line.endswith('\n'):
                    break
                raise
            if record.get('body_bytes') != BODY_BYTES:
                continue
            text = record.get('decompiled_c', '')
            ctor_calls = {int(e, 16) for e in call_pattern.findall(text[text.find('{'):])} & ctors
            if len(ctor_calls) < 1:
                continue
            candidate = lower(record, reference, base, sections)
            if candidate is None:
                continue
            if int(candidate['constructor'], 16) not in ctor_calls:
                continue
            candidates.append(candidate)
    if not candidates:
        raise SystemExit('No named event callback accepted')
    classes = sorted({c['event_class'] for c in candidates})
    library = LIBRARY.replace('FactoryString', 'RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);', '~Event_thunk_FUN_10def0d0() noexcept;').replace(
        'int_release(); rep=0; }', 'int_release(); *(volatile unsigned int *)&rep=0; }')
    library += ''.join(f'struct {name} : Event_thunk_FUN_10def0d0 {{ {name}(); }};\n' for name in classes)
    library += 'struct RecoveredString_FUN_1008c50b;\n'
    library += ('struct NativeEventProperties { virtual void r0(); virtual void r1(); '
                'virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5(); '
                'virtual void r6(); virtual void r7(); virtual void r8(); virtual void r9(); '
                'virtual void slot(const RecoveredString_FUN_1008c50b &, unsigned int); };\n')
    library += 'struct NativeEventDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };\n'
    library += ('struct NativeNamedEventCallback { ' +
                ''.join(f"void FUN_{r['entry']}(unsigned int); " for r in candidates) + '};\n')
    candidates = [{**r, 'abi_declarations': {'named_event_callback_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = []
    for r in candidates:
        roles.append(('??1' + r['event_class'] + '@@QAE@XZ', r['entry'], 0))
        roles.append(('??1RecoveredString_FUN_1008c50b@@QAE@XZ', r['entry'], 1))
    emit_variant('named_event_callbacks', candidates, evidence, roles)


if __name__ == '__main__':
    main()
