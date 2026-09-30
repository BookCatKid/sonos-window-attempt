#!/usr/bin/env python3
"""Recover Ghidra LOCK pseudo-operations as compiler-owned C++ intrinsics."""
import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT,COMPILER,load_records,width_preserving_pointer_casts,msvc_compatible_labels
from compile_scstr_cpp import normalize_definition,cpp_source,split_valid,eligible,restore_virtual_zero_arg_calls
from recovered_call_abi import CallABI

DECLARATIONS='''extern "C" {
long _InterlockedIncrement(volatile long *);
long _InterlockedDecrement(volatile long *);
long _InterlockedExchange(volatile long *, long);
long _InterlockedExchangeAdd(volatile long *, long);
char _InterlockedExchange8(volatile char *, char);
short _InterlockedExchange16(volatile short *, short);
char _InterlockedExchangeAdd8(volatile char *, char);
short _InterlockedExchangeAdd16(volatile short *, short);
}
#pragma intrinsic(_InterlockedIncrement, _InterlockedDecrement, _InterlockedExchange, _InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedExchange8, _InterlockedExchange16, _InterlockedExchangeAdd8, _InterlockedExchangeAdd16)
'''


def canonical(text):return re.sub(r'\s+','',text)


def lower_atomic_blocks(source):
    matches=list(re.finditer(r'\bLOCK\(\);(.*?)\bUNLOCK\(\);',source,re.S));count=0
    for match in reversed(matches):
        statements=[part.strip() for part in match.group(1).split(';') if part.strip()]
        if not statements or any(re.search(r'[{}]|\b(?:if|while|for|return|goto|LOCK)\b',s) for s in statements):continue
        store=re.fullmatch(r'(\*[^=]+)\s*=\s*([^=]+)',statements[-1])
        if not store:continue
        destination=store.group(1).strip();value=store.group(2).strip();address=destination[1:].strip()
        if not address or re.search(r'\+\+|--|[;,]',address):continue
        canonical_destination=canonical(destination);aliases=[];prefix=[];valid=True
        for statement in statements[:-1]:
            assignment=re.fullmatch(r'(\w+)\s*=\s*(.+)',statement)
            if not assignment:valid=False;break
            name,rhs=assignment.groups()
            if aliases and re.search(r'\b'+re.escape(name)+r'\b',address):
                valid=False;break
            if canonical(rhs)==canonical_destination:aliases.append(name)
            elif canonical_destination in canonical(rhs) or re.search(r'\b'+('|'.join(map(re.escape,aliases)) or '(?!)')+r'\b',rhs):
                valid=False;break
            else:prefix.append(statement+';')
        if not valid:continue
        widths={'undefined1':1,'char':1,'byte':1,'undefined2':2,'short':2,
                'ushort':2,'undefined4':4,'int':4,'uint':4,'long':4,'ulong':4}
        cast=re.match(r'\*\s*\(\s*(\w+)\s*\*\s*\)',destination)
        if cast:
            width=widths.get(cast.group(1))
        elif re.fullmatch(r'\*\w+',destination):
            # Restrict lookup to a named parameter or standalone local declaration.
            name=address
            header,_,body=source.partition('{')
            parameter=re.search(r'(?:[,(])\s*(\w+)\s*\*\s*'+re.escape(name)+r'\s*(?=[,)])',header)
            local=re.search(r'(?m)^\s*(\w+)\s*\*\s*'+re.escape(name)+r'\s*;',body)
            declaration=parameter or local
            width=widths.get(declaration.group(1)) if declaration else None
        else:width=None
        if width is None:continue
        typ={1:'char',2:'short',4:'long'}[width];suffix={1:'8',2:'16',4:''}[width]
        destination_pattern=r'\s*'.join(re.escape(c) for c in canonical_destination)
        alternatives=[destination_pattern]+[re.escape(name) for name in aliases]
        add=re.fullmatch(r'(?:'+ '|'.join(alternatives)+r')\s*\+\s*(.+)',value)
        is_add=bool(add)
        if is_add:
            amount=add.group(1).strip()
            # Fetch-add evaluates its increment before obtaining the old value.
            if canonical_destination in canonical(amount) or any(re.search(r'\b'+re.escape(a)+r'\b',amount) for a in aliases):continue
            if width==4 and not aliases and amount in {'1','-1'}:
                op='_InterlockedIncrement' if amount=='1' else '_InterlockedDecrement'
                invocation=op+f'((volatile {typ} *)({address}))'
            else:invocation=f'_InterlockedExchangeAdd{suffix}((volatile {typ} *)({address}), ({typ})({amount}))'
        else:
            if canonical_destination in canonical(value) or any(re.search(r'\b'+re.escape(a)+r'\b',value) for a in aliases):continue
            invocation=f'_InterlockedExchange{suffix}((volatile {typ} *)({address}), ({typ})({value}))'
        replacement='\n'.join(prefix)+('\n' if prefix else '')
        if aliases:
            replacement+=aliases[0]+' = '+invocation+';\n'
            replacement+='\n'.join(name+' = '+aliases[0]+';' for name in aliases[1:])
        else:replacement+=invocation+';'
        source=source[:match.start()]+replacement+source[match.end():];count+=1
    return source,count


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('exports',nargs='+',type=Path);args=p.parse_args()
    records=load_records(args.exports);abi=CallABI(args.exports,recover_implicit_register=True);candidates=[]
    for record in records.values():
        source=normalize_definition(record)
        if 'LOCK();' not in source:continue
        source,count=lower_atomic_blocks(source)
        if not count or 'LOCK();' in source or 'UNLOCK();' in source:continue
        if not eligible(re.sub(r'\b_Interlocked\w+\b','operator_new',source)):continue
        source=msvc_compatible_labels(width_preserving_pointer_casts(source))
        source,_,slots=restore_virtual_zero_arg_calls(source)
        source,decls,_=abi.lower(source);decls['atomic_intrinsics']=DECLARATIONS
        candidates.append({**record,'source':source,'virtual_slots':sorted(slots),'abi_declarations':decls})
    candidates.sort(key=lambda row:row['entry']);directory=ROOT/'analysis/compiled-cpp-atomic-intrinsics';directory.mkdir(exist_ok=True)
    failures=[];accepted=[];scratch=directory/'.syntax-probe.cpp'
    for start in range(0,len(candidates),100):accepted+=split_valid(candidates[start:start+100],scratch,failures)
    scratch.unlink(missing_ok=True)
    if not accepted:raise SystemExit('No compiling atomic candidates')
    source=directory/'ghidra_recovered.cpp';source.write_text(cpp_source(accepted));obj=source.with_suffix('.obj')
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
        '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=directory/'compiled-index.tsv'
    with index.open('w',newline='') as file:
        w=csv.writer(file,delimiter='\t');w.writerow(['entry','name','reference_body_bytes'])
        w.writerows((row['entry'],row['name'],row['body_bytes']) for row in accepted)
    emit=ROOT/'src/generated/member_abi';(emit/'atomic_intrinsics.cpp').write_text(source.read_text())
    (emit/'atomic_intrinsics-index.tsv').write_bytes(index.read_bytes());manifest_path=emit/'tranches.json';rows=json.loads(manifest_path.read_text())
    rows=[r for r in rows if r['object']!='atomic_intrinsics_reference_flags']+[{'object':'atomic_intrinsics_reference_flags','directory':str(directory.relative_to(ROOT))}]
    manifest_path.write_text(json.dumps(rows,indent=2)+'\n')
    print(json.dumps({'compiled_functions':len(accepted),'reference_bytes':sum(row['body_bytes'] for row in accepted),
        'syntax_rejected':len(failures),'pinned_msvc_verified':False},indent=2))


if __name__=='__main__':main()
