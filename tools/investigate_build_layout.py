#!/usr/bin/env python3
"""Inventory linker-gap hypotheses and embedded library evidence; awards no coverage."""
import argparse
import bisect
import csv
import hashlib
import json
import re
import struct
from collections import Counter
from pathlib import Path
from classify_functions import DLL, ROOT, section_map


def inspect(image, inventory):
    base, sections = section_map(image)
    pe = struct.unpack_from('<I', image, 0x3c)[0]
    optional = pe + 24
    headers = optional + struct.unpack_from('<H', image, pe + 20)[0]
    text_index = next(i for i in range(len(sections))
                      if image[headers+i*40:headers+i*40+8].rstrip(b'\0') == b'.text')
    rva, length, raw = sections[text_index]
    text = image[raw:raw+length]
    occupied = bytearray(length)
    functions = []
    with inventory.open(newline='') as stream:
        for row in csv.DictReader(stream, delimiter='\t'):
            entry, size = int(row['entry'], 16), int(row['body_bytes'])
            start = entry-base-rva
            if 0 <= start and start+size <= length:
                occupied[start:start+size] = b'\1'*size
                functions.append((entry, size, row['name']))
    functions.sort()
    starts = [f[0] for f in functions]
    gaps = []
    # Runs are measured outside the function union, never inferred as executable padding.
    for match in re.finditer(b'\0+', occupied):
        start, end = match.span()
        content = text[start:end]
        left = bisect.bisect_right(starts, base+rva+start)-1
        gaps.append({'start': f'{base+rva+start:08x}', 'bytes': end-start,
                     'cc_bytes': content.count(0xcc), 'all_cc': content.count(0xcc)==len(content),
                     'next_alignment_16': (base+rva+end)%16,
                     'preceding_entry': f'{functions[left][0]:08x}' if left>=0 else None,
                     'preceding_body_bytes': functions[left][1] if left>=0 else None})
        gap=gaps[-1]
        if left>=0:
            entry,size,_=functions[left]
            gap['immediately_after_preceding_body']=entry+size==base+rva+start
            gap['quarter_reservation_align16']=((entry+size+size//4+15)&~15)-(entry+size)
            gap['fits_quarter_rule']=gap['immediately_after_preceding_body'] and gap['quarter_reservation_align16']==end-start
    strings = []
    for match in re.finditer(rb'[\x20-\x7e]{5,}', image):
        value = match.group().decode('ascii')
        if re.search(r'expat_\d| (?:inflate|deflate) \d|^1\.2\.12$|^3\.31\.1$|^2020-01-27 .*[a-f0-9]{40}|^COMPILER=|^OMIT_|^THREADSAFE=|^HAS_CODEC$|^MAX_EXPR_DEPTH=|^DEFAULT_WAL_|^LIKE_DOESNT_', value):
            strings.append({'file_offset': hex(match.start()), 'value': value})
    return {'reference_sha256': hashlib.sha256(image).hexdigest(),
            'inventory_sha256': hashlib.sha256(inventory.read_bytes()).hexdigest(),
            'function_union_bytes': sum(occupied), 'gap_bytes': length-sum(occupied),
            'all_cc_gap_bytes': sum(g['bytes'] for g in gaps if g['all_cc']),
            'mixed_gap_cc_bytes': sum(g['cc_bytes'] for g in gaps if not g['all_cc']),
            'all_cc_gap_count': sum(g['all_cc'] for g in gaps),
            'quarter_rule_hypothesis_gap_bytes':sum(g['bytes'] for g in gaps if g['all_cc'] and g.get('fits_quarter_rule')),
            'quarter_rule_hypothesis_gap_count':sum(g['all_cc'] and g.get('fits_quarter_rule',False) for g in gaps),
            'all_cc_end_alignment_mod16': dict(Counter(g['next_alignment_16'] for g in gaps if g['all_cc'])),
            'library_evidence': strings, 'gaps': gaps, 'coverage_added': 0,
            'scope': 'Unclassified native gaps and string fingerprints, not proof of linker padding or library byte matches'}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--image', type=Path, default=DLL)
    p.add_argument('--inventory', type=Path, default=ROOT/'analysis/thunk-recovery-full/final-function-inventory.tsv')
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    result = inspect(a.image.read_bytes(), a.inventory)
    a.output.parent.mkdir(parents=True, exist_ok=True)
    a.output.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps({k: v for k, v in result.items() if k not in ('gaps', 'library_evidence')}))


if __name__ == '__main__':
    main()
