"""Retarget generated call sites whose callee name resolved to the wrong body.

Some recovered records name a call ``thunk_FUN_a``/``FUN_a`` where the
reference call instruction points at an incremental-link stub whose jump
target is a different body ``FUN_b``. The reloc failure gives us the expected
field; mapping it through the ILT map yields the true callee VA so the source
call can be renamed.
"""
import csv
import glob
import json
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import compare_compiled_ghidra as cc

CALLEE = re.compile(r'\?((?:thunk_)?FUN_[0-9a-f]{8})@@YAHZZ')


def main():
    reference = cc.DLL.read_bytes()
    image_base, pe_sections = cc.section_map(reference)
    ilt = json.loads(Path('analysis/ilt-map.json').read_text())
    total = files = 0
    for directory in sorted(glob.glob('analysis/compiled-cpp-bulk/bulk_*/')):
        directory = Path(directory)
        obj = Path('analysis/merged-objects') / (directory.name + '.obj')
        index = directory / 'compiled-index.tsv'
        part = Path('src/generated/bulk') / (directory.name + '.cpp')
        if not all(p.exists() for p in (obj, index, part)):
            continue
        sections, symbols, sbi = cc.read_coff(obj)
        compiled = cc.function_symbols(sections, symbols, sbi)
        source = part.read_text()
        edits = []
        for row in csv.DictReader(index.open(), delimiter='\t'):
            entry = row['entry']
            expected = cc.function_bytes(
                reference, int(entry, 16), int(row['reference_body_bytes']),
                image_base, pe_sections)
            candidate, relocs = compiled.get(entry, (b'', []))
            if not candidate or len(candidate) != len(expected):
                continue
            relocd = {o for rl in relocs
                      for o in range(rl['offset'], rl['offset'] + 4)}
            diffs = [i for i in range(len(expected))
                     if expected[i] != candidate[i] and i not in relocd]
            if diffs:
                continue
            renames = {}
            for rl in relocs:
                m = CALLEE.fullmatch(rl['symbol'])
                if not m or rl['type'] != 20:
                    continue
                field = struct.unpack('<i', expected[rl['offset']:rl['offset'] + 4])[0]
                site_end = int(entry, 16) + rl['offset'] + 4
                target = (site_end + field) & 0xffffffff
                body = ilt.get(hex(target), target)
                if isinstance(body, str):
                    body = int(body, 16)
                old_va = int(m.group(1).rsplit('_', 1)[1], 16)
                if body != old_va:
                    renames.setdefault(m.group(1), body)
            if not renames:
                continue
            m = re.search(r'// Reference entry ' + entry +
                          r'; body size \d+ bytes\.\n#line 1 "ENTRY_' +
                          entry + r'"\n', source)
            if not m:
                continue
            nxt = source.find('// Reference entry ', m.end())
            block = source[m.end():nxt if nxt > 0 else len(source)]
            newblock = block
            for name, body in renames.items():
                # Only rewrite when the call name occurs exactly once per
                # failing reloc count; ambiguous repeats stay untouched.
                occurrences = len(re.findall(r'(?<![\w])' + re.escape(name) +
                                             r'\s*\(', newblock))
                if occurrences != 1:
                    continue
                newblock = re.sub(r'(?<![\w])' + re.escape(name) + r'(\s*\()',
                                  'FUN_%08x\\1' % body, newblock)
            if newblock != block:
                edits.append((m.end(), nxt if nxt > 0 else len(source),
                              newblock))
        for start, end, newblock in edits:
            source = source[:start] + newblock + source[end:]
        if edits:
            part.write_text(source)
            total += len(edits)
            files += 1
            print(directory.name, len(edits), 'callee retargets')
    print('total:', total, 'in', files, 'parts')


if __name__ == '__main__':
    main()
