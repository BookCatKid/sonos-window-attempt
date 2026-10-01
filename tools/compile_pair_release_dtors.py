#!/usr/bin/env python3
"""Recover two-pointer interface-pair release helpers."""
import hashlib
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 83


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if '*param_1 = 0;' not in compact or 'param_1[1] = 0;' not in compact:
        return None
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    if any(i.mnemonic == 'call' and not i.op_str.startswith('dword ptr') for i in instructions):
        return None
    if count(instructions, 'call', 'dword ptr [eax + 8]') != 1:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    if count(instructions, 'mov', 'edx, dword ptr [ecx + 4]') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ecx], 0') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ecx + 4], 0') != 1:
        return None
    if count(instructions, 'test', 'edx, edx') != 1 or sum(1 for i in instructions if i.mnemonic == 'je') != 1:
        return None
    if count(instructions, 'mov', 'ecx, edx') != 1:
        return None
    if count(instructions, 'mov', 'eax, dword ptr [edx]') != 1:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 4], 0') != 1:
        return None
    klass = 'NativePairRelease_FUN_' + entry
    source = (
        f'void {klass}::FUN_{entry}() noexcept {{\n'
        f'NativeReleaseIface *p = (NativeReleaseIface *)next;\n'
        f'if (p != 0) {{\n'
        f'  rep = 0; next = 0;\n'
        f'  p->v8();\n'
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
        raise SystemExit('No pair-release helper accepted')
    library = (LIBRARY +
               'struct NativeReleaseIface { virtual void *v0(); virtual void *v4(); virtual void v8(); };\n'
)
    for r in candidates:
        klass = r['vclass']
        library += (f'struct {klass} {{ void *rep; void *next; ~{klass}();\n'
                    f'void FUN_{r["entry"]}() noexcept; }};\n')
    candidates = [{**r, 'abi_declarations': {'pair_release_library': library}} for r in candidates]
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('pair_release_dtors', candidates, evidence, [])


if __name__ == '__main__':
    main()
