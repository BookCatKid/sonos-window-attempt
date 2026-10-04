"""Trim/pad generated call sites to the callee stack cleanup the reference
shows.

Near-exact same-length functions that differ only in ``83 c4 NN`` cleanup
bytes prove our call site passes a different argument count than the
reference.  The differing byte sits two bytes after a ``call rel32`` whose
relocation names the callee, so the rewrite maps reloc -> source call and
fixes the argument list.
"""
import csv
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import compare_compiled_ghidra as cc


def split_args(text, open_paren):
    """Return (args, end_index) for the balanced call at open_paren."""
    depth, i = 1, open_paren + 1
    while i < len(text) and depth:
        if text[i] == '(':
            depth += 1
        elif text[i] == ')':
            depth -= 1
        i += 1
    inner = text[open_paren + 1:i - 1]
    parts, d, s = [], 0, 0
    for j, ch in enumerate(inner):
        if ch == '(':
            d += 1
        elif ch == ')':
            d -= 1
        elif ch == ',' and d == 0:
            parts.append(inner[s:j].strip())
            s = j + 1
    tail = inner[s:].strip()
    if tail:
        parts.append(tail)
    return parts, i


def main():
    import glob
    reference = cc.DLL.read_bytes()
    image_base, pe_sections = cc.section_map(reference)
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
            diffs = [i for i in range(min(len(expected), len(candidate)))
                     if expected[i] != candidate[i] and i not in relocd]
            if not diffs:
                continue
            cleanups = []
            only_cleanup = True
            for i in diffs:
                if (i >= 2 and expected[i - 2:i] == b'\x83\xc4'
                        and candidate[i - 2:i] == b'\x83\xc4'
                        and i - 7 >= 0 and expected[i - 7] == 0xe8):
                    need = expected[i] // 4
                    site = next((r for r in relocs
                                 if r['offset'] == i - 6), None)
                    if site and expected[i] % 4 == 0:
                        cleanups.append((site['symbol'], need))
                        continue
                only_cleanup = False
            if not only_cleanup or not cleanups:
                continue
            # Locate this function's source block via its ENTRY marker.
            m = re.search(r'// Reference entry ' + entry +
                          r'; body size \d+ bytes\.\n#line 1 "ENTRY_' +
                          entry + r'"\n', source)
            if not m:
                continue
            nxt = source.find('// Reference entry ', m.end())
            block = source[m.end():nxt if nxt > 0 else len(source)]
            newblock = block
            for symbol, need in cleanups:
                name = cc.generated_symbol_name(symbol) or symbol
                call = re.search(
                    r'(?<![\w:])((' + re.escape(name) +
                    r')|(' + re.escape(name.replace('thunk_FUN_', 'FUN_')) +
                    r'))\s*\(', newblock)
                if not call:
                    continue
                if len(re.findall(r'(?<![\w:])' + re.escape(name) + r'\s*\(',
                                  newblock)) != 1:
                    continue
                args, end = split_args(newblock, call.end() - 1)
                if len(args) == need:
                    continue
                if need < len(args):
                    keep = args[:need]
                else:
                    keep = args + ['0'] * (need - len(args))
                newblock = (newblock[:call.start()] + name + '(' +
                            ', '.join(keep) + ')' + newblock[end:])
            if newblock != block:
                edits.append((m.end(), nxt if nxt > 0 else len(source),
                              newblock))
        for start, end, newblock in edits:
            source = source[:start] + newblock + source[end:]
        if edits:
            part.write_text(source)
            total += len(edits)
            files += 1
            print(directory.name, len(edits), 'call-site arity fixes')
    print('total:', total, 'in', files, 'parts')


if __name__ == '__main__':
    main()
