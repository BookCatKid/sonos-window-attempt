#!/usr/bin/env python3
"""Recover dispatchers that construct an already byte-proven external event."""
import csv
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER


def main():
    index=ROOT/'analysis/compiled-cpp-empty-tree-arguments-none-nontrivial-homes-ordered/compiled-index.tsv'
    proof=json.loads((ROOT/'analysis/recovery-msvc-tree-barrier-atomic-arity/summary.json').read_text())['variants'][0]
    if proof['exact_functions']!=90 or hashlib.sha256(index.read_bytes()).hexdigest()!=proof['index_sha256']:
        raise SystemExit('External event constructors lack the pinned ninety-function proof')
    ctors={int(r['entry'],16) for r in csv.DictReader(index.open(),delimiter='\t')}
    reference=DLL.read_bytes();base,sections=section_map(reference)
    def target(va):
        seen=set()
        while va not in seen:
            seen.add(va);code=function_bytes(reference,va,5,base,sections)
            if len(code)!=5 or code[0]!=0xe9:return va
            va=(va+5+struct.unpack_from('<i',code,1)[0])&0xffffffff
        raise ValueError('Cyclic linker jump')
    # Discover callers directly from the existing exports. Decompiler-inlined
    # callee bodies are only leads; the native three-call shape below is required.
    exports=sorted(ROOT.glob('analysis/bulk*/**/*.jsonl'))+[ROOT/'analysis/thunk-recovery-full/recovered-targets.jsonl']
    discovered={}
    call_pattern=re.compile(r'(?:thunk_)?FUN_([0-9a-f]{8})\(')
    for export in exports:
        for line in export.open():
            try:record=json.loads(line)
            except json.JSONDecodeError:
                if not line.endswith('\n'):break
                raise
            if record.get('body_bytes') not in (88,90):continue
            text=record.get('decompiled_c','')
            calls={int(entry,16) for entry in call_pattern.findall(text[text.find('{'):])}&ctors
            if len(calls)==1:
                discovered[record['entry']]={**record,'event_constructor_calls':[f'{entry:08x}' for entry in calls]}
    rows=discovered.values()
    candidates=[];roles=[]
    for record in rows:
        if record['body_bytes'] not in (88,90) or len(record['event_constructor_calls'])!=1:continue
        text=record.get('decompiled_c','');ctor=int(record['event_constructor_calls'][0],16)
        if text.count('thunk_FUN_10df15a0(')!=1 or text.count('thunk_FUN_10def0d0(')!=1:continue
        entry=record['entry'];code=function_bytes(reference,int(entry,16),record['body_bytes'],base,sections)
        instructions=list(DISASSEMBLER.disasm(code,int(entry,16)))
        calls=[target(int(i.op_str,16)) for i in instructions if i.mnemonic=='call' and i.op_str.startswith('0x')]
        if ctor not in ctors or calls!=[ctor,0x10df15a0,0x10def0d0]:continue
        returns=[int(i.op_str,0) if i.op_str else 0 for i in instructions if i.mnemonic=='ret']
        if not returns or len(set(returns))!=1 or returns[0] not in (0,4):continue
        saved=[i.op_str.split(',')[0] for i in instructions if i.mnemonic=='mov' and i.op_str in ('esi, ecx','edi, ecx')]
        if len(saved)!=1:continue
        receiver=re.compile(r'ecx, \['+saved[0]+r' ([+-]) (0x[0-9a-f]+)\]')
        offsets=[receiver.fullmatch(i.op_str) for i in instructions if i.mnemonic=='lea']
        offsets=[m for m in offsets if m]
        if len(offsets)!=1:continue
        offset=int(offsets[0].group(2),16)*(1 if offsets[0].group(1)=='+' else -1)
        classname='NativeExternalEvent_FUN_'+f'{ctor:08x}'
        declaration='struct '+classname+' : Event_thunk_FUN_10def0d0 { '+classname+'(); };\n'
        parameters='unsigned int unused' if returns[0] else ''
        source='void NativeExternalCallback::FUN_'+entry+'('+parameters+') {\n'
        source+='((NativeExternalDispatcher *)((char *)this + '+str(offset)+'))->thunk_FUN_10df15a0('+classname+'());\n}\n'
        candidates.append({**record,'source':source,'value_declaration':declaration,'parameters':parameters})
        roles.append(('??1'+classname+'@@QAE@XZ',entry,0))
    if not candidates:raise SystemExit('No native construct-dispatch-destroy callback accepted')
    library=LIBRARY.replace('FactoryString','RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);','~Event_thunk_FUN_10def0d0() noexcept;')
    library+='struct NativeExternalDispatcher { void thunk_FUN_10df15a0(const Event_thunk_FUN_10def0d0 &); };\n'
    library+=''.join(dict.fromkeys(r['value_declaration'] for r in candidates))
    library+='struct NativeExternalCallback { '+''.join('void FUN_'+r['entry']+'('+r['parameters']+'); ' for r in candidates)+'};\n'
    candidates=[{**r,'abi_declarations':{'external_event_callback_library':library}} for r in candidates]
    evidence={r['entry']:r for r in map(json.loads,(ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('external_event_callbacks',candidates,evidence,roles)


if __name__=='__main__':main()
