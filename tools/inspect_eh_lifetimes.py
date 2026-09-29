#!/usr/bin/env python3
"""Inspect reference EH state/action records for C++ lifetime recovery.

This is read-only evidence extraction. It never executes the DLL or strips
exception handling from candidate source. Handler immediates and validated
state/action tables are recorded before any C++ lifetime transformation.
"""
import argparse
import json
import re
import struct
from collections import Counter
from pathlib import Path
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86_const import X86_OP_IMM
from classify_functions import DLL, ROOT, section_map, function_bytes
from compile_ghidra_cpp import load_records

HANDLER = re.compile(r'\bpuStack_\w+\s*=\s*&LAB_([0-9a-f]{8})\s*;')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--output', type=Path, default=ROOT/'analysis/eh-lifetime-evidence.jsonl')
    args = parser.parse_args()
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    disassembler = Cs(CS_ARCH_X86, CS_MODE_32)
    disassembler.detail = True
    counts = Counter()
    weights = Counter()
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open('w') as output:
        for record in load_records(args.exports).values():
            source = record['decompiled_c']
            match = HANDLER.search(source)
            if not match:
                continue
            counts['functions_with_handler'] += 1
            weights['functions_with_handler'] += record['body_bytes']
            handler = int(match.group(1), 16)
            metadata = None
            for instruction in disassembler.disasm(
                    function_bytes(reference, handler, 64, image_base, sections), handler):
                if instruction.mnemonic in {'jmp', 'ret'}:
                    break
                if instruction.mnemonic != 'mov' or len(instruction.operands) != 2:
                    continue
                if instruction.operands[1].type != X86_OP_IMM:
                    continue
                address = instruction.operands[1].imm & 0xffffffff
                raw = function_bytes(reference, address, 36, image_base, sections)
                if len(raw) != 36:
                    continue
                words = struct.unpack('<9I', raw)
                if words[0] != 0x19930522 or not 0 < words[1] < 4096:
                    continue
                actions = function_bytes(reference, words[2], 8 * words[1], image_base, sections)
                if len(actions) != 8 * words[1]:
                    continue
                entries = [struct.unpack_from('<iI', actions, index * 8)
                           for index in range(words[1])]
                if not all(-1 <= state < words[1] and (action == 0 or
                           function_bytes(reference, action, 1, image_base, sections))
                           for state, action in entries):
                    continue
                metadata = {'address': f'{address:08x}', 'words': list(words),
                            'state_count': words[1], 'actions': [
                                {'state': i, 'next_state': state, 'action': f'{action:08x}',
                                 'instructions': [f'{ins.mnemonic} {ins.op_str}'.strip()
                                     for ins in list(disassembler.disasm(function_bytes(
                                         reference, action, 16, image_base, sections), action))[:4]]
                                 if action else []}
                                for i, (state, action) in enumerate(entries)]}
                break
            if metadata is None:
                counts['unresolved_handler'] += 1
                continue
            category = 'single_state' if metadata['state_count'] == 1 else 'multiple_states'
            counts[category] += 1
            weights[category] += record['body_bytes']
            output.write(json.dumps({'entry': record['entry'], 'body_bytes': record['body_bytes'],
                                     'handler': f'{handler:08x}', 'metadata': metadata,
                                     'contains_scstr': 'SCStr::' in source}) + '\n')
    summary = {'functions': dict(counts), 'reference_body_bytes': dict(weights),
               'scope': 'Validated reference EH record evidence only; no source removal or byte-match claim'}
    args.output.with_suffix('.summary.json').write_text(json.dumps(summary, indent=2)+'\n')
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
