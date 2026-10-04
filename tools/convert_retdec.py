#!/usr/bin/env python3
"""Convert RetDec raw-mode C output into bulk-corpus records.

``retdec-decompiler --mode raw`` emits a C file whose body uses
``unknown_<va>()`` calls, ``*(int32_t *)<va>`` data refs and ``v | 4``
pointer-or expressions.  This rewrites those into the corpus naming
scheme (``FUN_``/``DAT_``/``LAB_``) so the bulk emitter's machinery can
relocate and gate them like Ghidra-derived records.

Usage:
    python3 tools/convert_retdec.py <dir-of-*.bin+*.c> <out.jsonl>
"""
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / 'reference' / 'SonosV2' / 'sclib-csharp.dll'


def section_map(data):
    peoff = struct.unpack_from('<I', data, 0x3c)[0]
    optsz = struct.unpack_from('<H', data, peoff + 20)[0]
    oh = peoff + 24
    base = struct.unpack_from('<I', data, oh + 28)[0]
    nsec = struct.unpack_from('<H', data, peoff + 6)[0]
    out = []
    for i in range(nsec):
        o = oh + optsz + 40 * i
        name = data[o:o + 8].split(b'\0')[0].decode()
        vsize, va = struct.unpack_from('<II', data, o + 8)
        out.append((name, base + va, base + va + vsize))
    return out


def main(indir, outpath):
    data = REFERENCE.read_bytes()
    secs = section_map(data)
    text_lo, text_hi = next((s, e) for n, s, e in secs if n == '.text')
    rdata_lo, data_hi = 0, 0
    for n, s, e in secs:
        if n in ('.rdata', '.data', '.idata'):
            rdata_lo = min(rdata_lo or s, s)
            data_hi = max(data_hi, e)

    sym_names = {}
    sym_path = ROOT / 'analysis' / 'thunk-recovery-full' / 'symbols.jsonl'
    for line in sym_path.open():
        rec = json.loads(line)
        try:
            sym_names[int(rec['address'], 16)] = rec['name']
        except (KeyError, ValueError):
            pass

    def name_for(va):
        n = sym_names.get(va)
        if n and n.isidentifier() and not n.startswith('?'):
            return n
        if text_lo <= va < text_hi:
            return f'FUN_{va:x}'
        return f'DAT_{va:x}'

    # RetDec helpers we cannot express
    BAD = re.compile(
        r'__asm|__in|__out|__read|__write|__store|__load|__ind|intrinsic|'
        r'\bx87|fpu_|UNKNOWN|global_variable')
    emitted = skipped = 0
    with open(outpath, 'w') as out:
        for cfile in sorted(Path(indir).glob('fn_*.c')):
            entry = cfile.stem[3:]
            text = cfile.read_text()
            if 'entry_point' not in text:
                skipped += 1
                continue
            fm = re.search(
                r'int32_t entry_point\(([^)]*)\) \{(.*?)\n\}', text, re.S)
            if not fm:
                skipped += 1
                continue
            argstr, body_inner = fm.group(1), fm.group(2)
            if BAD.search(fm.group(0)):
                skipped += 1
                continue
            # RetDec-inferred params are cdecl stack args.
            params = ('void' if argstr.strip() in ('', 'void')
                      else ', '.join(
                          re.sub(r'\b(u?int(8|16|32|64)_t)\b',
                                 lambda m: {'int8_t': 'char',
                                            'uint8_t': 'uchar',
                                            'int16_t': 'short',
                                            'uint16_t': 'ushort',
                                            'int32_t': 'int',
                                            'uint32_t': 'uint',
                                            'int64_t': 'longlong',
                                            'uint64_t': 'ulonglong'}[
                                 m.group(1)], p).strip()
                          for p in argstr.split(',')))
            src = f'int FUN_{entry}({params}) {{\n{body_inner}\n}}'
            # callee renames
            src = re.sub(r'\bunknown_([0-9a-fA-F]{8})\b',
                         lambda m: name_for(int(m.group(1), 16)), src)
            # x87/float typedefs -> plain C types
            src = re.sub(r'\bfloat(32|64|80)_t\b',
                         lambda m: {'32': 'float', '64': 'double',
                                    '80': 'double'}[m.group(1)], src)
            # typed loads/stores -> plain C
            src = re.sub(r'\b(u?int(8|16|32|64)_t)\b',
                         lambda m: {'int8_t': 'char', 'uint8_t': 'uchar',
                                    'int16_t': 'short', 'uint16_t': 'ushort',
                                    'int32_t': 'int', 'uint32_t': 'uint',
                                    'int64_t': 'longlong',
                                    'uint64_t': 'ulonglong'}[m.group(1)], src)
            # pointer-or of small offsets is pointer arithmetic
            src = re.sub(r'\)\s*\|\s*(\d+)\)', r') + \1)', src)
            src = re.sub(r'\bv(\d+)\s*\|\s*(\d+)\b', r'v\1 + \2', src)
            # typed VA derefs/casts -> typed &DAT_ refs (before bare-VA sub)
            def cast_sub(m):
                ty, va = m.group(1), int(m.group(2), 16)
                if text_lo <= va < text_hi:
                    return f'({ty})&FUN_{va:x}'
                if rdata_lo <= va < data_hi:
                    return f'({ty})&{name_for(va)}'
                return m.group(0)
            src = re.sub(r'\(([\w\s\*]+)\)\s*0x([0-9a-fA-F]{8})\b',
                         cast_sub, src)
            # bare 32-bit VAs -> &DAT_ / FUN_ references
            def va_sub(m):
                va = int(m.group(0), 16)
                if text_lo <= va < text_hi:
                    return f'(int)&FUN_{va:x}'
                if rdata_lo <= va < data_hi:
                    return f'(int)&{name_for(va)}'
                return m.group(0)
            src = re.sub(r'\b0x[0-9a-fA-F]{8}\b', va_sub, src)
            # libc calls get void* casts so the typed extern decls bind
            def libc(m):
                fn, args = m.group(1), m.group(2).strip()
                if not args:
                    return {'memcpy': f'{fn}((void *)0, (void *)0, 0)',
                            'memset': f'{fn}((void *)0, 0, 0)',
                            'free': f'{fn}((void *)0)'}.get(fn, m.group(0))
                parts = [a.strip() for a in args.split(',')]
                # RetDec appends dead register args to memcpy/memset
                # (rep-movsd noise) or drops args it cannot see; keep or
                # pad to the canonical three.
                if fn in ('memcpy', 'memmove'):
                    while len(parts) < 3:
                        parts.append('(void *)0' if len(parts) < 2 else '0')
                    return (f'{fn}((void *)({parts[0]}), (void *)'
                            f'({parts[1]}), {parts[2]})')
                if fn == 'memset':
                    while len(parts) < 3:
                        parts.append('0')
                    return (f'{fn}((void *)({parts[0]}), {parts[1]}, '
                            f'{parts[2]})')
                if fn == 'free' and len(parts) >= 1:
                    return f'{fn}((void *)({parts[0]}))'
                return m.group(0)
            src = re.sub(
                r'\b(memcpy|memmove|memset|free)\s*'
                r'\(((?:[^()]|\([^()]*\))*)\)', libc, src)
            # A stray 'break' outside any loop/switch is RetDec-flattened
            # control flow; send it to a trailing label so it compiles.
            if 'break;' in src:
                spans = []
                for m in re.finditer(
                        r'\b(?:while|for|switch)\s*'
                        r'\([^()]*(?:\([^()]*\)[^()]*)*\)\s*\{'
                        r'|\bdo\s*\{', src):
                    depth, i = 1, m.end()
                    while i < len(src) and depth:
                        if src[i] == '{':
                            depth += 1
                        elif src[i] == '}':
                            depth -= 1
                        i += 1
                    spans.append((m.start(), i))
                def in_span(pos):
                    return any(s <= pos < e for s, e in spans)
                stray = [m for m in re.finditer(r'\bbreak\s*;', src)
                         if not in_span(m.start())]
                if stray:
                    lab = f'lab_brk_{entry}'
                    for m in reversed(stray):
                        src = (src[:m.start()] + f'goto {lab};' +
                               src[m.end():])
                    src = (src.rstrip()[:-1].rstrip() +
                           f'\n{lab}: ;\n}}')
            # case labels must be constants; (int)&DAT_<va> isn't, but the
            # reference case value IS the literal VA.
            src = re.sub(
                r'\bcase\s+\(int\)&(?:DAT_|FUN_)([0-9a-f]{8})\s*:',
                lambda m: f'case 0x{m.group(1)}:', src)
            # deduplicate repeated lab_0x definitions
            seen = set()
            def dedup(m):
                lab = m.group(1)
                if lab in seen:
                    return lab + '_dup:'
                seen.add(lab)
                return m.group(0)
            src = re.sub(r'\b(lab_0x[0-9a-f]+)\s*:', dedup, src)
            # goto to a label RetDec never defined (jump outside the slice):
            # retarget to the trailing label.
            defined = set(re.findall(r'\b(lab_0x[0-9a-f]+)\s*:', src))
            stray_gotos = set(re.findall(r'\bgoto\s+(lab_0x[0-9a-f]+)\s*;',
                                       src)) - defined
            if stray_gotos:
                lab = f'lab_brk_{entry}'
                for g in stray_gotos:
                    src = src.replace(f'goto {g};', f'goto {lab};')
                if f'{lab}:' not in src:
                    src = (src.rstrip()[:-1].rstrip() +
                           f'\n{lab}: ;\n}}')
            # calls through scalar locals (vN(args) where vN is int)
            scalars = set(re.findall(
                r'\b(?:int|uint|char|short|longlong|ulonglong|'
                r'void \*|[a-zA-Z_]\w* \*)\s*(v\d+)\s*[;=]', src))
            def ptr_call(m):
                return (f'(*(int(*)(...)){m.group(1)})('
                        if m.group(1) in scalars else m.group(0))
            src = re.sub(r'\b(v\d+)\s*\(', ptr_call, src)
            # RetDec register variables (g1, g2, ...) are referenced but
            # never declared; give them int locals.
            for g in sorted(set(re.findall(r'\bg(\d+)\b', src))):
                if not re.search(
                        rf'\bint\s*\**\s*\bg{g}\b\s*[;=]', src):
                    src = src.replace('{\n', f'{{\n    int g{g};\n', 1)
            # RetDec comments and prototypes
            src = '\n'.join(
                line for line in src.splitlines()
                if not line.strip().startswith('//'))
            rng = re.search(
                r'Address range: 0x([0-9a-fA-F]+) - 0x([0-9a-fA-F]+)', text)
            body_bytes = (int(rng.group(2), 16) - int(rng.group(1), 16)
                          if rng else 0)
            if not body_bytes:
                binf = Path(indir) / f'fn_{entry}.bin'
                if binf.exists():
                    body_bytes = len(binf.read_bytes())
            out.write(json.dumps({
                'target': entry, 'entry': entry, 'name': 'FUN_' + entry,
                'body_bytes': body_bytes,
                'decompiled_c': src + '\n', 'decompiled': True,
                'status': 'retdec_gap'}) + '\n')
            emitted += 1
    print(f'{emitted} retdec records ({skipped} skipped) -> {outpath}')


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
