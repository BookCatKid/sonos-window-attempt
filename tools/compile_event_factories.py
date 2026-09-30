#!/usr/bin/env python3
"""Recover class-valued event factories using native receiver/return ABI evidence."""
import csv,json,os,subprocess
from pathlib import Path
from compile_ghidra_cpp import ROOT,COMPILER
from compile_scstr_cpp import cpp_source

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
    for name,body in variants.items():
        candidates=[]
        for entry,stop,alert in [('10e00c90','Stopped_thunk_FUN_10dfd540','Cancelled'),('10e00e20','Started_thunk_FUN_10dfd470','Shown')]:
            r=rows[entry]
            candidates.append({**r,'source':body.replace('ENTRY',entry).replace('STOP',stop).replace('ALERT',alert),
                               'abi_declarations':{'factory_library':LIBRARY}})
        emit_variant(name,candidates,evidence)


def emit_variant(name,candidates,evidence):
    directory=ROOT/('analysis/compiled-cpp-'+name.replace('_','-'));directory.mkdir(exist_ok=True)
    target=directory/'ghidra_recovered.cpp';target.write_text(cpp_source(candidates));obj=target.with_suffix('.obj')
    result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/MD','/GS','/GR','/EHsc','/Zi','/c',
        '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(target,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:raise SystemExit(result.stdout+result.stderr)
    index=directory/'compiled-index.tsv'
    with index.open('w',newline='') as file:
        w=csv.writer(file,delimiter='\t');w.writerow(['entry','name','reference_body_bytes']);w.writerows((r['entry'],r['name'],r['body_bytes']) for r in candidates)
    inventory=[{'entry':r['entry'],'reference_handler':evidence[r['entry']]['handler'],
        'reference_metadata':evidence[r['entry']]['metadata']['address'],'reference_state_count':evidence[r['entry']]['metadata']['state_count']} for r in candidates]
    (directory/'reference-eh-inventory.json').write_text(json.dumps(inventory,indent=2)+'\n')
    emit=ROOT/'src/generated/member_abi';(emit/(name+'.cpp')).write_text(target.read_text());(emit/(name+'-index.tsv')).write_bytes(index.read_bytes())
    path=emit/'tranches.json';manifest=json.loads(path.read_text());object_name=name+'_reference_flags'
    manifest=[r for r in manifest if r['object']!=object_name]+[{'object':object_name,'directory':str(directory.relative_to(ROOT))}]
    path.write_text(json.dumps(manifest,indent=2)+'\n');print(json.dumps({'compiled_functions':2,'reference_bytes':616,'pinned_msvc_verified':False}))


if __name__=='__main__':main()
