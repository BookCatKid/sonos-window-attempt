#!/usr/bin/env python3
"""Recover SCNewWizStateTypeFor registration constructors."""
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
REGISTER = 0x106de0c0
QUERY = 0x106dfa00
ENDSWITH = 0x101a43a0
BODY_SIZES = (180, 183, 194, 197)


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
    if record['body_bytes'] not in BODY_SIZES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    if text.count('thunk_FUN_106de0c0(') != 1 or text.count('thunk_FUN_106dfa00(') != 1:
        return None
    if text.count('SCStr::int_allocRep(') != 1 or text.count('SCStr::int_release(') != 2:
        return None
    suffix = re.search(r'SCStr::endsWith\([^,]+,"((?:[^"\\]|\\.)*)"\)', text)
    if suffix is None or text.count('SCStr::endsWith(') != 1:
        return None
    if text.count('return param_1;') != 1:
        return None
    vtables = re.findall(r'\*param_1 = [^;]+::\s*vftable\s*;', text)
    code = function_bytes(reference, int(entry, 16), record['body_bytes'], base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [SCSTR_CTOR, REGISTER, SCSTR_DTOR, QUERY, ENDSWITH, SCSTR_DTOR]:
        return None
    rets = [i.op_str for i in instructions if i.mnemonic == 'ret']
    if count(instructions, 'mov', 'esi, ecx') != 1 or count(instructions, 'mov', 'eax, esi') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 0x14], esi') + \
            count(instructions, 'mov', 'dword ptr [ebp - 0x18], esi') != 1:
        return None
    flag_stores = [int(i.op_str.rsplit(', ', 1)[1])
                   for i in instructions if i.mnemonic == 'mov'
                   and i.op_str.startswith('dword ptr [ebp - 0x')
                   and i.op_str.rsplit(', ', 1)[-1] in ('1', '2', '3', '4')]
    if len(flag_stores) != 1:
        return None
    flag = flag_stores[0]
    stores = [int(i.op_str.rsplit('0x', 1)[1], 16)
              for i in instructions if i.mnemonic == 'mov' and i.op_str.startswith('dword ptr [esi], 0x')]
    globals_ = [int(i.op_str.split('0x', 1)[1].split(']')[0], 16)
                for i in instructions if i.mnemonic == 'mov'
                and i.op_str.startswith('dword ptr [0x') and i.op_str.endswith('], esi')]
    start = next(i.address for i in instructions if i.mnemonic == 'mov' and i.op_str == 'esi, ecx')
    pushes = [i for i in instructions if i.address > start and i.mnemonic == 'push' and i.op_str.startswith('0x')]
    decoded = suffix.group(1).encode('utf-8').decode('unicode_escape').encode('latin1') + b'\0'
    suffix_pushes = [i for i in pushes if function_bytes(reference, int(i.op_str, 16), len(decoded), base, sections) == decoded]
    if len(suffix_pushes) != 1:
        return None
    klass = 'NativeWizState_FUN_' + entry
    if rets == ['4']:
        name = re.search(r'SCStr::int_allocRep\(\(SCStr \*\)?&\w+,\s*"((?:[^"\\]|\\.)*)"\s*\)', text)
        if name is None or len(vtables) != 2 or text.count('= param_1;') != 1:
            return None
        if len(stores) != 2 or len(globals_) != 1 or len(pushes) != 2:
            return None
        name_va = (set(int(i.op_str, 16) for i in pushes) - {int(suffix_pushes[0].op_str, 16)}).pop()
        named = name.group(1).encode('utf-8').decode('unicode_escape').encode('latin1') + b'\0'
        if function_bytes(reference, name_va, len(named), base, sections) != named:
            return None
        if count(instructions, 'lea', 'ecx, [ebp - 0x10]') != 2:
            return None
        if count(instructions, 'lea', 'ecx, [ebp + 8]') != 1:
            return None
        if count(instructions, 'lea', 'eax, [ebp + 8]') != 1:
            return None
        if count(instructions, 'push', 'dword ptr [ebp + 8]') != 1:
            return None
        if count(instructions, 'mov', 'dword ptr [ebp - 0x10], 0') != 1:
            return None
        source = (f'{klass}::{klass}(RecoveredString_FUN_1008c50b arg) {{\n'
                  f'{{ RecoveredString_FUN_1008c50b name("{name.group(1)}");\n'
                  f'thunk_FUN_106de0c0(&name, arg); }}\n'
                  f'vftable = &DAT_{stores[0]:08x};\n'
                  f'thunk_FUN_106dfa00(&arg)->endsWith("{suffix.group(1)}");\n'
                  f'vftable = &DAT_{stores[1]:08x};\n'
                  f'DAT_{globals_[0]:08x} = (unsigned int)this;\n}}\n')
    elif rets == ['8']:
        if (not re.search(r'SCStr::int_allocRep\(\(SCStr \*\)?&param_2,param_2\);', text)
                or 'char *param_2' not in text):
            return None
        if len(vtables) != 1 or len(stores) != 1 or globals_ or len(pushes) != 1:
            return None
        if count(instructions, 'lea', 'ecx, [ebp + 8]') != 2:
            return None
        if count(instructions, 'lea', 'ecx, [ebp + 0xc]') != 1:
            return None
        if count(instructions, 'lea', 'eax, [ebp + 8]') != 1:
            return None
        if count(instructions, 'lea', 'eax, [ebp + 0xc]') != 1:
            return None
        if count(instructions, 'push', 'dword ptr [ebp + 8]') != 1:
            return None
        if count(instructions, 'push', 'dword ptr [ebp + 0xc]') != 1:
            return None
        if count(instructions, 'mov', 'dword ptr [ebp + 8], 0') != 1:
            return None
        source = (f'{klass}::{klass}(const char *type, RecoveredString_FUN_1008c50b arg) {{\n'
                  f'{{ RecoveredString_FUN_1008c50b name(type);\n'
                  f'thunk_FUN_106de0c0(&name, arg); }}\n'
                  f'vftable = &DAT_{stores[0]:08x};\n'
                  f'thunk_FUN_106dfa00(&arg)->endsWith("{suffix.group(1)}");\n}}\n')
    else:
        return None
    return {**record, 'source': source, 'wiz_class': klass, 'flag': flag}


def main():
    index = ROOT/'analysis/compiled-cpp-empty-tree-arguments-none-nontrivial-homes-ordered/compiled-index.tsv'
    proof = json.loads((ROOT/'analysis/recovery-msvc-tree-barrier-atomic-arity/summary.json').read_text())['variants'][0]
    if proof['exact_functions'] != 90 or hashlib.sha256(index.read_bytes()).hexdigest() != proof['index_sha256']:
        raise SystemExit('External event constructors lack the pinned ninety-function proof')
    ctors = {int(r['entry'], 16) for r in csv.DictReader(index.open(), delimiter='\t')}
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
            if record.get('body_bytes') not in BODY_SIZES:
                continue
            candidate = lower(record, reference, base, sections)
            if candidate is not None:
                candidates.append(candidate)
    if not candidates:
        raise SystemExit('No wizard state constructor accepted')
    library = LIBRARY.replace('FactoryString', 'RecoveredString_FUN_1008c50b')
    library += ('struct NativeWizDtorBase_thunk_FUN_106de7d0 { ~NativeWizDtorBase_thunk_FUN_106de7d0(); };\n'
                'struct NativeWizFlagged_thunk_FUN_106de7d0 { void *rep; ~NativeWizFlagged_thunk_FUN_106de7d0(); };\n')
    for r in candidates:
        klass = r['wiz_class']
        params = 'const char *, RecoveredString_FUN_1008c50b' \
            if r['source'].startswith(f'{klass}::{klass}(const char *') \
            else 'RecoveredString_FUN_1008c50b'
        member = 'NativeWizFlagged_thunk_FUN_106de7d0 extra; ' if r['flag'] == 2 else ''
        library += (f'struct {klass} : NativeWizDtorBase_thunk_FUN_106de7d0 {{ void *vftable; {member}~{klass}();\n'
                    f'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, RecoveredString_FUN_1008c50b);\n'
                    f'SCStr *thunk_FUN_106dfa00(RecoveredString_FUN_1008c50b *);\n'
                    f'{klass}({params}); }};\n')
    candidates = [{**r, 'abi_declarations': {'wiz_state_callback_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = []
    for r in candidates:
        roles.append(('??1RecoveredString_FUN_1008c50b@@QAE@XZ', r['entry'], 0))
        roles.append(('??1NativeWizDtorBase_thunk_FUN_106de7d0@@QAE@XZ', r['entry'], 1))
        if r['flag'] == 2:
            roles.append(('??1NativeWizFlagged_thunk_FUN_106de7d0@@QAE@XZ', r['entry'], 1))
    emit_variant('wiz_state_callbacks', candidates, evidence, roles)


if __name__ == '__main__':
    main()
