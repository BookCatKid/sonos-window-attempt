#!/usr/bin/env python3
"""Restore omitted empty tree-container arguments using genuine C++ values.

Ghidra drops an eight-byte outgoing parameter, including its newly allocated
sentinel. Hypotheses preserve the observed node layout and C++ parameter
ownership; pinned caller and EH proofs determine acceptance.
"""
import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT,COMPILER,load_records
from compile_scstr_cpp import cpp_source,split_valid,call_end
from compile_scstr_local_raii import lower as lower_string
from recovered_call_abi import CallABI,arguments


def lower(record,evidence,abi,volatility,nontrivial_copy=False,stack_homes=False,ordered_homes=False):
    candidate=lower_string(record,evidence,abi,extended_storage=True,preserve_storage_type=True)
    if not candidate:return None
    source=candidate['source']
    pattern=(r'(?P<node>\w+)\s*=\s*operator_new\(0x1c\);\s*'
        r'\*\(void \*\*\)(?P=node) = (?P=node);\s*'
        r'\*\(void \*\*\)\(\(int\)(?P=node) \+ 4\) = (?P=node);\s*'
        r'\*\(void \*\*\)\(\(int\)(?P=node) \+ 8\) = (?P=node);\s*'
        r'\*\(undefined2 \*\)\(\(int\)(?P=node) \+ 0xc\) = 0x101;\s*'
        r'thunk_FUN_10dee620\(')
    matches=list(re.finditer(pattern,source))
    if len(matches)!=1:return None
    match=matches[0];end=call_end(source,match.end()-1);values=arguments(source[match.end():end])
    if len(values)!=3:return None
    header=source.split('{',1)[0]
    receiver=re.search(r'\bparam_1\b',header)
    if not receiver or not re.search(r'\b__(?:fastcall|thiscall)\b',header):return None
    node=match.group('node');before=source[:match.start()];after=source[end+1:]
    declaration=re.search(r'(?m)^\s*void \*'+re.escape(node)+r';',before)
    if not declaration:return None
    if re.search(r'\b'+re.escape(node)+r'\b',before[declaration.end():]+after):return None
    before=before[:declaration.start()]+before[declaration.end():]
    tree='RecoveredEmptyTree';consumer='RecoveredTreeConsumer'
    replacement='(('+consumer+' *)(param_1))->thunk_FUN_10dee620('+', '.join([
        '(SCStr *)('+values[0]+')','(int)('+values[1]+')','(int)('+values[2]+')',tree+'()'])+')'
    source=before+replacement+after
    if stack_homes and not ordered_homes:
        classname='RecoveredString_FUN_1008c50b_'+record['entry']
        declaration=candidate['abi_declarations'][classname]
        # Preserve the ECX spill in storage immediately overwritten by construction.
        declaration=declaration.replace('char * p0)', 'char * p0, undefined4 receiver)')
        declaration=declaration.replace('{ ((SCStr *)this)->int_allocRep', '{ *(volatile undefined4 *)&rep = receiver; ((SCStr *)this)->int_allocRep')
        candidate['abi_declarations'][classname]=declaration
        initialization=re.search(r'recovered_string\((.*?)\);',source)
        if not initialization:return None
        source=source[:initialization.end()-2]+', param_1'+source[initialization.end()-2:]
    if ordered_homes:
        initialization=re.search(r'recovered_string\((.*?)\);',source)
        if not initialization:return None
        argument=initialization.group(1)
        source=source[:initialization.start()]+f'recovered_string((*(volatile undefined4 *)&recovered_string = param_1, {argument}));'+source[initialization.end():]
    construction_home='RecoveredEmptyTree * volatile construction_home = this; ' if stack_homes else ''
    head_qualifier=' volatile' if volatility in {'head','both'} else ''
    size_qualifier='volatile ' if volatility=='both' else ''
    copy_declarations=(f'{tree}(const {tree} &); {tree}({tree} &&); ' if nontrivial_copy else '')
    flags_fields='unsigned char color, is_nil;' if nontrivial_copy else 'unsigned short flags;'
    flags_initialization='node->color = 1; node->is_nil = 1;' if nontrivial_copy else 'node->flags = 0x101;'
    if ordered_homes:construction_home+='_ReadWriteBarrier(); head = 0; size = 0; '
    initializer='' if ordered_homes else ' : head(0), size(0)'
    declarations={**candidate['abi_declarations'],
        'operator_new':'extern void * __cdecl operator_new(unsigned int bytes);',
        tree:(f'struct RecoveredTreeNode {{ RecoveredTreeNode *next, *previous, *parent; {flags_fields} unsigned char payload[14]; }};\n'
            f'struct {tree} {{ RecoveredTreeNode *{head_qualifier} head; {size_qualifier}unsigned int size; '
            +copy_declarations+
            f'__forceinline {tree}(){initializer} {{ '
            +construction_home+'RecoveredTreeNode *node = (RecoveredTreeNode *)operator_new(sizeof(RecoveredTreeNode)); '
            'node->next = node; node->previous = node; node->parent = node; '+flags_initialization+' head = node; } '
            f'~{tree}(); }};\nstatic_assert(sizeof({tree}) == 8, "Two-word argument");\n'
            'static_assert(sizeof(RecoveredTreeNode) == 28, "Sentinel node");'),
        consumer:f'struct {consumer} {{ void thunk_FUN_10dee620(SCStr *, int, int, {tree}); }};'}
    if ordered_homes:declarations['construction_barrier']='extern \"C\" void _ReadWriteBarrier();\n#pragma intrinsic(_ReadWriteBarrier)'
    return {**candidate,'source':source,'abi_declarations':declarations}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('exports',nargs='+',type=Path)
    p.add_argument('--volatility',choices=['none','head','both'],default='none')
    p.add_argument('--ordered-homes',action='store_true',help='Sequence home stores before argument and member initialization')
    p.add_argument('--stack-homes',action='store_true',help='Preserve observed incoming receiver and construction receiver stack stores')
    p.add_argument('--nontrivial-copy',action='store_true',help='Restore the container copy/move ABI and adjacent byte flags')
    args=p.parse_args();records=load_records(args.exports);abi=CallABI(args.exports,recover_implicit_register=True)
    candidates=[]
    for line in (ROOT/'analysis/eh-lifetime-evidence.jsonl').open():
        evidence=json.loads(line);record=records.get(evidence['entry'])
        if record:
            candidate=lower(record,evidence,abi,args.volatility,args.nontrivial_copy,args.stack_homes,args.ordered_homes)
            if candidate:candidates.append(candidate)
    candidates.sort(key=lambda row:row['entry']);stem='empty_tree_arguments_'+args.volatility
    if args.nontrivial_copy:stem+='_nontrivial'
    if args.stack_homes:stem+='_homes'
    if args.ordered_homes:stem+='_ordered'
    directory=ROOT/'analysis'/('compiled-cpp-'+stem.replace('_','-'));directory.mkdir(parents=True,exist_ok=True)
    failures=[];accepted=[];scratch=directory/'.syntax-probe.cpp'
    for start in range(0,len(candidates),100):accepted+=split_valid(candidates[start:start+100],scratch,failures)
    scratch.unlink(missing_ok=True)
    if not accepted:raise SystemExit('No compiling empty tree arguments')
    source=directory/'ghidra_recovered.cpp';source.write_text(cpp_source(accepted));obj=source.with_suffix('.obj')
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
        '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=directory/'compiled-index.tsv'
    with index.open('w',newline='') as file:
        w=csv.writer(file,delimiter='\t');w.writerow(['entry','name','reference_body_bytes'])
        w.writerows((row['entry'],row['name'],row['body_bytes']) for row in accepted)
    inventory=[{key:row[key] for key in ['entry','reference_handler','reference_metadata','reference_state_count']} for row in accepted]
    (directory/'reference-eh-inventory.json').write_text(json.dumps(inventory,indent=2)+'\n')
    emit=ROOT/'src/generated/member_abi';(emit/(stem+'.cpp')).write_text(source.read_text())
    (emit/(stem+'-index.tsv')).write_bytes(index.read_bytes());manifest_path=emit/'tranches.json'
    rows=json.loads(manifest_path.read_text());object_name=stem+'_reference_flags'
    rows=[row for row in rows if row['object']!=object_name]+[{'object':object_name,'directory':str(directory.relative_to(ROOT))}]
    manifest_path.write_text(json.dumps(rows,indent=2)+'\n')
    print(json.dumps({'compiled_functions':len(accepted),'reference_bytes':sum(row['body_bytes'] for row in accepted),
        'syntax_rejected':len(failures),'pinned_msvc_verified':False},indent=2))


if __name__=='__main__':main()
