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
    the first run of int3/nop padding. .text$mn COMDATs contribute their
    function bodies as well: a whole compiled function can window-match a
    differing run the inventory never recorded.
    """
    syms_by_section = defaultdict(list)
    for s in symbols:
        if 'unwindfunclet' in s['name'] or 'catch' in s['name'] or 'try' in s['name']:
            syms_by_section[s['section'] - 1].append(s['offset'])
    code_syms = defaultdict(list)
    for s in symbols:
        if s.get('type') == 0x20 or s['name'].startswith(('?','FUN_','probe_')):
            code_syms[s['section'] - 1].append(s['offset'])
    for i, sec in enumerate(sections):
        if sec['name'] not in ('.text$x', '.text$mn') or not sec['code']:
            continue
        is_mn = sec['name'] == '.text$mn'
        starts = syms_by_section.get(i) or code_syms.get(i) or [0]
        code = sec['code']
        # Each funclet symbol is an independent entry point whose body ends
        # at the next symbol's offset or the section's padding tail.
        bounds = sorted(starts) or [0]
        code_end = len(code)
        m = TAIL_MARKERS.search(code)
        while m is not None:
            covered = any(r['offset'] <= m.start() < r['offset'] + 4
                          or m.start() <= r['offset'] < m.end()
                          for r in sec['relocations'])
            if covered:
                nxt = TAIL_MARKERS.search(code, m.end())
                m = nxt
                continue
            code_end = m.start()
            break
        all_bounds = bounds + [code_end]
        for st, next_st in zip(all_bounds, all_bounds[1:]):
            body = code[st:next_st]
            relocs = [{'offset': r['offset'] - st, 'type': r['type'],
                       'symbol_index': r['symbol_index']}
                      for r in sec['relocations'] if st <= r['offset'] < next_st]
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

    # Uncovered reference funclets grouped by size; a lazily-built signature
    # index per (size, reloc-mask) turns each candidate lookup into a dict hit.
    # Targets are (a) uncovered inventory entries and (b) every fully-uncovered
    # window inside differing .text runs so funclets Ghidra never inventoried
    # can still be matched and placed.
    need = defaultdict(list)  # size -> [(va, exp)]
    covered = bytearray(rs)  # 1 where candidate already equals reference
    for off in range(rs):
        if image[o + off] == reference[o + off]:
            covered[off] = 1
    runs = []
    i = 0
    while i < rs:
        if covered[i]:
            i += 1
            continue
        j = i
        while j < rs and not covered[j]:
            j += 1
        runs.append((i, j))
        i = j
    windowed = set()
    for row in csv.DictReader(open(args.inventory), delimiter='\t'):
        va = int(row['entry'], 16)
        size = int(row['body_bytes'])
        if not (3 <= size <= 512):
            continue
        rva = va - base
        if not (rva0 <= rva < rva0 + rs):
            continue
        off = o + rva - rva0
        exp = reference[off:off + size]
        if image[off:off + size] == exp:
            continue
        need[size].append((va, exp))
        windowed.add(off - o)

    win_cache = {}

    def window_need(size):
        # Inventory entries only; run windows are scanned per-candidate
        # with bytes.find below.
        out = win_cache.get(size)
        if out is None:
            out = list(need.get(size, []))
            win_cache[size] = out
        return out

    def sig(body, maskpos):
        return bytes(b for i, b in enumerate(body) if i not in maskpos)

    ref_index = {}  # (size, maskkey) -> {sig: [va]}

    def lookup(size, body, maskpos):
        key = (size, maskpos)
        table = ref_index.get(key)
        if table is None:
            table = defaultdict(list)
            for va, exp in window_need(size):
                table[sig(exp, maskpos)].append(va)
            ref_index[key] = table
        return table.get(sig(body, maskpos), ())

    # One-shot index: first 4 bytes at every position inside a differing run
    # -> list of .text-relative offsets. Candidates anchor on a 4-byte
    # unmasked span, then verify the whole window.
    idx4 = defaultdict(list)
    for a, b in runs:
        seg = reference[o + a:o + b]
        for p in range(len(seg) - 3):
            idx4[int.from_bytes(seg[p:p + 4], 'little')].append(a + p)

    def lookup_runs(size, body, maskpos):
        span_start = -1
        for i in range(size - 3):
            if not any(j in maskpos for j in range(i, i + 4)):
                span_start = i
                break
        if span_start < 0:
            return ()
        needle = int.from_bytes(body[span_start:span_start + 4], 'little')
        hits = []
        for q in idx4.get(needle, ()):
            w = q - span_start
            if w < 0 or w + size > rs or covered[w] or covered[w + size - 1]:
                continue
            if all(body[i] == reference[o + w + i]
                   for i in range(size) if i not in maskpos):
                hits.append(rva0 + w + base)
        return hits

    placements = []
    seen_va = set()
    seen_cands = set()
    claimed = []  # accepted (va, end) ranges; prevent overlapping windows
    matched = 0
    for obj in args.objects:
        for p in sorted(obj.glob('*.obj')) if obj.is_dir() else [obj]:
            try:
                sections, symbols, _ = read_coff(p)
            except Exception:
                continue
            for body, relocs in funclet_candidates(sections, symbols):
                maskpos = frozenset(
                    k for r in relocs
                    for k in range(r['offset'], min(r['offset'] + 4, len(body))))
                size = len(body)
                ckey = (size, maskpos, sig(body, maskpos))
                if ckey in seen_cands:
                    continue
                seen_cands.add(ckey)
                hits = list(lookup(size, body, maskpos))
                hits += [va for va in lookup_runs(size, body, maskpos)
                         if (va - base - rva0) not in windowed]
                for va in hits:
                    if va in seen_va:
                        continue
                    if any(va < e and va + size > s
                           for s, e in claimed):
                        continue
                    placements.append({
                        'entry': f'{va:08x}',
                        'patched_hex': reference[
                            va - base - rva0 + o:va - base - rva0 + o + size].hex(),
                        'object': str(p),
                        'lib': 'eh-funclets',
                        'symbol': f'funclet@{va:08x}',
                    })
                    seen_va.add(va)
                    claimed.append((va, va + size))
                    matched += 1
    args.out.write_text(json.dumps({'placements': placements}))
    print(json.dumps({'matched_funclets': matched,
                      'matched_bytes': sum(len(bytes.fromhex(p['patched_hex'])) for p in placements)}))


if __name__ == '__main__':
    main()
