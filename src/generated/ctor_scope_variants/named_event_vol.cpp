// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using byte = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using float10 = long double;
using code = int(...);

using byte = unsigned char;
using uchar = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using ulonglong = unsigned long long;
using float10 = long double;
using DWORD = unsigned long;
using BOOL = int;
using LPCSTR = const char *;
using __time64_t = long long;
struct FILE;
struct tm;
struct ThrowInfo;

struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
    virtual void Release();
};

// Placement construction calls the actual constructor at the recovered receiver.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
class SwfStr;
class SCStr {
public:
    void *rep;
    SCStr();
    SCStr(const char *text);
    SCStr(const char *text, unsigned int length);
    SCStr(const SCStr &other);
    SCStr(const SwfStr &other);
    ~SCStr();
    bool operator<(const SCStr &other) const;
    bool operator<(const SwfStr &other) const;
    bool endsWith(const char *suffix) const;
    bool endsWith(const SCStr &suffix) const;
    bool endsWith(const SwfStr &suffix) const;
    SCStr &append(const char *text);
    SCStr &append(const char *text, unsigned int length);
    SCStr &append(char value);
    SCStr &append(const SCStr &other);
    SCStr &prepend(const char *text);
    SCStr &prepend(const char *text, unsigned int length);
    SCStr &prepend(const SCStr &other);
    SCStr &setFromUTF16(const unsigned short *text);
    SCStr &setFromUTF16(const unsigned short *text, unsigned int length);
    SCStr &replace(const char *from, const char *to, bool ignoreCase);
    char *getBuffer(unsigned int length);
    void empty();
    unsigned int utf8_length() const;
    bool int_endsWith(const char *text, unsigned int length, unsigned int suffixLength) const;
    unsigned int __cdecl trimRear(char *text, char *characters);
    int __cdecl format(const char *format, ...);
    bool operator==(const char *other) const;
    bool operator==(SCStr *other) const;
    bool operator!=(const char *other) const;
    bool operator!=(SCStr *other) const;
    bool beginsWith(const char *prefix) const;
    bool beginsWith(SCStr *prefix) const;
    bool contains(const char *needle, bool ignoreCase) const;
    bool contains(SCStr *needle, bool ignoreCase) const;
    unsigned int length() const;
    unsigned int hash() const;
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
extern "C" void _ReadWriteBarrier();
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
struct RecoveredString_FUN_1008c50b {
unsigned int rep;
__forceinline RecoveredString_FUN_1008c50b(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }
~RecoveredString_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); *(volatile unsigned int *)&rep=0; }
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
~Event_thunk_FUN_10def0d0() noexcept;
};
struct Stopped_thunk_FUN_10dfd540 : Event_thunk_FUN_10def0d0 { Stopped_thunk_FUN_10dfd540(); };
struct Started_thunk_FUN_10dfd470 : Event_thunk_FUN_10def0d0 { Started_thunk_FUN_10dfd470(); };
struct FactoryConsumer { void thunk_FUN_10dee620(SCStr *,unsigned int,void *,FactoryTree); };
__forceinline Event_thunk_FUN_10def0d0::Event_thunk_FUN_10def0d0(const char *name,unsigned int id) {
RecoveredString_FUN_1008c50b text(name);
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
struct NativeNamedEvent_FUN_10df9440 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10df9440(); };
struct NativeNamedEvent_FUN_10df9690 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10df9690(); };
struct NativeNamedEvent_FUN_10df9a80 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10df9a80(); };
struct NativeNamedEvent_FUN_10df9d60 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10df9d60(); };
struct NativeNamedEvent_FUN_10df9fb0 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10df9fb0(); };
struct NativeNamedEvent_FUN_10dfa2d0 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10dfa2d0(); };
struct NativeNamedEvent_FUN_10dfa3a0 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10dfa3a0(); };
struct NativeNamedEvent_FUN_10dfa520 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10dfa520(); };
struct NativeNamedEvent_FUN_10dfab80 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10dfab80(); };
struct NativeNamedEvent_FUN_10dfadd0 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10dfadd0(); };
struct NativeNamedEvent_FUN_10dfb020 : Event_thunk_FUN_10def0d0 { NativeNamedEvent_FUN_10dfb020(); };
struct RecoveredString_FUN_1008c50b;
struct NativeEventProperties { virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5(); virtual void r6(); virtual void r7(); virtual void r8(); virtual void r9(); virtual void slot(const RecoveredString_FUN_1008c50b &, unsigned int); };
struct NativeEventDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };
struct NativeNamedEventCallback { void FUN_10e026f0(unsigned int); void FUN_10e03750(unsigned int); void FUN_10e039c0(unsigned int); void FUN_10e03a80(unsigned int); void FUN_10e05a20(unsigned int); void FUN_10e05ae0(unsigned int); void FUN_10e05ba0(unsigned int); void FUN_10e05cd0(unsigned int); void FUN_10e06260(unsigned int); void FUN_10e06480(unsigned int); void FUN_10e065b0(unsigned int); };

extern int thunk_FUN_10df15a0(...);


// Reference entry 10e026f0; body size 149 bytes.
#line 1 "ENTRY_10e026f0"
void NativeNamedEventCallback::FUN_10e026f0(unsigned int arg) {
NativeNamedEventCallback * volatile self = this;
NativeNamedEvent_FUN_10df9440 event;
NativeNamedEvent_FUN_10df9440 *pe = &event;
((NativeEventProperties *)pe->representation.properties)->slot(RecoveredString_FUN_1008c50b("opResult"), arg);
((NativeEventDispatcher *)((char *)this - 0x10))->thunk_FUN_10df15a0(pe);
}
