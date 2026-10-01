#!/usr/bin/env python3
"""Recover global interface-pair release helpers (static teardown guards)."""
import hashlib
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

BODY_BYTES = 91


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] != BODY_BYTES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    match = re.search(r'piVar1 = (DAT_[0-9a-f]{8});', compact)
    if match is None or '!= (int *)0x0' not in compact:
        return None
    hi = int(match.group(1)[4:], 16)
    code = function_bytes(reference, int(entry, 16), BODY_BYTES, base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    if any(i.mnemonic == 'call' and not i.op_str.startswith('dword ptr')
           for i in instructions):
        return None
    if count(instructions, 'call', 'dword ptr [eax + 8]') != 1:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['']:
        return None
    loads = [int(i.op_str.rsplit('0x', 1)[1].rstrip(']'), 16) for i in instructions
             if i.mnemonic == 'mov' and re.fullmatch(r'ecx, dword ptr \[0x[0-9a-f]+\]', i.op_str)]
    if loads != [hi]:
        return None
    zeroes = [int(re.search(r'\[0x([0-9a-f]+)\]', i.op_str).group(1), 16) for i in instructions
              if i.mnemonic == 'mov' and re.fullmatch(r'dword ptr \[0x[0-9a-f]+\], 0', i.op_str)]
    if zeroes != [hi - 4, hi]:
        return None
    if count(instructions, 'mov', 'dword ptr [ebp - 4], 0') != 1:
        return None
    if count(instructions, 'test', 'ecx, ecx') != 1 or sum(1 for i in instructions if i.mnemonic == 'je') != 1:
        return None
    if count(instructions, 'mov', 'eax, dword ptr [ecx]') != 1:
        return None
    if f'DAT_{hi - 4:08x} = 0;' not in compact or f'DAT_{hi:08x} = (int *)0x0;' not in compact:
        return None
    klass = 'NativeGlobalRelease_FUN_' + entry
    source = (
        f'void FUN_{entry}() noexcept {{\n'
        f'NativeReleaseIface *p = (NativeReleaseIface *)DAT_{hi:08x};\n'
        f'if (p != 0) {{\n'
        f'  DAT_{hi - 4:08x} = 0; DAT_{hi:08x} = 0;\n'
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
        raise SystemExit('No global-release helper accepted')
    library = (LIBRARY +
               'struct NativeReleaseIface { virtual void *v0(); virtual void v4();\n'
               '  virtual void v8(); virtual void *vC(); };\n'
)
    for va in sorted({va for r in candidates for va in
                      re.findall(r'DAT_([0-9a-f]{8})', r['source'])}):
        library += f'extern unsigned int DAT_{va};\n'
    candidates = [{**r, 'abi_declarations': {'global_release_library': library}} for r in candidates]
    emit_variant('global_release_dtors', candidates, {}, [])


if __name__ == '__main__':
    main()
