#!/usr/bin/env python3
"""Recover property callbacks with a caller-owned string result."""
import json
import re

from compile_event_factories import LIBRARY, emit_variant
from compile_property_callbacks import PROPERTY_LIBRARY
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER


STRING_LIBRARY = '''struct RecoveredStringValue_FUN_1008c50b {
unsigned int rep;
__forceinline RecoveredStringValue_FUN_1008c50b() {}
~RecoveredStringValue_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); rep=0; }
};
struct NativeStringSource {
RecoveredStringValue_FUN_1008c50b *thunk_FUN_1034e100(RecoveredStringValue_FUN_1008c50b *result);
};
'''


def main():
    rows=map(json.loads,(ROOT/'analysis/container-call-abi/string-result/after.jsonl').open())
    reference=DLL.read_bytes();base,sections=section_map(reference)
    candidates=[]
    for record in rows:
        text=record.get('decompiled_c','')
        if record['body_bytes']!=329 or text.count('thunk_FUN_10dee620(')!=1:continue
        if 'value = thunk_FUN_1034e100(param_2,&local_18);' not in text:continue
        labels=re.findall(r'SCStr::int_allocRep\([^;]+,"([^"]+)"\);',text)
        event_id=re.search(r'thunk_FUN_10dee620\([^;]+,([^,]+),\(undefined1 \*\)0x0,tree\);',text)
        receiver=re.search(r'thunk_FUN_10df15a0\(\(undefined1 \*\)\(param_1 \+ (-?0x[0-9a-f]+)\),&\w+\);',text)
        if len(labels)!=3 or not event_id or not receiver:continue
        if text.count('->setInteger)')!=1 or text.count('->setString)')!=1:continue
        if not re.search(r'->setInteger\)\([^;]+,param_3\);',text):continue
        if not re.search(r'->setString\)\s*\([^;]+,\(undefined1 \*\)value\);',text):continue
        entry=record['entry']
        native=function_bytes(reference,int(entry,16),record['body_bytes'],base,sections)
        instructions=list(DISASSEMBLER.disasm(native,int(entry,16)))
        returns=[int(i.op_str,0) if i.op_str else 0 for i in instructions if i.mnemonic=='ret']
        slots=[i.op_str for i in instructions if i.mnemonic=='call' and i.op_str.startswith('dword ptr [')]
        if not returns or set(returns)!={8} or slots!=['dword ptr [eax + 0x28]','dword ptr [eax + 0x1c]']:continue
        classname='NativeStringPropertyEvent_'+entry
        declaration='struct '+classname+' : Event_thunk_FUN_10def0d0 { __forceinline '+classname+'():Event_thunk_FUN_10def0d0("'+labels[0]+'",'+event_id.group(1)+') {} };\n'
        source='void NativeStringPropertyCallback::FUN_'+entry+'(NativeStringSource *source,unsigned int protocol) {\n'
        source+='RecoveredStringValue_FUN_1008c50b product;\n'
        source+='RecoveredStringValue_FUN_1008c50b *value=source->thunk_FUN_1034e100(&product);\n'
        source+='{ '+classname+' event;\n'
        for key,method,value in [(labels[1],'setInteger','protocol'),(labels[2],'setString','(SCStr *)value')]:
            source+='((NativePropertyBag *)event.representation.properties)->'+method+'(RecoveredString_FUN_1008c50b("'+key+'"),'+value+');\n'
        source+='((NativePropertyDispatcher *)((char *)this + '+str(int(receiver.group(1),16))+'))->thunk_FUN_10df15a0(&event);\n}\n}\n'
        candidates.append({**record,'source':source,'value_declaration':declaration})
    if not candidates:raise SystemExit('No caller-owned string callbacks accepted')
    library=LIBRARY.replace('FactoryString','RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);','~Event_thunk_FUN_10def0d0() noexcept;')+PROPERTY_LIBRARY.replace('SCStr *key,','const RecoveredString_FUN_1008c50b &key,')+STRING_LIBRARY
    library+=''.join(r['value_declaration'] for r in candidates)
    library+='struct NativeStringPropertyCallback { '+''.join('void FUN_'+r['entry']+'(NativeStringSource *,unsigned int); ' for r in candidates)+'};\n'
    candidates=[{**r,'abi_declarations':{'string_property_callback_library':library}} for r in candidates]
    evidence={r['entry']:r for r in map(json.loads,(ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles=[('??1NativeStringPropertyEvent_'+r['entry']+'@@QAE@XZ',r['entry'],3) for r in candidates]
    emit_variant('string_property_callbacks_temporary',candidates,evidence,roles)


if __name__=='__main__':main()
