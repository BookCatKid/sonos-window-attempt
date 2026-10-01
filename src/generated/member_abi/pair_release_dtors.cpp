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
struct NativeReleaseIface { virtual void *v0(); virtual void *v4(); virtual void v8(); };
struct NativePairRelGuard { void *p; ~NativePairRelGuard(); };
struct NativePairRelease_FUN_1062cca0 { void *rep; void *next; ~NativePairRelease_FUN_1062cca0();
void FUN_1062cca0(); };
struct NativePairRelease_FUN_1062cd10 { void *rep; void *next; ~NativePairRelease_FUN_1062cd10();
void FUN_1062cd10(); };
struct NativePairRelease_FUN_1062ce10 { void *rep; void *next; ~NativePairRelease_FUN_1062ce10();
void FUN_1062ce10(); };
struct NativePairRelease_FUN_106567c0 { void *rep; void *next; ~NativePairRelease_FUN_106567c0();
void FUN_106567c0(); };
struct NativePairRelease_FUN_106d29d0 { void *rep; void *next; ~NativePairRelease_FUN_106d29d0();
void FUN_106d29d0(); };
struct NativePairRelease_FUN_106e5850 { void *rep; void *next; ~NativePairRelease_FUN_106e5850();
void FUN_106e5850(); };
struct NativePairRelease_FUN_106e58c0 { void *rep; void *next; ~NativePairRelease_FUN_106e58c0();
void FUN_106e58c0(); };
struct NativePairRelease_FUN_106e5930 { void *rep; void *next; ~NativePairRelease_FUN_106e5930();
void FUN_106e5930(); };
struct NativePairRelease_FUN_1072bbb0 { void *rep; void *next; ~NativePairRelease_FUN_1072bbb0();
void FUN_1072bbb0(); };
struct NativePairRelease_FUN_1075a1d0 { void *rep; void *next; ~NativePairRelease_FUN_1075a1d0();
void FUN_1075a1d0(); };
struct NativePairRelease_FUN_10982890 { void *rep; void *next; ~NativePairRelease_FUN_10982890();
void FUN_10982890(); };
struct NativePairRelease_FUN_109cc3b0 { void *rep; void *next; ~NativePairRelease_FUN_109cc3b0();
void FUN_109cc3b0(); };
struct NativePairRelease_FUN_10b1bd10 { void *rep; void *next; ~NativePairRelease_FUN_10b1bd10();
void FUN_10b1bd10(); };
struct NativePairRelease_FUN_10b1bd80 { void *rep; void *next; ~NativePairRelease_FUN_10b1bd80();
void FUN_10b1bd80(); };
struct NativePairRelease_FUN_10b34cd0 { void *rep; void *next; ~NativePairRelease_FUN_10b34cd0();
void FUN_10b34cd0(); };
struct NativePairRelease_FUN_10bc0320 { void *rep; void *next; ~NativePairRelease_FUN_10bc0320();
void FUN_10bc0320(); };
struct NativePairRelease_FUN_10c05990 { void *rep; void *next; ~NativePairRelease_FUN_10c05990();
void FUN_10c05990(); };
struct NativePairRelease_FUN_10c05a00 { void *rep; void *next; ~NativePairRelease_FUN_10c05a00();
void FUN_10c05a00(); };
struct NativePairRelease_FUN_10c05a70 { void *rep; void *next; ~NativePairRelease_FUN_10c05a70();
void FUN_10c05a70(); };
struct NativePairRelease_FUN_10f38490 { void *rep; void *next; ~NativePairRelease_FUN_10f38490();
void FUN_10f38490(); };
struct NativePairRelease_FUN_10f70830 { void *rep; void *next; ~NativePairRelease_FUN_10f70830();
void FUN_10f70830(); };


// Reference entry 1062cca0; body size 83 bytes.
#line 1 "ENTRY_1062cca0"
void NativePairRelease_FUN_1062cca0::FUN_1062cca0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 1062cd10; body size 83 bytes.
#line 1 "ENTRY_1062cd10"
void NativePairRelease_FUN_1062cd10::FUN_1062cd10() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 1062ce10; body size 83 bytes.
#line 1 "ENTRY_1062ce10"
void NativePairRelease_FUN_1062ce10::FUN_1062ce10() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 106567c0; body size 83 bytes.
#line 1 "ENTRY_106567c0"
void NativePairRelease_FUN_106567c0::FUN_106567c0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 106d29d0; body size 83 bytes.
#line 1 "ENTRY_106d29d0"
void NativePairRelease_FUN_106d29d0::FUN_106d29d0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 106e5850; body size 83 bytes.
#line 1 "ENTRY_106e5850"
void NativePairRelease_FUN_106e5850::FUN_106e5850() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 106e58c0; body size 83 bytes.
#line 1 "ENTRY_106e58c0"
void NativePairRelease_FUN_106e58c0::FUN_106e58c0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 106e5930; body size 83 bytes.
#line 1 "ENTRY_106e5930"
void NativePairRelease_FUN_106e5930::FUN_106e5930() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 1072bbb0; body size 83 bytes.
#line 1 "ENTRY_1072bbb0"
void NativePairRelease_FUN_1072bbb0::FUN_1072bbb0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 1075a1d0; body size 83 bytes.
#line 1 "ENTRY_1075a1d0"
void NativePairRelease_FUN_1075a1d0::FUN_1075a1d0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10982890; body size 83 bytes.
#line 1 "ENTRY_10982890"
void NativePairRelease_FUN_10982890::FUN_10982890() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 109cc3b0; body size 83 bytes.
#line 1 "ENTRY_109cc3b0"
void NativePairRelease_FUN_109cc3b0::FUN_109cc3b0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10b1bd10; body size 83 bytes.
#line 1 "ENTRY_10b1bd10"
void NativePairRelease_FUN_10b1bd10::FUN_10b1bd10() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10b1bd80; body size 83 bytes.
#line 1 "ENTRY_10b1bd80"
void NativePairRelease_FUN_10b1bd80::FUN_10b1bd80() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10b34cd0; body size 83 bytes.
#line 1 "ENTRY_10b34cd0"
void NativePairRelease_FUN_10b34cd0::FUN_10b34cd0() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10bc0320; body size 83 bytes.
#line 1 "ENTRY_10bc0320"
void NativePairRelease_FUN_10bc0320::FUN_10bc0320() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10c05990; body size 83 bytes.
#line 1 "ENTRY_10c05990"
void NativePairRelease_FUN_10c05990::FUN_10c05990() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10c05a00; body size 83 bytes.
#line 1 "ENTRY_10c05a00"
void NativePairRelease_FUN_10c05a00::FUN_10c05a00() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10c05a70; body size 83 bytes.
#line 1 "ENTRY_10c05a70"
void NativePairRelease_FUN_10c05a70::FUN_10c05a70() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10f38490; body size 83 bytes.
#line 1 "ENTRY_10f38490"
void NativePairRelease_FUN_10f38490::FUN_10f38490() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}

// Reference entry 10f70830; body size 83 bytes.
#line 1 "ENTRY_10f70830"
void NativePairRelease_FUN_10f70830::FUN_10f70830() {
NativePairRelGuard g;
NativeReleaseIface *p = (NativeReleaseIface *)next;
if (p != 0) {
  rep = 0; next = 0;
  p->v8();
}
}
