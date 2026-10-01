#!/usr/bin/env python3
"""Recover interface-pair move-assign setters (steal caller's rep)."""
import hashlib
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from compile_pair_setter_callbacks import canon
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 91

CANON = [
    ('mov', 'eax, dword ptr [esp + 4]'),
    ('push', 'esi'),
    ('mov', 'esi, ecx'),
    ('push', 'edi'),
    ('mov', 'dword ptr [esi + 4], 0'),
    ('mov', 'dword ptr [esi], 0'),
    ('mov', 'edi, dword ptr [eax]'),
    ('mov', 'dword ptr [eax], 0'),
    ('mov', 'ecx, dword ptr [esi + 4]'),
    ('test', 'ecx, ecx'),
    ('je', None),
    ('mov', 'dword ptr [esi], 0'),
    ('mov', 'dword ptr [esi + 4], 0'),
    ('mov', 'eax, dword ptr [ecx]'),
    ('call', 'dword ptr [eax + 8]'),
    ('mov', 'dword ptr [esi], edi'),
    ('test', 'edi, edi'),
    ('je', None),
    ('mov', 'eax, dword ptr [edi]'),
    ('mov', 'ecx, edi'),
    ('call', 'dword ptr [eax + 0xc]'),
    ('mov', 'dword ptr [esi + 4], eax'),
    ('mov', 'eax, esi'),
    ('pop', 'edi'),
    ('pop', 'esi'),
    ('ret', '4'),
    ('pop', 'edi'),
    ('mov', 'dword ptr [esi + 4], 0'),
    ('mov', 'eax, esi'),
    ('pop', 'esi'),
    ('ret', '4'),
]


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if ('*param_2 = 0;' not in compact
            or '*param_1 = 0;' not in compact
            or 'param_1[1] = 0;' not in compact):
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    if len(instructions) != len(CANON):
        return None
    for insn, (mnemonic, op_str) in zip(instructions, CANON):
        if insn.mnemonic != mnemonic:
            return None
        if op_str is not None and canon(insn.op_str) != canon(op_str):
            return None
    branches = [i for i in instructions if i.mnemonic == 'je']
    if len(branches) != 2 or any(int(i.op_str, 16) <= i.address for i in branches):
        return None
    klass = 'NativePairMoveSetter_FUN_' + entry
    source = (
        f'{klass} *{klass}::FUN_{entry}(NativeReleaseIface **param_2) {{\n'
        f'next = 0;\n'
        f'rep = 0;\n'
        f'NativeReleaseIface *newrep = *param_2;\n'
        f'*param_2 = 0;\n'
        f'NativeReleaseIface *old = next;\n'
        f'if (old != 0) {{ rep = 0; next = 0; old->v8(); }}\n'
        f'rep = newrep;\n'
        f'if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();\n'
        f'else next = 0;\n'
        f'return this;\n'
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
        raise SystemExit('No pair move-assign setter accepted')
    library = (LIBRARY +
               'struct NativeReleaseIface { virtual void *v0(); virtual void v4();\n'
               '  virtual void v8(); virtual void *vC(); };\n')
    for r in candidates:
        klass = r['vclass']
        library += (f'struct {klass} {{ NativeReleaseIface *rep; NativeReleaseIface *next;\n'
                    f'  {klass} *FUN_{r["entry"]}(NativeReleaseIface **param_2); }};\n')
    candidates = [{**r, 'abi_declarations': {'pair_move_library': library}} for r in candidates]
    emit_variant('pair_move_setters', candidates, {}, [])


if __name__ == '__main__':
    main()
