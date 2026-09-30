#!/usr/bin/env python3
"""Probe real C++ tree iterators for a byte-identical postfix-increment family."""
import argparse,csv,json,os,subprocess
from pathlib import Path
from compile_ghidra_cpp import ROOT,COMPILER,load_records
from classify_functions import DLL,section_map,function_bytes

NODE='struct RecoveredIteratorNode { RecoveredIteratorNode *left, *parent, *right; unsigned char color, nil; };\n'
BODY='''{
Recovered_ENTRY result=*this;
if (!node->right->nil) {
RecoveredIteratorNode *next=node->right;
while (!next->left->nil) next=next->left;
node=next;
} else {
RecoveredIteratorNode *next=node->parent;
while (!next->nil && node==next->right) { node=next; next=next->parent; }
node=next;
}
return result;
}
'''

BODY_ASCENDING_FIRST='{\nRecovered_ENTRY result=*this;\nif (node->right->nil) {\nRecoveredIteratorNode *next=node->parent;\nwhile (!next->nil && node==next->right) { node=next; next=next->parent; }\nnode=next;\n} else {\nRecoveredIteratorNode *next=node->right;\nwhile (!next->left->nil) next=next->left;\nnode=next;\n}\nreturn result;\n}\n'
BODY_CACHED_NODE=BODY_ASCENDING_FIRST.replace('if (node->right->nil)', 'RecoveredIteratorNode *current=node;\nif (current->right->nil)').replace('next=node->parent','next=current->parent').replace('node==next->right','current==next->right').replace('node=next; next=next->parent','node=next; current=next; next=next->parent').replace('next=node->right','next=current->right')


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('exports',nargs='+',type=Path)
    p.add_argument('--ascending-first',action='store_true',help='Preserve the native branch orientation as a separate hypothesis')
    p.add_argument('--cached-node',action='store_true',help='Keep the current node as a separate C++ local during ascent')
    args=p.parse_args();body=BODY_CACHED_NODE if args.cached_node else BODY_ASCENDING_FIRST if args.ascending_first else BODY
    stem='tree_iterators'+('_cached_node' if args.cached_node else '_ascending_first' if args.ascending_first else '')
    reference=DLL.read_bytes();base,sections=section_map(reference)
    prototype=function_bytes(reference,0x101d4810,88,base,sections)
    records=load_records(args.exports)
    candidates=[r for r in records.values() if r['body_bytes']==88 and function_bytes(reference,int(r['entry'],16),88,base,sections)==prototype]
    candidates.sort(key=lambda r:r['entry']);source=NODE
    for r in candidates:
        entry=r['entry'];owner='Recovered_'+entry
        source+=f'// Reference entry {entry}; body size 88 bytes.\nstruct {owner} {{ RecoveredIteratorNode *node; {owner} FUN_{entry}(int unused); }};\n'
        source+=f'{owner} {owner}::FUN_{entry}(int unused) '+body.replace('ENTRY',entry)
    directory=ROOT/'analysis'/('compiled-cpp-'+stem.replace('_','-'));directory.mkdir(exist_ok=True)
    target=directory/'ghidra_recovered.cpp';target.write_text(source);obj=target.with_suffix('.obj')
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
        '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(target,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=directory/'compiled-index.tsv'
    with index.open('w',newline='') as file:
        w=csv.writer(file,delimiter='\t');w.writerow(['entry','name','reference_body_bytes']);w.writerows((r['entry'],r['name'],r['body_bytes']) for r in candidates)
    emit=ROOT/'src/generated/member_abi';(emit/(stem+'.cpp')).write_text(source);(emit/(stem+'-index.tsv')).write_bytes(index.read_bytes())
    path=emit/'tranches.json';manifest=json.loads(path.read_text());name=stem+'_reference_flags'
    manifest=[r for r in manifest if r['object']!=name]+[{'object':name,'directory':str(directory.relative_to(ROOT))}]
    path.write_text(json.dumps(manifest,indent=2)+'\n');print(json.dumps({'compiled_functions':len(candidates),'reference_bytes':88*len(candidates),'pinned_msvc_verified':False}))


if __name__=='__main__':main()
