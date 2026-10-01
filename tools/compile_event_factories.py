#!/usr/bin/env python3
"""Recover class-valued event factories using native receiver/return ABI evidence."""
import csv,json,os,re,struct,subprocess
from pathlib import Path
from compile_ghidra_cpp import ROOT,COMPILER
from compile_scstr_cpp import cpp_source
from classify_functions import DLL,function_bytes,section_map
from compare_compiled_ghidra import DISASSEMBLER


def auxiliary_bindings(inventory,roles=None):
    reference=DLL.read_bytes();base,sections=section_map(reference)
    def read(va,size):return function_bytes(reference,va,size,base,sections)
    owners={row['entry']:row for row in inventory}
    if roles is None:roles=[('??1Stopped_thunk_FUN_10dfd540@@QAE@XZ','10e00c90',2),
           ('??1Started_thunk_FUN_10dfd470@@QAE@XZ','10e00e20',2),
           ('??1Cancelled@@QAE@XZ','10e00c90',5),
           ('??1Shown@@QAE@XZ','10e00e20',5),
           ('??1SCStr@@QAE@XZ','10e00c90',0)]
    result=[]
    for symbol,entry,state in roles:
        metadata=read(int(owners[entry]['reference_metadata'],16),36)
        table=struct.unpack_from('<I',metadata,8)[0]
        action=struct.unpack_from('<I',read(table+state*8,8),4)[0]
        code=read(action,8)
        if code[:2]!=b'\x8d\x4d' or code[3]!=0xe9:raise ValueError('Expected native frame-relative destructor action')
        target=(action+8+struct.unpack_from('<i',code,4)[0])&0xffffffff
        thunk=read(target,5)
        if thunk[0]!=0xe9:raise ValueError('Expected native linker jump')
        body=(target+5+struct.unpack_from('<i',thunk,1)[0])&0xffffffff
        result.append({'symbol':symbol,'owner_entry':entry,'state':state,
                       'call_target':f'{target:08x}','body_entry':f'{body:08x}'})
    return result

LIBRARY='''extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)
extern void * __cdecl operator_new(unsigned int);
struct FactoryTreeNode { FactoryTreeNode *left,*parent,*right; unsigned char color,nil; unsigned char payload[14]; };
struct FactoryTree {
FactoryTreeNode *head; unsigned int size;
FactoryTree(const FactoryTree &); FactoryTree(FactoryTree &&);
__forceinline FactoryTree() {
FactoryTree * volatile home=this; _ReadWriteBarrier(); head=0; size=0;
FactoryTreeNode *node=(FactoryTreeNode *)operator_new(28);
node->left=node; node->parent=node; node->right=node; node->color=1; node->nil=1; head=node;
}
~FactoryTree();
};
struct FactoryString {
unsigned int rep;
__forceinline FactoryString(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }
~FactoryString() noexcept { ((SCStr *)this)->int_release(); rep=0; }
};
struct EventCopy_thunk_FUN_10deea50 {
unsigned int text,event_id; void *properties,*interface_pointer,*head; unsigned int size;
__forceinline EventCopy_thunk_FUN_10deea50() {}
EventCopy_thunk_FUN_10deea50(const EventCopy_thunk_FUN_10deea50 &);
};
struct Event_thunk_FUN_10def0d0 {
EventCopy_thunk_FUN_10deea50 representation;
__forceinline Event_thunk_FUN_10def0d0() {}
__forceinline Event_thunk_FUN_10def0d0(const char *name,unsigned int id);
~Event_thunk_FUN_10def0d0() noexcept(false);
};
struct Stopped_thunk_FUN_10dfd540 : Event_thunk_FUN_10def0d0 { Stopped_thunk_FUN_10dfd540(); };
struct Started_thunk_FUN_10dfd470 : Event_thunk_FUN_10def0d0 { Started_thunk_FUN_10dfd470(); };
struct FactoryConsumer { void thunk_FUN_10dee620(SCStr *,unsigned int,void *,FactoryTree); };
__forceinline Event_thunk_FUN_10def0d0::Event_thunk_FUN_10def0d0(const char *name,unsigned int id) {
FactoryString text(name);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text,id,0,FactoryTree());
}
struct Cancelled : Event_thunk_FUN_10def0d0 { __forceinline Cancelled():Event_thunk_FUN_10def0d0("alertCancelPressed",6) {} };
struct Shown : Event_thunk_FUN_10def0d0 { __forceinline Shown():Event_thunk_FUN_10def0d0("alertShown",4) {} };
struct FactoryVariant {
virtual void unused0(); virtual void unused1(); virtual void unused2();
virtual void unused3(); virtual void unused4(); virtual void unused5();
virtual void unused6(); virtual void unused7(); virtual void unused8();
virtual int value(SCStr *key);
};
static_assert(sizeof(FactoryTree)==8,"Two-word outgoing container");
static_assert(sizeof(FactoryTreeNode)==28,"Sentinel node");
static_assert(sizeof(Event_thunk_FUN_10def0d0)==24,"Event value");
'''
OUTPUT_PLACEMENT='''struct FactoryOutputLocation { void *receiver; };
__forceinline void *operator new(unsigned int,FactoryOutputLocation location) { return location.receiver; }
'''
BODY='''Event_thunk_FUN_10def0d0 FUN_ENTRY(FactoryVariant *source) {
int kind;
{ FactoryString key("value"); kind=source->value((SCStr *)&key); }
switch(kind) {
case 4: { STOP event; return Event_thunk_FUN_10def0d0(event); }
case 5: { ALERT event; return Event_thunk_FUN_10def0d0(event); }
default: { STOP event; return Event_thunk_FUN_10def0d0(event); }
}
}
'''


def main():
    rows={r['entry']:r for r in map(json.loads,(ROOT/'analysis/container-call-abi/after.jsonl').open())}
    evidence={r['entry']:r for r in map(json.loads,(ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    variants={'event_factories':BODY,
        'event_factories_output_buffer':BODY.replace('Event_thunk_FUN_10def0d0 FUN_ENTRY(FactoryVariant *source)',
            'Event_thunk_FUN_10def0d0 *FUN_ENTRY(Event_thunk_FUN_10def0d0 *result,FactoryVariant *source)').replace(
            'return Event_thunk_FUN_10def0d0(event);','new(result) EventCopy_thunk_FUN_10deea50(event.representation); return result;'),
        'event_factories_output_temporary':BODY.replace('Event_thunk_FUN_10def0d0 FUN_ENTRY(FactoryVariant *source)',
            'Event_thunk_FUN_10def0d0 *FUN_ENTRY(Event_thunk_FUN_10def0d0 *result,FactoryVariant *source)').replace(
            'STOP event; return Event_thunk_FUN_10def0d0(event);','new(result) EventCopy_thunk_FUN_10deea50(STOP().representation); return result;').replace(
            'ALERT event; return Event_thunk_FUN_10def0d0(event);','new(result) EventCopy_thunk_FUN_10deea50(ALERT().representation); return result;')}
    improved_library=LIBRARY.replace('FactoryString','RecoveredString_FUN_1008c50b').replace(
        '~Event_thunk_FUN_10def0d0() noexcept(false);','~Event_thunk_FUN_10def0d0() noexcept;')+OUTPUT_PLACEMENT
    improved_body=variants['event_factories_output_buffer'].replace('new(result)', 'new(FactoryOutputLocation{result})')
    variants['event_factories_output_throwing']=improved_body
    variants['event_factories_output_key_release']=improved_body.replace('FactoryString key', 'FactoryKeyString key')
    libraries={name:LIBRARY for name in variants}
    libraries['event_factories_output_throwing']=improved_library
    libraries['event_factories_output_key_release']=improved_library+'''struct FactoryKeyString {
unsigned int rep;
__forceinline FactoryKeyString(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }
~FactoryKeyString() noexcept { ((SCStr *)this)->int_release(); }
};
'''
    temporary_body=variants['event_factories_output_temporary'].replace('new(result)', 'new(FactoryOutputLocation{result})').replace(
        'int kind;', '__assume(result != 0);\nint kind;').replace('FactoryString','RecoveredString_FUN_1008c50b')
    variants['event_factories_output_nonnull_temporary']=temporary_body
    libraries['event_factories_output_nonnull_temporary']=improved_library
    variants['event_factories_output_nonnull_key_temporary']=temporary_body.replace(
        '{ RecoveredString_FUN_1008c50b key("value"); kind=source->value((SCStr *)&key); }',
        'kind=source->value(factory_key_address(RecoveredString_FUN_1008c50b("value")));')
    libraries['event_factories_output_nonnull_key_temporary']=improved_library+'''__forceinline SCStr *factory_key_address(RecoveredString_FUN_1008c50b &&key) { return (SCStr *)&key; }
'''
    variants['event_factories_value_noexcept']=BODY.replace('FactoryString','RecoveredString_FUN_1008c50b')
    libraries['event_factories_value_noexcept']=improved_library
    variants['event_factories_value_temporary']=variants['event_factories_value_noexcept'].replace(
        'STOP event; return Event_thunk_FUN_10def0d0(event);', 'return STOP();').replace(
        'ALERT event; return Event_thunk_FUN_10def0d0(event);', 'return ALERT();')
    libraries['event_factories_value_temporary']=improved_library
    variants['event_factories_value_pointer_key']=variants['event_factories_value_temporary']
    libraries['event_factories_value_pointer_key']=improved_library.replace('unsigned int rep;', 'void *rep;')
    variants['event_factories_value_scstr_key']=variants['event_factories_value_temporary'].replace(
        'RecoveredString_FUN_1008c50b key', 'SCStr key')
    libraries['event_factories_value_scstr_key']=improved_library+'''__forceinline SCStr::SCStr(const char *text) { int_allocRep((char *)text); }
__forceinline SCStr::~SCStr() { int_release(); rep=0; }
'''
    variants['event_factories_value_scstr_temporary']=variants['event_factories_value_scstr_key'].replace(
        '{ SCStr key("value"); kind=source->value((SCStr *)&key); }',
        'kind=source->value(factory_key_address(SCStr("value")));')
    libraries['event_factories_value_scstr_temporary']=libraries['event_factories_value_scstr_key']+'''__forceinline SCStr *factory_key_address(SCStr &&key) { return &key; }
'''
    variants['event_factories_value_const_reference']=variants['event_factories_value_scstr_key'].replace(
        '{ SCStr key("value"); kind=source->value((SCStr *)&key); }', 'kind=source->value(SCStr("value"));')
    libraries['event_factories_value_const_reference']=libraries['event_factories_value_scstr_key'].replace(
        'virtual int value(SCStr *key);', 'virtual int value(const SCStr &key);')
    variants['event_factories_value_external_key']=variants['event_factories_value_temporary'].replace(
        'RecoveredString_FUN_1008c50b key', 'ExternalKey_FUN_1008c50b<0> key')
    libraries['event_factories_value_external_key']=improved_library+'''template<int Tag> struct ExternalKey_FUN_1008c50b {
unsigned int rep;
__forceinline ExternalKey_FUN_1008c50b(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }
__forceinline ~ExternalKey_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); }
};
extern template struct ExternalKey_FUN_1008c50b<0>;
'''
    for name,body in variants.items():
        library=libraries[name]
        if name.startswith('event_factories_output_throwing'):
            body=body.replace('FactoryString','RecoveredString_FUN_1008c50b')
        candidates=[]
        for entry,stop,alert in [('10e00c90','Stopped_thunk_FUN_10dfd540','Cancelled'),('10e00e20','Started_thunk_FUN_10dfd470','Shown')]:
            r=rows[entry]
            candidates.append({**r,'source':body.replace('ENTRY',entry).replace('STOP',stop).replace('ALERT',alert),
                               'abi_declarations':{'factory_library':library}})
        emit_variant(name,candidates,evidence)
    bridges=auxiliary_bindings([{'entry':entry,'reference_metadata':evidence[entry]['metadata']['address']}
                               for entry in ['10e00c90','10e00e20']])[:4]
    bridge_library='struct Event_thunk_FUN_10074c85 { ~Event_thunk_FUN_10074c85() noexcept; };\n'
    bridge_library+='struct NativeEventFinalizer { '+''.join('void FUN_'+item['body_entry']+'(); ' for item in bridges)+'};\n'
    candidates=[]
    for item in bridges:
        entry=item['body_entry']
        candidates.append({'entry':entry,'name':'FUN_'+entry,'body_bytes':5,
            'source':'void NativeEventFinalizer::FUN_'+entry+'() { ((Event_thunk_FUN_10074c85 *)this)->~Event_thunk_FUN_10074c85(); }',
            'abi_declarations':{'event_bridge_library':bridge_library}})
    emit_variant('event_destructor_bridges',candidates,evidence)
    callback_rows={r['entry']:r for r in map(json.loads,(ROOT/'analysis/container-call-abi/verified-event-vtable/after.jsonl').open())}
    reference=DLL.read_bytes();base,sections=section_map(reference)
    callbacks=[]
    for record in callback_rows.values():
        text=record.get('decompiled_c','')
        if record['body_bytes'] not in (190,192) or text.count('thunk_FUN_10dee620(')!=1:continue
        label=re.search(r'SCStr::int_allocRep\([^;]+,"([^"]+)"\);',text)
        event_id=re.search(r'thunk_FUN_10dee620\([^;]+,([^,]+),\(undefined1 \*\)0x0,tree\);',text)
        dispatcher=re.search(r'thunk_FUN_10df15a0\(\(undefined1 \*\)\(param_1 \+ (-?0x[0-9a-f]+)\),&\w+\);',text)
        if not label or not event_id or not dispatcher:continue
        entry=record['entry'];offset=int(dispatcher.group(1),16)
        native=function_bytes(reference,int(entry,16),record['body_bytes'],base,sections)
        returns=[int(i.op_str,0) if i.op_str else 0 for i in DISASSEMBLER.disasm(native,int(entry,16)) if i.mnemonic=='ret']
        if not returns or len(set(returns))!=1 or returns[0] not in (0,4):continue
        parameters='unsigned int unused0' if returns[0] else ''
        value_class='NativeEventValue_'+entry
        source='void NativeEventCallback::FUN_'+entry+'('+parameters+') { '+value_class+' event; '+\
            '((NativeEventDispatcher *)((char *)this + '+str(offset)+'))->thunk_FUN_10df15a0(&event); }'
        value_declaration='struct '+value_class+' : Event_thunk_FUN_10def0d0 { __forceinline '+value_class+'():Event_thunk_FUN_10def0d0("'+label.group(1)+'",'+event_id.group(1)+') {} };\n'
        callbacks.append({**record,'source':source,'parameters':parameters,'value_declaration':value_declaration})
    if callbacks:
        callback_library=improved_library+'struct NativeEventDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };\n'
        callback_library+=''.join(r['value_declaration'] for r in callbacks)
        callback_library+='struct NativeEventCallback { '+''.join('void FUN_'+r['entry']+'('+r['parameters']+'); ' for r in callbacks)+'};\n'
        callbacks=[{**r,'abi_declarations':{'callback_library':callback_library}} for r in callbacks]
        roles=[('??1NativeEventValue_'+r['entry']+'@@QAE@XZ',r['entry'],2) for r in callbacks]
        emit_variant('event_callbacks',callbacks,evidence,roles)


def emit_variant(name,candidates,evidence,roles=None):
    directory=ROOT/('analysis/compiled-cpp-'+name.replace('_','-'));directory.mkdir(exist_ok=True)
    target=directory/'ghidra_recovered.cpp';target.write_text(cpp_source(candidates));obj=target.with_suffix('.obj')
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
        '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(target,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=directory/'compiled-index.tsv'
    with index.open('w',newline='') as file:
        w=csv.writer(file,delimiter='\t');w.writerow(['entry','name','reference_body_bytes']);w.writerows((r['entry'],r['name'],r['body_bytes']) for r in candidates)
    inventory=[{'entry':r['entry'],'reference_handler':evidence[r['entry']]['handler'],
        'reference_metadata':evidence[r['entry']]['metadata']['address'],'reference_state_count':evidence[r['entry']]['metadata']['state_count']}
        for r in candidates if r['entry'] in evidence and evidence[r['entry']].get('handler')]
    (directory/'reference-eh-inventory.json').write_text(json.dumps(inventory,indent=2)+'\n')
    bindings=auxiliary_bindings(inventory,roles) if roles is not None or {'10e00c90','10e00e20'} <= {r['entry'] for r in inventory} else []
    (directory/'reference-auxiliary-symbols.json').write_text(json.dumps(bindings,indent=2)+'\n')
    emit=ROOT/'src/generated/member_abi';(emit/(name+'.cpp')).write_text(target.read_text());(emit/(name+'-index.tsv')).write_bytes(index.read_bytes())
    (emit/(name+'-auxiliary-symbols.json')).write_text(json.dumps(bindings,indent=2)+'\n')
    path=emit/'tranches.json';manifest=json.loads(path.read_text());object_name=name+'_reference_flags'
    manifest=[r for r in manifest if r['object']!=object_name]+[{'object':object_name,'directory':str(directory.relative_to(ROOT))}]
    path.write_text(json.dumps(manifest,indent=2)+'\n');print(json.dumps({'compiled_functions':len(candidates),'reference_bytes':sum(r['body_bytes'] for r in candidates),'pinned_msvc_verified':False}))


if __name__=='__main__':main()
