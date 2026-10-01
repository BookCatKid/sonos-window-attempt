#!/usr/bin/env python3
"""Compile typed property-setting event callbacks as genuine C++ members."""
import json
import re
from compile_event_factories import LIBRARY, emit_variant
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

PROPERTY_LIBRARY='''struct NativePropertyBag {
virtual void reserved0(); virtual void reserved1(); virtual void reserved2();
virtual void reserved3(); virtual void reserved4(); virtual void reserved5();
virtual void reserved6(); virtual void setString(SCStr *key,SCStr *value);
virtual void reserved8(); virtual void reserved9();
virtual void setInteger(SCStr *key,unsigned int value);
virtual void reserved11(); virtual void reserved12(); virtual void reserved13();
virtual void reserved14(); virtual void reserved15();
virtual void setWord(SCStr *key,unsigned int value);
};
struct NativePropertyDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };
'''


def lower(record, reference, base, sections, temporary_keys=False):
    text=record.get('decompiled_c','')
    property_count={247:1,302:2,357:3}.get(record['body_bytes'])
    if not property_count or text.count('thunk_FUN_10dee620(')!=1:return None
    setters=re.findall(r'->(setInteger|setString|setWord)\)',text)
    if len(setters)!=property_count:return None
    labels=re.findall(r'SCStr::int_allocRep\([^;]+,"([^"]+)"\);',text)
    if len(labels)!=property_count+1:return None
    event_id=re.search(r'thunk_FUN_10dee620\([^;]+,([^,]+),\(undefined1 \*\)0x0,tree\);',text)
    receiver=re.search(r'thunk_FUN_10df15a0\(\(undefined1 \*\)\(param_1 \+ (-?0x[0-9a-f]+)\),&\w+\);',text)
    forwarded=re.findall(r'->(?:setInteger|setString|setWord)\)\([^;]+,param_(\d+)\);',text)
    if not event_id or not receiver or forwarded!=[str(i+2) for i in range(property_count)]:return None
    entry=record['entry'];native=function_bytes(reference,int(entry,16),record['body_bytes'],base,sections)
    instructions=list(DISASSEMBLER.disasm(native,int(entry,16)))
    returns=[int(i.op_str,0) if i.op_str else 0 for i in instructions if i.mnemonic=='ret']
    if not returns or set(returns)!={4*property_count}:return None
    slots={'setInteger':0x28,'setString':0x1c,'setWord':0x40}
    indirect_calls=[i for i in instructions if i.mnemonic=='call' and i.op_str.startswith('dword ptr [')]
    if [i.op_str for i in indirect_calls]!=['dword ptr [eax + '+hex(slots[method])+']' for method in setters]:return None
    value_types=['SCStr *' if method=='setString' else 'unsigned int ' for method in setters]
    parameters=', '.join(value_type+'value'+str(i) for i,value_type in enumerate(value_types))
    classname='NativePropertyEvent_'+entry
    declaration='struct '+classname+' : Event_thunk_FUN_10def0d0 { __forceinline '+classname+'():Event_thunk_FUN_10def0d0("'+labels[0]+'",'+event_id.group(1)+') {} };\n'
    source='void NativePropertyCallback::FUN_'+entry+'('+parameters+') {\n'+classname+' event;\n'
    for i,method in enumerate(setters):
        if temporary_keys:
            source+='((NativePropertyBag *)event.representation.properties)->'+method+'(RecoveredString_FUN_1008c50b("'+labels[i+1]+'"),value'+str(i)+');\n'
        else:
            source+='{ RecoveredString_FUN_1008c50b key("'+labels[i+1]+'");\n'
            source+='((NativePropertyBag *)event.representation.properties)->'+method+'((SCStr *)&key,value'+str(i)+'); }\n'
    source+='((NativePropertyDispatcher *)((char *)this + '+str(int(receiver.group(1),16))+'))->thunk_FUN_10df15a0(&event);\n}\n'
    return {**record,'source':source,'value_declaration':declaration,'parameters':parameters}


def main():
    rows=list(map(json.loads,(ROOT/'analysis/container-call-abi/property-setters-word/after.jsonl').open()))
    reference=DLL.read_bytes();base,sections=section_map(reference)
    candidates=[candidate for row in rows if (candidate:=lower(row,reference,base,sections,temporary_keys=True))]
    if not candidates:raise SystemExit('No typed property callbacks accepted')
    library=LIBRARY.replace('FactoryString','RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);','~Event_thunk_FUN_10def0d0() noexcept;')+PROPERTY_LIBRARY.replace('SCStr *key,','const RecoveredString_FUN_1008c50b &key,')
    library+=''.join(r['value_declaration'] for r in candidates)
    library+='struct NativePropertyCallback { '+''.join('void FUN_'+r['entry']+'('+r['parameters']+'); ' for r in candidates)+'};\n'
    candidates=[{**r,'abi_declarations':{'property_callback_library':library}} for r in candidates]
    evidence={r['entry']:r for r in map(json.loads,(ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles=[('??1NativePropertyEvent_'+r['entry']+'@@QAE@XZ',r['entry'],2) for r in candidates]
    emit_variant('property_callbacks_temporary',candidates,evidence,roles)


if __name__=='__main__':main()
