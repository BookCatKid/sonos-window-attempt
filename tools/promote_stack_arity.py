#!/usr/bin/env python3
"""Probe omitted unused word arguments in existing genuine C++ member batches.

Reference RET cleanup supplies argument count, not output instructions. Only
compiled and fully byte-verified bodies can enter recovery coverage.
"""
import argparse
import csv
import hashlib
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER
from classify_functions import DLL, section_map, function_bytes
from compare_compiled_ghidra import DISASSEMBLER
from promote_msvc_members import MARKER
from recovered_call_abi import arguments

PARAMETER = re.compile(r'(?:undefined[124]|int|uint|char|byte|short|ushort|long|ulong|void|SCStr)(?:\s*\*+\s*|\s+)\w+')


def promote(source, rows, reference, base, sections):
    markers=list(MARKER.finditer(source))
    if not markers:raise ValueError('Missing address markers')
    prelude=source[:markers[0].start()];blocks=[];accepted=[]
    for index,marker in enumerate(markers):
        entry=marker.group(1);row=rows[entry]
        stop=markers[index+1].start() if index+1<len(markers) else len(source)
        block=source[marker.end():stop]
        definition=re.search(r'(?P<owner>Recovered_'+entry+r')::FUN_'+entry+r'\((?P<params>[^()]*)\)\s*(?:noexcept\s*)?\{',block)
        if not definition:continue
        old=definition.group('params');params=arguments(old)
        params=[] if params in [[],['void']] else params
        if any(not PARAMETER.fullmatch(p) or re.match(r'void\s+\w+$',p) for p in params):continue
        code=function_bytes(reference,int(entry,16),int(row['reference_body_bytes']),base,sections)
        cleanup={int(i.op_str,0) if i.op_str else 0 for i in DISASSEMBLER.disasm(code,0) if i.mnemonic=='ret'}
        if len(cleanup)!=1:continue
        pop=next(iter(cleanup));missing=pop//4-len(params)
        if pop%4 or not 0<missing<=8:continue
        # A member with an explicitly different calling convention is excluded.
        preceding=block[:definition.start()].rsplit('\n',1)[-1]
        if re.search(r'__(?:cdecl|stdcall|fastcall)',preceding):continue
        new=', '.join(params+[f'unsigned int recovered_unused_stack_{i}' for i in range(missing)])
        prototype=re.compile(r'\bFUN_'+entry+r'\('+re.escape(old)+r'\)')
        # Declarations can be in the shared prelude or inside the address block.
        block,count=prototype.subn('FUN_'+entry+'('+new+')',block)
        prelude,shared_count=prototype.subn('FUN_'+entry+'('+new+')',prelude)
        if count+shared_count!=2:raise ValueError('Ambiguous prototype for '+entry)
        blocks.append(marker.group(0)+block);accepted.append(row)
    return prelude+''.join(blocks),accepted


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('sources',nargs='+',type=Path);args=p.parse_args()
    reference=DLL.read_bytes();base,sections=section_map(reference)
    emit=ROOT/'src/generated/member_abi';manifest_path=emit/'tranches.json';manifest=json.loads(manifest_path.read_text())
    for source in args.sources:
        if not source.is_file() or not source.with_name(source.stem+'-index.tsv').is_file():p.error('Missing source/index: '+str(source))
    for source in args.sources:
        index=source.with_name(source.stem+'-index.tsv')
        with index.open() as file:rows={r['entry']:r for r in csv.DictReader(file,delimiter='\t')}
        text,accepted=promote(source.read_text(),rows,reference,base,sections)
        if not accepted:continue
        stem=source.stem+'_stack_arity';directory=ROOT/'analysis'/('compiled-cpp-'+stem.replace('_','-'));directory.mkdir(exist_ok=True)
        target=directory/'ghidra_recovered.cpp';target.write_text(text);obj=target.with_suffix('.obj')
        result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
            '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(target,ROOT)],cwd=ROOT,capture_output=True,text=True)
        if result.returncode:raise SystemExit(result.stdout+result.stderr)
        inventory=directory/'compiled-index.tsv'
        with inventory.open('w',newline='') as file:
            writer=csv.DictWriter(file,fieldnames=accepted[0].keys(),delimiter='\t');writer.writeheader();writer.writerows(accepted)
        original=next((r for r in manifest if r['object']==source.stem+'_reference_flags'),None)
        if original:
            eh=ROOT/original['directory']/'reference-eh-inventory.json'
            if eh.exists():
                selected={r['entry'] for r in accepted}
                (directory/'reference-eh-inventory.json').write_text(json.dumps([r for r in json.loads(eh.read_text()) if r['entry'] in selected],indent=2)+'\n')
        (emit/(stem+'.cpp')).write_text(text);(emit/(stem+'-index.tsv')).write_bytes(inventory.read_bytes())
        name=stem+'_reference_flags';manifest=[r for r in manifest if r['object']!=name]+[{'object':name,'directory':str(directory.relative_to(ROOT))}]
        metrics={'object':name,'compiled_functions':len(accepted),'reference_bytes':sum(int(r['reference_body_bytes']) for r in accepted),
                 'pinned_msvc_verified':False,'byte_match_verified':False,
                 'input_source_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),
                 'source_sha256':hashlib.sha256(target.read_bytes()).hexdigest(),
                 'index_sha256':hashlib.sha256(inventory.read_bytes()).hexdigest()}
        (directory/'coverage.json').write_text(json.dumps(metrics,indent=2)+'\n')
        manifest_path.write_text(json.dumps(manifest,indent=2)+'\n')
        print(json.dumps(metrics),flush=True)
    manifest_path.write_text(json.dumps(manifest,indent=2)+'\n')


if __name__=='__main__':main()
