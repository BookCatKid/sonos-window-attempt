#!/usr/bin/env python3
"""Recover a strict family of SCStr cleanup functions with compiler-generated EH.

Eligibility requires a validated single-state reference unwind map whose only
exception action is __std_terminate. Never admit general RAII cleanup by deleting
its unwind operations. This experiment's noexcept preserves that termination
policy; byte matching and generated EH metadata must still be checked separately.
"""
import argparse,csv,json,re,subprocess,os
from pathlib import Path
from compile_ghidra_cpp import ROOT,COMPILER,load_records,width_preserving_pointer_casts
from compile_scstr_cpp import (normalize_definition,rewrite_calls,restore_scstr_byte_offsets,
    restore_pointer_width_casts,cpp_source,split_valid,call_end,split_first_argument,eligible)

DELETE='thunk_FUN_1148a50e'

def lower(record,evidence):
    m=evidence['metadata']
    if record['body_bytes']<=5 or m['state_count']!=1 or m['actions'][0]['action']!='1148cdcf':return None
    s=normalize_definition(record)
    if re.search(r'\bcode\b',s):return None
    # Only the potentially throwing release and the known sized-delete helper
    # are admitted. All other call/lifetime arrangements require further proof.
    calls=re.findall(r'\b((?:thunk_)?FUN_[0-9a-f]{8}|SCStr::\w+)\s*\(',s.split('{',1)[1])
    if not calls or set(calls)-{DELETE,'SCStr::int_release'} or 'SCStr::int_release' not in calls:return None
    # Every release must have activated the sole terminate state immediately
    # before it. This restriction avoids broadening an unprotected throw region.
    if len(re.findall(r'local_8\s*=\s*0;\s*SCStr::int_release',s)) != calls.count('SCStr::int_release'):return None
    cookie=re.search(r'(\w+)\s*=\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc;',s)
    if not cookie:return None
    cookie_name=cookie.group(1)
    for match in reversed(list(re.finditer(r'\b'+DELETE+r'\s*\(',s))):
        end=call_end(s,match.end()-1)
        pointer,tail=split_first_argument(s[match.end():end])
        size,last=split_first_argument(tail)
        if last!=cookie_name:return None
        s=s[:match.start()]+f'{DELETE}((void *)({pointer}), {size})'+s[end+1:]
    # The apparent third delete argument was the compiler's security cookie;
    # reference call sites push pointer and size only. Keep /GS compiler-owned.
    s=re.sub(r'(?m)^\s*'+re.escape(cookie_name)+r'\s*=\s*DAT_12126b84[^;]+;','',s)
    s=re.sub(r'(?m)^\s*uint '+re.escape(cookie_name)+r';','',s)
    if re.search(r'\b'+re.escape(cookie_name)+r'\b',s):return None
    removal=[r'void \*local_10;',r'undefined1 \*puStack_c;',r'undefined4 local_8;',
             r'local_10 = ExceptionList;',r'puStack_c = &LAB_[0-9a-f]{8};',
             r'ExceptionList = &local_10;',r'ExceptionList = local_10;',
             r'local_8 = (?:0|0xffffffff);']
    for pattern in removal:s=re.sub(r'(?m)^\s*'+pattern,'',s)
    if re.search(r'\b(?:ExceptionList|local_8|local_10|puStack_c|LAB_|stack0x)',s):return None
    head,sep,body=s.partition('{')
    s=head.rstrip()+' noexcept\n'+sep+body
    s,offsets=restore_scstr_byte_offsets(s)
    s=rewrite_calls(s)
    if s is None:return None
    s=width_preserving_pointer_casts(restore_pointer_width_casts(s))
    if not eligible(s):return None
    return {**record,'source':s,'byte_offset_sites':offsets,'abi_declarations':{
        DELETE:f'extern void {DELETE}(void *allocation, unsigned int bytes) noexcept;'},
        'reference_handler':evidence['handler'],'reference_metadata':m['address']}

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('exports',nargs='+',type=Path)
    p.add_argument('--evidence',type=Path,default=ROOT/'analysis/eh-lifetime-evidence.jsonl')
    p.add_argument('--output-dir',type=Path,default=ROOT/'analysis/compiled-cpp-noexcept-cleanup')
    p.add_argument('--emit-source',type=Path,default=ROOT/'src/generated/noexcept_cleanup.cpp')
    p.add_argument('--emit-index',type=Path,default=ROOT/'src/generated/noexcept-cleanup-index.tsv')
    a=p.parse_args();records=load_records(a.exports);candidates=[]
    for line in a.evidence.open():
        e=json.loads(line)
        if e['entry'] in records:
            r=lower(records[e['entry']],e)
            if r:candidates.append(r)
    out=a.output_dir;out.mkdir(parents=True,exist_ok=True);accepted=[];failures=[];scratch=out/'.syntax-probe.cpp'
    print('Candidates:',len(candidates),flush=True)
    for start in range(0,len(candidates),100):accepted+=split_valid(candidates[start:start+100],scratch,failures)
    scratch.unlink(missing_ok=True);source=out/'ghidra_recovered.cpp';source.write_text(cpp_source(accepted))
    obj=out/'ghidra_recovered.obj'
    r=subprocess.run([str(COMPILER),'/nologo','/O2','/MD','/GS','/EHsc','/c','/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if r.returncode:raise SystemExit(r.stdout+r.stderr)
    index=out/'compiled-index.tsv'
    with index.open('w',newline='') as f:
        w=csv.writer(f,delimiter='\t');w.writerow(['entry','name','reference_body_bytes']);w.writerows((r['entry'],r['name'],r['body_bytes']) for r in accepted)
    a.emit_source.write_text(source.read_text());a.emit_index.write_text(index.read_text())
    (out/'reference-eh-inventory.json').write_text(json.dumps([{k:r[k] for k in ['entry','reference_handler','reference_metadata']} for r in accepted],indent=2)+'\n')
    (out/'failures.tsv').write_text('entry\terror\n'+''.join(f'{e}\t{err}\n' for e,err in failures))
    metrics={'compiled_functions':len(accepted),'compiled_reference_body_bytes':sum(r['body_bytes'] for r in accepted),'syntax_rejected':len(failures),'scope':'C++ noexcept cleanup probe; body and EH metadata byte matching not yet established'}
    (out/'coverage.json').write_text(json.dumps(metrics,indent=2)+'\n');print(json.dumps(metrics,indent=2))

if __name__=='__main__':main()
