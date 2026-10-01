#!/usr/bin/env python3
"""Recover SCStr-name QueryInterface style dispatch callbacks."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

NAME_EQUAL = 0x101a2dc0
BODY_BYTES = 103


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
    names = re.findall(r'SCStr::operator==\([^,]+,"((?:[^"\\]|\\.)*)"\)', text)
    if len(names) != 2:
        return None
    if text.count('*param_2 = param_1;') != 2 or text.count('*param_2 = 0;') != 1:
        return None
    if text.count('return param_2;') != 3:
        return None
    if text.count('(**(code **)(*param_1 + 4))()') != 2:
        return None
    if text.count('param_1 != (int *)0x0') != 2:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [NAME_EQUAL, NAME_EQUAL]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['8', '8', '8']:
        return None
    if count(instructions, 'mov', 'esi, ecx') != 1:
        return None
    if count(instructions, 'mov', 'edi, dword ptr [esp + 0x10]') != 1:
        return None
    if count(instructions, 'mov', 'edi, dword ptr [esp + 0xc]') != 2:
        return None
    if count(instructions, 'mov', 'dword ptr [edi], esi') != 2:
        return None
    if count(instructions, 'mov', 'eax, edi') != 2:
        return None
    if count(instructions, 'mov', 'eax, dword ptr [esp + 0xc]') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [eax], 0') != 1:
        return None
    if count(instructions, 'test', 'al, al') != 2 or count(instructions, 'test', 'esi, esi') != 2:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'je') != 4:
        return None
    if count(instructions, 'call', 'dword ptr [eax + 4]') + \
            count(instructions, 'call', 'dword ptr [edx + 4]') != 2:
        return None
    pushes = [i for i in instructions if i.mnemonic == 'push' and i.op_str.startswith('0x')]
    if len(pushes) != 2:
        return None
    for push, name in zip(pushes, names):
        decoded = name.encode('utf-8').decode('unicode_escape').encode('latin1') + b'\0'
        va = int(push.op_str, 16)
        if function_bytes(reference, va, len(decoded), base, sections) != decoded:
            return None
    escaped = [name.encode('utf-8').decode('unicode_escape').encode('latin1').decode('latin1') for name in names]
    source = (
        f'unsigned int *NativeQueryInterfaceHost::FUN_{entry}(unsigned int *out, NativeNameQuery *name) {{\n'
        f'if (name->thunk_FUN_101a2dc0({json.dumps(escaped[0])})) {{\n'
        f'*out = (unsigned int)this;\n'
        f'if (this != 0) ((NativeQueryObject *)this)->AddRef();\n'
        f'return out;\n}}\n'
        f'if (name->thunk_FUN_101a2dc0({json.dumps(escaped[1])})) {{\n'
        f'*out = (unsigned int)this;\n'
        f'if (this != 0) ((NativeQueryObject *)this)->AddRef();\n'
        f'return out;\n}}\n'
        f'*out = 0;\nreturn out;\n}}\n')
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
        raise SystemExit('No query interface callback accepted')
    library = LIBRARY
    library += ('struct NativeNameQuery { bool thunk_FUN_101a2dc0(char *other); };\n'
                'struct NativeQueryObject { virtual void r0(); virtual void AddRef(); };\n')
    library += ('struct NativeQueryInterfaceHost { ' +
                ''.join(f"unsigned int *FUN_{r['entry']}(unsigned int *, NativeNameQuery *); "
                        for r in candidates) + '};\n')
    candidates = [{**r, 'abi_declarations': {'query_interface_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('query_interface_callbacks', candidates, evidence, [])


if __name__ == '__main__':
    main()
