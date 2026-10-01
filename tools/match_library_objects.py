#!/usr/bin/env python3
"""Discover upstream C function correspondences, then verify complete relocation graphs.

Fixed-byte candidates never count as recovered bytes. Unknown data, runtime and
EH relocations fail closed. Reports are experimental and do not update coverage.
"""
import argparse
import csv
import hashlib
import json
import struct
from collections import defaultdict
from pathlib import Path
from classify_functions import DLL, ROOT, section_map, function_bytes
from compare_compiled_ghidra import DISASSEMBLER, read_coff, resolve_known_relocations


def imported_targets(reference, inventory):
    """Bind CRT calls from native PE import names and decoded import/thunk chains."""
    base,sections=section_map(reference)
    optional=struct.unpack_from('<I',reference,0x3c)[0]+24
    import_rva,import_size=struct.unpack_from('<II',reference,optional+96+8)
    result=defaultdict(list);iat_names={}
    def read(va,size):return function_bytes(reference,va,size,base,sections)
    def cstring(va):
        value=bytearray()
        for i in range(4096):
            byte=read(va+i,1)
            if not byte or byte==b'\0':return bytes(value).decode('ascii')
            value.extend(byte)
        raise ValueError('Unterminated PE import name')
    for offset in range(0,import_size,20):
        descriptor=read(base+import_rva+offset,20)
        if len(descriptor)!=20:raise ValueError('Invalid import descriptor')
        if descriptor==b'\0'*20:break
        original,_,_,_,first=struct.unpack('<IIIII',descriptor)
        for i in range(65536):
            raw=read(base+(original or first)+i*4,4)
            if len(raw)!=4:raise ValueError('Invalid import lookup table')
            name_rva=struct.unpack('<I',raw)[0]
            if name_rva==0:break
            if name_rva&0x80000000:continue
            name=cstring(base+name_rva+2);iat=base+first+i*4;iat_names[iat]=name
            result['__imp__'+name].append(iat)
    jumps=[]
    with inventory.open(newline='') as stream:
        for row in csv.DictReader(stream,delimiter='\t'):
            entry=int(row['entry'],16);size=int(row['body_bytes']);code=read(entry,min(size,6))
            if code[:2]==b'\xff\x25' and len(code)==6:
                name=iat_names.get(struct.unpack_from('<I',code,2)[0])
                if name:result['_'+name].append(entry)
            elif size==5 and code[:1]==b'\xe9':
                jumps.append((entry,entry+5+struct.unpack_from('<i',code,1)[0]))
    for _ in range(len(jumps)+1):
        destination_names={va:name for name,vas in result.items() if not name.startswith('__imp__') for va in vas}
        additions=[(source,destination_names[target]) for source,target in jumps if target in destination_names and source not in destination_names]
        if not additions:break
        for va,name in additions:result[name].append(va)
    return dict(result)


def bodies(path):
    sections, symbols, by_index=read_coff(path)
    grouped=defaultdict(list)
    for s in symbols:
        if s['type']&0x20 and s['storage'] in (2,3) and 0<s['section']<=len(sections):
            if sections[s['section']-1]['name'].startswith('.text'):
                grouped[s['section']].append(s)
    result=[]
    for number, entries in grouped.items():
        section=sections[number-1];entries.sort(key=lambda s:s['offset'])
        for i,s in enumerate(entries):
            stop=entries[i+1]['offset'] if i+1<len(entries) else len(section['code'])
            code=section['code'][s['offset']:stop]
            instructions=list(DISASSEMBLER.disasm(code,0))
            if not instructions or sum(ins.size for ins in instructions)!=len(code):
                continue
            while instructions and instructions[-1].mnemonic in ('nop','int3'):
                instructions.pop()
            if not instructions:continue
            code=code[:instructions[-1].address+instructions[-1].size]
            relocs=[]
            for r in section['relocations']:
                offset=r['offset']-s['offset']
                if 0<=offset<len(code):
                    target=by_index.get(r['symbol_index'])
                    relocs.append({'offset':offset,'type':r['type'],'symbol':target['name'] if target else ''})
            result.append({'object':str(path),'symbol':s['name'],'public':s['storage']==2,
                           'code':code,'relocs':relocs,'sections':sections,'symbols':symbols})
    return result


def fixed_runs(code, relocs):
    masked=set()
    for r in relocs:
        if r['type'] not in (6,20) or r['offset']<0 or r['offset']+4>len(code):return []
        masked.update(range(r['offset'],r['offset']+4))
    runs=[];start=None
    for i in range(len(code)+1):
        if i<len(code) and i not in masked:
            if start is None:start=i
        elif start is not None:
            runs.append((start,code[start:i]));start=None
    return runs


def match(objects, reference, inventory):
    base, sections=section_map(reference)
    pe=struct.unpack_from('<I',reference,0x3c)[0];optional=pe+24
    headers=optional+struct.unpack_from('<H',reference,pe+20)[0]
    native_characteristics=[struct.unpack_from('<I',reference,headers+i*40+36)[0] for i in range(len(sections))]
    sizes={}
    with inventory.open(newline='') as stream:
        for r in csv.DictReader(stream,delimiter='\t'):
            if r['thunk']=='false' and r['external']=='false':sizes[int(r['entry'],16)]=int(r['body_bytes'])
    candidates=[]
    imports=imported_targets(reference,inventory)
    for path in objects:
        for b in bodies(path):
            code=b['code'];runs=fixed_runs(code,b['relocs'])
            if len(code)<16 or not runs:continue
            anchor_offset,anchor=max(runs,key=lambda r:len(r[1]))
            if len(anchor)<8:continue
            hits=[]
            # Search compiled instruction bytes in native sections, then require an
            # independently inventoried whole-function extent and all fixed bytes.
            for rva,size,raw in sections:
                pos=reference.find(anchor,raw,raw+size)
                while pos>=0:
                    va=base+rva+pos-raw-anchor_offset
                    if sizes.get(va)==len(code):
                        expected=function_bytes(reference,va,len(code),base,sections)
                        if all(expected[o:o+len(v)]==v for o,v in runs):hits.append(va)
                    pos=reference.find(anchor,pos+1,raw+size)
            if len(set(hits))==1:
                b['entry']=hits[0];candidates.append(b)
    # Function addresses arise from unique full fixed-byte correspondences, not
    # guessed displacements. Admit only a closed graph of completely verified bodies.
    active={i for i in range(len(candidates))}
    def targets(active):
        global_names=defaultdict(list,{k:list(v) for k,v in imports.items()});local_names=defaultdict(list)
        for i in active:
            b=candidates[i];local_names[(b['object'],b['symbol'])].append(b['entry'])
            if b['public']:global_names[b['symbol']].append(b['entry'])
        # Native incremental thunks must decode to these actual candidate bodies.
        destinations=defaultdict(list)
        for va,size in sizes.items():
            if size!=5:continue
            code=function_bytes(reference,va,5,base,sections)
            if code[:1]==b'\xe9':destinations[va+5+struct.unpack_from('<i',code,1)[0]].append(va)
        # Include declared Ghidra thunks separately from non-thunk size inventory.
        with inventory.open(newline='') as stream:
            for row in csv.DictReader(stream,delimiter='\t'):
                if int(row['body_bytes'])!=5:continue
                va=int(row['entry'],16);code=function_bytes(reference,va,5,base,sections)
                if code[:1]==b'\xe9':destinations[va+5+struct.unpack_from('<i',code,1)[0]].append(va)
        for mapping in (global_names,local_names):
            for name,vas in mapping.items():
                mapping[name]=sorted(set(vas+[t for v in vas for t in destinations[v]]))
        return global_names,local_names
    def verify(b,global_names,local_names):
        known=dict(global_names)
        for (obj,name),vas in local_names.items():
            if obj==b['object']:known[name]=vas
        expected=function_bytes(reference,b['entry'],len(b['code']),base,sections)
        # Independently validate immutable, relocation-free compiler data. Never
        # assign a symbol solely from the address occupying the reference slot.
        for r in b['relocs']:
            if r['type']!=6 or r['symbol'] in known:continue
            symbol=next((s for s in b['symbols'] if s['name']==r['symbol']),None)
            if not symbol or not 0<symbol['section']<=len(b['sections']):continue
            section=b['sections'][symbol['section']-1]
            if section['characteristics']&(0x20000000|0x80000000):continue
            start=symbol['offset'];ends=[s['offset'] for s in b['symbols'] if s['section']==symbol['section'] and s['offset']>start]
            stop=min(ends,default=len(section['code']))
            data=section['code'][start:stop]
            if len(data)<4 or not any(data) or any(start<=x['offset']<stop for x in section['relocations']):continue
            addend=struct.unpack_from('<I',b['code'],r['offset'])[0]
            address=struct.unpack_from('<I',expected,r['offset'])[0]-addend
            native_section=next((i for i,(rva,size,_) in enumerate(sections)
                                 if base+rva<=address and address+len(data)<=base+rva+size),None)
            if native_section is None or native_characteristics[native_section]&(0x20000000|0x80000000):continue
            if function_bytes(reference,address,len(data),base,sections)==data:
                known[r['symbol']]=[address]
        patched,_,unresolved=resolve_known_relocations(b['code'],expected,b['relocs'],b['entry'],base,known)
        return unresolved==0 and patched==expected
    while active:
        global_names,local_names=targets(active)
        remaining={i for i in active if verify(candidates[i],global_names,local_names)}
        if remaining==active:break
        active=remaining
    rows=[{'object':b['object'],'symbol':b['symbol'],'entry':f'{b["entry"]:08x}',
           'bytes':len(b['code']),'relocations':len(b['relocs']),
           'unique_fixed_candidate':True,'closed_graph_exact':i in active}
          for i,b in enumerate(candidates)]
    return {'reference_sha256':hashlib.sha256(reference).hexdigest(),
            'inventory_sha256':hashlib.sha256(inventory.read_bytes()).hexdigest(),
            'objects':{str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in objects},
            'unique_fixed_candidates':len(rows),'closed_graph_exact_functions':len(active),
            'closed_graph_body_bytes':sum(len(candidates[i]['code']) for i in active),
            'coverage_added':0,'scope':'Experimental upstream correspondence; no coverage promotion', 'functions':rows}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('objects_directory',type=Path)
    p.add_argument('--reference',type=Path,default=DLL)
    p.add_argument('--inventory',type=Path,default=ROOT/'analysis/thunk-recovery-full/final-function-inventory.tsv')
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();objects=sorted(a.objects_directory.glob('*.obj'))
    if not objects:p.error('No compiled objects')
    result=match(objects,a.reference.read_bytes(),a.inventory)
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({k:v for k,v in result.items() if k not in ('functions','objects')}))


if __name__=='__main__':main()
