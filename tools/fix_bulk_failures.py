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


def _operand_end(line, i):
    """Return the index just past the operand starting at ``i``.

    Handles parenthesised operands and cast chains: a ``(...)`` immediately
    followed by ``(`` or ``&``/``*``/identifier continues the operand.
    """
    n = len(line)
    while i < n and line[i].isspace():
        i += 1
    while i < n:
        if line[i] == '(':
            depth = 0
            for j in range(i, n):
                depth += line[j] == '('
                depth -= line[j] == ')'
                if depth == 0:
                    i = j + 1
                    break
            else:
                return -1
            continue
        if line[i] in '&*':
            i += 1
            continue
        m = re.match(r'[A-Za-z_0-9][\w.]*', line[i:])
        if m:
            i += m.end()
            continue
        if line[i] == '[':
            # ``x[...]`` subscript — part of the operand.
            depth = 0
            for j in range(i, n):
                depth += line[j] == '['
                depth -= line[j] == ']'
                if depth == 0:
                    i = j + 1
                    break
            else:
                return -1
            continue
        if line[i] in '~':
            i += 1
            continue
        break
    return i


def _operand_start(line, i):
    """Return the start index of the operand whose value ends at ``i``."""
    while i > 0:
        if line[i - 1] == ')':
            depth = 0
            j = i - 1
            while j >= 0:
                depth += line[j] == ')'
                depth -= line[j] == '('
                j -= 1
                if depth == 0:
                    break
            i = j + 1
            continue
        if line[i - 1].isspace() or line[i - 1] in '*&~!':
            i -= 1
            continue
        m = re.search(r'[A-Za-z_0-9]\w*$', line[:i])
        if m:
            i = m.start()
            continue
        break
    return i


def _cmp_rewrite(line, col):
    """Turn pointer casts on the error line into uintptr_t casts.

    ``(T *)expr`` in a comparison becomes ``(uintptr_t)expr``; the emitted
    ``cmp`` is identical either way. Covers both the ``(T *)(expr)`` and
    ``(T *)name`` spellings plus a leading unary/deref on the operand.
    """
    # ``(void)expr`` compared to a pointer: make it a void* cast first so
    # both sides stay pointer-typed and never hit the uintptr_t path.
    line = re.sub(r'\(\s*void\s*\)\s*\(', '(void *)(', line)
    # ``**(T **)(x)`` and ``*(T *)(x)`` in comparisons: rewrite the cast in
    # one step so each dereference still has a pointer operand.
    def _deref_cast(m):
        stars = len(m.group(1))
        return m.group(1) + '(int ' + '*' * stars + ')(uintptr_t)('
    new = re.sub(r'(\*+)\s*\(\s*(?:const\s+)?[A-Za-z_][\w:<>]*\s*\*+\s*\)'
                 r'\s*\((?!\s*uintptr_t\b)', _deref_cast, line)
    new = re.sub(r'(?<!\*)\(\s*(?:const\s+)?[A-Za-z_][\w:<>]*\s*\*+\s*\)\s*'
                 r'\((?!\s*uintptr_t\b)', '(uintptr_t)(', new)
    new = re.sub(r'(?<!\*)\(\s*(?:const\s+)?[A-Za-z_][\w:<>]*\s*\*+\s*\)\s*'
                 r'((?!uintptr_t\b)[A-Za-z_]\w*)', r'(uintptr_t)\1', new)
    # A dereference in front of the rewritten cast is now ``*(uintptr_t)``;
    # keep it legal by typing the pointer as ``int *``.
    new = re.sub(r'\*\s*\(uintptr_t\)\s*\(',
                 '*(int *)(uintptr_t)(', new)
    new = re.sub(r'\*\s*\(uintptr_t\)\s*(\w+)',
                 r'*(int *)(uintptr_t)\1', new)
    if new == line:
        # Locate the comparison operator nearest the error column and wrap
        # both operands in uintptr_t; a 32-bit integer compare generates the
        # same ``cmp`` for pointer/integer mixes.
        ops = [m for m in re.finditer(r'==|!=|<=|>=|(?<![<>&|])<(?![<=&|])|'
                                      r'(?<![<>&|])>(?![>=&|])', line)]
        if not ops:
            return None
        m = min(ops, key=lambda o: abs(o.start() - (col - 1)))
        # Right operand: stop at a top-level && || , ; ? : or a ')' from an
        # enclosing construct.
        i, depth = m.end(), 0
        while i < len(line) and line[i] == ' ':
            i += 1
        rs = i
        while i < len(line):
            ch = line[i]
            if ch == '(':
                depth += 1
            elif ch == ')':
                if depth == 0:
                    break
                depth -= 1
            elif depth == 0 and (ch in ';,?' or line.startswith('&&', i) or
                                 line.startswith('||', i) or ch == ':'):
                break
            i += 1
        right = line[rs:i].rstrip()
        # Left operand: scan back to a top-level && || , ; ? : or '('/'{'.
        j, depth = m.start() - 1, 0
        while j >= 0:
            ch = line[j]
            if ch == ')':
                depth += 1
            elif ch == '(':
                if depth == 0:
                    break
                depth -= 1
            elif depth == 0 and (ch in ';,?:{}' or line[j:j + 2] == '&&' or
                                 line[j:j + 2] == '||'):
                break
            j -= 1
        left = line[j + 1:m.start()].strip()
        if not left or not right:
            return None
        ls = j + 1 + (len(line[j + 1:m.start()]) -
                      len(line[j + 1:m.start()].lstrip()))
        return (line[:ls] + '(uintptr_t)(' + left + ')' +
                line[m.start():rs] + '(uintptr_t)(' + right + ')' +
                line[i:])
    return new if new != line else None


def patch_definition(defn, lineno, col, message):
    """Edit definition text at ENTRY-relative (lineno, col)."""
    lines = defn.split('\n')
    if not (0 < lineno <= len(lines)):
        return None
    line = lines[lineno - 1]
    # A decompiler banner like ``Library: Visual Studio 2019 Release */``
    # leaks into the signature line — strip everything through the ``*/``.
    if '*/' in line and '/*' not in line.split('*/', 1)[0]:
        lines[lineno - 1] = line.split('*/', 1)[1]
        return '\n'.join(lines)
    # Ghidra fuses field-offset access as ``obj.*(T*)((char *)&f + N)``;
    # the downstream error varies, so rewrite it regardless of message.
    fm = re.search(r'(\w+)\s*\.\*\s*\(\s*([\w ]*\*)\s*\)\s*\(\s*'
                   r'\(char \*\)\s*&\w+\s*\+\s*([^)]*)\)', line)
    if fm:
        lines[lineno - 1] = (line[:fm.start()] + '*(' + fm.group(2) + ')'
                             '((char *)&' + fm.group(1) + ' + (' +
                             fm.group(3) + '))' + line[fm.end():])
        return '\n'.join(lines)
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
        st = pos
        while st < len(line) and line[st] == ' ':
            st += 1
        # Bound the RHS operand: scan forward until a top-level ; , or a
        # ')' belonging to an enclosing construct (for/if/while/call).
        i, depth = st, 0
        while i < len(line):
            ch = line[i]
            if ch == '(':
                depth += 1
            elif ch == ')':
                if depth == 0:
                    break
                depth -= 1
            elif ch in ';,' and depth == 0:
                break
            i += 1
        rhs = line[st:i].rstrip()
        if not rhs:
            return None
        new = (line[:st] + f'({target})(uintptr_t)(' + rhs + ')' +
               line[i:])
    elif 'invalid operands to binary expression' in message:
        # A ``(void)expr`` operand in a comparison becomes a ``void*`` cast
        # via the comparison path; everything else wraps the operand
        # following the operator. Pointer arithmetic on a uintptr_t operand
        # codegen's identically.
        if "'void'" in message:
            new = _cmp_rewrite(line, col)
            if new and new != line:
                lines[lineno - 1] = new
                return '\n'.join(lines)
            new = line
        ops = [m for m in re.finditer(r'<<|>>|<=|>=|==|!=|[+\-*/&|^<>]',
                                      line)]
        ops = [m for m in ops if m.start() >= col - 4]
        if not ops:
            return None
        m = ops[0]
        operand = line[m.end():]
        lead = len(operand) - len(operand.lstrip())
        operand = operand.lstrip()
        # Wrap only the immediate operand — stop before comparisons or
        # the statement's end. If it's already an integer cast, the
        # pointer operand is on the LEFT.
        end = _operand_end(operand, 0)
        if operand.lstrip().startswith('(uintptr_t'):
            lst = _operand_start(line, m.start())
            if lst >= m.start():
                return None
            new = (line[:lst] + '(uintptr_t)(' + line[lst:m.start()] +
                   ')' + line[m.start():])
        elif end <= 0:
            end = operand.rfind(';')
            end = end if end > 0 else len(operand.rstrip())
            new = (line[:m.end() + lead] + '(uintptr_t)(' +
                   operand[:end].rstrip() + ')' + operand[end:])
        else:
            new = (line[:m.end() + lead] + '(uintptr_t)(' +
                   operand[:end].rstrip() + ')' + operand[end:])
    elif 'called object type' in message:
        pos = col - 1
        m = re.match(r'(\w+)\s*\(', line[pos:])
        if m:
            new = (line[:pos] + '(*(int(**)(...))&' + m.group(1) + ')' +
                   line[pos + m.end(1):])
        else:
            # ``callee(args)`` where callee is an identifier or a cast
            # expression: back up over it and call through a pun.
            st = _operand_start(line, pos)
            if st >= pos:
                return None
            callee = line[st:pos]
            if callee.strip() in ('NAN', 'INFINITY', 'isnan', 'finite'):
                # ``NAN(x)`` is a Ghidra NaN-check builtin.
                end = _operand_end(line, pos)
                if end <= pos:
                    return None
                operand = line[pos:end]
                inner = operand[1:-1] if operand.startswith('(') \
                    else operand
                new = (line[:st] + '(' + inner + ' != ' + inner + ')' +
                       line[end:])
            elif re.fullmatch(r'[A-Za-z_]\w*', callee.strip()):
                new = (line[:st] + '(*(int(**)(...))&' +
                       callee.strip() + ')' + line[pos:])
            else:
                new = (line[:st] + '(*(int(**)(...))(uintptr_t)(' +
                       callee + ')' + line[pos:])
    elif 'subscript of pointer to function type' in message:
        # ``p[i]`` where p is ``code *``: index through a ``code **`` pun.
        brs = [i for i, ch in enumerate(line[:col + 16]) if ch == '[']
        if not brs:
            return None
        br = min(brs, key=lambda i: abs(i - (col - 1)))
        m = re.search(r'(\w+)\s*$', line[:br])
        if not m:
            return None
        base = m.group(1)
        new = (line[:m.start(1)] + '((code **)(uintptr_t)(' + base + '))' +
               line[br:])
    elif 'subscripted value is not' in message:
        # Scalar/void base subscripted: pun the base to ``char **``.
        brs = [i for i, ch in enumerate(line[:col + 16]) if ch == '[']
        if not brs:
            return None
        br = min(brs, key=lambda i: abs(i - (col - 1)))
        st = _operand_start(line, br)
        if st >= br:
            return None
        new = (line[:st] + '(*(char ***)(uintptr_t)(' +
               line[st:br] + '))' + line[br:])
    elif ('non-object type' in message and 'is not assignable' in message
          and "'code'" in message):
        # ``fn = v`` where fn has function type: assign through a code**
        # pun on its address.
        eq = line.find('=')
        if eq < 0 or line[eq + 1] == '=':
            return None
        lhs = line[:eq].rstrip()
        st = _operand_start(line, eq)
        if st >= eq:
            return None
        new = (line[:st] + '(*(code **)&(' + lhs.strip() + '))' +
               line[eq:])
    elif 'statement requires expression of integer type' in message:
        # ``switch(obj)`` where obj is a class: route through uintptr_t.
        m = re.search(r'(switch\s*\()', line)
        if not m:
            return None
        i = m.end()
        end = _operand_end(line, i)
        if end <= i:
            return None
        new = (line[:i] + '(int)(uintptr_t)(' + line[i:end] + ')' +
               line[end:])
    elif 'arithmetic on a pointer to the function type' in message:
        # ``code *`` arithmetic: route through uintptr_t, keeping the
        # arithmetic outside the cast so + n is integer math.
        new = re.sub(r'\(code \*\)\s*\((\w+)\s*([+\-]\s*[^()]*)\)',
                     r'(code *)((uintptr_t)(\1) \2)', line, count=1)
        if new == line:
            new = re.sub(r'\(code \*\)\s*'
                         r'(\((?:[^()]|\([^()]*\))*\)|\w+)\s*'
                         r'([+\-]\s*(?:[^,;()]|\([^()]*\))+)',
                         r'(code *)((uintptr_t)(\1) \2)', line, count=1)
        if new == line:
            # ``(code *)(operand + <anything>)``: pun only the operand,
            # leaving the rest of the arithmetic as integer math.
            seg = line[max(0, col - 40):col + 40]
            cs = [m for m in re.finditer(r'\(code \*\)\s*\(', seg)]
            for cm in cs[::-1]:
                gstart = cm.end()  # inside the cast's operand parens
                depth = 1
                j = gstart
                gend = -1
                while j < len(seg):
                    depth += seg[j] == '('
                    depth -= seg[j] == ')'
                    if depth == 0:
                        gend = j
                        break
                    j += 1
                if gend < 0:
                    continue
                inner = seg[gstart:gend]
                om = re.match(r'(\w+)\s*(?=[+\-])', inner) or \
                    re.search(r'(\w+)\s*(?=[+\-])', inner)
                if not om:
                    continue
                base = seg[:cm.start()]
                new = (line[:max(0, col - 40) + cm.start()] +
                       '(code *)((uintptr_t)(' +
                       inner[:om.start(1)] + om.group(1) + ')' +
                       inner[om.end(1):] + ')' +
                       line[max(0, col - 40) + gend + 1:])
                break
        if new == line:
            # ``p + n`` on a bare code* variable.
            m2 = re.search(r'(\w+)\s*([+\-]\s*\d+)', line)
            if not m2:
                return None
            new = (line[:m2.start(1)] + '(code *)((uintptr_t)(' +
                   m2.group(1) + ') ' + m2.group(2) + ')' +
                   line[m2.end():])
    elif re.search(r"cast from '?\w+[\w ]*'?.*to 'code'", message):
        # ``(code)(x)``: function-type casts are illegal; go through the
        # pointer type instead.
        new = re.sub(r'\(\s*code\s*\)\s*\(', '(code *)(uintptr_t)(', line,
                     count=1)
        if new == line:
            new = re.sub(r'\(\s*code\s*\)\s*(\w+)',
                         r'(code *)(uintptr_t)\1', line, count=1)
        if new == line:
            return None
    elif ('cannot convert' in message and
          'without a conversion operator' in message):
        # ``(T)blob`` where blob is a decompiler struct type: read the
        # destination scalar straight out of the blob's storage.
        m = re.search(r"cannot convert '[^']+' to '([^']+)'", message)
        if not m:
            return None
        dst = m.group(1).split('(')[0].strip()
        new = line
        for mm in list(re.finditer(
                r'\(\s*' + re.escape(dst) + r'\s*\)\s*', line))[::-1]:
            operand_start = mm.end()
            while (operand_start < len(line) and
                   line[operand_start].isspace()):
                operand_start += 1
            if operand_start < len(line) and line[operand_start] == '(':
                continue  # outer cast — repair the innermost first
            end = _operand_end(line, operand_start)
            if end <= operand_start:
                continue
            operand = line[operand_start:end]
            new = (new[:mm.start()] + '(*(' + dst + ' *)&(' + operand +
                   '))' + new[end:])
            break
        if new == line:
            return None
    elif 'indirection requires pointer operand' in message:
        # `*x` where x is an integer: Ghidra's deref of a scalar needs a
        # pointer cast; likewise repair earlier uintptr_t damage.
        new = re.sub(r'\*\s*\(uintptr_t\)\s*\(',
                     '*(int *)(uintptr_t)(', line)
        if new == line:
            new = re.sub(r'\*\s*\(uintptr_t\)\s*(\w+)',
                         r'*(int *)(uintptr_t)\1', line)
        if new == line:
            pos = col - 1
            m = re.match(r'\*+\s*(\(uintptr_t\)\s*)?(\w+|\([^()]*\))',
                         line[pos:])
            if not m:
                return None
            new = (line[:pos] + '*(int *)(uintptr_t)(' + m.group(2) + ')' +
                   line[pos + m.end():])
    elif 'use of overloaded operator' in message and 'ambiguous' in message:
        # A class-typed operand makes builtin comparison ambiguous; force
        # both sides through int.
        new = _cmp_rewrite(line, col)
        if not new or new == line:
            ops = [m for m in re.finditer(r'<=|>=|==|!=|<|>', line)]
            ops = [m for m in ops if m.start() >= col - 6]
            if ops:
                m = ops[0]
                operand = line[m.end():].lstrip()
                lead = len(line[m.end():]) - len(operand)
                if operand.startswith('('):
                    depth = 0
                    end = 0
                    for i, ch in enumerate(operand):
                        depth += ch == '('
                        depth -= ch == ')'
                        if depth == 0:
                            end = i + 1
                            break
                    tail = re.match(r'\s*\w+(?:\[[^\]]*\])*', operand[end:])
                    if tail:
                        end += tail.end()
                else:
                    t = re.match(r'\w+(?:\[[^\]]*\])*', operand)
                    end = t.end() if t else 0
                if not end:
                    return None
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
        else:
            # ``(scalar_expr)->field``: cast the base to the field stub's
            # pointer type instead of dereferencing through its address.
            ar = line.find('->', max(0, col - 8))
            if ar < 0:
                ar = line.find('->')
            if ar > 0:
                i = ar - 1
                while i >= 0 and line[i] == ' ':
                    i -= 1
                if i >= 0 and line[i] == ')':
                    depth, base0 = 0, -1
                    for j in range(i, -1, -1):
                        depth += line[j] == ')'
                        depth -= line[j] == '('
                        if depth == 0:
                            base0 = j
                            break
                    if base0 >= 0:
                        base = line[base0:ar].rstrip()
                        fld = re.match(r'\s*(\w+)', line[ar + 2:])
                        if fld:
                            new = (line[:base0] + '((struct __RFLD *)'
                                   '(uintptr_t)(' + base + '))->' +
                                   fld.group(1) +
                                   line[ar + 2 + fld.end():])
        if new == line:
            return None
    elif 'invalid argument type' in message and 'unary' in message:
        pos = col - 1
        m = re.match(r'([~!])\s*', line[pos:])
        if not m:
            return None
        i = pos + m.end()
        while i < len(line) and line[i] == ' ':
            i += 1
        end = _operand_end(line, i)
        if end <= i:
            return None
        operand = line[i:end]
        new = (line[:pos] + m.group(1) + '(uintptr_t)(' + operand + ')' +
               line[end:])
    elif 'subscripted value is not an array' in message:
        # `EXPR[i]` where EXPR is a scalar address: treat as pointer-index.
        pos = col - 1
        m = re.match(r'(\w+)\s*\[', line[pos:])
        if m:
            new = (line[:pos] + '(*(int **)&' + m.group(1) + ')' +
                   line[pos + m.end(1):])
        else:
            # `(...)[i]`: cast the parenthesised base to a pointer. Find the
            # ')' adjacent to '[' and walk back to its '('. The cast must be
            # wrapped in parens or ``[]`` would bind tighter than the cast.
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
            new = (line[:open_idx] + '((int *)(uintptr_t)' +
                   line[open_idx:br] + ')' + line[br:])
    elif ('cannot cast from type' in message and
          'to pointer type' in message):
        # ``(T *)(double_const)``: route the scalar through uintptr_t so the
        # cast chain is legal (double->uintptr_t->T*). Skip casts whose
        # operand is already a uintptr_t cast.
        new = line
        for mm in re.finditer(r'\((\w+)\s*\*\)', line):
            tail = line[mm.end():].lstrip()
            if tail.startswith('(uintptr_t') or tail.startswith('(intptr_t'):
                continue
            new = (line[:mm.end()] + '(uintptr_t)' + line[mm.end():])
            break
        if new == line:
            return None
    elif ("cast from 'void' to 'uintptr_t'" in message or
          "cast from type 'void'" in message):
        # ``(uintptr_t)(void_expr)``: sequence the void expression with a
        # comma so the cast operand has a value.
        pos = line.find('(uintptr_t)', max(0, col - 12))
        if pos < 0:
            return None
        op = line.find('(', pos + len('(uintptr_t)'))
        if op < 0:
            return None
        depth, close = 0, -1
        for i in range(op, len(line)):
            depth += line[i] == '('
            depth -= line[i] == ')'
            if depth == 0:
                close = i
                break
        if close < 0:
            return None
        new = line[:close] + ',0' + line[close:]
    elif 'does not name a template but is followed by template' in message:
        # ``~pair<>`` destructor-name args and ``s_<T>`` exprs: the angle
        # construct is garbage either way; drop the arg to a null pointer.
        new = re.sub(r'~?\b\w+\s*<[^;<>]*>', '(void*)0', line, count=1)
        if new == line:
            return None
    elif ('is ambiguous' in message and
          'reference to' in message):
        m = re.search(r"reference to '(\w+)' is ambiguous", message)
        if not m:
            return None
        # Prefer the global stub over the std one.
        new = re.sub(r'(?<!:)\b' + m.group(1) + r'\b',
                     '::' + m.group(1), line, count=1)
    elif 'is not assignable' in message and 'array type' in message:
        # ``arr1 = arr2`` on arrays: struct-wrap both lvalues so the copy
        # assigns through a struct temporary.
        m = re.search(r'array type .(\w+)\[(\d+)\]', message)
        eq = line.find('=')
        if not m or eq < 0 or line[eq + 1] == '=':
            return None
        n = m.group(2)
        lhs = line[:eq].rstrip()
        rhs = line[eq + 1:].rstrip().rstrip(';').strip()
        if '=' in rhs or not lhs:
            return None
        # Address of the lhs lvalue works for ``arr[i]`` and ``*expr``
        # alike; memcpy sidesteps the array-assign ban entirely.
        lead = len(line) - len(line.lstrip())
        new = (line[:lead] + f'memcpy(&({lhs.strip()}), '
               f'(const void *)(uintptr_t)({rhs}), {n});')
    elif "expected '(' for function-style cast" in message:
        # ``PTR_x<>y`` fused tokens parse as template-ids needing ``(``;
        # collapse the whole token before blaming a real cast.
        fused = re.search(r'\b\w*(?:<[^;{}]*>)+\w*', line)
        if fused and fused.start() <= col <= fused.end() + 12:
            new = (line[:fused.start()] + '(void *)0' +
                   line[fused.end():])
        else:
            # ``(type)name`` where type resolved to a variable: drop it.
            pos = col - 1
            m = re.match(r'\((\w+)\)', line[pos:])
            if m:
                new = line[:pos] + line[pos + m.end():]
            else:
                # Fallback: nearest ``(type)`` cast — ``m2.end()`` is
                # already an absolute offset.
                m2 = re.search(r'\((\w+)\)\s*\(?[\w&*]', line)
                if not m2:
                    return None
                new = line[:m2.start()] + line[m2.end():]
    elif 'overloaded function could not be resolved' in message:
        # Bare overloaded name as an argument: take its address through a
        # code* cast to pick a single overload.
        pos = col - 1
        m = re.match(r'(\w+)', line[pos:])
        if not m:
            return None
        new = (line[:pos] + '(code *)&' + m.group(1) +
               line[pos + m.end(1):])
    elif 'member reference base type' in message and 'is not a structure' in message:
        # ``h->f`` or ``h.f`` where h's typedef resolved to void*: cast
        # through the field-bearing stub.
        new = line
        best = None
        for m in re.finditer(r'(\w+(?:\[[^\]]*\])*)\s*(->|\.)\s*(\w+)', line):
            d = abs(m.start() - (col - 1))
            if best is None or d < best[0]:
                best = (d, m)
        if best is None:
            return None
        m = best[1]
        if m.group(2) == '->':
            new = (line[:m.start()] + '((struct __RFLD *)(uintptr_t)(' +
                   m.group(1) + '))->' + m.group(3) + line[m.end():])
        else:
            new = (line[:m.start()] + '(*(struct __RFLD *)(uintptr_t)(' +
                   m.group(1) + ')).' + m.group(3) + line[m.end():])
    elif 'cannot take the address of an rvalue' in message:
        # ``&(rvalue)``: ``&*p`` == ``p``, so express the address directly.
        pos = col - 1
        m = re.match(r'&\s*', line[pos:])
        if not m:
            return None
        i = pos + m.end()
        while i < len(line) and line[i] == ' ':
            i += 1
        end = _operand_end(line, i)
        if end <= i:
            return None
        operand = line[i:end]
        new = (line[:pos] + '(int *)(uintptr_t)(' + operand + ')' +
               line[end:])
    elif 'expression is not assignable' in message:
        # ``(T)x = v``: cast results are rvalues; drop the cast so the
        # assignment targets the lvalue underneath.
        new = re.sub(r'\(\s*\w[\w:<> ]*\*?\s*\)\s*(\w+)(\s*=[^=])',
                     r'\1\2', line, count=1)
        if new == line:
            return None
    elif 'right hand operand to .*' in message:
        # Ghidra fuses field-offset access as ``obj.*(T*)((char *)&f + N)``;
        # rewrite to a byte-offset deref through the struct base.
        m = re.search(
            r'(\w+)\s*\.\*\s*\(\s*([\w ]*\*)\s*\)\s*\(\s*'
            r'\(char \*\)\s*&\w+\s*\+\s*([^)]*)\)',
            line)
        if m:
            new = (line[:m.start()] + '*(' + m.group(2) + ')'
                   '((char *)&' + m.group(1) + ' + (' + m.group(3) + '))' +
                   line[m.end():])
        else:
            new = line.replace('.*', ' - (uintptr_t)', 1)
    elif ("template specialization requires" in message or
          'no function template matches function template specialization'
          in message or 'expected \';\' at end of declaration' in message):
        if (defn.lstrip().startswith('template<>') and
                'no function template matches' in message):
            # The retemplate hint was wrong for this def — drop it.
            return re.sub(r'\A\s*template<>\s*\n', '', defn)
        # Fused Ghidra type tokens like ``_func_X<..>ptr_Y<..>ptr`` parse as
        # template-ids; collapse the whole token to ``int``.
        new = re.sub(r'\b\w*(?:<[^;{}]*>)+[\w:<>]*', 'int', line, count=1)
        if new == line:
            return None
    elif ('use of undeclared identifier' in message and
          re.search(r'\w+<', line)):
        # ``s_<_DIDL_Lite>...`` fused name: collapse the template-id token.
        new = re.sub(r'\b\w*(?:<[^;{}]*>)+[\w:<>._]*',
                     '(void *)0', line, count=1)
        if new == line:
            return None
    elif 'chained comparison' in message:
        # ``a < b > c``: silence -Wparentheses by wrapping ``a < b`` in
        # parens, and drop any ``|| y`` operand fusion first.
        line2 = re.sub(r'\|\|\s*[^()]*\)', ')', line, count=1)
        ops = [m for m in re.finditer(r'(?<![<>=!])<|>(?![=>])', line2)]
        if len(ops) < 2:
            if line2 == line:
                return None
            new = line2
        else:
            lt, gt = ops[0], ops[1]
            lhs_st = _operand_start(line2, lt.start())
            rhs_end = _operand_end(line2, lt.end())
            if rhs_end <= lt.end() or rhs_end > gt.start():
                return None
            new = (line2[:lhs_st] + '(' + line2[lhs_st:rhs_end] + ')' +
                   line2[rhs_end:])
    elif ('`' in line and
          ('expected expression' in message or 'expected' in message)):
        # Ghidra emits `` `public:...'` `` backtick literals (terminated
        # with a quote). A trailing ``::`` continuation on the next line
        # carries the real operand — splice it in place of the literal.
        newdefn = re.sub(r"`[^`']*'\s*:+\s*", '', defn, count=1)
        if newdefn != defn and "::" not in \
                newdefn.split('\n')[lineno - 1]:
            return newdefn
        new = re.sub(r"`[^`']*'(?:::\w+)*", '0', line, count=1)
        if new == line:
            new = re.sub(r'`[^`\n]*', '0', line, count=1)
        if new == line:
            return None
    elif 'invalid suffix' in message and 'floating constant' in message:
        # Ghidra float artefacts like ``0._0_8_``: strip the suffix.
        new = re.sub(r'\._\d+_\d+_', '', line)
        if new == line:
            return None
    elif ('cannot convert' in message and 'without a conversion operator'
          in message and re.search(r"from 'unk", message)):
        # ``(T)(unkX)expr``: the unk struct has no conversion; reinterpret
        # its storage as the cast target instead.
        pos = col - 1
        m = re.match(r'\(\s*(\w[\w ]*\*?)\s*\)\s*', line[pos:])
        if not m:
            return None
        i = pos + m.end()
        end = _operand_end(line, i)
        if end <= i:
            return None
        operand = line[i:end]
        inner = re.match(r'\(\s*\w[\w ]*\*?\s*\)\s*(.*)', operand)
        if inner and inner.group(1):
            operand = inner.group(1)
        new = (line[:pos] + '*(' + m.group(1) + ' *)&(' + operand +
               ')' + line[end:])
    elif ('no matching conversion for C-style cast' in message and
          re.search(r'to .unk\w*\d+', message)):
        # ``(unkT)expr`` on a scalar/struct: reinterpret bits through a
        # u64 so shifts and arithmetic on the result stay legal.
        pos = col - 1
        m = re.match(r'\(\s*unk\w*\d+\s*\)\s*', line[pos:])
        if not m:
            return None
        i = pos + m.end()
        end = _operand_end(line, i)
        if end <= i:
            return None
        new = (line[:pos] + '*(unsigned long long *)&(' +
               line[i:end] + ')' + line[end:])
    elif "C-style cast from" in message and 'is not allowed' in message:
        m = re.search(r"\((\w+)\s*\[\s*(\d+)\s*\]\)", line)
        if not m:
            return None
        new = line.replace(m.group(0),
                           f'*({m.group(1)}(*)[{m.group(2)}])&', 1)
    elif ('expected unqualified-id' in message and
          re.match(r'\s*(public:|private:|protected:|virtual\b)', line)):
        # Leftover class-body fragment above the function — drop it.
        del lines[lineno - 1]
        return '\n'.join(lines)
    elif 'case value is not a constant expression' in message:
        # ``case (T)expr:`` with a non-constant expr: substitute a
        # distinct literal so the switch still parses.
        m = re.match(r'(\s*)case\b.*:', line)
        if not m:
            return None
        new = f'{m.group(1)}case 0x{0x60000000 + lineno:x}:'
    elif ("expected ')'" in message and
          re.search(r'\(\s*(?:char|short|int|long|BYTE|WORD|DWORD|uchar|'
                    r'ushort|uint|ulong|unsigned(?:\s+\w+)?|byte)\s*'
                    r'\[\s*\d+\s*\]\s*\)', line)):
        # Cast to an array type ``(char [2])x`` — illegal; the decompiler
        # means a sized scalar. Compare via a wide integer instead.
        new = re.sub(r'\(\s*\w[\w ]*?\s*\[\s*\d+\s*\]\s*\)',
                     '(unsigned long long)', line, count=1)
    elif "expected ')'" in message and 'MXCSR' in line:
        new = line.replace('MXCSR', '0u')
    elif "must use 'struct' tag" in message or \
            "must use 'class' tag" in message:
        m = re.search(r"to refer to type '(\w+)'", message)
        if not m:
            return None
        # ``T *p`` where a variable shadows the type — disambiguate.
        new = re.sub(r'\b' + re.escape(m.group(1)) + r'(\s*[\*&])',
                     r'struct ' + m.group(1) + r'\1', line, count=1)
    elif re.search(r"member reference base type .*not a structure", message):
        # ``voidvar.field``: reinterpret the variable's storage as a
        # struct pointer.
        m = re.search(r"base type '(\w+)'", message)
        if not m:
            return None
        new = re.sub(r'\b' + re.escape(m.group(1)) + r'\s*\.',
                     r'(*(__RFLD *)' + m.group(1) + ').', line, count=1)
        if new == line:
            # Base is a parenthesised/cast expression ending before the
            # ``.member`` at the error column — reinterpret it.
            mm = re.search(r'\.\s*\w+', line[col - 1:])
            if not mm:
                return None
            dot = col - 1 + mm.start()
            st = _operand_start(line, dot)
            if st >= dot:
                return None
            new = (line[:st] + '(*(__RFLD *)(uintptr_t)(' +
                   line[st:dot] + '))' + line[dot:])
    elif 'expected' in message and re.search(r'\(\d+\)\s*\.\d+', line):
        # Rejoin a float literal split by a spurious ')': ``(0).0``.
        new = re.sub(r'\((\d+)\)\s*\.(\d+)', r'\1.\2', line)
    elif ("expected ';' after top level declarator" in message and
          not re.search(r'[;{}]', line)):
        # Decl fragment from a split decompiler comment — drop it.
        del lines[lineno - 1]
        return '\n'.join(lines)
    elif (message.startswith(('expected', 'unexpected')) and
          re.search(r'\b([A-Z][A-Z0-9_]{3,})\s*\.', line)):
        # ``TYPE.member`` — the decompiler names the global struct after
        # its type; address it as an instance at image-base 0.
        new = re.sub(r'\b([A-Z][A-Z0-9_]{3,})\s*\.',
                     r'(*(\1 *)(uintptr_t)0).', line, count=1)
    elif ("expected ';' after top level declarator" in message and
          re.search(r'\w+::\w+\s*\(', line)):
        # Signature with a qualified name (``void std::f(...)``) — strip
        # the namespace qualifier from the declarator.
        new = re.sub(r'(\w[\w:]*)::(\w+)\s*\(', r'\2(', line, count=1)
    elif "expected ')'" in message:
        # Decompiler wrapped an expression across lines and dropped the
        # closing paren. Rebalance parens for the enclosing statement:
        # scan back to the previous statement boundary, count the deficit,
        # and insert that many ')' before the ';' on the error line.
        start = lineno - 1
        while start > 0 and not re.search(r'[;{}:]\s*$',
                                          lines[start - 1]):
            start -= 1
        stmt = '\n'.join(lines[start:lineno])
        semi = stmt.rfind(';')
        cut = stmt[:semi] if semi >= 0 else stmt
        deficit = cut.count('(') - cut.count(')')
        if semi < 0:
            return None
        si = line.rfind(';')
        if si < 0:
            return None
        if deficit > 0:
            # Replace the ';' in the error line with ')' * deficit + ';'.
            new = line[:si] + ')' * deficit + line[si:]
        elif deficit < 0:
            # Surplus closes (repair inserted extra groups): drop
            # ``-deficit`` ')' characters just before the ';'.
            drop = -deficit
            j = si - 1
            chars = list(line)
            while j >= 0 and drop:
                if chars[j] == ')':
                    chars[j] = ''
                    drop -= 1
                j -= 1
            if drop:
                return None
            new = ''.join(chars)
        else:
            return None
    elif ('expected expression' in message and
          re.search(r'\(\s*(?:(?:unsigned|signed)\s+)?'
                    r'(?:char|short|int|long|float|double|void|byte|word|'
                    r'dword|bool|size_t|uint|ushort|ulong|ulonglong|'
                    r'longlong|undefined\d|code)\s*\**\)|'
                    r'\(\s*[\w:]+\s*\*+\s*\)'
                    r'\s*(?=\s*(?:[),\];]|==|!=|<=|>=|<|>|&&|\|\||$))', line)):
        # Dangling cast ``(int))``/``(T*),``: Ghidra dropped the operand;
        # give the cast a ``0`` operand so the statement parses. Only
        # keyword or pointer-typed casts qualify — parenthesised
        # expressions like ``(x) < y`` must not be touched.
        new = re.sub(r'(\(\s*(?:(?:unsigned|signed)\s+)?'
                     r'(?:char|short|int|long|float|double|void|byte|word|'
                     r'dword|bool|size_t|uint|ushort|ulong|ulonglong|'
                     r'longlong|undefined\d|code)\s*\**\)|'
                     r'\(\s*[\w:]+\s*\*+\s*\))'
                     r'\s*(?=\s*(?:[),\];]|==|!=|<=|>=|<|>|&&|\|\||$))',
                     r'\g<1>0', line, count=1)
        if new == line:
            return None
    else:
        return None
    if new is None or new == line:
        return None
    lines[lineno - 1] = new
    return '\n'.join(lines)


def _fix_libc_callargs(definition, lineno, name):
    """Cast libc call args on the error line to the real prototype's types."""
    lines = definition.split('\n')
    line = lines[lineno - 1]
    i = line.find(name + '(')
    if i < 0:
        return definition
    start = i + len(name) + 1
    depth = 0
    spans = []
    argstart = start
    end = None
    for j in range(start, len(line)):
        c = line[j]
        if c == '(':
            depth += 1
        elif c == ')':
            if depth == 0:
                end = j
                break
            depth -= 1
        elif c == ',' and depth == 0:
            spans.append((argstart, j))
            argstart = j + 1
    if end is None:
        return definition
    spans.append((argstart, end))
    if len(spans) < 2:
        return definition
    out = line[:start]
    for k, (a, b) in enumerate(spans):
        arg = line[a:b]
        if k > 0:
            out += ','
        if name == 'memset' and k == 1:
            out += f'(int)(uintptr_t)({arg})'
        elif k == len(spans) - 1:
            out += f'(size_t)(uintptr_t)({arg})'
        else:
            out += f'(void *)(uintptr_t)({arg})'
    out += line[end:]
    lines[lineno - 1] = out
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
            name = m.group(1)
            if name in ('memcpy', 'memmove', 'memset', 'memcmp',
                        'strcpy', 'strncpy', 'strcat', 'strncat'):
                # A real prototype is already emitted; flag the call
                # site for arg fix-ups instead of a conflicting decl.
                return ('__callargs__', name)
            # Variadic decl tolerates whatever arg types the decompiler
            # emitted — real prototypes reject int-as-pointer args.
            return 'extern "C" void *' + name + '(...);'
    m = re.search(r"use of undeclared identifier '(\w+)'", message)
    if m:
        name = m.group(1)
        if name == '__RFLD' or name.startswith('_RFLD'):
            # Referenced as a cast type — seed the synthetic struct so
            # the emit path materialises it.
            return '__fld_seed__'
        # Variadic decls accept the int-as-pointer args decompiled code
        # produces; real prototypes would reject them.
        libc = {
            'memcpy': 'extern "C" void *memcpy(...);',
            'memset': 'extern "C" void *memset(...);',
            'fwrite': 'extern "C" unsigned fwrite(...);',
            'ferror': 'extern "C" int ferror(...);',
            'strpbrk': 'extern "C" char *strpbrk(...);',
            'memcmp': 'extern "C" int memcmp(...);',
            '_onexit_t': 'typedef int _onexit_t;',
        }
        if name in libc:
            return libc[name]
        if name in ('NAN', 'INFINITY'):
            # Math macros can't be externed — define them function-like
            # so call sites stay expressions.
            return f'#define {name}(x) ((x) != (x))'
        return f'extern char {name};'
    m = re.search(r"no member named '(\w+)' in '([^']+)'", message)
    if m:
        return ('__field__', m.group(2), m.group(1))
    m = re.search(r"template specialization requires 'template<>'", message)
    if m:
        return '__retemplate__'
    m = re.search(r"'(\w+)' does not refer to a value", message)
    if m:
        name = m.group(1)
        return f'extern char {name}_v[];\n#define {name} {name}_v'
    if 'incomplete type' in message and '__RFLD' in message:
        return '__fld_seed__'
    m = re.search(r"no class named '(\w+)' in namespace 'std'", message)
    if m:
        return f'namespace std {{ struct {m.group(1)}; }}'
    return None


def _purge_name(name, stubs, member_stubs, externs, type_stubs, methods,
                extra_decls):
    """Drop every emitted decl for ``name`` so the defn alone owns it."""
    externs.difference_update(
        {e for e in externs
         if e[1] == name or e[1].endswith('::' + name)})
    type_stubs.difference_update(
        {e for e in type_stubs
         if e[1] == name or e[1].endswith('::' + name)})
    if name in stubs:
        del stubs[name]
    if name in methods:
        del methods[name]
    for key in list(member_stubs):
        if key.endswith('::' + name):
            del member_stubs[key]
        else:
            member_stubs[key].discard(name)
            if not member_stubs[key]:
                del member_stubs[key]
    extra_decls[:] = [d for d in extra_decls
                      if not re.search(r'\b' + re.escape(name) + r'\b',
                                       d)]


def repair_record(record, defined, scratch, max_iter=60):
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
            # Inject after the base typedefs but before stub decls so
            # names used inside emitted stubs resolve.
            pos = re.search(r'(?m)^(?=struct |extern |template|union |'
                            r'typedef struct)', source)
            pos = pos.start() if pos else source.find('#line')
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
            # A '<...>' token on the error line is a fused Ghidra type name
            # (``_func_X<..>ptr``), not a real specialization — let
            # patch_definition collapse it before retemplating the def.
            err_line = cur.split('\n')[lineno - 1]
            if (extra == '__retemplate__' and
                    re.search(r'<[^;{}]*>', err_line)):
                extra = None
            # ``name<...>`` undeclared is a fused token, not a global:
            # let patch_definition collapse it instead of extern-ing it.
            if (extra and isinstance(extra, str) and
                    extra.startswith('extern char') and
                    re.search(r'\w+<', err_line)):
                extra = None
            # ``X *p`` inside a signature means X is a type, not a
            # global — extern char would make it a multiplication.
            if (extra and isinstance(extra, str) and
                    extra.startswith('extern char')):
                nm = extra.split()[2].rstrip(';')
                if re.search(r'\b' + re.escape(nm) +
                             r'\s*[\*&]\s*\w+\s*[,)]', err_line):
                    extra = f'typedef int {nm};'
            # ``void f(T *p)`` where T is undeclared collapses the whole
            # signature: clang reports only 'incomplete type void'.
            if (extra is None and "'void'" in message and
                    'incomplete type' in message and
                    err_line.rstrip().endswith('{')):
                builtins = {'void', 'int', 'char', 'short', 'long',
                            'uint', 'ulong', 'byte', 'bool', 'float',
                            'double', 'code', 'uint8_t', 'size_t',
                            'uintptr_t', 'undefined', 'undefined1',
                            'undefined2', 'undefined4', 'undefined8'}
                added = False
                for pm in re.finditer(
                        r'\b([A-Za-z_]\w*)\s*[\*&]\s*'
                        r'([A-Za-z_]\w*)\s*[,)]', err_line):
                    tn = pm.group(1)
                    if tn in builtins:
                        continue
                    decl = f'typedef int {tn};'
                    if decl not in extra_decls:
                        extra_decls.append(decl)
                        added = True
                if added:
                    continue
            if extra is not None:
                if isinstance(extra, tuple) and extra[0] == '__callargs__':
                    cur = _fix_libc_callargs(cur, lineno, extra[1])
                    continue
                if isinstance(extra, tuple):
                    # Named structs take the field as a static member;
                    # __RFLD is synthesized from __scalarfields__.
                    key = ('__scalarfields__' if extra[1] == '__RFLD'
                           else extra[1])
                    member_stubs.setdefault(key, set()).add(extra[2])
                elif extra == '__retemplate__':
                    cur = 'template<>\n' + cur
                elif extra == '__fld_seed__':
                    fld = re.search(r'(?:->|\.)\s*(\w+)', err_line)
                    member_stubs.setdefault('__scalarfields__', set()).add(
                        fld.group(1) if fld else '__seed')
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
            m = (re.search(r"redefinition of '(\w+)'", message) or
                 re.search(r"conflicting types for '(\w+)'", message))
            if m:
                # Drop whichever emitted decl collides: our header extra
                # or a stub/extern entry in the record.
                _purge_name(m.group(1), stubs, member_stubs, externs,
                            type_stubs, methods, extra_decls)
                continue
            m = re.search(r"reference to '(\w+)' is ambiguous", message)
            if m:
                _purge_name(m.group(1), stubs, member_stubs, externs,
                            type_stubs, methods, extra_decls)
                continue
            if 'unterminated' in message and '/*' in message:
                # The paired ``*/`` sat on a stripped banner line; drop
                # any ``/*``-to-EOL fragment from the definition.
                cur = re.sub(r'/\*[^\n]*', '', cur)
                continue
            srcline = source.split('\n')[lineno - 1] \
                if lineno <= len(source.split('\n')) else ''
            m = re.search(r'\b(?:typedef|extern) [\w ]*?\b(\w+)\s*[(;]',
                          srcline)
            if m:
                # The emitted decl hit a macro or a conflicting builtin
                # (e.g. NAN) — drop it; call sites get repointed.
                _purge_name(m.group(1), stubs, member_stubs, externs,
                            type_stubs, methods, extra_decls)
                continue
            if (re.search(r'Library|Libraries:|scalar deleting|`',
                          srcline) or
                    re.match(r'\s*(public:|private:|protected:|virtual\b)',
                             srcline)):
                # Comment-block fragment that went live after ``/*`` was
                # stripped — drop the comment pieces, keeping any code
                # that trails a ``*/``.
                frag = re.compile(r'Library|Libraries:|scalar deleting|`'
                                  r'|^\s*(public:|private:|protected:)')
                kept = []
                for l in cur.split('\n'):
                    if not frag.search(l):
                        kept.append(l)
                    elif '*/' in l and re.search(r'\*/\s*\S', l):
                        kept.append(l.split('*/', 1)[1])
                newcur = '\n'.join(kept)
                if newcur != cur:
                    cur = newcur
                    continue
            m = re.search(r'\bstd::(\w+)\s*\(', srcline)
            if m:
                # Qualified-name decls (``void std::f(...)``) are illegal
                # at global scope: drop the emitted decl and declare the
                # name inside namespace std instead.
                name = m.group(1)
                externs.difference_update(
                    {e for e in externs
                     if e[1] == name or e[1].endswith('::' + name)})
                extra = f'namespace std {{ int {name}(...); }}'
                if extra not in extra_decls:
                    extra_decls.append(extra)
                continue
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
    ap.add_argument('--include-switchd', action='store_true',
                    help='also attempt records gated out solely by switchD_')
    ap.add_argument('--limit', type=int, default=0)
    args = ap.parse_args()

    failures = load_failure_entries(args.index_dir)
    records = load_records(args.exports)
    todo = [records[e] for e in sorted(failures) if e in records]
    gated = []
    if args.include_switchd:
        # Ghidra's ``switchD_*``/``caseD_*`` jump-table labels are legal C
        # gotos — eligible_bulk excludes them conservatively. Attempt the
        # ones not gated for any other reason.
        gated = [r for r in records.values()
                 if r['entry'] not in failures
                 and re.search(r'\bswitchD_', r.get('decompiled_c', ''))
                 and not re.search(
                     r'\bSUB_|\bbadstackalloc|\bin_FS_SEGMENT|'
                     r'\bunaff_retaddr|\bregister0x|\bCatch_All_|'
                     r'\bCatch_\w+\s*\(', r.get('decompiled_c', ''))]
        gated.sort(key=lambda r: r['entry'])
        todo += gated
    if args.limit:
        todo = todo[:args.limit]
    print(f'{len(failures)} failures, {len(gated)} gated-switchd, '
          f'{len(todo)} with records', flush=True)

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
                  f'was: {failures.get(record["entry"], "gated")[:60]}',
                  flush=True)
        else:
            still_bad.append((record['entry'], err))
    scratch.unlink(missing_ok=True)
    print(f'fixed {len(fixed)}, still bad {len(still_bad)}', flush=True)
    for e, err in still_bad[:20]:
        print(f'    {e}: {err[:90]}')

    if fixed:
        gated_entries = {r['entry'] for r in gated}
        groups = {'0000': [f for f in fixed
                           if f[0]['entry'] not in gated_entries],
                  '0001': [f for f in fixed
                           if f[0]['entry'] in gated_entries]}
        all_rows = []
        for suffix, group in groups.items():
            if not group:
                continue
            out = args.out_dir / f'{args.name_prefix}_{suffix}.cpp'
            recs = []
            all_extras = []
            for record, defn, extras in group:
                rec = dict(record)
                xf = record['xformed'] or (None,) * 6
                rec['xformed'] = (defn,) + tuple(xf[1:6])
                recs.append(rec)
                all_extras.extend(e for e in extras if e not in all_extras)
            source, _ = cbm.cpp_source(recs, defined)
            if all_extras:
                pos = re.search(
                    r'(?m)^(?=struct |extern |template|union |'
                    r'typedef struct)', source)
                pos = pos.start() if pos else source.find('#line')
                if pos < 0:
                    pos = len(source)
                source = (source[:pos] + '\n'.join(all_extras) + '\n' +
                          source[pos:])
            try:
                from apply_bulk_signature_recovery import lower_free_thiscall
                source, _lowered = lower_free_thiscall(source)
            except Exception:
                pass
            out.write_text(source)
            all_rows.extend(group)
            print(f'wrote {out} ({len(group)} fns, '
                  f'{sum(r["body_bytes"] for r, _, _ in group)} bytes)')
        args.index_out.parent.mkdir(parents=True, exist_ok=True)
        with args.index_out.open('w', newline='') as f:
            w = csv.writer(f, delimiter='\t')
            w.writerow(['entry', 'name', 'reference_body_bytes'])
            w.writerows([r['entry'], r['name'], r['body_bytes']]
                        for r, _, _ in all_rows)


if __name__ == '__main__':
    main()
