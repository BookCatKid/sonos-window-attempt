#!/usr/bin/env python3
"""Error-driven repair for decompiled functions rejected by compile_bulk_mass.

Each failure record's ``decompiled_c`` is run through the standard
``transform``/``cpp_source`` emit, syntax-checked with clang-cl, and the
first diagnostic is mapped to a targeted source edit (pointer/integer
comparison coercion, missing typedefs, Ghidra ``code``-pointer arithmetic,
etc.). The loop repeats until the function compiles or the budget runs out.
Survivors are written as ordinary C++ into ``src/generated/bulk`` so the
normal build-and-verify pipeline decides whether their bytes match.
"""

import argparse
import csv
import glob
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import compile_bulk_mass as cbm

COMPILER = Path('/opt/homebrew/opt/llvm/bin/clang-cl')

ERR_RE = re.compile(r'ENTRY_[0-9a-f]{8}\((\d+),(\d+)\): error: ([^\n]+)')
FILE_ERR_RE = re.compile(r'[^:"()]+?\.cpp\((\d+),(\d+)\): error: ([^\n]+)')


def load_records(patterns):
    records = {}
    for pattern in patterns:
        for path in glob.glob(str(pattern)):
            for line in open(path, errors='replace'):
                try:
                    record = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if 'decompiled_c' in record:
                    records.setdefault(record['entry'], record)
    return records


def load_failure_entries(index_dir):
    entries = {}
    for path in sorted(Path(index_dir).glob('failures-*.tsv')):
        for row in csv.DictReader(open(path), delimiter='\t'):
            entries.setdefault(row['entry'], row['error'])
    return entries


def compile_errors(path):
    """Return (entry_errors, file_errors) for a scratch compile."""
    result = subprocess.run(
        [str(COMPILER), '/nologo', '/Zs', '/EHsc',
         '/clang:--target=i686-pc-windows-msvc',
         '/clang:-ferror-limit=5', str(path)],
        capture_output=True, text=True)
    text = result.stderr + result.stdout
    entry_errs = [(int(m.group(1)), int(m.group(2)), m.group(3))
                  for m in ERR_RE.finditer(text)]
    file_errs = [(int(m.group(1)), int(m.group(2)), m.group(3))
                 for m in FILE_ERR_RE.finditer(text)]
    if result.returncode != 0 and not entry_errs and not file_errs:
        print('  UNPARSED COMPILE OUTPUT:',
              (result.stderr + result.stdout).strip()[:300], flush=True)
    return result.returncode == 0, entry_errs, file_errs


def _cmp_rewrite(line, col):
    """Turn pointer casts on the error line into uintptr_t casts.

    ``(T *)expr`` in a comparison becomes ``(uintptr_t)expr``; the emitted
    ``cmp`` is identical either way. Covers both the ``(T *)(expr)`` and
    ``(T *)name`` spellings plus a leading unary/deref on the operand.
    """
    new = re.sub(r'\(\s*(?:const\s+)?[A-Za-z_][\w:<>]*\s*\*+\s*\)\s*\(',
                 '(uintptr_t)(', line)
    new = re.sub(r'\(\s*(?:const\s+)?[A-Za-z_][\w:<>]*\s*\*+\s*\)\s*([A-Za-z_]\w*)',
                 r'(uintptr_t)\1', new)
    if new == line:
        # No cast on the line: the pointer operand is a bare lvalue. Wrap the
        # identifier nearest the reported column that sits beside a
        # comparison operator.
        best = None
        for m in list(re.finditer(
                r'\b([A-Za-z_]\w*(?:\[[^\]]*\]|->\w+|\.\w+)*)\b'
                r'(?=\s*(?:==|!=|<=?|>=?))', line)) + list(re.finditer(
                r'(?:==|!=|<=?|>=?)\s*([A-Za-z_]\w*)', line)):
            name = m.group(1)
            if name in ('if', 'while', 'return', 'switch', 'for', 'int',
                        'uint', 'char', 'uintptr_t', 'sizeof'):
                continue
            d = abs(m.start() - (col - 1))
            if best is None or d < best[0]:
                best = (d, m, name)
        if best is not None:
            _, m, name = best
            new = (line[:m.start()] + '(uintptr_t)(' + name + ')' +
                   line[m.start() + len(name):])
            return new
    return new if new != line else None


def patch_definition(defn, lineno, col, message):
    """Edit definition text at ENTRY-relative (lineno, col)."""
    lines = defn.split('\n')
    if not (0 < lineno <= len(lines)):
        return None
    line = lines[lineno - 1]
    if ('comparison between pointer and integer' in message or
            'comparison of distinct pointer types' in message or
            'ordered comparison' in message):
        new = _cmp_rewrite(line, col)
    elif ('incompatible pointer to integer conversion' in message or
          'incompatible integer to pointer conversion' in message or
          'assigning to' in message and 'from' in message):
        # Cast the RHS to the declared type so both int->ptr and ptr->int
        # assignments survive; codegen for the assignment is unchanged.
        m = re.search(r"assigning to '([^']+)'", message)
        target = m.group(1) if m else 'int'
        target = target.split(' (aka ')[0]
        pos = col - 1
        rhs = line[pos:].rstrip().rstrip(';')
        new = line[:pos] + f'({target})(uintptr_t)(' + rhs + ');'
    elif 'invalid operands to binary expression' in message:
        # Wrap the operand following the operator; pointer arithmetic on a
        # uintptr_t operand codegen's identically.
        ops = [m for m in re.finditer(r'<<|>>|<=|>=|==|!=|[+\-*/&|^<>]',
                                      line)]
        ops = [m for m in ops if m.start() >= col - 4]
        if not ops:
            return None
        m = ops[0]
        operand = line[m.end():]
        lead = len(operand) - len(operand.lstrip())
        operand = operand.lstrip()
        end = operand.rfind(';')
        end = end if end > 0 else len(operand.rstrip())
        new = (line[:m.end() + lead] + '(uintptr_t)(' +
               operand[:end].rstrip() + ')' + operand[end:])
    elif 'called object type' in message:
        pos = col - 1
        m = re.match(r'(\w+)\s*\(', line[pos:])
        if not m:
            return None
        new = (line[:pos] + '(*(int(**)(...))&' + m.group(1) + ')' +
               line[pos + m.end(1):])
    elif ('subscript of pointer to function type' in message or
          'arithmetic on a pointer to the function type' in message):
        new = re.sub(r'\bcode\s*\*\s*(\w+)', r'code **\1', line)
        if new == line:
            new = re.sub(r'\bcode\s+(\w+)', r'code *\1', line)
    elif 'indirection requires pointer operand' in message:
        # `*x` where x is an integer: Ghidra's deref of a scalar needs a
        # pointer cast; likewise repair earlier uintptr_t damage.
        pos = col - 1
        m = re.match(r'\*+\s*(\(uintptr_t\)\s*)?(\w+|\([^()]*\))', line[pos:])
        if m:
            new = (line[:pos] + '*(int *)(uintptr_t)(' + m.group(2) + ')' +
                   line[pos + m.end():])
        else:
            new = re.sub(r'\*\s*\(uintptr_t\)\s*\(',
                         '*(int *)(uintptr_t)(', line)
            if new == line:
                new = re.sub(r'\*\s*\(uintptr_t\)\s*(\w+)',
                             r'*(int *)(uintptr_t)\1', line)
    elif 'use of overloaded operator' in message and 'ambiguous' in message:
        # A class-typed operand makes builtin comparison ambiguous; force
        # both sides through int.
        new = _cmp_rewrite(line, col)
        if new == line:
            ops = [m for m in re.finditer(r'<=|>=|==|!=|<|>', line)]
            ops = [m for m in ops if m.start() >= col - 6]
            if ops:
                m = ops[0]
                operand = line[m.end():].lstrip()
                lead = len(line[m.end():]) - len(operand)
                end = operand.find(')') 
                end = end if end > 0 else operand.find(';')
                end = end if end > 0 else len(operand)
                new = (line[:m.end() + lead] + '(int)(' +
                       operand[:end].rstrip() + ')' + operand[end:])
    elif 'member reference type' in message and 'not a pointer' in message:
        # scalar->field: route through the field-bearing stub. clang's
        # column lands on or near the '->'; scan the whole line for the
        # access nearest to it.
        new = line
        best = None
        for m in re.finditer(r'(\w+)\s*->\s*(\w+)', line):
            d = abs(m.start() - (col - 1))
            if best is None or d < best[0]:
                best = (d, m)
        if best is not None:
            m = best[1]
            new = (line[:m.start()] + '(*(struct __RFLD **)&' +
                   m.group(1) + ').' + m.group(2) + line[m.end():])
        if new == line:
            return None
    elif 'invalid argument type' in message and 'unary' in message:
        pos = col - 1
        m = re.match(r'([~!])\s*(\w+)', line[pos:])
        if not m:
            return None
        new = (line[:pos] + m.group(1) + '(uintptr_t)(' + m.group(2) + ')' +
               line[pos + m.end():])
    elif 'subscripted value is not an array' in message:
        # `EXPR[i]` where EXPR is a scalar address: treat as pointer-index.
        pos = col - 1
        m = re.match(r'(\w+)\s*\[', line[pos:])
        if m:
            new = (line[:pos] + '(*(int **)&' + m.group(1) + ')' +
                   line[pos + m.end(1):])
        else:
            # `(...)[i]`: cast the parenthesised base to a pointer. Find the
            # ')' adjacent to '[' and walk back to its '('.
            br = line.rfind('[', 0, col + 4)
            if br < 0 or line[br - 1] != ')':
                return None
            depth, open_idx = 0, -1
            for i in range(br - 1, -1, -1):
                if line[i] == ')':
                    depth += 1
                elif line[i] == '(':
                    depth -= 1
                    if depth == 0:
                        open_idx = i
                        break
            if open_idx < 0:
                return None
            new = (line[:open_idx] + '(int *)' + line[open_idx:])
    elif "C-style cast from" in message and 'is not allowed' in message:
        m = re.search(r"\((\w+)\s*\[\s*(\d+)\s*\]\)", line)
        if not m:
            return None
        new = line.replace(m.group(0),
                           f'*({m.group(1)}(*)[{m.group(2)}])&', 1)
    else:
        return None
    if new is None or new == line:
        return None
    lines[lineno - 1] = new
    return '\n'.join(lines)


def header_extra(message):
    """Return an extra decl (str) or ('__field__', struct, member)."""
    m = re.search(r"unknown type name '(\w+)'", message)
    if m:
        name = m.group(1)
        if re.fullmatch(r'unk\w*(\d+)', name):
            n = re.search(r'(\d+)$', name).group(1)
            return f'typedef struct {{ char _p[{n}]; }} {name};'
        return f'typedef int {name};'
    if 'no matching function for call' in message:
        m = re.search(r"call to '(\w+)'", message)
        if m:
            return ('extern "C" void *' + m.group(1) +
                    '(void *, const void *, unsigned);')
    m = re.search(r"use of undeclared identifier '(\w+)'", message)
    if m:
        return f'extern char {m.group(1)};'
    m = re.search(r"no member named '(\w+)' in '([^']+)'", message)
    if m:
        return ('__field__', m.group(2), m.group(1))
    m = re.search(r"template specialization requires 'template<>'", message)
    if m:
        return '__retemplate__'
    return None


def repair_record(record, defined, scratch, max_iter=10):
    x = cbm.transform_cached(record, defined)
    if x is None:
        return None, 'transform error'
    definition, stubs, member_stubs, externs, type_stubs, methods = x
    cur = definition
    extra_decls = []
    last_err = ''
    for _ in range(max_iter):
        rec = dict(record)
        rec['xformed'] = (cur, stubs, member_stubs, externs, type_stubs,
                          methods)
        try:
            source, _ = cbm.cpp_source([rec], defined)
        except Exception as exc:
            return None, f'emit:{exc!r}'
        plain = [e for e in extra_decls if isinstance(e, str)]
        if plain:
            # inject before the first definition's #line marker
            pos = source.find('#line')
            if pos < 0:
                pos = len(source)
            source = source[:pos] + '\n'.join(plain) + '\n' + source[pos:]
        scratch.write_text(source)
        ok, entry_errs, file_errs = compile_errors(scratch)
        if ok:
            return cur, [e for e in extra_decls if isinstance(e, str)]
        if entry_errs:
            lineno, col, message = entry_errs[0]
            last_err = message
            extra = header_extra(message)
            if extra is not None:
                if isinstance(extra, tuple):
                    member_stubs.setdefault('__fields__', set()).add(extra[2])
                elif extra == '__retemplate__':
                    cur = 'template<>\n' + cur
                else:
                    extra_decls.append(extra)
                continue
            new = patch_definition(cur, lineno, col, message)
            if new is None:
                return None, last_err
            cur = new
            continue
        if file_errs:
            lineno, col, message = file_errs[0]
            last_err = 'decl:' + message
            extra = header_extra(message)
            if extra is not None and isinstance(extra, str) \
                    and extra not in extra_decls:
                extra_decls.append(extra)
                continue
            return None, last_err
        return None, 'unknown compile failure'
    return None, last_err or 'iteration budget'


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--exports', nargs='+', required=True)
    ap.add_argument('--index-dir', type=Path,
                    default=ROOT / 'analysis' / 'compiled-cpp-bulk')
    ap.add_argument('--out-dir', type=Path,
                    default=ROOT / 'src' / 'generated' / 'bulk')
    ap.add_argument('--index-out', type=Path,
                    default=ROOT / 'analysis' / 'compiled-cpp-bulk' /
                    'refixed' / 'compiled-index.tsv')
    ap.add_argument('--name-prefix', default='bulk_refixed')
    ap.add_argument('--limit', type=int, default=0)
    args = ap.parse_args()

    failures = load_failure_entries(args.index_dir)
    records = load_records(args.exports)
    todo = [records[e] for e in sorted(failures) if e in records]
    if args.limit:
        todo = todo[:args.limit]
    print(f'{len(failures)} failures, {len(todo)} with records', flush=True)

    # clang-cl parses a leading-dot filename as a /U option; keep the scratch
    # file outside the source tree entirely.
    import tempfile
    scratch = Path(tempfile.mkstemp(suffix='.cpp')[1])
    args.out_dir.mkdir(parents=True, exist_ok=True)
    fixed, still_bad = [], []
    defined = frozenset('FUN_' + r['entry'] for r in todo)
    for record in todo:
        try:
            result, err = repair_record(record, defined, scratch)
        except Exception as exc:
            result, err = None, repr(exc)
        if result is not None:
            fixed.append((record, result, err or []))
            print(f'  fixed {record["entry"]} ({record["body_bytes"]}B) '
                  f'was: {failures[record["entry"]][:60]}', flush=True)
        else:
            still_bad.append((record['entry'], err))
    scratch.unlink(missing_ok=True)
    print(f'fixed {len(fixed)}, still bad {len(still_bad)}', flush=True)
    for e, err in still_bad[:20]:
        print(f'    {e}: {err[:90]}')

    if fixed:
        out = args.out_dir / f'{args.name_prefix}_0000.cpp'
        recs = []
        all_extras = []
        for record, defn, extras in fixed:
            rec = dict(record)
            xf = record['xformed'] or (None,) * 6
            rec['xformed'] = (defn,) + tuple(xf[1:6])
            recs.append(rec)
            all_extras.extend(e for e in extras if e not in all_extras)
        source, _ = cbm.cpp_source(recs, defined)
        if all_extras:
            pos = source.find('#line')
            if pos < 0:
                pos = len(source)
            source = source[:pos] + '\n'.join(all_extras) + '\n' + source[pos:]
        try:
            from apply_bulk_signature_recovery import lower_free_thiscall
            source, _lowered = lower_free_thiscall(source)
        except Exception:
            pass
        out.write_text(source)
        args.index_out.parent.mkdir(parents=True, exist_ok=True)
        with args.index_out.open('w', newline='') as f:
            w = csv.writer(f, delimiter='\t')
            w.writerow(['entry', 'name', 'reference_body_bytes'])
            w.writerows([r['entry'], r['name'], r['body_bytes']]
                        for r, _, _ in fixed)
        print(f'wrote {out} ({len(fixed)} fns, '
              f'{sum(r["body_bytes"] for r, _, _ in fixed)} bytes)')


if __name__ == '__main__':
    main()
