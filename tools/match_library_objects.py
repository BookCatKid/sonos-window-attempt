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
from compare_compiled_ghidra import DISASSEMBLER, read_coff, resolve_known_relocations, security_cookie_va


def security_cookie_targets(reference, inventory):
    """Identify the native fastcall cookie check from the PE load-config cookie.

    This establishes an external runtime dependency's identity, not recovery of
    its body. The comparison and success-return flow match the existing EH gate.
    """
    base,sections=section_map(reference)
    cookie=security_cookie_va(reference,base,sections)
    if cookie is None:return {},[]
    entries=set()
    with inventory.open(newline='') as stream:
        for row in csv.DictReader(stream,delimiter='\t'):entries.add(int(row['entry'],16))
    checks=[];evidence=[]
    for entry in sorted(entries):
        va=entry;seen=set()
        for _ in range(16):
            if va in seen or va not in entries:break
            seen.add(va);raw=function_bytes(reference,va,32,base,sections)
            if len(raw)!=32:break
            if raw[:1]==b'\xe9':
                va=va+5+struct.unpack_from('<i',raw,1)[0];continue
            if struct.pack('<I',cookie) not in raw[:8]:break
            ins=list(DISASSEMBLER.disasm(raw,va))
            if (len(ins)>=3 and ins[0].mnemonic=='cmp' and
                ins[0].op_str==f'ecx, dword ptr [0x{cookie:x}]' and
                ins[1].mnemonic in ('jne','bnd jne') and
                ins[2].mnemonic in ('ret','bnd ret')):
                failure=int(ins[1].op_str,16)
                failure_target=failure
                if failure not in entries:
                    if len(ins)<4 or failure!=ins[3].address or ins[3].mnemonic not in ('jmp','bnd jmp'):break
                    failure_target=int(ins[3].op_str,16)
                    if failure_target not in entries:break
                checks.append(entry)
                evidence.append({'entry':f'{entry:08x}','comparison_entry':f'{va:08x}',
                                 'cookie_va':f'{cookie:08x}','failure_entry':f'{failure:08x}',
                                 'failure_target':f'{failure_target:08x}',
                                 'scope':'Runtime identity only; adds no recovered helper bytes'})
            break
    targets={'___security_cookie':[cookie]}
    if checks:targets['@__security_check_cookie@4']=checks
    return targets,evidence


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


def codeview_function_sizes(sections, by_index):
    """Read compiler procedure extents, anchored by both COFF debug relocations.

    ProcSym layout and record kinds follow LLVM's CodeView SymbolRecord.h and
    CodeViewSymbols.def. Debug extents do not themselves establish a native match.
    """
    sizes={}
    for section in sections:
        if section['name']!='.debug$S':continue
        data=section['code']
        if len(data)<4 or struct.unpack_from('<I',data,0)[0]!=4:continue
        relocations={r['offset']:r for r in section['relocations']}
        position=4
        while position+8<=len(data):
            kind,length=struct.unpack_from('<II',data,position);start=position+8;end=start+length
            if end>len(data):raise ValueError('Truncated CodeView subsection')
            if kind==0xf1:
                record=start
                while record+4<=end:
                    size,record_kind=struct.unpack_from('<HH',data,record)
                    stop=record+size+2
                    if size<2 or stop>end:raise ValueError('Truncated CodeView symbol')
                    if record_kind in (0x110f,0x1110,0x1146,0x1147) and size>=37:
                        offset_fixup=relocations.get(record+32);section_fixup=relocations.get(record+36)
                        if (offset_fixup and section_fixup and offset_fixup['type']==11 and section_fixup['type']==10 and
                            offset_fixup['symbol_index']==section_fixup['symbol_index']):
                            symbol=by_index.get(offset_fixup['symbol_index'])
                            if symbol and symbol['type']&0x20 and 0<symbol['section']<=len(sections):
                                offset=symbol['offset']+struct.unpack_from('<I',data,record+32)[0]
                                code_size=struct.unpack_from('<I',data,record+16)[0]
                                key=(symbol['section'],offset)
                                if code_size<=0 or offset+code_size>len(sections[symbol['section']-1]['code']):
                                    raise ValueError('CodeView extent exceeds compiler section')
                                if key in sizes and sizes[key]!=code_size:raise ValueError('Conflicting CodeView extents')
                                sizes[key]=code_size
                    record=stop
            position=(end+3)&~3
    return sizes


def bodies(path):
    sections, symbols, by_index=read_coff(path)
    debug_sizes=codeview_function_sizes(sections,by_index)
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
            recorded_size=debug_sizes.get((number,s['offset']))
            if recorded_size is not None:
                if recorded_size>len(code):raise ValueError('CodeView procedure overlaps another function')
                code=code[:recorded_size]
            else:
                instructions=list(DISASSEMBLER.disasm(code,0))
                if not instructions or sum(ins.size for ins in instructions)!=len(code):continue
                while instructions and instructions[-1].mnemonic in ('nop','int3'):instructions.pop()
                if not instructions:continue
                code=code[:instructions[-1].address+instructions[-1].size]
            relocs=[]
            for r in section['relocations']:
                offset=r['offset']-s['offset']
                if 0<=offset<len(code):
                    target=by_index.get(r['symbol_index'])
                    relocs.append({'offset':offset,'type':r['type'],'symbol':target['name'] if target else ''})
            result.append({'object':str(path),'symbol':s['name'],'public':s['storage']==2,
                           'code':code,'relocs':relocs,'sections':sections,'symbols':symbols,
                           'extent_source':'codeview' if recorded_size is not None else 'decoded-section'})
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


def immutable_data_definitions(sections, symbols):
    """Extract entire read-only symbol extents, never partial data prefixes."""
    result=[]
    for symbol in symbols:
        if symbol['storage'] not in (2,3) or symbol['type']&0x20:continue
        if not 0<symbol['section']<=len(sections):continue
        section=sections[symbol['section']-1]
        if section['characteristics']&(0x20000000|0x80000000):continue
        start=symbol['offset']
        ends=[s['offset'] for s in symbols if s['section']==symbol['section'] and s['offset']>start]
        stop=min(ends,default=len(section['code']))
        data=section['code'][start:stop]
        if len(data)<4 or not any(data):continue
        if any(start<=r['offset']<stop for r in section['relocations']):continue
        result.append({'symbol':symbol['name'],'public':symbol['storage']==2,'data':data})
    return result


def match(objects, reference, inventory, accepted_fragment_sink=None):
    base, sections=section_map(reference)
    pe=struct.unpack_from('<I',reference,0x3c)[0];optional=pe+24
    headers=optional+struct.unpack_from('<H',reference,pe+20)[0]
    native_characteristics=[struct.unpack_from('<I',reference,headers+i*40+36)[0] for i in range(len(sections))]
    sizes={}
    with inventory.open(newline='') as stream:
        for r in csv.DictReader(stream,delimiter='\t'):
            if r['thunk']=='false' and r['external']=='false':sizes[int(r['entry'],16)]=int(r['body_bytes'])
    candidates=[];forwarders=[]
    imports=imported_targets(reference,inventory)
    cookie_targets,cookie_evidence=security_cookie_targets(reference,inventory)
    imports.update(cookie_targets)
    local_data=defaultdict(list);global_data=defaultdict(list)
    for path in objects:
        source_sections,source_symbols,_=read_coff(path)
        for item in immutable_data_definitions(source_sections,source_symbols):
            local_data[str(path),item['symbol']].append(item['data'])
            if item['public']:global_data[item['symbol']].append(item['data'])
    for path in objects:
        for b in bodies(path):
            code=b['code'];runs=fixed_runs(code,b['relocs'])
            if (len(code)==5 and code[:1]==b'\xe9' and len(b['relocs'])==1 and
                b['relocs'][0]['offset']==1 and b['relocs'][0]['type']==20 and code[1:]==b'\0'*4):
                forwarders.append(b)
            if len(code)<8 or not runs:continue
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
        forwarding_evidence=[]
        # A compiler-emitted five-byte C forwarding function is fully verified
        # only when its entire native JMP reaches an independently bound callee.
        # Multiple exact forwarding copies are dependency aliases, never new
        # unique function correspondences or additional recovered-byte credit.
        pending=list(forwarders)
        for _ in range(len(pending)+1):
            next_pending=[];changed=False
            for b in pending:
                callee=b['relocs'][0]['symbol']
                known=local_names.get((b['object'],callee),[]) or global_names.get(callee,[])
                addresses=sorted({source for target in known for source in destinations[target]})
                if not addresses:next_pending.append(b);continue
                # LINK may route the call through another indexed E9 thunk to
                # the verified compiled forwarder. Keep that relationship explicit.
                linker_aliases=sorted({source for target in addresses for source in destinations[target]}-set(addresses))
                bound_addresses=sorted(set(addresses+linker_aliases))
                local_names[b['object'],b['symbol']]=bound_addresses
                if b['public']:global_names[b['symbol']]=sorted(set(global_names.get(b['symbol'],[])+bound_addresses))
                forwarding_evidence.append({'object':b['object'],'symbol':b['symbol'],'callee':callee,
                                            'entries':[f'{va:08x}' for va in addresses],
                                            'linker_alias_entries':[f'{va:08x}' for va in linker_aliases],
                                            'scope':'Entire compiled forwarding body verified as dependency aliases; zero added byte credit'})
                changed=True
            pending=next_pending
            if not changed:break
        return global_names,local_names,forwarding_evidence
    def verify(b,global_names,local_names):
        known=dict(global_names)
        for (obj,name),vas in local_names.items():
            if obj==b['object']:known[name]=vas
        expected=function_bytes(reference,b['entry'],len(b['code']),base,sections)
        # Independently validate immutable, relocation-free compiler data. Never
        # assign a symbol solely from the address occupying the reference slot.
        for r in b['relocs']:
            if r['type']!=6 or r['symbol'] in known:continue
            addend=struct.unpack_from('<I',b['code'],r['offset'])[0]
            address=struct.unpack_from('<I',expected,r['offset'])[0]-addend
            definitions=local_data.get((b['object'],r['symbol']),[]) or global_data.get(r['symbol'],[])
            for data in definitions:
                native_section=next((i for i,(rva,size,_) in enumerate(sections)
                                     if base+rva<=address and address+len(data)<=base+rva+size),None)
                if native_section is None or native_characteristics[native_section]&(0x20000000|0x80000000):continue
                if function_bytes(reference,address,len(data),base,sections)==data:
                    known[r['symbol']]=[address];break
        patched,_,unresolved=resolve_known_relocations(b['code'],expected,b['relocs'],b['entry'],base,known)
        diagnostics=[]
        for r in b['relocs']:
            offset=r['offset']
            actual=struct.unpack_from('<I',expected,offset)[0]
            original=struct.unpack_from('<I',b['code'],offset)[0]
            if r['type']==20:actual=(b['entry']+offset+4+actual-original)&0xffffffff
            elif r['type']==6:actual=(actual-original)&0xffffffff
            if r['symbol'] not in known:
                diagnostics.append({'symbol':r['symbol'],'offset':offset,'type':r['type'],
                                    'native_target':f'{actual:08x}','reason':'dependency not independently verified'})
            elif patched[offset:offset+4]!=expected[offset:offset+4]:
                diagnostics.append({'symbol':r['symbol'],'offset':offset,'type':r['type'],
                                    'native_target':f'{actual:08x}','reason':'verified targets do not match this relocation'})
        return unresolved==0 and patched==expected,diagnostics,unresolved,patched
    while active:
        global_names,local_names,_=targets(active)
        remaining={i for i in active if verify(candidates[i],global_names,local_names)[0]}
        if remaining==active:break
        active=remaining
    global_names,local_names,forwarding_evidence=targets(active)
    final_verification={i:verify(b,global_names,local_names) for i,b in enumerate(candidates)}
    if accepted_fragment_sink is not None:
        for i in sorted(active):
            verified,_,unresolved,patched=final_verification[i]
            if not verified or unresolved:raise ValueError('Final library dependency graph changed')
            accepted_fragment_sink(candidates[i],patched)
    rows=[{'object':b['object'],'symbol':b['symbol'],'entry':f'{b["entry"]:08x}',
           'bytes':len(b['code']),'relocations':len(b['relocs']),
           'unique_fixed_candidate':True,'closed_graph_exact':i in active,
           'unresolved_relocations':final_verification[i][2],
           'rejected_dependencies':final_verification[i][1] if i not in active else []}
          for i,b in enumerate(candidates)]
    return {'reference_sha256':hashlib.sha256(reference).hexdigest(),
            'inventory_sha256':hashlib.sha256(inventory.read_bytes()).hexdigest(),
            'objects':{str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in objects},
            'unique_fixed_candidates':len(rows),'closed_graph_exact_functions':len(active),
            'closed_graph_body_bytes':sum(len(candidates[i]['code']) for i in active),
            'runtime_cookie_identity_evidence':cookie_evidence,
            'compiled_forwarding_identity_evidence':forwarding_evidence,
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
