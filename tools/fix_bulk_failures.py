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
        m = re.match(r'[A-Za-z_]\w*', line[i:])
        if m:
            i += m.end()
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
    elif 'subscript of pointer to function type' in message:
        # ``p[i]`` where p is ``code *``: index through a ``code **`` pun.
        br = line.find('[', max(0, col - 20), col + 10)
        if br < 0:
            br = line.rfind('[', 0, col + 4)
        if br < 0:
            return None
        m = re.search(r'(\w+)\s*$', line[:br])
        if not m:
            return None
        base = m.group(1)
        new = (line[:m.start(1)] + '((code **)(uintptr_t)(' + base + '))' +
               line[br:])
    elif 'arithmetic on a pointer to the function type' in message:
        # ``p + n`` on ``code *``: byte-wise arithmetic via char *.
        pos = col - 1
        m = re.match(r'(?:\*\s*)*', line[pos:])
        i = pos + m.end()
        end = _operand_end(line, i)
        if end <= i:
            m2 = re.search(r'(\w+)\s*[+\-*/]', line)
            if not m2:
                return None
            i = m2.start(1)
            pos = i
            end = _operand_end(line, i)
            if end <= i:
                return None
            return (line[:pos] + '(char *)(uintptr_t)(' + line[i:end] + ')' +
                    line[end:])
        new = (line[:pos] + line[pos:i] +
               '(char *)(uintptr_t)(' + line[i:end] + ')' + line[end:])
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
        # cast chain is legal (double->uintptr_t->T*).
        new = re.sub(r'\((\w+)\s*\*\)\s*\(',
                     r'(\1 *)(uintptr_t)(', line, count=1)
        if new == line:
            new = re.sub(r'\((\w+)\s*\*\)\s*(?=[-\w.])',
                         r'(\1 *)(uintptr_t)', line, count=1)
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
        st = lhs.rfind(' ')
        lhs_v = lhs[st + 1:] if st >= 0 else lhs
        rhs = line[eq + 1:].rstrip().rstrip(';').strip()
        if not re.fullmatch(r'\w+(?:\[[^\]]*\])?', lhs_v):
            return None
        new = (lhs[:st + 1] if st >= 0 else '') + \
            f'*(struct {{char _p[{n}];}} *)&{lhs_v} = ' \
            f'*(struct {{char _p[{n}];}} *)&{rhs};'
    elif "expected '(' for function-style cast" in message:
        # ``(type)name`` where type resolved to a variable: drop the cast.
        pos = col - 1
        m = re.match(r'\((\w+)\)', line[pos:])
        if not m:
            m2 = re.search(r'\((\w+)\)\s*\(?[\w&*]', line)
            if not m2:
                return None
            m = m2
            pos = m.start()
        new = line[:pos] + line[pos + m.end():]
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
        # ``a .* b`` on scalars: degrade to a plain subtract (garbage anyway).
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
    elif ('`' in line and
          ('expected expression' in message or 'expected' in message)):
        # Ghidra emits `` `public:...'` `` backtick literals; drop to 0.
        new = re.sub(r'`[^`]*`', '0', line, count=1)
        if new == line:
            return None
    elif 'invalid suffix' in message and 'floating constant' in message:
        # Ghidra float artefacts like ``0._0_8_``: strip the suffix.
        new = re.sub(r'\._\d+_\d+_', '', line)
        if new == line:
            return None
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
    m = re.search(r"'(\w+)' does not refer to a value", message)
    if m:
        name = m.group(1)
        return f'extern char {name}_v[];\n#define {name} {name}_v'
    if 'incomplete type' in message and '__RFLD' in message:
        return '__fld_seed__'
    return None


def repair_record(record, defined, scratch, max_iter=25):
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
            if extra is not None:
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
