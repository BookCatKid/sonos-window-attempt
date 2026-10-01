#!/usr/bin/env python3
"""Recover interface-pair setter helpers (release old, acquire new)."""
import hashlib
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 81

CANON = [
    ('push', 'esi'),
    ('mov', 'esi, ecx'),
    ('push', 'edi'),
    ('mov', 'edi, dword ptr [esp + 0xc]'),
    ('cmp', 'edi, dword ptr [esi]'),
    ('je', None),
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
    ('mov', 'ecx, eax'),
    ('mov', 'edx, dword ptr [eax]'),
    ('call', 'dword ptr [edx + 4]'),
    ('pop', 'edi'),
    ('mov', 'eax, esi'),
    ('pop', 'esi'),
    ('ret', '4'),
    ('mov', 'dword ptr [esi + 4], 0'),
    ('pop', 'edi'),
    ('mov', 'eax, esi'),
    ('pop', 'esi'),
    ('ret', '4'),
]


def canon(op_str):
    """Normalize bracket displacements so decimal and hex renderings agree."""
    def fix(match):
        value = int(match.group(2), 0)
        sign = '-' if match.group(1) == '-' else '+'
        return f' {sign} {value}]'
    return re.sub(r'([+-]) (0x[0-9a-f]+|[0-9]+)\]', fix, op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if ('param_2 != (int *)*param_1' not in compact
            or 'param_1[1] = 0;' not in compact
            or '*param_1 = (int)param_2;' not in compact):
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
    if len(branches) != 3 or any(int(i.op_str, 16) <= i.address for i in branches):
        return None
    klass = 'NativePairSetter_FUN_' + entry
    source = (
        f'{klass} *{klass}::FUN_{entry}(NativeReleaseIface *param_2) {{\n'
        f'if (param_2 != rep) {{\n'
        f'  NativeReleaseIface *old = next;\n'
        f'  if (old != 0) {{ rep = 0; next = 0; old->v8(); }}\n'
        f'  rep = param_2;\n'
        f'  if (param_2 != 0) {{ next = (NativeReleaseIface *)param_2->vC(); next->v4(); }}\n'
        f'  else next = 0;\n'
        f'}}\n'
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
        raise SystemExit('No pair-setter helper accepted')
    library = (LIBRARY +
               'struct NativeReleaseIface { virtual void *v0(); virtual void v4();\n'
               '  virtual void v8(); virtual void *vC(); };\n')
    for r in candidates:
        klass = r['vclass']
        library += (f'struct {klass} {{ NativeReleaseIface *rep; NativeReleaseIface *next;\n'
                    f'  {klass} *FUN_{r["entry"]}(NativeReleaseIface *param_2); }};\n')
    candidates = [{**r, 'abi_declarations': {'pair_setter_library': library}} for r in candidates]
    emit_variant('pair_setter_callbacks', candidates, {}, [])


if __name__ == '__main__':
    main()
