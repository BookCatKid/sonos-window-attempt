#!/usr/bin/env python3
"""Recover callbacks that dispatch a proven event then fire a delayed member call."""
import csv
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

DISPATCH = 0x10def450
DESTRUCTOR = 0x10def0d0
TIMER = 0x10ebb8e0
RESULT_STORE = 0x10eb41b0
FALLBACK_PREDICATE = 0x10def490
SIMPLE_ACTIONS = {0x10ebbab0, 0x10ebb850}
BODY_BYTES = {97, 114, 119, 122, 203, 215}


def thunk_target(read, va):
    seen = set()
    while va not in seen:
        seen.add(va)
        code = read(va, 5)
        if len(code) != 5 or code[0] != 0xe9:
            return va
        va = (va + 5 + struct.unpack_from('<i', code, 1)[0]) & 0xffffffff
    raise ValueError('Cyclic linker jump')


def lower_fallback(record, instructions, calls):
    """Lower a dispatch-or-fallback callback with an early-return action tail."""
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if text.count('thunk_FUN_10def450(') != 1 or text.count('thunk_FUN_10def490(') != 1:
        return None
    if len(calls) not in (9, 11):
        return None
    chained = len(calls) == 11
    base = 2 if chained else 0
    if calls[1] != DISPATCH or calls[2] != DESTRUCTOR or calls[5 + base] != FALLBACK_PREDICATE:
        return None
    if calls[3] not in SIMPLE_ACTIONS or calls[8 + base] != RESULT_STORE:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['4', '4']:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, ecx') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'ecx, dword ptr [ebp + 8]') != 2:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x24]') != 2:
        return None
    branches = [n for n, i in enumerate(instructions[:-1])
                if i.mnemonic == 'test' and i.op_str == 'bl, bl'
                and instructions[n + 1].mnemonic == 'je']
    if len(branches) != 2 or branches[1] <= branches[0]:
        return None
    else_address = int(instructions[branches[0] + 1].op_str, 16)
    else_index = next((n for n, i in enumerate(instructions) if i.address == else_address), None)
    if else_index is None:
        return None
    tail_block = instructions[branches[0] + 2:else_index]
    if len(tail_block) < 3 or [i.mnemonic for i in tail_block[:3]] != ['push', 'mov', 'call']:
        return None
    if tail_block[1].op_str != 'ecx, esi':
        return None
    try:
        pushed = int(tail_block[0].op_str, 0)
    except ValueError:
        return None
    action_name = f'thunk_FUN_{calls[3]:08x}'
    if text.count(action_name + '(') != 1:
        return None
    argument = re.search(re.escape(action_name) + r'\(([^)]*)\)', text).group(1).strip()
    try:
        if int(argument, 0) != pushed:
            return None
    except ValueError:
        return None
    rest = tail_block[3:]
    if chained:
        if len(rest) < 3 or rest[0].mnemonic != 'call' or rest[2].mnemonic != 'call':
            return None
        if rest[1].mnemonic != 'mov' or rest[1].op_str != 'ecx, eax':
            return None
        rest = rest[3:]
    if not rest or rest[0].mnemonic != 'mov' or rest[0].op_str != 'ecx, dword ptr [ebp - 0xc]':
        return None
    fallback = [i for i in instructions if i.address >= else_address and i.address < instructions[branches[1]].address]
    if [i.op_str for i in fallback if i.mnemonic == 'lea' and i.op_str.startswith('ecx, [ebp')] != [
            'ecx, [ebp - 0x40]', 'ecx, [ebp - 0x30]', 'ecx, [ebp - 0x3c]']:
        return None
    if [i.mnemonic for i in fallback if i.mnemonic == 'push'] != ['push'] or fallback[0].op_str != 'ecx, [ebp - 0x40]':
        return None
    store = next((i for i in instructions[branches[1]:] if i.mnemonic == 'mov'
                  and re.fullmatch(r'byte ptr \[eax \+ 0x[0-9a-f]+\], 1', i.op_str)), None)
    if store is None:
        return None
    offset = int(re.search(r'0x[0-9a-f]+', store.op_str).group(0), 16)
    field = re.findall(r'\(iVar\d+ \+ (0x[0-9a-f]+)\) = (\d+);', text)
    if len(field) != 1 or int(field[0][0], 16) != offset or field[0][1] != '1':
        return None
    if sum(1 for i in instructions[branches[1]:] if i.mnemonic == 'mov' and i.op_str == 'ecx, esi') != 1:
        return None
    constructor = calls[0]
    fallback_class = 'NativeFallbackEvent_FUN_' + f'{calls[4 + base]:08x}'
    event = 'NativeDelayedEvent_FUN_' + f'{constructor:08x}'
    low = 'NativeFallbackLow_FUN_' + f'{calls[7 + base]:08x}'
    high = 'NativeFallbackHigh_FUN_' + f'{calls[6 + base]:08x}'
    action = f'{action_name}({pushed});'
    if chained:
        chain_result = f'NativeChainResult_FUN_{calls[5]:08x}'
        action += f' thunk_FUN_{calls[4]:08x}()->thunk_FUN_{calls[5]:08x}();'
    source = (f'void NativeDelayedCallback::FUN_{entry}(NativeDelayedDispatcher *dispatcher) {{\n'
              f'if (dispatcher->thunk_FUN_10def450({event}())) {{ {action} return; }}\n'
              f'if (dispatcher->thunk_FUN_10def490({fallback_class}())) {{\n'
              f'((NativeFallbackResult_{offset:x} *)thunk_FUN_10eb41b0())->flag = 1;\n}}\n}}\n')
    candidate = {**record, 'source': source, 'event_class': event,
                 'constructor': f'{constructor:08x}',
                 'fallback_class': fallback_class, 'fallback_low': low, 'fallback_high': high,
                 'flag_offset': offset}
    if chained:
        candidate['chain_getter'] = f'thunk_FUN_{calls[4]:08x}'
        candidate['chain_result'] = chain_result
        candidate['chain_call'] = f'thunk_FUN_{calls[5]:08x}'
    return candidate


def lower_passthrough(record, instructions, calls):
    """Lower a callback returning a sub-dispatcher predicate on a temporary event."""
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if calls[2] != DESTRUCTOR:
        return None
    if text.count(f'thunk_FUN_{calls[0]:08x}(') != 1:
        return None
    if text.count(f'thunk_FUN_{calls[1]:08x}(') != 1:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, ecx') != 1:
        return None
    first_call = next((n for n, i in enumerate(instructions) if i.mnemonic == 'call'), None)
    if sum(1 for i in instructions[first_call:] if i.mnemonic == 'push' and i.op_str == 'eax') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x24]') != 2:
        return None
    receiver = [i for i in instructions if i.mnemonic == 'lea'
                and re.fullmatch(r'ecx, \[esi \+ 0x[0-9a-f]+\]', i.op_str)]
    if len(receiver) != 1:
        return None
    offset = int(receiver[0].op_str.rsplit('0x', 1)[1][:-1], 16)
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'bl, al') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'al, bl') != 1:
        return None
    constructor = calls[0]
    predicate = f'thunk_FUN_{calls[1]:08x}'
    event = 'NativeDelayedEvent_FUN_' + f'{constructor:08x}'
    source = (f'bool NativeDelayedCallback::FUN_{entry}() {{\n'
              f'return ((NativePassthroughDispatcher *)((char *)this + 0x{offset:x}))'
              f'->{predicate}({event}());\n}}\n')
    return {**record, 'source': source, 'event_class': event, 'constructor': f'{constructor:08x}',
            'predicate': predicate, 'receiver_offset': offset,
            'member_decl': f'bool FUN_{entry}(); '}


def lower(record, reference, base, sections):
    if record['body_bytes'] not in BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if text.count('thunk_FUN_10def0d0()') != 1:
        return None
    code = function_bytes(reference, int(entry, 16), record['body_bytes'], base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if len(calls) in (9, 11):
        return lower_fallback(record, instructions, calls)
    if len(calls) == 3:
        return lower_passthrough(record, instructions, calls)
    if len(calls) != 4 or calls[1] != DISPATCH or calls[2] != DESTRUCTOR:
        return None
    if text.count('thunk_FUN_10def450(') != 1:
        return None
    returns = [i.op_str for i in instructions if i.mnemonic == 'ret']
    if returns != ['4']:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, ecx') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov' and i.op_str == 'ecx, dword ptr [ebp + 8]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x24]') != 2:
        return None
    branch = next((n for n, i in enumerate(instructions[:-1])
                   if i.mnemonic == 'test' and i.op_str == 'bl, bl'
                   and instructions[n + 1].mnemonic == 'je'), None)
    if branch is None:
        return None
    tail_block = instructions[branch + 2:]
    constructor = calls[0]
    tail = calls[3]
    event = 'NativeDelayedEvent_FUN_' + f'{constructor:08x}'
    condition = f'dispatcher->thunk_FUN_10def450({event}())'
    if tail == TIMER:
        pushes = [i for i in tail_block if i.mnemonic == 'push']
        if len(pushes) != 2:
            return None
        try:
            delay = int(pushes[0].op_str, 0)
            name_va = int(pushes[1].op_str, 0)
        except ValueError:
            return None
        if name_va <= 0xffff:
            return None
        if not any(i.mnemonic == 'mov' and i.op_str == 'ecx, esi' for i in tail_block):
            return None
        argument = re.search(r'thunk_FUN_10ebb8e0\(([^,]+),[^)]*\)', text)
        if argument is None:
            return None
        name_argument = argument.group(1).strip()
        if name_argument.startswith('&DAT_'):
            if int(name_argument[5:], 16) != name_va:
                return None
            name_source = '(const char *)&DAT_' + name_argument[5:]
        else:
            literal = re.fullmatch(r'"((?:[^"\\]|\\.)*)"', name_argument)
            if literal is None:
                return None
            decoded = literal.group(1).encode('utf-8').decode('unicode_escape').encode('latin1') + b'\0'
            if function_bytes(reference, name_va, len(decoded), base, sections) != decoded:
                return None
            name_source = name_argument
        action = f'thunk_FUN_10ebb8e0({name_source},{delay});'
    elif tail == RESULT_STORE:
        if len(tail_block) < 3 or [i.mnemonic for i in tail_block[:3]] != ['mov', 'call', 'mov']:
            return None
        store = re.fullmatch(r'(dword|byte) ptr \[eax \+ (0x[0-9a-f]+)\], 0', tail_block[2].op_str)
        if tail_block[0].op_str != 'ecx, esi' or store is None:
            return None
        if store.group(1) == 'dword':
            if store.group(2) != '0x108':
                return None
            action = 'thunk_FUN_10eb41b0()->value = 0;'
        else:
            field = re.findall(r'\(iVar\d+ \+ (0x[0-9a-f]+)\) = 0;', text)
            if len(field) != 1 or field[0] != store.group(2):
                return None
            action = (f'((NativeByteResult_{int(store.group(2), 16):x} *)'
                      f'thunk_FUN_10eb41b0())->flag = 0;')
            record = {**record, 'byte_result_offset': int(store.group(2), 16)}
    elif tail in SIMPLE_ACTIONS:
        if len(tail_block) < 3 or [i.mnemonic for i in tail_block[:3]] != ['push', 'mov', 'call']:
            return None
        if tail_block[1].op_str != 'ecx, esi':
            return None
        try:
            pushed = int(tail_block[0].op_str, 0)
        except ValueError:
            return None
        name = f'thunk_FUN_{tail:08x}'
        if text.count(name + '(') != 1:
            return None
        argument = re.search(re.escape(name) + r'\(([^)]*)\)', text).group(1).strip()
        try:
            value = int(argument, 0)
        except ValueError:
            return None
        if value != pushed:
            return None
        action = f'{name}({value});'
    else:
        return None
    source = (f'void NativeDelayedCallback::FUN_{entry}(NativeDelayedDispatcher *dispatcher) {{\n'
              f'if ({condition}) {action}\n}}\n')
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
            if record.get('body_bytes') not in BODY_BYTES:
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
        raise SystemExit('No delayed dispatch callback accepted')
    classes = sorted({c['event_class'] for c in candidates})
    fallback_classes = sorted({c['fallback_class'] for c in candidates if 'fallback_class' in c})
    library = LIBRARY.replace('FactoryString', 'RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);', '~Event_thunk_FUN_10def0d0() noexcept;')
    seen_members = set()
    for c in candidates:
        if 'fallback_class' not in c:
            continue
        if c['fallback_low'] not in seen_members:
            seen_members.add(c['fallback_low'])
            library += (f'struct {c["fallback_low"]} {{ unsigned int fields[3]; '
                        f'~{c["fallback_low"]}() noexcept; }};\n')
        if c['fallback_high'] not in seen_members:
            seen_members.add(c['fallback_high'])
            library += (f'struct {c["fallback_high"]} {{ unsigned int fields[3]; '
                        f'~{c["fallback_high"]}() noexcept; }};\n')
        if c['fallback_class'] in seen_members:
            continue
        seen_members.add(c['fallback_class'])
        library += (f'struct {c["fallback_class"]} {{ unsigned int head; {c["fallback_low"]} low; '
                    f'{c["fallback_high"]} high; {c["fallback_class"]}(); '
                    f'~{c["fallback_class"]}() noexcept = default; }};\n')
    fallback_classes = sorted(set(fallback_classes))
    for offset in sorted({c['flag_offset'] for c in candidates if 'fallback_class' in c}):
        library += f'struct NativeFallbackResult_{offset:x} {{ unsigned char padding[0x{offset:x}]; unsigned char flag; }};\n'
    for offset in sorted({c['byte_result_offset'] for c in candidates if 'byte_result_offset' in c}):
        library += f'struct NativeByteResult_{offset:x} {{ unsigned char padding[0x{offset:x}]; unsigned char flag; }};\n'
    predicates = sorted({c['predicate'] for c in candidates if 'predicate' in c})
    if predicates:
        library += ('struct NativePassthroughDispatcher { ' +
                    ''.join(f'bool {p}(const Event_thunk_FUN_10def0d0 &); ' for p in predicates) + '};\n')
    seen_chains = set()
    for c in candidates:
        if 'chain_result' in c and c['chain_result'] not in seen_chains:
            seen_chains.add(c['chain_result'])
            library += f'struct {c["chain_result"]} {{ void {c["chain_call"]}(); }};\n'
            library += f'{c["chain_result"]} *{c["chain_getter"]}();\n'
    library += 'struct NativeDelayedDispatcher { bool thunk_FUN_10def450(const Event_thunk_FUN_10def0d0 &); '
    for name in fallback_classes:
        library += f'bool thunk_FUN_10def490(const {name} &); '
    library += '};\n'
    library += 'struct NativeDelayedResult { unsigned char padding[0x108]; int value; };\n'
    library += ''.join(f'struct {name} : Event_thunk_FUN_10def0d0 {{ {name}(); }};\n' for name in classes)
    library += ('struct NativeDelayedCallback { void thunk_FUN_10ebb8e0(const char *, int); '
                'void thunk_FUN_10ebbab0(int); void thunk_FUN_10ebb850(int); '
                'NativeDelayedResult *thunk_FUN_10eb41b0(); ' +
                ''.join(r.get('member_decl', f"void FUN_{r['entry']}(NativeDelayedDispatcher *); ")
                        for r in candidates) + '};\n')
    abi = {'delayed_event_callback_library': library}
    abi.update({g: '' for g in {c['chain_getter'] for c in candidates if 'chain_getter' in c}})
    candidates = [{**r, 'abi_declarations': abi} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = []
    for name in classes:
        owner = next(r['entry'] for r in candidates if r['event_class'] == name)
        roles.append(('??1' + name + '@@QAE@XZ', owner, 0))
    for name in fallback_classes:
        owner = next(r['entry'] for r in candidates if r.get('fallback_class') == name)
        roles.append(('??1' + name + '@@QAE@XZ', owner, 1))
    emit_variant('delayed_event_callbacks', candidates, evidence, roles)


if __name__ == '__main__':
    main()
