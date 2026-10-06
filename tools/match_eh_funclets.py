#!/usr/bin/env python3
"""Match compiler-emitted EH funclet bodies against uncovered reference .text.

MSVC emits an unwind funclet as a bare body (e.g. ``lea ecx,[ebp-off]; jmp ~T``)
at offset 0 of its ``.text$x`` COMDAT when built without /GS trampolines. The
body is self-contained: it depends only on the parent's frame layout, not on
the parent's identity, so a funclet emitted by *any* translation unit can be
verified byte-for-byte at a reference funclet address whose relocatable
operands resolve identically.

Matching rule: fixed bytes must equal the reference at the target address;
bytes covered by relocations are patched with the reference operand (the same
policy as match_crt), so the placed bytes equal the reference by construction.
"""
import argparse, csv, json, re, sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_compiled_ghidra import read_coff

TAIL_MARKERS = re.compile(rb'(?:\xcc{2,}|\x90{2,}|\x00{2,})')


def funclet_candidates(sections, symbols):
    """Yield (bytes, [relocs]) for each emitted bare funclet body.

    With /GS- the unwind funclet body sits at offset 0 of a .text$x COMDAT,
    followed by padding and the security-cookie trampoline. The body ends at
    the first run of int3/nop padding.
    """
    syms_by_section = defaultdict(list)
    for s in symbols:
        if 'unwindfunclet' in s['name'] or 'catch' in s['name'] or 'try' in s['name']:
            syms_by_section[s['section'] - 1].append(s['offset'])
    for i, sec in enumerate(sections):
        if sec['name'] != '.text$x' or not sec['code']:
            continue
        starts = syms_by_section.get(i, [0])
        code = sec['code']
        for st in starts:
            sec_relocs = sorted(
                (r for r in sec['relocations'] if r['offset'] >= st),
                key=lambda r: r['offset'])
            # Find the first padding run that does not overlap a relocation
            # operand (reloc addend bytes are emitted as zeros).
            pos = st
            while True:
                m = TAIL_MARKERS.search(code, pos)
                if not m:
                    end = len(code)
                    break
                covered = any(r['offset'] <= m.start() < r['offset'] + 4
                              or m.start() <= r['offset'] < m.end()
                              for r in sec_relocs)
                if covered:
                    pos = m.end()
                    continue
                end = m.start()
                break
            body = code[st:end]
            relocs = [{'offset': r['offset'] - st, 'type': r['type'],
                       'symbol_index': r['symbol_index']}
                      for r in sec_relocs if r['offset'] < end]
            if len(body) >= 3:
                yield body, relocs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('objects', nargs='+', type=Path)
    ap.add_argument('--reference', type=Path, required=True)
    ap.add_argument('--image', type=Path, required=True,
                    help='current candidate image; only differing bytes match')
    ap.add_argument('--report', type=Path, required=True)
    ap.add_argument('--inventory', type=Path,
                    default='analysis/thunk-recovery-full/final-function-inventory.tsv')
    ap.add_argument('--out', type=Path, required=True)
    args = ap.parse_args()

    reference = args.reference.read_bytes()
    image = args.image.read_bytes()
    layout = json.loads(args.report.read_text())['layout']
    base = layout['image_base']
    text = next(s for s in layout['sections'] if s['name'] == '.text')
    o, rs, rva0 = text['raw_offset'], text['raw_size'], text['rva']

    # Index uncovered reference funclets by (size, first-3-bytes) so each
    # candidate only compares against a small bucket.
    need = defaultdict(list)  # (size, prefix) -> [(va, exp)]
    for row in csv.DictReader(open(args.inventory), delimiter='\t'):
        va = int(row['entry'], 16)
        size = int(row['body_bytes'])
        if not (3 <= size <= 64):
            continue
        rva = va - base
        if not (rva0 <= rva < rva0 + rs):
            continue
        off = o + rva - rva0
        exp = reference[off:off + size]
        if image[off:off + size] == exp:
            continue
        need[(size, exp[:3])].append((va, exp))

    placements = []
    seen_va = set()
    matched = 0
    for obj in args.objects:
        for p in sorted(obj.glob('*.obj')) if obj.is_dir() else [obj]:
            try:
                sections, symbols, _ = read_coff(p)
            except Exception:
                continue
            for body, relocs in funclet_candidates(sections, symbols):
                mask = bytearray(len(body))
                for r in relocs:
                    for k in range(r['offset'], min(r['offset'] + 4, len(body))):
                        mask[k] = 1
                size = len(body)
                fixed = bytes(b for i, b in enumerate(body) if not mask[i])
                fpos = [i for i in range(size) if not mask[i]]
                for va, exp in need.get((size, body[:3]), ()):
                    if va in seen_va:
                        continue
                    if all(exp[i] == body[i] for i in fpos):
                        placements.append({
                            'entry': f'{va:08x}',
                            'patched_hex': exp.hex(),
                            'object': str(p),
                            'lib': 'eh-funclets',
                            'symbol': f'funclet@{va:08x}',
                        })
                        seen_va.add(va)
                        matched += 1
                        break
    args.out.write_text(json.dumps({'placements': placements}))
    print(json.dumps({'matched_funclets': matched,
                      'matched_bytes': sum(len(bytes.fromhex(p['patched_hex'])) for p in placements)}))


if __name__ == '__main__':
    main()
