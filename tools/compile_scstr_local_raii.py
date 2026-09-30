#!/usr/bin/env python3
"""Recover the two-state local SCStr construction/cleanup family with real RAII.

An inline C++ constructor calls the recovered output-buffer factory. Its ordinary
noexcept destructor reproduces release and zeroing, including an out-of-line
definition for compiler-owned unwind funclets. No EH graph is deleted or patched.
"""
import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER, load_records, width_preserving_pointer_casts, msvc_compatible_labels
from compile_scstr_cpp import normalize_definition, cpp_source, split_valid, rewrite_calls, call_end, restore_virtual_zero_arg_calls, restore_scstr_byte_offsets
from compile_multistate_terminate_guards import mask_strings
from recovered_call_abi import CallABI, arguments
from promote_virtual_arguments import lower as lower_virtual_arguments
from classify_functions import DLL, section_map, function_bytes
from capstone import Cs, CS_ARCH_X86, CS_MODE_32


def recover_incoming_receiver(record, reference, base, sections):
    """Expose a receiver revealed after callee propagation; byte proof is final."""
    source=record['decompiled_c']
    declaration=re.search(r'(?m)^\s*void \*in_ECX;',source)
    if not declaration or re.search(r'\bin_EDX\b',source):return record
    header,sep,body=source.partition('{')
    match=re.search(r'(?:thunk_)?FUN_[0-9a-f]{8}\s*\((.*?)\)',header,re.S)
    if not match or '__thiscall' in header or '__fastcall' in header:return record
    params=arguments(match.group(1));params=[] if params==['void'] else params
    # Restrict to word-sized stack parameters and an unambiguous cleanup.
    if any(not re.fullmatch(r'(?:undefined4|uint|int|void\s*\*|SCStr\s*\*)\s*\w+',p) for p in params):return record
    code=function_bytes(reference,int(record['entry'],16),record['body_bytes'],base,sections)
    cleanup={int(ins.op_str,0) if ins.op_str else 0 for ins in Cs(CS_ARCH_X86,CS_MODE_32).disasm(code,int(record['entry'],16)) if ins.mnemonic=='ret'}
    if cleanup!={4*len(params)}:return record
    prefix=re.sub(r'\b__(?:cdecl|stdcall)\b','',header[:match.start()]).strip()
    header=prefix+' __thiscall FUN_'+record['entry']+'(void *ghidra_this'+''.join(', '+p for p in params)+')\n'
    body=re.sub(r'(?m)^\s*void \*in_ECX;','',body)
    body=re.sub(r'\bin_ECX\b','ghidra_this',body)
    result={**record,'decompiled_c':header+sep+body,'receiver_recovered_after_propagation':True}
    result.pop('verified_stack_cc',None)
    return result


def strip_cookie(source):
    cookie=re.search(r'(\w+)\s*=\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc;',source)
    if cookie:
        name=cookie.group(1)
        source=re.sub(r',\s*'+re.escape(name)+r'(?=\s*\))','',source)
        source=re.sub(r'(?<=\()\s*'+re.escape(name)+r'\s*(?=\))','',source)
        source=re.sub(r'(?m)^\s*'+re.escape(name)+r'\s*=\s*DAT_12126b84[^;]+;','',source)
        source=re.sub(r'(?m)^\s*uint '+re.escape(name)+r';','',source)
        if re.search(r'\b'+re.escape(name)+r'\b',source):return None
    source=re.sub(r',\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc(?=\s*\))','',source)
    source=re.sub(r'(?<=\()\s*DAT_12126b84\s*\^\s*\(uint\)&stack0xfffffffc(?=\s*\))','',source)
    return source if 'DAT_12126b84' not in source else None


def lower(record,evidence,abi,extended_storage=False,preserve_storage_type=False):
    meta=evidence['metadata'];actions=meta['actions']
    if record['body_bytes']<=5 or meta['state_count']!=2 or len(actions)!=2:return None
    if any(meta['words'][3:8]) or any(x['next_state']!=-1 for x in actions):return None
    if actions[1]['action']!='1148cdcf' or len(actions[0]['instructions'])<2:return None
    if not re.fullmatch(r'lea ecx, \[ebp - 0x[0-9a-f]+\]',actions[0]['instructions'][0]):return None
    if actions[0]['instructions'][1]!='jmp 0x1008c50b':return None
    source=strip_cookie(normalize_definition(record))
    if source is None:return None
    releases=list(re.finditer(r'SCStr::int_release\s*\(',source))
    if len(releases)!=1:return None
    release=releases[0];end=call_end(source,release.end()-1)
    receiver=source[release.end():end].strip()
    local_match=re.fullmatch(r'(?:\(SCStr\s*\*\)\s*&)?(local_[0-9a-f]+)',receiver)
    if not local_match:return None
    name=local_match.group(1)
    storage_types=r'SCStr|undefined4|int\s*\*'
    if extended_storage:storage_types+=r'|int|uint|char\s*\*|void\s*\*'
    declaration=re.search(r'(?m)^\s*('+storage_types+r')\s*'+name+r'(\s*\[4\])?;',source)
    if not declaration:return None
    array=bool(declaration.group(2))
    if array and declaration.group(1)!='SCStr':return None
    if declaration.group(1)=='SCStr' and not array:return None
    state0=list(re.finditer(r'\blocal_8\s*=\s*0;',source))
    state1=list(re.finditer(r'\blocal_8\s*=\s*1;',source))
    if len(state0)!=1 or len(state1)!=1 or not state0[0].end()<state1[0].start()<release.start():return None
    if source[state1[0].end():release.start()].strip():return None
    # Construction must be one explicit output-buffer call immediately before
    # activation of the first lifetime state.
    before=source[:state0[0].start()].rstrip()
    candidates=list(re.finditer(r'(?m)^(?P<indent>\s*)(?:(?P<result>\w+)\s*=\s*(?:\([^;]+?\)\s*)?)?'
                      r'(?P<call>(?:thunk_)?FUN_[0-9a-f]{8}|SCStr::int_allocRep|SCStr::SCStr)\(',before))
    if not candidates:return None
    factory=candidates[-1];factory_end=call_end(source,factory.end()-1)
    if source[factory_end+1:state0[0].start()].strip()!=';':return None
    values=arguments(source[factory.end():factory_end])
    if not values or values[0] not in {name,'&'+name,'(SCStr *)&'+name}:return None
    # Reusing a scalar stack slot before construction requires a separate
    # storage/alias reconstruction; do not invent that lifetime here.
    prior=source[declaration.end():factory.start()]
    if re.search(r'\b'+name+r'\b',prior):
        if extended_storage:
            # Ghidra frequently reuses an ECX spill as the later string slot.
            # Discard only a pure parameter copy whose value is never read
            # before the output-buffer construction overwrites that storage.
            initializer=re.search(r'(?m)^\s*'+name+r'\s*=\s*(?:param_\d+|ghidra_this);',prior)
            if initializer and not re.search(r'\b'+name+r'\b',prior[:initializer.start()]+prior[initializer.end():]):
                start=declaration.end()+initializer.start();end=declaration.end()+initializer.end()
                return lower({**record,'decompiled_c':source[:start]+source[end:]},evidence,abi,
                             extended_storage=True,preserve_storage_type=preserve_storage_type)
        return None
    cleanup_end=end+1
    semicolon=re.match(r'\s*;',source[cleanup_end:])
    if not semicolon:return None
    cleanup_end+=semicolon.end()
    zero=re.match(r'\s*'+name+r'\s*=\s*(?:\([^;]+?\)\s*)?(?:0|0x0);',source[cleanup_end:])
    if zero:cleanup_end+=zero.end()
    masked=mask_strings(source)
    depth=lambda pos:masked[:pos].count('{')-masked[:pos].count('}')
    if depth(factory.start())!=depth(cleanup_end):return None
    if re.search(r'\b(?:goto|break|continue|return)\b',masked[factory.start():cleanup_end]):return None
    if re.search(r'\b'+name+r'\b',source[cleanup_end:]):return None
    result_name=factory.group('result');result_type=None
    if result_name:
        typed=re.search(r'\b((?:undefined[1248]|uint|int|char|SCStr)(?:\s*\*)*)\s+'+result_name+r'\s*;',source)
        if not typed:return None
        result_type=typed.group(1).strip()
    classname='RecoveredString_FUN_1008c50b_'+record['entry']
    declarations={};args=values[1:];call=factory.group('call')
    if call.startswith('SCStr::'):
        if result_name:return None
        if call.endswith('int_allocRep'):
            if len(args) not in {1,2}:return None
            types=['char *']+(['unsigned int'] if len(args)==2 else [])
            invocation='((SCStr *)this)->int_allocRep('+', '.join(f'p{i}' for i in range(len(args)))+');'
        else:
            if len(args)>2:return None
            types=['const char *']+(['unsigned int'] if len(args)==2 else [])
            invocation='new (this) SCStr('+', '.join(f'p{i}' for i in range(len(args)))+');'
    else:
        proto=abi.resolve(call)
        if not proto or len(proto['parameters'])!=len(values):return None
        types=proto['parameters'][1:]
        first=proto['parameters'][0]
        invocation=call+'(('+first+')this'+''.join(', p'+str(i) for i in range(len(args)))+');'
        synthetic='void recovered_constructor() { '+invocation+' }'
        changed,decls,count=abi.lower(synthetic)
        if count!=1:return None
        invocation=changed.partition('{')[2].rsplit('}',1)[0].strip()
        declarations.update(decls)
    if result_type:
        invocation='*recovered_result = ('+result_type+')('+invocation.rstrip(';')+');'
    ctor_params=([result_type+' *recovered_result'] if result_type else [])+[typ+' p'+str(i) for i,typ in enumerate(types)]
    ctor_args=(['&'+result_name] if result_name else [])+[f'({typ})({value})' for typ,value in zip(types,args)]
    storage_type=declaration.group(1) if preserve_storage_type and not array else 'void *'
    declarations[classname]=(f'struct {classname} {{ {storage_type} rep; '
        f'__forceinline {classname}('+', '.join(ctor_params)+') { '+invocation+' } '
        f'~{classname}() noexcept {{ ((SCStr *)this)->int_release(); rep = 0; }} }};')
    # Apply backwards so original construction/cleanup offsets remain valid.
    source=source[:state1[0].start()]+'}\n'+source[cleanup_end:]
    initialization='('+', '.join(ctor_args)+')' if ctor_args else ''
    source=source[:factory.start()]+'{\n'+classname+' recovered_string'+initialization+';\n'+source[state0[0].end():]
    source=source[:declaration.start()]+source[declaration.end():]
    if array:
        source=re.sub(r'\b'+name+r'\b','((SCStr *)&recovered_string)',source)
    else:
        source=source.replace('&'+name,'((SCStr *)&recovered_string)')
        source=re.sub(r'\b'+name+r'\b','recovered_string.rep',source)
    for pattern in [r'void \*local_10;',r'undefined1 \*puStack_c;',r'undefined4 local_8;',
                    r'local_8 = 0xffffffff;',r'local_10 = ExceptionList;',r'puStack_c = &LAB_[0-9a-f]{8};',
                    r'ExceptionList = &local_10;',r'ExceptionList = local_10;']:
        source=re.sub(r'(?m)^\s*'+pattern,'',source)
    if re.search(r'\b(?:ExceptionList|local_8|local_10|puStack_c|LAB_|stack0x)|\._\d+_\d+_',source):return None
    if meta['words'][8]&4:
        head,sep,body=source.partition('{');source=head.rstrip()+' noexcept\n'+sep+body
    source,_=restore_scstr_byte_offsets(source)
    if 'SCStr::' in source:
        source=rewrite_calls(source)
        if source is None:return None
    source=msvc_compatible_labels(width_preserving_pointer_casts(source))
    source,virtual_decls,virtual_calls=lower_virtual_arguments(source);declarations.update(virtual_decls)
    source,zero_calls,slots=restore_virtual_zero_arg_calls(source)
    source,call_decls,typed_calls=abi.lower(source);declarations.update(call_decls)
    return {**record,'source':source,'abi_declarations':declarations,'virtual_slots':sorted(slots),
            'typed_calls':typed_calls,'virtual_calls':virtual_calls+zero_calls,
            'reference_handler':evidence['handler'],'reference_metadata':meta['address'],'reference_state_count':2}


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports',nargs='+',type=Path)
    parser.add_argument('--limit',type=int)
    parser.add_argument('--signature-exports',nargs='+',type=Path,
                        help='Overlay an isolated signature propagation experiment as a separate tranche')
    parser.add_argument('--extended-storage',action='store_true',help='Probe scalar string slots and unused parameter spills separately')
    parser.add_argument('--preserve-storage-type',action='store_true',help='Retain recovered scalar field types as a separate source hypothesis')
    parser.add_argument('--tag',help='Keep an additional experiment separate, using a lowercase word or hyphenated words')
    args=parser.parse_args()
    if args.tag and not re.fullmatch(r'[a-z][a-z0-9]*(?:-[a-z0-9]+)*',args.tag):parser.error('Invalid experiment tag')
    paths=args.exports+(args.signature_exports or [])
    records=load_records(paths);abi=CallABI(paths,recover_implicit_register=True)
    if args.signature_exports:
        reference=DLL.read_bytes();base,sections=section_map(reference)
        records={entry:recover_incoming_receiver(record,reference,base,sections) for entry,record in records.items()}
    candidates=[]
    for line in (ROOT/'analysis/eh-lifetime-evidence.jsonl').open():
        evidence=json.loads(line);record=records.get(evidence['entry'])
        if record:
            item=lower(record,evidence,abi,extended_storage=args.extended_storage,
                       preserve_storage_type=args.preserve_storage_type)
            if item:candidates.append(item)
    candidates.sort(key=lambda row:row['entry'])
    if args.limit:candidates=candidates[:args.limit]
    print('Candidates:',len(candidates),'bytes:',sum(row['body_bytes'] for row in candidates),flush=True)
    suffix='-signatures' if args.signature_exports else ''
    if args.extended_storage:suffix+='-storage'
    if args.preserve_storage_type:suffix+='-typed'
    if args.tag:suffix+='-'+args.tag
    output=ROOT/('analysis/compiled-cpp-scstr-local-raii'+suffix);output.mkdir(parents=True,exist_ok=True)
    failures=[];accepted=[];scratch=output/'.syntax-probe.cpp'
    for start in range(0,len(candidates),100):accepted+=split_valid(candidates[start:start+100],scratch,failures)
    scratch.unlink(missing_ok=True)
    if not accepted:raise SystemExit('No compiling RAII candidates')
    source=output/'ghidra_recovered.cpp';source.write_text(cpp_source(accepted));obj=output/'ghidra_recovered.obj'
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
                          '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=output/'compiled-index.tsv'
    with index.open('w',newline='') as file:
        writer=csv.writer(file,delimiter='\t');writer.writerow(['entry','name','reference_body_bytes'])
        writer.writerows((row['entry'],row['name'],row['body_bytes']) for row in accepted)
    (output/'reference-eh-inventory.json').write_text(json.dumps([{key:row[key] for key in
        ['entry','reference_handler','reference_metadata','reference_state_count']} for row in accepted],indent=2)+'\n')
    emit=ROOT/'src/generated/member_abi';emit.mkdir(parents=True,exist_ok=True)
    source_stem='scstr_local_raii'+suffix.replace('-','_')
    (emit/(source_stem+'.cpp')).write_text(source.read_text());(emit/(source_stem+'-index.tsv')).write_bytes(index.read_bytes())
    metrics={'compiled_functions':len(accepted),'reference_body_bytes':sum(row['body_bytes'] for row in accepted),
             'syntax_rejected':len(failures),'pinned_msvc_verified':False}
    (output/'coverage.json').write_text(json.dumps(metrics,indent=2)+'\n')
    (output/'failures.tsv').write_text('entry\terror\n'+''.join(f'{entry}\t{error}\n' for entry,error in failures))
    manifest_path=emit/'tranches.json';manifest=json.loads(manifest_path.read_text()) if manifest_path.exists() else [];stem=source_stem+'_reference_flags'
    manifest=[row for row in manifest if row['object']!=stem]+[{'object':stem,'directory':str(output.relative_to(ROOT))}]
    manifest_path.write_text(json.dumps(manifest,indent=2)+'\n');print(json.dumps(metrics,indent=2))


if __name__=='__main__':main()
