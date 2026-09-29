#!/usr/bin/env python3
"""Verify compiler-generated x86 EH graphs before accepting placement constraints.

Only byte-identical handler/metadata/action graphs are admitted. External runtime
identities are established through reference imports, PE load configuration, and
an independently checked security-cookie comparison routine. No DLL is executed.
"""
import json,re,struct
from collections import defaultdict
from functools import lru_cache
from pathlib import Path
from capstone import Cs,CS_ARCH_X86,CS_MODE_32
from classify_functions import function_bytes
from compare_compiled_ghidra import read_coff,relocation_value

U32=lambda data,pos=0:struct.unpack_from('<I',data,pos)[0]

def verified_eh_targets(directory,obj,reference,base,pe_sections,symbol_vas):
    inventory=directory/'reference-eh-inventory.json'
    if not inventory.is_file():return {},None
    pe=U32(reference,0x3c);optional=pe+24
    rva=U32(reference,optional+96+10*8)
    load_config=function_bytes(reference,base+rva,72,base,pe_sections)
    if len(load_config)!=72 or U32(load_config)<64:return {},{'error':'No supported PE load config'}
    cookie=U32(load_config,60)
    if not function_bytes(reference,cookie,4,base,pe_sections):return {},{'error':'Invalid PE cookie address'}
    sections,symbols,indices=read_coff(obj)
    names={s['name']:s for s in symbols}
    # Index COFF boundaries once. Scanning the whole symbol table for every
    # handler/table made the bulk graph check quadratic in tranche size.
    offsets=defaultdict(set)
    handlers_by_entry=defaultdict(list)
    for symbol in symbols:
        offsets[symbol['section']].add(symbol['offset'])
        if symbol['name'].startswith('__ehhandler$'):
            match=re.search(r'FUN_([0-9a-f]{8})',symbol['name'])
            if match:handlers_by_entry[match.group(1)].append(symbol['name'])
    ends={}
    for section_number,positions in offsets.items():
        ordered=sorted(positions);size=len(sections[section_number-1]['code'])
        for i,start in enumerate(ordered):
            ends[section_number,start]=ordered[i+1] if i+1<len(ordered) else size
    disasm=Cs(CS_ARCH_X86,CS_MODE_32)
    targets={'___security_cookie':[cookie]}
    verified=[];rejected=[]

    def refbytes(va,n):return function_bytes(reference,va,n,base,pe_sections)

    def extent(symbol):
        sec=sections[symbol['section']-1];start=symbol['offset']
        end=ends.get((symbol['section'],start),len(sec['code']))
        data=sec['code'][start:end]
        if sec['name'].startswith('.text'):
            ins=list(disasm.disasm(data,0))
            while ins and ins[-1].mnemonic in ('nop','int3'):ins.pop()
            if not ins:return b''
            data=data[:ins[-1].address+ins[-1].size]
        return data

    @lru_cache(maxsize=None)
    def cookie_check(va):
        seen=set()
        for _ in range(16):
            if va in seen:return False
            seen.add(va);raw=refbytes(va,32)
            if len(raw)<16:return False
            if raw[0]==0xe9:
                va=(va+5+struct.unpack_from('<i',raw,1)[0])&0xffffffff;continue
            ins=list(disasm.disasm(raw,va))
            # Successful cookie comparison returns; the unequal branch enters
            # failure reporting. This establishes identity, not runtime equality.
            return (len(ins)>=3 and ins[0].mnemonic=='cmp' and
                    ins[0].op_str==f'ecx, dword ptr [0x{cookie:x}]' and
                    ins[1].mnemonic in ('jne','bnd jne') and
                    ins[2].mnemonic in ('ret','bnd ret'))
        return False

    @lru_cache(maxsize=None)
    def import_targets(name):
        if not name.startswith('__imp_'):return []
        bare=name[len('__imp_'):].lstrip('_')
        result=[]
        for key,values in symbol_vas.items():
            m=re.fullmatch(r'PTR_(.+)_([0-9a-fA-F]{8})',key)
            if m and m.group(1).lstrip('_')==bare:result.extend(values)
        return sorted(set(result))

    def graph(name,va,size,local,proofs,depth=0):
        if depth>8 or name not in names:return False
        symbol=names[name];sec=sections[symbol['section']-1];start=symbol['offset']
        available=extent(symbol)
        if size is None:size=len(available)
        if size<=0 or size>4096 or size>len(available):return False
        data=bytearray(available[:size]);expected=refbytes(va,size)
        if len(expected)!=size:return False
        if name in local:return local[name]==va
        # Definitions are pinned tentatively only within this graph traversal;
        # a failure discards the whole graph, including its placement map.
        local[name]=va
        for rel in sec['relocations']:
            if not start<=rel['offset']<start+size:continue
            off=rel['offset']-start
            if off+4>size or rel['type'] not in (6,20):return False
            target=indices.get(rel['symbol_index'])
            if target is None:return False
            target_name=target['name'];addend=U32(data,off)
            if rel['type']==6:target_va=(U32(expected,off)-addend)&0xffffffff
            else:target_va=(va+off+4+U32(expected,off)-addend)&0xffffffff
            ok=False
            if target['section']>0:
                if target_name.startswith('__ehfuncinfo$'):
                    info=refbytes(target_va,36)
                    if (len(info)!=36 or U32(info)!=0x19930522 or
                            U32(info,4)!=expected_state_count):return False
                    ok=graph(target_name,target_va,36,local,proofs,depth+1)
                elif target_name.startswith(('__unwindtable$','__unwindmap$')):
                    ok=graph(target_name,target_va,expected_state_count*8,local,proofs,depth+1)
                elif target_name.startswith('__unwindfunclet$'):
                    action=refbytes(target_va,6)
                    # Only the independently named __std_terminate import jump
                    # is admitted as this guard's unwind action.
                    known=symbol_vas.get('PTR___std_terminate_122fc54c',[])
                    if len(action)==6 and action[:2]==b'\xff\x25' and U32(action,2) in known:
                        ok=graph(target_name,target_va,None,local,proofs,depth+1)
                else:return False
            elif target_name=='___security_cookie':ok=target_va==cookie
            elif target_name=='@__security_check_cookie@4':
                ok=cookie_check(target_va)
                if ok:local[target_name]=target_va
            elif target_name=='___CxxFrameHandler3':
                ok=target_va in symbol_vas.get('__CxxFrameHandler3',[])
                if ok:local[target_name]=target_va
            elif target_name=='___std_terminate':
                # MSVC can point its unwind entry directly at the imported
                # terminate function rather than emitting a local funclet.
                action=refbytes(target_va,6)
                ok=(len(action)==6 and action[:2]==b'\xff\x25' and
                    U32(action,2) in symbol_vas.get('PTR___std_terminate_122fc54c',[]))
                if ok:local[target_name]=target_va
            elif target_name.startswith('__imp_'):
                ok=target_va in import_targets(target_name)
                if ok:local[target_name]=target_va
            if not ok:return False
            value=relocation_value(rel['type'],target_va,addend,va,off,base)
            if value is None:return False
            struct.pack_into('<I',data,off,value&0xffffffff)
        if bytes(data)!=expected:return False
        proofs.append({'symbol':name,'reference_va':f'{va:08x}','verified_bytes':size})
        return True

    for item in json.loads(inventory.read_text()):
        entry=item['entry']
        expected_state_count=item.get('reference_state_count',1)
        handlers=handlers_by_entry.get(entry,[])
        local={};proofs=[]
        if len(handlers)!=1:
            rejected.append({'entry':entry,'reason':'Missing or ambiguous compiler handler'});continue
        handler=handlers[0];va=int(item['reference_handler'],16)
        ok=graph(handler,va,None,local,proofs)
        metadata=[p for p in proofs if p['symbol'].startswith('__ehfuncinfo$')]
        if not ok or len(metadata)!=1 or metadata[0]['reference_va']!=item['reference_metadata']:
            rejected.append({'entry':entry,'reason':'Handler, metadata, or unwind bytes differ'});continue
        conflict=any(n in targets and target not in targets[n] for n,target in local.items())
        if conflict:
            rejected.append({'entry':entry,'reason':'Conflicting runtime placement'});continue
        for name,target in local.items():targets.setdefault(name,[]).append(target)
        verified.append({'entry':entry,'graph':proofs})
    targets={n:sorted(set(v)) for n,v in targets.items()}
    report={'object':str(obj),'security_cookie_from_pe_load_config':f'{cookie:08x}',
            'verified_functions':len(verified),'verified_graph_bytes_sum':sum(p['verified_bytes'] for x in verified for p in x['graph']),
            'verified':verified,'rejected':rejected,'scope':'Exact reconstructed EH graph placement constraints; not a linked DLL proof'}
    return targets,report
