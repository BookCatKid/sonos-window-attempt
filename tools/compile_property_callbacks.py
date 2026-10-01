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
};
struct NativePropertyDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };
'''


def lower(record, reference, base, sections):
    text=record.get('decompiled_c','')
    if record['body_bytes']!=247 or text.count('thunk_FUN_10dee620(')!=1 or text.count('->setInteger)')!=1:return None
    labels=re.findall(r'SCStr::int_allocRep\([^;]+,"([^"]+)"\);',text)
    if len(labels)!=2:return None
    event_id=re.search(r'thunk_FUN_10dee620\([^;]+,([^,]+),\(undefined1 \*\)0x0,tree\);',text)
    receiver=re.search(r'thunk_FUN_10df15a0\(\(undefined1 \*\)\(param_1 \+ (-?0x[0-9a-f]+)\),&\w+\);',text)
    setter=re.search(r'->setInteger\)\([^;]+,param_2\);',text)
    if not event_id or not receiver or not setter:return None
    entry=record['entry'];native=function_bytes(reference,int(entry,16),record['body_bytes'],base,sections)
    returns=[int(i.op_str,0) if i.op_str else 0 for i in DISASSEMBLER.disasm(native,int(entry,16)) if i.mnemonic=='ret']
    if not returns or set(returns)!={4}:return None
    classname='NativePropertyEvent_'+entry
    declaration='struct '+classname+' : Event_thunk_FUN_10def0d0 { __forceinline '+classname+'():Event_thunk_FUN_10def0d0("'+labels[0]+'",'+event_id.group(1)+') {} };\n'
    source='''void NativePropertyCallback::FUN_ENTRY(unsigned int value) {
CLASS event;
{ RecoveredString_FUN_1008c50b key("KEY");
((NativePropertyBag *)event.representation.properties)->setInteger((SCStr *)&key,value); }
((NativePropertyDispatcher *)((char *)this + OFFSET))->thunk_FUN_10df15a0(&event);
}
'''.replace('ENTRY',entry).replace('CLASS',classname).replace('KEY',labels[1]).replace('OFFSET',str(int(receiver.group(1),16)))
    return {**record,'source':source,'value_declaration':declaration}


def main():
    rows=list(map(json.loads,(ROOT/'analysis/container-call-abi/property-setters/after.jsonl').open()))
    reference=DLL.read_bytes();base,sections=section_map(reference)
    candidates=[candidate for row in rows if (candidate:=lower(row,reference,base,sections))]
    if not candidates:raise SystemExit('No typed property callbacks accepted')
    library=LIBRARY.replace('FactoryString','RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);','~Event_thunk_FUN_10def0d0() noexcept;')+PROPERTY_LIBRARY
    library+=''.join(r['value_declaration'] for r in candidates)
    library+='struct NativePropertyCallback { '+''.join('void FUN_'+r['entry']+'(unsigned int value); ' for r in candidates)+'};\n'
    candidates=[{**r,'abi_declarations':{'property_callback_library':library}} for r in candidates]
    evidence={r['entry']:r for r in map(json.loads,(ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    roles=[('??1NativePropertyEvent_'+r['entry']+'@@QAE@XZ',r['entry'],2) for r in candidates]
    emit_variant('property_callbacks',candidates,evidence,roles)


if __name__=='__main__':main()
