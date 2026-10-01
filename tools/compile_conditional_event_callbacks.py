#!/usr/bin/env python3
"""Compile typed two-branch event dispatchers with distinct unwind identities."""
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER


def main():
    rows=map(json.loads,(ROOT/'analysis/container-call-abi/string-result/after.jsonl').open())
    reference=DLL.read_bytes();base,sections=section_map(reference)
    candidates=[];roles=[]
    for record in rows:
        text=record.get('decompiled_c','')
        if record['body_bytes']!=331 or text.count('thunk_FUN_10dee620(')!=2:continue
        labels=re.findall(r'SCStr::int_allocRep\([^;]+,"([^"]+)"\);',text)
        ids=re.findall(r'thunk_FUN_10dee620\([^;]+,([^,]+),\(undefined1 \*\)0x0,\s*tree(?:_00)?\);',text)
        receivers=re.findall(r'thunk_FUN_10df15a0\(\(undefined1 \*\)\(param_1 \+ (-?0x[0-9a-f]+)\),&\w+\);',text)
        if len(labels)!=2 or len(ids)!=2 or len(receivers)!=2 or len(set(receivers))!=1:continue
        if 'if (param_2._0_1_ == (SCStr)0x0)' not in text:continue
        entry=record['entry'];code=function_bytes(reference,int(entry,16),331,base,sections)
        instructions=list(DISASSEMBLER.disasm(code,int(entry,16)))
        returns=[int(i.op_str,0) if i.op_str else 0 for i in instructions if i.mnemonic=='ret']
        if not returns or set(returns)!={4}:continue
        if not any(i.mnemonic=='cmp' and i.op_str=='byte ptr [ebp + 8], 0' for i in instructions):continue
        declarations='';classes=[]
        for index,(label,event_id) in enumerate(zip(labels,ids)):
            classname='NativeConditionalEvent_'+entry+'_'+str(index);classes.append(classname)
            declarations+='struct '+classname+' : Event_thunk_FUN_10def0d0 { __forceinline '+classname+'():Event_thunk_FUN_10def0d0("'+label+'",'+event_id+') {} };\n'
            roles.append(('??1'+classname+'@@QAE@XZ',entry,5 if index==0 else 2))
        source='void NativeConditionalCallback::FUN_'+entry+'(bool connected) {\n'
        for branch,index in [('if (connected)',1),('else',0)]:
            source+=branch+' { '+classes[index]+' event;\n'
            source+='((NativeConditionalDispatcher *)((char *)this + '+str(int(receivers[index],16))+'))->thunk_FUN_10df15a0(&event);\n}\n'
        source+='}\n'
        candidates.append({**record,'source':source,'value_declaration':declarations})
    if not candidates:raise SystemExit('No native boolean dispatch callbacks accepted')
    library=LIBRARY.replace('FactoryString','RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);','~Event_thunk_FUN_10def0d0() noexcept;')
    library+='struct NativeConditionalDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };\n'
    library+=''.join(r['value_declaration'] for r in candidates)
    library+='struct NativeConditionalCallback { '+''.join('void FUN_'+r['entry']+'(bool); ' for r in candidates)+'};\n'
    candidates=[{**r,'abi_declarations':{'conditional_callback_library':library}} for r in candidates]
    evidence={r['entry']:r for r in map(json.loads,(ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emit_variant('conditional_event_callbacks',candidates,evidence,roles)


if __name__=='__main__':main()
