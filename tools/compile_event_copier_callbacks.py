#!/usr/bin/env python3
"""Recover return-this event copiers: factory, aggregate, event, member copy."""
import csv
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

AGGREGATE = 0x10deee60
COPY = 0x10defac0
EVENT_DTOR = 0x10def0d0
AGGREGATE_DTOR = 0x105a0530
BODY_BYTES = 137


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
    if '__fastcall' not in text or 'return param_1' not in text:
        return None
    if text.count('thunk_FUN_10def0d0()') != 2:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if len(calls) != 7 or calls[1] != AGGREGATE or calls[3] != COPY:
        return None
    if calls[4] != EVENT_DTOR or calls[5] != AGGREGATE_DTOR or calls[6] != EVENT_DTOR:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, ecx') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'eax, esi') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'dword ptr [ebp - 0x10], esi') != 1:
        return None
    leas = [i.op_str for i in instructions if i.mnemonic == 'lea' and i.op_str.startswith('ecx, [ebp')]
    if leas != ['ecx, [ebp - 0x40]', 'ecx, [ebp - 0x5c]', 'ecx, [ebp - 0x28]',
                'ecx, [ebp - 0x5c]', 'ecx, [ebp - 0x28]', 'ecx, [ebp - 0x5c]', 'ecx, [ebp - 0x40]']:
        return None
    source_class = 'NativeCopierSource_FUN_' + f'{calls[0]:08x}'
    ctor = calls[2]
    event = 'NativeCopierEvent_FUN_' + f'{ctor:08x}'
    source = (f'NativeCopierOutput *NativeCopierOutput::FUN_{entry}() {{\n'
              f'{source_class} a;\n'
              f'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
              f'{event} c;\n'
              f'c.thunk_FUN_10defac0(this, agg);\n'
              f'return this;\n}}\n')
    return {**record, 'source': source, 'event_class': event, 'source_class': source_class,
            'constructor': f'{ctor:08x}', 'source_constructor': f'{calls[0]:08x}'}


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
            if int(candidate['constructor'], 16) not in ctors:
                continue
            if int(candidate['source_constructor'], 16) not in ctors:
                continue
            candidates.append(candidate)
    if not candidates:
        raise SystemExit('No event copier callback accepted')
    classes = sorted({c['event_class'] for c in candidates})
    sources = sorted({c['source_class'] for c in candidates})
    library = LIBRARY.replace('FactoryString', 'RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);', '~Event_thunk_FUN_10def0d0() noexcept;')
    library += 'struct NativeCopierOutput;\n'
    library += ('struct NativeCopierAggregate_FUN_10deee60 { EventCopy_thunk_FUN_10deea50 fields; '
                'unsigned int extra; NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 &); '
                '~NativeCopierAggregate_FUN_10deee60() noexcept; };\n')
    library += ''.join(f'struct {name} : Event_thunk_FUN_10def0d0 {{ {name}(); }};\n' for name in sources)
    library += ''.join(
        f'struct {name} : Event_thunk_FUN_10def0d0 {{ {name}(); '
        'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };\n'
        for name in classes)
    library += ('struct NativeCopierOutput { ' +
                ''.join(f"NativeCopierOutput *FUN_{r['entry']}(); " for r in candidates) + '};\n')
    candidates = [{**r, 'abi_declarations': {'event_copier_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = []
    for name in sources:
        owner = next(r['entry'] for r in candidates if r['source_class'] == name)
        roles.append(('??1' + name + '@@QAE@XZ', owner, 0))
    roles.append(('??1NativeCopierAggregate_FUN_10deee60@@QAE@XZ', candidates[0]['entry'], 1))
    for name in classes:
        owner = next(r['entry'] for r in candidates if r['event_class'] == name)
        roles.append(('??1' + name + '@@QAE@XZ', owner, 2))
    emit_variant('event_copier_callbacks', candidates, evidence, roles)


if __name__ == '__main__':
    main()
