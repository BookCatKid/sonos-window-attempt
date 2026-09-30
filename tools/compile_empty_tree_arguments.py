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


def lower(record,evidence,abi,volatility):
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
    replacement='(('+consumer+' *)(param_1))->FUN_10dee620('+', '.join([
        '(SCStr *)('+values[0]+')','(int)('+values[1]+')','(int)('+values[2]+')',tree+'()'])+')'
    source=before+replacement+after
    head_qualifier=' volatile' if volatility in {'head','both'} else ''
    size_qualifier='volatile ' if volatility=='both' else ''
    declarations={**candidate['abi_declarations'],
        'operator_new':'extern void * __cdecl operator_new(unsigned int bytes);',
        tree:(f'struct RecoveredTreeNode {{ RecoveredTreeNode *next, *previous, *parent; unsigned short flags; unsigned char payload[14]; }};\n'
            f'struct {tree} {{ RecoveredTreeNode *{head_qualifier} head; {size_qualifier}unsigned int size; '
            f'__forceinline {tree}() : head(0), size(0) {{ '
            'RecoveredTreeNode *node = (RecoveredTreeNode *)operator_new(sizeof(RecoveredTreeNode)); '
            'node->next = node; node->previous = node; node->parent = node; node->flags = 0x101; head = node; } '
            f'~{tree}(); }};\nstatic_assert(sizeof({tree}) == 8, "Two-word argument");\n'
            'static_assert(sizeof(RecoveredTreeNode) == 28, "Sentinel node");'),
        consumer:f'struct {consumer} {{ void FUN_10dee620(SCStr *, int, int, {tree}); }};'}
    return {**candidate,'source':source,'abi_declarations':declarations}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('exports',nargs='+',type=Path)
    p.add_argument('--volatility',choices=['none','head','both'],default='none')
    args=p.parse_args();records=load_records(args.exports);abi=CallABI(args.exports,recover_implicit_register=True)
    candidates=[]
    for line in (ROOT/'analysis/eh-lifetime-evidence.jsonl').open():
        evidence=json.loads(line);record=records.get(evidence['entry'])
        if record:
            candidate=lower(record,evidence,abi,args.volatility)
            if candidate:candidates.append(candidate)
    candidates.sort(key=lambda row:row['entry']);stem='empty_tree_arguments_'+args.volatility
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
