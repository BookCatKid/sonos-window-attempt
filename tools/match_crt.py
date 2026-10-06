#!/usr/bin/env python3
"""Extract COFF members from MSVC .lib archives and slide-match their functions
into reference .text regions that have no function inventory entries.

Anchoring rule: a candidate lands at VA only when (a) its longest fixed-byte run
has exactly one hit in the native image, and (b) every fixed-byte run matches at
that VA. Admission additionally requires the closed relocation graph to patch to
exactly the reference bytes (resolve_known_relocations -> patched == expected).
"""
import argparse
import hashlib
import json
import struct
from collections import defaultdict
from pathlib import Path

import sys
sys.path.insert(0, str(Path(__file__).resolve().parent))
from match_library_objects import (bodies, fixed_runs, immutable_data_definitions,
    imported_targets, security_cookie_targets, verify_readonly_definition)
from compare_compiled_ghidra import read_coff, resolve_known_relocations
from classify_functions import DLL, ROOT, section_map, function_bytes


def lib_members(path):
    """Yield (name, blob) for real COFF object members of a .lib archive."""
    data = path.read_bytes()
    if data[:8] != b'!<arch>\n':
        raise ValueError('Not a COFF archive: ' + str(path))
    offset = 8
    long_names = b''
    while offset + 60 <= len(data):
        name_raw = data[offset:offset + 16].decode('ascii', 'replace').strip()
        try:
            size = int(data[offset + 48:offset + 58].decode('ascii').strip() or '0')
        except ValueError:
            break
        body = offset + 60
        if size <= 0 or body + size > len(data):
            break
        if name_raw == '//':
            long_names = data[body:body + size]
        elif name_raw and name_raw != '/':
            if name_raw.startswith('/'):
                idx = int(name_raw[1:])
                end = long_names.find(b'\x00', idx)
                if end < 0:
                    end = long_names.find(b'\n', idx)
                if end < 0:
                    offset = body + size + (size & 1)
                    continue
                name = long_names[idx:end].rstrip(b'\x00').decode('utf-8', 'replace')
            else:
                name = name_raw.rstrip('/')
            blob = data[body:body + size]
            machine = struct.unpack_from('<H', blob, 0)[0] if len(blob) >= 20 else -1
            if machine == 0x14C or machine == 0xFFFF:
                yield name, blob
        offset = body + size + (size & 1)


def all_data_definitions(sections, symbols, by_index=None):
    """Like immutable_data_definitions but also admits writable-section symbols.
    Verification is still a complete-initializer byte match at the proposed VA."""
    result = []
    for symbol in symbols:
        if symbol['storage'] not in (2, 3) or symbol['type'] & 0x20:
            continue
        if not 0 < symbol['section'] <= len(sections):
            continue
        section = sections[symbol['section'] - 1]
        if section['characteristics'] & 0x20000000:
            continue
        start = symbol['offset']
        ends = [s['offset'] for s in symbols if s['section'] == symbol['section'] and s['offset'] > start]
        stop = min(ends, default=len(section['code']))
        data = section['code'][start:stop]
        relocs = []
        for r in section['relocations']:
            if start <= r['offset'] < stop:
                target = (by_index or {}).get(r['symbol_index'])
                relocs.append({'offset': r['offset'] - start, 'type': r['type'],
                               'symbol': target['name'] if target else ''})
        literal = symbol['name'].startswith('??_C@')
        if not data or (len(data) < 4 and not literal):
            continue
        if any(r['type'] != 6 or r['offset'] + 4 > len(data) or not r['symbol'] for r in relocs):
            continue
        occupied = [o for r in relocs for o in range(r['offset'], r['offset'] + 4)]
        if len(occupied) != len(set(occupied)):
            continue
        result.append({'symbol': symbol['name'], 'public': symbol['storage'] == 2,
                       'data': data, 'relocs': relocs})
    return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--lib-dir', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    args = p.parse_args()
    out = args.output
    out.mkdir(parents=True, exist_ok=True)
    reference = DLL.read_bytes()
    base, pe_sections = section_map(reference)
    pe = struct.unpack_from('<I', reference, 0x3c)[0]
    optional = pe + 24
    headers = optional + struct.unpack_from('<H', reference, pe + 20)[0]
    nsec = struct.unpack_from('<H', reference, pe + 6)[0]
    native_characteristics = [
        struct.unpack_from('<I', reference, headers + i * 40 + 36)[0] for i in range(nsec)]
    text_sections = [(rva, size, raw) for i, (rva, size, raw) in enumerate(pe_sections)
                     if native_characteristics[i] & 0x20000000]
    imports = imported_targets(reference, ROOT / 'analysis/thunk-recovery-full/final-function-inventory.tsv')
    cookie_targets, _ = security_cookie_targets(
        reference, ROOT / 'analysis/thunk-recovery-full/final-function-inventory.tsv')
    imports.update(cookie_targets)

    results = []
    all_candidates = []
    for lib in sorted(args.lib_dir.glob('*.lib')):
        seen = set()
        member_dir = out / (lib.stem + '.members')
        member_dir.mkdir(exist_ok=True)
        objects = []
        for name, blob in lib_members(lib):
            digest = hashlib.sha256(blob).hexdigest()
            if digest in seen:
                continue
            seen.add(digest)
            safe = ''.join(c if c.isalnum() or c in '._-$@?' else '_' for c in name)[:70]
            target = member_dir / (safe + '-' + digest[:8] + '.obj')
            target.write_bytes(blob)
            objects.append(target)
        if not objects:
            continue
        lib_bodies = []
        for obj in objects:
            try:
                lib_bodies += bodies(obj)
            except Exception:
                continue
        # Stage 1: unique fixed-run anchor inside native sections.
        placed = set()
        local_data = defaultdict(list)
        global_data = defaultdict(list)
        for path in objects:
            try:
                s, sy, ix = read_coff(path)
            except Exception:
                continue
            for item in all_data_definitions(s, sy, ix):
                item['object'] = str(path)
                local_data[str(path), item['symbol']].append(item)
                if item['public']:
                    global_data[item['symbol']].append(item)
        anchored = []
        for b in lib_bodies:
            code = b['code']
            runs = fixed_runs(code, b['relocs'])
            if len(code) < 8 or not runs:
                continue
            anchor_offset, anchor = max(runs, key=lambda r: len(r[1]))
            if len(anchor) < 8:
                continue
            hits = []
            for rva, size, raw in text_sections:
                pos = reference.find(anchor, raw, raw + size)
                while pos >= 0:
                    va = base + rva + pos - raw - anchor_offset
                    expected = function_bytes(reference, va, len(code), base, pe_sections)
                    if len(expected) == len(code) and all(
                            expected[o:o + len(v)] == v for o, v in runs):
                        hits.append(va)
                    pos = reference.find(anchor, pos + 1, raw + size)
            hits = sorted(set(hits))
            if len(hits) == 1 and hits[0] not in placed:
                b['entry'] = hits[0]
                placed.add(hits[0])
                anchored.append(b)
        # Stage 2: closed reloc-graph verification to a fixed point.
        active = set(range(len(anchored)))

        def names(act):
            gn = defaultdict(list, {k: list(v) for k, v in imports.items()})
            ln = defaultdict(list)
            for i in act:
                b = anchored[i]
                ln[(b['object'], b['symbol'])].append(b['entry'])
                if b['public']:
                    gn[b['symbol']].append(b['entry'])
            for m in (gn, ln):
                for k in list(m):
                    m[k] = sorted(set(m[k]))
            return gn, ln

        def verify_one(b, gn, ln):
            known = dict(gn)
            for (obj, nm), vas in ln.items():
                if obj == b['object']:
                    known[nm] = vas
            expected = function_bytes(reference, b['entry'], len(b['code']), base, pe_sections)

            def readonly(address, length):
                idx = next((i for i, (rva, size, _) in enumerate(pe_sections)
                            if base + rva <= address and address + length <= base + rva + size), None)
                return idx is not None and not native_characteristics[idx] & 0x20000000

            for r in b['relocs']:
                if r['type'] != 6 or r['symbol'] in known:
                    continue
                addend = struct.unpack_from('<I', b['code'], r['offset'])[0]
                address = (struct.unpack_from('<I', expected, r['offset'])[0] - addend) & 0xffffffff
                verified, _ = verify_readonly_definition(
                    b['object'], r['symbol'], address, local_data, global_data,
                    gn, ln,
                    lambda va, size: function_bytes(reference, va, size, base, pe_sections),
                    readonly)
                if verified:
                    known[r['symbol']] = [address]
            patched, _, unresolved = resolve_known_relocations(
                b['code'], expected, b['relocs'], b['entry'], base, known)
            return unresolved == 0 and patched == expected, patched

        while active:
            gn, ln = names(active)
            keep = {i for i in active if verify_one(anchored[i], gn, ln)[0]}
            if keep == active:
                break
            active = keep
        gn, ln = names(active)
        placements = []
        for i in sorted(active):
            b = anchored[i]
            ok, patched = verify_one(b, gn, ln)
            if not ok:
                continue
            placements.append({
                'entry': f"{b['entry']:08x}",
                'object': str(b['object']),
                'symbol': b['symbol'],
                'size': len(patched),
                'lib': lib.name,
                'relocs': b['relocs'],
                'patched_hex': patched.hex(),
            })
        (out / (lib.stem + '.matches.json')).write_text(
            json.dumps({'lib': lib.name,
                        'lib_sha256': hashlib.sha256(lib.read_bytes()).hexdigest(),
                        'placements': placements}, indent=1) + '\n')
        summary = {'lib': lib.name, 'members': len(objects), 'bodies': len(lib_bodies),
                   'anchored': len(anchored), 'verified': len(placements),
                   'verified_bytes': sum(p['size'] for p in placements)}
        results.append(summary)
        print(json.dumps(summary), flush=True)
        all_candidates += placements
    (out / 'summary.json').write_text(json.dumps(results, indent=1) + '\n')
    print('TOTAL_VERIFIED_BYTES', sum(r['verified_bytes'] for r in results))


if __name__ == '__main__':
    main()
