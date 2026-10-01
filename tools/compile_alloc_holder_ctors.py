#!/usr/bin/env python3
"""Recover two-field holder constructors storing a fresh operator_new block."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from compile_op_impl_ctors import thunk_target
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 93
OPERATOR_NEW = 0x1148a4d2


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if 'param_1[1] = 0;' not in compact or 'operator_new' not in text:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [OPERATOR_NEW]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['4']:
        return None
    push = next((i for i in instructions if i.mnemonic == 'push'
                 and i.op_str.startswith('0x') and i.address > int(entry, 16) + 0x20), None)
    if push is None:
        return None
    size = int(push.op_str, 16)
    if size > 0x100:
        return None
    if count(instructions, 'mov', 'esi, ecx') != 1:
        return None
    if count(instructions, 'mov', 'eax, dword ptr [ebp + 8]') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi], eax') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi + 4], 0') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [esi + 4], eax') != 1:
        return None
    if count(instructions, 'mov', 'eax, esi') != 1:
        return None
    if count(instructions, 'add', 'esp, 4') != 1:
        return None
    klass = 'NativeAllocHolder_FUN_' + entry
    source = (
        f'{klass}::{klass}(void *param_2) {{\n'
        f'f0 = param_2;\n'
        f'f4 = 0;\n'
        f'f4 = operator_new(0x{size:x});\n'
        f'}}\n')
    return {**record, 'source': source, 'op_class': klass}


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
        raise SystemExit('No alloc-holder constructor accepted')
    library = LIBRARY + 'void *operator_new(unsigned int);\n'
    for r in candidates:
        klass = r['op_class']
        library += (f'struct {klass} {{ void *f0; void *f4; ~{klass}();\n'
                    f'{klass}(void *param_2); }};\n')
    candidates = [{**r, 'abi_declarations': {'alloc_holder_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles = [(f'??1{r["op_class"]}@@QAE@XZ', r['entry'], 0) for r in candidates]
    emit_variant('alloc_holder_ctors', candidates, evidence, roles)


if __name__ == '__main__':
    main()
