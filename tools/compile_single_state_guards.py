#!/usr/bin/env python3
"""Recover single-state terminate regions as inlined noexcept C++ lambda calls.

Only validated reference unwind maps whose sole action is __std_terminate are
admitted. A balanced region from the recovered state-zero assignment is wrapped
in a noexcept callable; the original outer noexcept metadata flag is preserved.
Other unwind actions, state-variable aliasing, cross-scope control transfers, and
unexplained stack/cookie pseudovariables are rejected. EH/body matching is separate.
"""
import argparse,csv,json,os,re,subprocess
from pathlib import Path
from compile_ghidra_cpp import ROOT,COMPILER,load_records,width_preserving_pointer_casts,msvc_compatible_labels
from compile_scstr_cpp import (normalize_definition,rewrite_calls,restore_scstr_byte_offsets,
    restore_pointer_width_casts,restore_virtual_zero_arg_calls,cpp_source,split_valid,eligible,
    call_end,split_first_argument)
from compile_vftable_cpp import VFTABLE,symbol_name
from recovered_call_abi import CallABI
DELETE='thunk_FUN_1148a50e'


def mask_strings(source):
    return re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'',
                  lambda m:' '*(m.end()-m.start()),source)


def guard_region(source):
    events=list(re.finditer(r'\blocal_8\s*=\s*(0|0xffffffff)\s*;',source))
    starts=[e for e in events if e.group(1)=='0']
    if len(starts)!=1:return None
    # Every use must be the declaration or a recognized state assignment.
    residual=re.sub(r'undefined4 local_8;', '', source)
    residual=re.sub(r'\blocal_8\s*=\s*(?:0|0xffffffff)\s*;', '', residual)
    if re.search(r'\blocal_8\b',residual):return None
    start=starts[0];masked=mask_strings(source);depth=0
    for ch in masked[:start.start()]:depth+=(ch=='{')-(ch=='}')
    if depth<1:return None
    current=depth;end=None
    result=re.sub(r'__(?:thiscall|fastcall|stdcall|cdecl)', '',
                  source.split('{',1)[0].split('FUN_',1)[0]).strip()
    scalar_result=bool(re.fullmatch(r'(?:void|u?int|undefined\d*|bool|char|byte|short|long|uint|ulong|longlong)|\w+\s*\*+',result))
    resets={e.start():e for e in events if e.start()>start.end() and e.group(1)=='0xffffffff'}
    for pos in range(start.end(),len(source)):
        if pos in resets and current==depth:end=pos;break
        # A plain scalar/pointer return cannot throw. Leave it in the caller,
        # closing the guard first; returning from the lambda would change flow.
        if current==depth and scalar_result and re.match(
                r'\breturn\s*(?:[A-Za-z_]\w*|0x[0-9a-f]+|\d+)?\s*;',masked[pos:]):
            end=pos;break
        ch=masked[pos]
        if ch=='{':current+=1
        elif ch=='}':
            current-=1
            if current<depth:end=pos;break
    if end is None:return None
    body=source[start.end():end]
    if re.search(r'\b(?:return|goto|break|continue|local_8)\b',mask_strings(body)):return None
    source=(source[:start.start()]+'([&]() noexcept {\n'+body+'\n})();\n'+source[end:])
    return source


def lower(record,evidence,abi):
    m=evidence['metadata'];s=normalize_definition(record)
    if record['body_bytes']<=5 or m['state_count']!=1 or m['actions'][0]['action']!='1148cdcf':return None
    if any(m['words'][3:8]):return None
    # This pass deliberately handles the common frame layout only.
    if 'local_10 = ExceptionList;' not in s or not re.search(r'puStack_c\s*=\s*&LAB_',s):return None
    cookie=re.search(r'(\w+)\s*=\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc;',s)
    cookie_name=cookie.group(1) if cookie else None
    delete_used=False
    for match in reversed(list(re.finditer(r'\b'+DELETE+r'\s*\(',s))):
        end=call_end(s,match.end()-1);pointer,tail=split_first_argument(s[match.end():end]);size,last=split_first_argument(tail)
        if last and (not cookie_name or last!=cookie_name):return None
        if not size:return None
        s=s[:match.start()]+f'{DELETE}((void *)({pointer}), {size})'+s[end+1:];delete_used=True
    if cookie_name:
        s=re.sub(r'(?m)^\s*'+re.escape(cookie_name)+r'\s*=\s*DAT_12126b84[^;]+;','',s)
        s=re.sub(r'(?m)^\s*uint '+re.escape(cookie_name)+r';','',s)
        if re.search(r'\b'+re.escape(cookie_name)+r'\b',s):return None
    if 'DAT_12126b84' in s:return None
    s=guard_region(s)
    if s is None:return None
    removal=[r'void \*local_10;',r'undefined1 \*puStack_c;',r'undefined4 local_8;',
             r'local_10 = ExceptionList;',r'puStack_c = &LAB_[0-9a-f]{8};',
             r'ExceptionList = &local_10;',r'ExceptionList = local_10;',
             r'local_8 = 0xffffffff;']
    for pattern in removal:s=re.sub(r'(?m)^\s*'+pattern,'',s)
    if re.search(r'\b(?:ExceptionList|local_8|local_10|puStack_c|LAB_|stack0x)',s):return None
    head,sep,body=s.partition('{')
    if m['words'][8]&4:s=head.rstrip()+' noexcept\n'+sep+body
    s,offsets=restore_scstr_byte_offsets(s)
    if 'SCStr::' in s:
        s=rewrite_calls(s)
        if s is None:return None
    s=width_preserving_pointer_casts(restore_pointer_width_casts(s))
    labels=sorted(set(VFTABLE.findall(s)))
    for label in sorted(labels,key=len,reverse=True):s=s.replace(label,f'(undefined4)&{symbol_name(label)}')
    s=msvc_compatible_labels(s)
    s,count,slots=restore_virtual_zero_arg_calls(s)
    if not eligible(s):return None
    s,decls,changed=abi.lower(s)
    if s is None:return None
    if delete_used:decls[DELETE]=f'extern void {DELETE}(void *allocation, unsigned int bytes) noexcept;'
    return {**record,'source':s,'vftables':labels,'virtual_slots':sorted(slots),
            'abi_declarations':decls,'typed_calls':changed,'virtual_calls':count,
            'reference_handler':evidence['handler'],'reference_metadata':m['address']}


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('exports',nargs='+',type=Path)
    p.add_argument('--evidence',type=Path,default=ROOT/'analysis/eh-lifetime-evidence.jsonl')
    p.add_argument('--output-dir',type=Path,default=ROOT/'analysis/compiled-cpp-single-state-guards')
    p.add_argument('--emit-source',type=Path,default=ROOT/'src/generated/single_state_guards.cpp')
    p.add_argument('--emit-index',type=Path,default=ROOT/'src/generated/single-state-guards-index.tsv')
    a=p.parse_args();records=load_records(a.exports);abi=CallABI(a.exports);candidates=[]
    for line in a.evidence.open():
        e=json.loads(line)
        if e['entry'] in records:
            r=lower(records[e['entry']],e,abi)
            if r:candidates.append(r)
    candidates.sort(key=lambda r:r['entry']);print('Candidates:',len(candidates),'bytes:',sum(r['body_bytes'] for r in candidates),flush=True)
    out=a.output_dir;out.mkdir(parents=True,exist_ok=True);accepted=[];failures=[];scratch=out/'.syntax-probe.cpp'
    for start in range(0,len(candidates),100):
        accepted+=split_valid(candidates[start:start+100],scratch,failures)
        print('Checked',min(start+100,len(candidates)),'accepted',len(accepted),flush=True)
    scratch.unlink(missing_ok=True);source=out/'ghidra_recovered.cpp';source.write_text(cpp_source(accepted));obj=out/'ghidra_recovered.obj'
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/MD','/GS','/EHsc','/c','/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=out/'compiled-index.tsv'
    with index.open('w',newline='') as f:
        w=csv.writer(f,delimiter='\t');w.writerow(['entry','name','reference_body_bytes']);w.writerows((r['entry'],r['name'],r['body_bytes']) for r in accepted)
    a.emit_source.write_text(source.read_text());a.emit_index.write_text(index.read_text())
    (out/'reference-eh-inventory.json').write_text(json.dumps([{k:r[k] for k in ['entry','reference_handler','reference_metadata']} for r in accepted],indent=2)+'\n')
    (out/'failures.tsv').write_text('entry\terror\n'+''.join(f'{e}\t{err}\n' for e,err in failures))
    metrics={'compiled_functions':len(accepted),'compiled_reference_body_bytes':sum(r['body_bytes'] for r in accepted),'syntax_rejected':len(failures),'typed_call_sites':sum(r['typed_calls'] for r in accepted),'virtual_call_sites':sum(r['virtual_calls'] for r in accepted),'scope':'Compiler-generated single-state terminate regions; byte/metadata matching measured separately'}
    (out/'coverage.json').write_text(json.dumps(metrics,indent=2)+'\n');print(json.dumps(metrics,indent=2))

if __name__=='__main__':main()
