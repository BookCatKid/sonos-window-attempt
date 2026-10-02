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
struct __declspec(dllexport) FILE;
struct __declspec(dllexport) tm;
struct __declspec(dllexport) ThrowInfo;

struct __declspec(dllexport) RefCounted {
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
struct __declspec(dllexport) FactoryTreeNode { FactoryTreeNode *left,*parent,*right; unsigned char color,nil; unsigned char payload[14]; };
struct __declspec(dllexport) FactoryTree {
FactoryTreeNode *head; unsigned int size;
FactoryTree(const FactoryTree &); FactoryTree(FactoryTree &&);
__forceinline FactoryTree() {
FactoryTree * volatile home=this; _ReadWriteBarrier(); head=0; size=0;
FactoryTreeNode *node=(FactoryTreeNode *)operator_new(28);
node->left=node; node->parent=node; node->right=node; node->color=1; node->nil=1; head=node;
}
~FactoryTree();
};
struct __declspec(dllexport) RecoveredString_FUN_1008c50b {
unsigned int rep;
__forceinline RecoveredString_FUN_1008c50b(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }
~RecoveredString_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); rep=0; }
};
struct __declspec(dllexport) EventCopy_thunk_FUN_10deea50 {
unsigned int text,event_id; void *properties,*interface_pointer,*head; unsigned int size;
__forceinline EventCopy_thunk_FUN_10deea50() {}
EventCopy_thunk_FUN_10deea50(const EventCopy_thunk_FUN_10deea50 &);
};
struct __declspec(dllexport) Event_thunk_FUN_10def0d0 {
EventCopy_thunk_FUN_10deea50 representation;
__forceinline Event_thunk_FUN_10def0d0() {}
__forceinline Event_thunk_FUN_10def0d0(const char *name,unsigned int id);
~Event_thunk_FUN_10def0d0() noexcept;
};
struct __declspec(dllexport) Stopped_thunk_FUN_10dfd540 : Event_thunk_FUN_10def0d0 { Stopped_thunk_FUN_10dfd540(); };
struct __declspec(dllexport) Started_thunk_FUN_10dfd470 : Event_thunk_FUN_10def0d0 { Started_thunk_FUN_10dfd470(); };
struct __declspec(dllexport) FactoryConsumer { void thunk_FUN_10dee620(SCStr *,unsigned int,void *,FactoryTree); };
__forceinline Event_thunk_FUN_10def0d0::Event_thunk_FUN_10def0d0(const char *name,unsigned int id) {
RecoveredString_FUN_1008c50b text(name);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text,id,0,FactoryTree());
}
struct __declspec(dllexport) Cancelled : Event_thunk_FUN_10def0d0 { __forceinline Cancelled():Event_thunk_FUN_10def0d0("alertCancelPressed",6) {} };
struct __declspec(dllexport) Shown : Event_thunk_FUN_10def0d0 { __forceinline Shown():Event_thunk_FUN_10def0d0("alertShown",4) {} };
struct __declspec(dllexport) FactoryVariant {
virtual void unused0(); virtual void unused1(); virtual void unused2();
virtual void unused3(); virtual void unused4(); virtual void unused5();
virtual void unused6(); virtual void unused7(); virtual void unused8();
virtual int value(SCStr *key);
};
static_assert(sizeof(FactoryTree)==8,"Two-word outgoing container");
static_assert(sizeof(FactoryTreeNode)==28,"Sentinel node");
static_assert(sizeof(Event_thunk_FUN_10def0d0)==24,"Event value");
struct __declspec(dllexport) NativeCopierOutput;
struct __declspec(dllexport) NativeCopierAggregate_FUN_10deee60 { EventCopy_thunk_FUN_10deea50 fields; unsigned int extra; NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 &); ~NativeCopierAggregate_FUN_10deee60() noexcept; };
struct __declspec(dllexport) NativeCopierSource_FUN_10df9440 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10df9440(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10df9690 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10df9690(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10df9a80 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10df9a80(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10df9d60 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10df9d60(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10df9fb0 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10df9fb0(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10dfa2d0 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10dfa2d0(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10dfa520 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10dfa520(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10dfab80 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10dfab80(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10dfadd0 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10dfadd0(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10dfb020 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10dfb020(); };
struct __declspec(dllexport) NativeCopierSource_FUN_10dfb530 : Event_thunk_FUN_10def0d0 { NativeCopierSource_FUN_10dfb530(); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10df9510 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10df9510(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10df9760 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10df9760(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10df9b50 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10df9b50(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10df9e30 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10df9e30(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfa080 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfa080(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfa3a0 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfa3a0(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfa5f0 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfa5f0(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfac50 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfac50(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfaea0 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfaea0(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfb0f0 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfb0f0(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierEvent_FUN_10dfb600 : Event_thunk_FUN_10def0d0 { NativeCopierEvent_FUN_10dfb600(); void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &); };
struct __declspec(dllexport) NativeCopierOutput { NativeCopierOutput *FUN_10df9390(); NativeCopierOutput *FUN_10df95e0(); NativeCopierOutput *FUN_10df99d0(); NativeCopierOutput *FUN_10df9cb0(); NativeCopierOutput *FUN_10df9f00(); NativeCopierOutput *FUN_10dfa220(); NativeCopierOutput *FUN_10dfa470(); NativeCopierOutput *FUN_10dfaad0(); NativeCopierOutput *FUN_10dfad20(); NativeCopierOutput *FUN_10dfaf70(); NativeCopierOutput *FUN_10dfb480(); };

// Reference entry 10df9390; body size 137 bytes.
#line 1 "ENTRY_10df9390"
NativeCopierOutput *NativeCopierOutput::FUN_10df9390() {
NativeCopierOutput * volatile self = this;
NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,
    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));
return this;
}

void (__cdecl * volatile ltcg_opaque)(void) = 0;
extern "C" {
int __cdecl __CxxFrameHandler3(void *, void *, void *, void *) { return 0; }
void __fastcall __security_check_cookie(unsigned int) { }
unsigned int __security_cookie = 0x12345678;
}
void __cdecl __std_terminate() { for (;;) { } }

// ltcg link stubs
__declspec(noinline) void * __cdecl operator_new(unsigned int) { ltcg_opaque(); return 0; }
__declspec(noinline) FactoryTree::FactoryTree(const FactoryTree &) { ltcg_opaque(); }
__declspec(noinline) FactoryTree::FactoryTree(FactoryTree &&) { ltcg_opaque(); }
__declspec(noinline) FactoryTree::~FactoryTree() noexcept { ltcg_opaque(); }
__declspec(noinline) EventCopy_thunk_FUN_10deea50::EventCopy_thunk_FUN_10deea50(const EventCopy_thunk_FUN_10deea50 &) { ltcg_opaque(); }
__declspec(noinline) Event_thunk_FUN_10def0d0::~Event_thunk_FUN_10def0d0() noexcept { ltcg_opaque(); }
__declspec(noinline) Stopped_thunk_FUN_10dfd540::Stopped_thunk_FUN_10dfd540() { ltcg_opaque(); }
__declspec(noinline) Started_thunk_FUN_10dfd470::Started_thunk_FUN_10dfd470() { ltcg_opaque(); }
__declspec(noinline) NativeCopierAggregate_FUN_10deee60::NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 &) { ltcg_opaque(); }
__declspec(noinline) NativeCopierAggregate_FUN_10deee60::~NativeCopierAggregate_FUN_10deee60() noexcept { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10df9440::NativeCopierSource_FUN_10df9440() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10df9690::NativeCopierSource_FUN_10df9690() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10df9a80::NativeCopierSource_FUN_10df9a80() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10df9d60::NativeCopierSource_FUN_10df9d60() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10df9fb0::NativeCopierSource_FUN_10df9fb0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10dfa2d0::NativeCopierSource_FUN_10dfa2d0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10dfa520::NativeCopierSource_FUN_10dfa520() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10dfab80::NativeCopierSource_FUN_10dfab80() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10dfadd0::NativeCopierSource_FUN_10dfadd0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10dfb020::NativeCopierSource_FUN_10dfb020() { ltcg_opaque(); }
__declspec(noinline) NativeCopierSource_FUN_10dfb530::NativeCopierSource_FUN_10dfb530() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10df9510::NativeCopierEvent_FUN_10df9510() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10df9760::NativeCopierEvent_FUN_10df9760() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10df9b50::NativeCopierEvent_FUN_10df9b50() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10df9e30::NativeCopierEvent_FUN_10df9e30() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfa080::NativeCopierEvent_FUN_10dfa080() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfa3a0::NativeCopierEvent_FUN_10dfa3a0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfa5f0::NativeCopierEvent_FUN_10dfa5f0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfac50::NativeCopierEvent_FUN_10dfac50() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfaea0::NativeCopierEvent_FUN_10dfaea0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfb0f0::NativeCopierEvent_FUN_10dfb0f0() { ltcg_opaque(); }
__declspec(noinline) NativeCopierEvent_FUN_10dfb600::NativeCopierEvent_FUN_10dfb600() { ltcg_opaque(); }
