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
struct NativeReleaseIface { virtual void *v0(); virtual void v4();
  virtual void v8(); virtual void *vC(); };
struct NativePairMoveSetter_FUN_106a8e70 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_106a8e70 *FUN_106a8e70(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_106a9140 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_106a9140 *FUN_106a9140(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10772eb0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10772eb0 *FUN_10772eb0(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10785ae0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10785ae0 *FUN_10785ae0(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_109d8610 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_109d8610 *FUN_109d8610(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10c16e60 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10c16e60 *FUN_10c16e60(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10c2a9a0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10c2a9a0 *FUN_10c2a9a0(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10c39940 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10c39940 *FUN_10c39940(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10c9da90 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10c9da90 *FUN_10c9da90(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10cfe860 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10cfe860 *FUN_10cfe860(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10cfe8e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10cfe8e0 *FUN_10cfe8e0(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10e8a2e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10e8a2e0 *FUN_10e8a2e0(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_10f437d0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_10f437d0 *FUN_10f437d0(NativeReleaseIface **param_2); };
struct NativePairMoveSetter_FUN_1100da30 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairMoveSetter_FUN_1100da30 *FUN_1100da30(NativeReleaseIface **param_2); };


// Reference entry 106a8e70; body size 91 bytes.
#line 1 "ENTRY_106a8e70"
NativePairMoveSetter_FUN_106a8e70 *NativePairMoveSetter_FUN_106a8e70::FUN_106a8e70(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 106a9140; body size 91 bytes.
#line 1 "ENTRY_106a9140"
NativePairMoveSetter_FUN_106a9140 *NativePairMoveSetter_FUN_106a9140::FUN_106a9140(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10772eb0; body size 91 bytes.
#line 1 "ENTRY_10772eb0"
NativePairMoveSetter_FUN_10772eb0 *NativePairMoveSetter_FUN_10772eb0::FUN_10772eb0(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10785ae0; body size 91 bytes.
#line 1 "ENTRY_10785ae0"
NativePairMoveSetter_FUN_10785ae0 *NativePairMoveSetter_FUN_10785ae0::FUN_10785ae0(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 109d8610; body size 91 bytes.
#line 1 "ENTRY_109d8610"
NativePairMoveSetter_FUN_109d8610 *NativePairMoveSetter_FUN_109d8610::FUN_109d8610(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10c16e60; body size 91 bytes.
#line 1 "ENTRY_10c16e60"
NativePairMoveSetter_FUN_10c16e60 *NativePairMoveSetter_FUN_10c16e60::FUN_10c16e60(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10c2a9a0; body size 91 bytes.
#line 1 "ENTRY_10c2a9a0"
NativePairMoveSetter_FUN_10c2a9a0 *NativePairMoveSetter_FUN_10c2a9a0::FUN_10c2a9a0(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10c39940; body size 91 bytes.
#line 1 "ENTRY_10c39940"
NativePairMoveSetter_FUN_10c39940 *NativePairMoveSetter_FUN_10c39940::FUN_10c39940(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10c9da90; body size 91 bytes.
#line 1 "ENTRY_10c9da90"
NativePairMoveSetter_FUN_10c9da90 *NativePairMoveSetter_FUN_10c9da90::FUN_10c9da90(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10cfe860; body size 91 bytes.
#line 1 "ENTRY_10cfe860"
NativePairMoveSetter_FUN_10cfe860 *NativePairMoveSetter_FUN_10cfe860::FUN_10cfe860(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10cfe8e0; body size 91 bytes.
#line 1 "ENTRY_10cfe8e0"
NativePairMoveSetter_FUN_10cfe8e0 *NativePairMoveSetter_FUN_10cfe8e0::FUN_10cfe8e0(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10e8a2e0; body size 91 bytes.
#line 1 "ENTRY_10e8a2e0"
NativePairMoveSetter_FUN_10e8a2e0 *NativePairMoveSetter_FUN_10e8a2e0::FUN_10e8a2e0(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 10f437d0; body size 91 bytes.
#line 1 "ENTRY_10f437d0"
NativePairMoveSetter_FUN_10f437d0 *NativePairMoveSetter_FUN_10f437d0::FUN_10f437d0(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}

// Reference entry 1100da30; body size 91 bytes.
#line 1 "ENTRY_1100da30"
NativePairMoveSetter_FUN_1100da30 *NativePairMoveSetter_FUN_1100da30::FUN_1100da30(NativeReleaseIface **param_2) {
next = 0;
rep = 0;
NativeReleaseIface *newrep = *param_2;
*param_2 = 0;
NativeReleaseIface *old = next;
if (old != 0) { rep = 0; next = 0; old->v8(); }
rep = newrep;
if (newrep != 0) next = (NativeReleaseIface *)newrep->vC();
else next = 0;
return this;
}
