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
from compare_compiled_ghidra import read_coff,relocation_value,generated_symbol_name,scstr_abi_key

U32=lambda data,pos=0:struct.unpack_from('<I',data,pos)[0]

def bound_helper_body(binding,target_va,inventory,refbytes):
    """Establish a helper identity from its native unwind slot and one linker jump.

    This chooses where to check the complete compiler-produced helper; it does
    not admit any instruction bytes or external relocations on its own.
    """
    owner=inventory.get(binding.get('owner_entry'))
    if owner is None:return None
    metadata=refbytes(int(owner['reference_metadata'],16),36)
    if len(metadata)!=36 or U32(metadata)!=0x19930522:return None
    state=binding.get('state')
    if not isinstance(state,int) or state<0 or state>=U32(metadata,4):return None
    record=refbytes(U32(metadata,8)+state*8,8)
    if len(record)!=8:return None
    action=U32(record,4)
    instructions=list(Cs(CS_ARCH_X86,CS_MODE_32).disasm(refbytes(action,16),action))
    if len(instructions)<2 or instructions[0].mnemonic!='lea' or not instructions[0].op_str.startswith('ecx, [ebp '):return None
    jump=instructions[1]
    if jump.mnemonic!='jmp' or not jump.op_str.startswith('0x'):return None
    call_target=int(binding['call_target'],16)
    if target_va!=call_target or int(jump.op_str,16)!=call_target:return None
    thunk=refbytes(call_target,5)
    if len(thunk)!=5 or thunk[0]!=0xe9:return None
    body=(call_target+5+struct.unpack_from('<i',thunk,1)[0])&0xffffffff
    return body if body==int(binding['body_entry'],16) else None

def verified_eh_targets(directory,obj,reference,base,pe_sections,symbol_vas):
    inventory=directory/'reference-eh-inventory.json'
    if not inventory.is_file():return {},None
    inventory_rows=json.loads(inventory.read_text())
    inventory_by_entry={item['entry']:item for item in inventory_rows}
    bindings_path=directory/'reference-auxiliary-symbols.json'
    bindings=json.loads(bindings_path.read_text()) if bindings_path.is_file() else []
    bindings_by_symbol={item['symbol']:item for item in bindings}
    if len(bindings_by_symbol)!=len(bindings):return {},{'error':'Duplicate auxiliary symbol identities'}
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
    indexed_addresses={address for values in symbol_vas.values() for address in values}
    verified=[];rejected=[];current_diagnostics=[]

    def refbytes(va,n):return function_bytes(reference,va,n,base,pe_sections)

    def follow_reference_thunks(va):
        seen=set()
        for _ in range(16):
            if va in seen:return None
            seen.add(va);raw=refbytes(va,5)
            if len(raw)!=5 or raw[0]!=0xe9:return va
            va=(va+5+struct.unpack_from('<i',raw,1)[0])&0xffffffff
        return None

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

    @lru_cache(maxsize=1)
    def scstr_exports():
        # Establish these method identities from the immutable PE export table,
        # independently of Ghidra names or generated source declarations.
        export_rva=U32(reference,optional+96)
        export_size=U32(reference,optional+100)
        header=refbytes(base+export_rva,40)
        result=defaultdict(set)
        if len(header)!=40:return result
        count=U32(header,24);functions=U32(header,28)
        names_rva=U32(header,32);ordinals=U32(header,36)
        if count>100000:return result
        for index in range(count):
            name_pointer=refbytes(base+names_rva+index*4,4)
            ordinal=refbytes(base+ordinals+index*2,2)
            if len(name_pointer)!=4 or len(ordinal)!=2:continue
            raw=refbytes(base+U32(name_pointer),512).split(b'\0',1)[0]
            name=raw.decode('ascii',errors='replace')
            if '@SCStr@@' not in name:continue
            number=struct.unpack('<H',ordinal)[0]
            if number>=U32(header,20):continue
            pointer=refbytes(base+functions+number*4,4)
            if len(pointer)!=4:continue
            rva=U32(pointer)
            if export_rva<=rva<export_rva+export_size:continue
            address=base+rva;real=follow_reference_thunks(address)
            if real is not None:result[scstr_abi_key(name)].add(real)
        return result

    def graph(name,va,size,local,proofs,call_placements,state_count=None,depth=0):
        def fail(reason):
            current_diagnostics.append({'symbol':name,'reference_va':f'{va:08x}','reason':reason})
            return False
        if depth>8 or name not in names:return fail('depth limit or missing COFF symbol')
        symbol=names[name];sec=sections[symbol['section']-1];start=symbol['offset']
        available=extent(symbol)
        if size is None:size=len(available)
        if size<=0 or size>4096 or size>len(available):return fail('invalid requested symbol extent')
        data=bytearray(available[:size]);expected=refbytes(va,size)
        if len(expected)!=size:return False
        if name in local:
            return local[name]==va or fail('conflicting recursive placement')
        # Definitions are pinned tentatively only within this graph traversal;
        # a failure discards the whole graph, including its placement map.
        local[name]=va
        for rel in sec['relocations']:
            if not start<=rel['offset']<start+size:continue
            off=rel['offset']-start
            if off+4>size or rel['type'] not in (6,20):return fail('unsupported relocation')
            target=indices.get(rel['symbol_index'])
            if target is None:return fail('missing relocation target')
            target_name=target['name'];addend=U32(data,off)
            if rel['type']==6:target_va=(U32(expected,off)-addend)&0xffffffff
            else:target_va=(va+off+4+U32(expected,off)-addend)&0xffffffff
            ok=False
            if target['section']>0:
                if target_name.startswith('__ehhandler$'):
                    ok=graph(target_name,target_va,None,local,proofs,call_placements,state_count,depth+1)
                elif target_name.startswith('__ehfuncinfo$'):
                    info=refbytes(target_va,36)
                    if len(info)!=36 or U32(info)!=0x19930522:return fail('invalid reference FuncInfo')
                    reference_states=U32(info,4)
                    if state_count is not None and reference_states!=state_count:return fail('reference state-count mismatch')
                    ok=graph(target_name,target_va,36,local,proofs,call_placements,reference_states,depth+1)
                elif target_name.startswith(('__unwindtable$','__unwindmap$')):
                    if state_count is None:return fail('unwind map without established state count')
                    ok=graph(target_name,target_va,state_count*8,local,proofs,call_placements,state_count,depth+1)
                elif target_name.startswith('__unwindfunclet$'):
                    # The entire local funclet and every outgoing relocation are
                    # checked recursively. This admits recovered destructor
                    # actions without trusting their symbol name or destination.
                    ok=graph(target_name,target_va,None,local,proofs,call_placements,state_count,depth+1)
                else:
                    logical=generated_symbol_name(target_name)
                    match=re.fullmatch(r'(?:thunk_)?FUN_([0-9a-fA-F]{8})',logical or '')
                    declared=int(match.group(1),16) if match else None
                    binding=bindings_by_symbol.get(target_name)
                    real=(bound_helper_body(binding,target_va,inventory_by_entry,refbytes) if binding else
                          follow_reference_thunks(target_va) if declared==target_va else None)
                    if real is None:
                        current_diagnostics.append({'symbol':target_name,
                            'reference_va':f'{target_va:08x}',
                            'reason':f'ordinary recovered target mismatch; declared={declared!r}'})
                    ok=(real is not None and graph(target_name,real,None,local,proofs,
                        call_placements,None,depth+1))
                    if ok:call_placements[target_name]=target_va
            elif generated_symbol_name(target_name):
                logical=generated_symbol_name(target_name)
                match=re.fullmatch(r'(?:thunk_)?FUN_([0-9a-fA-F]{8})',logical or '')
                declared=int(match.group(1),16) if match else None
                # External ordinary members may be reached through a linker
                # jump. Both ends must name the same independently indexed
                # native function; opaque class names never suffice.
                known=symbol_vas.get(logical,[])
                ok=(declared is not None and target_va in known and
                    follow_reference_thunks(target_va)==follow_reference_thunks(declared))
                if not ok and declared is not None:
                    known_body=symbol_vas.get('FUN_'+f'{declared:08x}',[])
                    ok=(declared in known_body and follow_reference_thunks(target_va)==declared)
                if not ok and declared==target_va:
                    # Named native constructors/destructors need not retain a
                    # Ghidra FUN_ alias. The explicit address must itself be an
                    # indexed symbol, and its linker chain must end at one too.
                    ok=(declared in indexed_addresses and follow_reference_thunks(target_va) in indexed_addresses)
                if ok:local[target_name]=target_va
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
            elif '@SCStr@@' in target_name:
                # A local recovered destructor may call the real exported
                # release method. Its own entire body/graph is still verified;
                # this external operand is constrained to the PE-proven method.
                ok=follow_reference_thunks(target_va) in scstr_exports().get(scstr_abi_key(target_name),set())
                if ok:local[target_name]=target_va
            if not ok:return fail('relocation target graph mismatch: '+target_name)
            value=relocation_value(rel['type'],target_va,addend,va,off,base)
            if value is None:return fail('unsupported relocation value')
            struct.pack_into('<I',data,off,value&0xffffffff)
        if bytes(data)!=expected:return fail('fixed or relocated bytes differ')
        proofs.append({'symbol':name,'reference_va':f'{va:08x}','verified_bytes':size})
        return True

    for item in inventory_rows:
        current_diagnostics.clear()
        entry=item['entry']
        expected_state_count=item.get('reference_state_count',1)
        handlers=handlers_by_entry.get(entry,[])
        local={};proofs=[];call_placements={}
        if len(handlers)!=1:
            rejected.append({'entry':entry,'reason':'Missing or ambiguous compiler handler'});continue
        handler=handlers[0];va=int(item['reference_handler'],16)
        ok=graph(handler,va,None,local,proofs,call_placements,expected_state_count)
        metadata=[p for p in proofs if (p['symbol'].startswith('__ehfuncinfo$') and
                  p['reference_va']==item['reference_metadata'])]
        if not ok or len(metadata)!=1:
            rejected.append({'entry':entry,'reason':'Handler, metadata, or unwind bytes differ',
                             'diagnostics':current_diagnostics[-8:]});continue
        placements={**local,**call_placements}
        conflict=any(n in targets and target not in targets[n] for n,target in placements.items())
        if conflict:
            rejected.append({'entry':entry,'reason':'Conflicting runtime placement'});continue
        for name,target in placements.items():targets.setdefault(name,[]).append(target)
        verified.append({'entry':entry,'graph':proofs})
    targets={n:sorted(set(v)) for n,v in targets.items()}
    report={'object':str(obj),'security_cookie_from_pe_load_config':f'{cookie:08x}',
            'verified_functions':len(verified),'verified_graph_bytes_sum':sum(p['verified_bytes'] for x in verified for p in x['graph']),
            'verified':verified,'rejected':rejected,'scope':'Exact reconstructed EH graph placement constraints; not a linked DLL proof'}
    return targets,report
