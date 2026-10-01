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
struct NativeVcallObj { virtual void *v0(); virtual void v4(); virtual void v8(); };
struct NativeVcallTwoArg { virtual void *v0(); virtual void *v4(); virtual void *v8();
virtual void *vC(); virtual void *v10(); virtual void v14(unsigned int, unsigned int); };
struct NativeVcallThis8 { virtual void *v0(); virtual void *v4(); virtual void *v8();
virtual NativeVcallObj *vC();
virtual void *v10();
virtual void *v14();
virtual void *v18();
virtual void *v1c();
virtual void *v20();
virtual void *v24();
virtual void *v28();
virtual void *v2c();
virtual void *v30();
virtual void *v34();
virtual void *v38();
virtual void *v3c();
virtual void *v40();
virtual void *v44();
virtual void *v48();
virtual void *v4c();
virtual void *v50();
virtual void *v54();
virtual void *v58();
virtual void *v5c();
virtual void *v60();
};
struct NativeVcallM28 { virtual void *v0(); virtual void *v4(); virtual void *v8();
virtual void *vC(); virtual void *v10(); virtual void *v14(); virtual void v18(); };
struct NativeVcallGuard1 { void *p; ~NativeVcallGuard1(); };
struct NativeVcallGuard2 { void *p; ~NativeVcallGuard2(); };
struct NativeVcallHost_FUN_1068b210 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_1068b210(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10a07c10 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10a07c10(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10a07d40 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10a07d40(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10a07e70 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10a07e70(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10a07fa0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10a07fa0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10b72070 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10b72070(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10b82d00 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10b82d00(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10b8d0f0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10b8d0f0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10b8d220 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10b8d220(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10b8d350 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10b8d350(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10b8d480 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10b8d480(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c4ce50 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c4ce50(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c52a10 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c52a10(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c52b40 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c52b40(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c52c70 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c52c70(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c52da0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c52da0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c52ed0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c52ed0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c57da0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c57da0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c57ed0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c57ed0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c58000 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c58000(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c58130 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c58130(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c5a7d0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c5a7d0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c831c0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c831c0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10c832f0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10c832f0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cc3370 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cc3370(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd7ce0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd7ce0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd7e10 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd7e10(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd7f40 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd7f40(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd8070 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd8070(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd81a0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd81a0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd82d0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd82d0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd8400 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd8400(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd8530 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd8530(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cd8660 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cd8660(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cde7e0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cde7e0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cde910 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cde910(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10ce1c00 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10ce1c00(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10cf62a0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10cf62a0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10d86860 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10d86860(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10d86990 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10d86990(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10d86ac0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10d86ac0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10d86bf0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10d86bf0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10d9daf0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10d9daf0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10de8770 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10de8770(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10ea27a0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10ea27a0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10ef2a30 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10ef2a30(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f13920 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f13920(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f13a50 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f13a50(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f13b80 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f13b80(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f2bb40 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f2bb40(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f35c60 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f35c60(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f35d90 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f35d90(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f35ec0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f35ec0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f35ff0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f35ff0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f61b80 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f61b80(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f61cb0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f61cb0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f61de0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f61de0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f61f10 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f61f10(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f677b0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f677b0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f73500 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f73500(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f79fd0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f79fd0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f80a70 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f80a70(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f80ba0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f80ba0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f8e050 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f8e050(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f8e180 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f8e180(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_10f8e2b0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_10f8e2b0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_110182c0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_110182c0(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_1102d970 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_1102d970(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_11060a50 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_11060a50(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_11061e90 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_11061e90(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_11062e20 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_11062e20(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_11065b80 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_11065b80(unsigned int param_2, unsigned int param_3);
};
struct NativeVcallHost_FUN_11067ef0 {
void *v0; NativeVcallTwoArg *f4; NativeVcallObj *f8;
void *fc; void *f10; void *f14; void *f18;
unsigned short f1c; unsigned short f1e; char *f20; char *f24;
NativeVcallM28 m28;
void FUN_11067ef0(unsigned int param_2, unsigned int param_3);
};


// Reference entry 1068b210; body size 232 bytes.
#line 1 "ENTRY_1068b210"
void NativeVcallHost_FUN_1068b210::FUN_1068b210(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10a07c10; body size 232 bytes.
#line 1 "ENTRY_10a07c10"
void NativeVcallHost_FUN_10a07c10::FUN_10a07c10(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10a07d40; body size 232 bytes.
#line 1 "ENTRY_10a07d40"
void NativeVcallHost_FUN_10a07d40::FUN_10a07d40(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10a07e70; body size 232 bytes.
#line 1 "ENTRY_10a07e70"
void NativeVcallHost_FUN_10a07e70::FUN_10a07e70(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10a07fa0; body size 232 bytes.
#line 1 "ENTRY_10a07fa0"
void NativeVcallHost_FUN_10a07fa0::FUN_10a07fa0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10b72070; body size 232 bytes.
#line 1 "ENTRY_10b72070"
void NativeVcallHost_FUN_10b72070::FUN_10b72070(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10b82d00; body size 232 bytes.
#line 1 "ENTRY_10b82d00"
void NativeVcallHost_FUN_10b82d00::FUN_10b82d00(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10b8d0f0; body size 232 bytes.
#line 1 "ENTRY_10b8d0f0"
void NativeVcallHost_FUN_10b8d0f0::FUN_10b8d0f0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10b8d220; body size 232 bytes.
#line 1 "ENTRY_10b8d220"
void NativeVcallHost_FUN_10b8d220::FUN_10b8d220(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10b8d350; body size 232 bytes.
#line 1 "ENTRY_10b8d350"
void NativeVcallHost_FUN_10b8d350::FUN_10b8d350(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10b8d480; body size 232 bytes.
#line 1 "ENTRY_10b8d480"
void NativeVcallHost_FUN_10b8d480::FUN_10b8d480(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c4ce50; body size 232 bytes.
#line 1 "ENTRY_10c4ce50"
void NativeVcallHost_FUN_10c4ce50::FUN_10c4ce50(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c52a10; body size 232 bytes.
#line 1 "ENTRY_10c52a10"
void NativeVcallHost_FUN_10c52a10::FUN_10c52a10(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c52b40; body size 232 bytes.
#line 1 "ENTRY_10c52b40"
void NativeVcallHost_FUN_10c52b40::FUN_10c52b40(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c52c70; body size 232 bytes.
#line 1 "ENTRY_10c52c70"
void NativeVcallHost_FUN_10c52c70::FUN_10c52c70(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c52da0; body size 232 bytes.
#line 1 "ENTRY_10c52da0"
void NativeVcallHost_FUN_10c52da0::FUN_10c52da0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c52ed0; body size 232 bytes.
#line 1 "ENTRY_10c52ed0"
void NativeVcallHost_FUN_10c52ed0::FUN_10c52ed0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c57da0; body size 232 bytes.
#line 1 "ENTRY_10c57da0"
void NativeVcallHost_FUN_10c57da0::FUN_10c57da0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c57ed0; body size 232 bytes.
#line 1 "ENTRY_10c57ed0"
void NativeVcallHost_FUN_10c57ed0::FUN_10c57ed0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c58000; body size 232 bytes.
#line 1 "ENTRY_10c58000"
void NativeVcallHost_FUN_10c58000::FUN_10c58000(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c58130; body size 232 bytes.
#line 1 "ENTRY_10c58130"
void NativeVcallHost_FUN_10c58130::FUN_10c58130(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c5a7d0; body size 232 bytes.
#line 1 "ENTRY_10c5a7d0"
void NativeVcallHost_FUN_10c5a7d0::FUN_10c5a7d0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c831c0; body size 232 bytes.
#line 1 "ENTRY_10c831c0"
void NativeVcallHost_FUN_10c831c0::FUN_10c831c0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10c832f0; body size 232 bytes.
#line 1 "ENTRY_10c832f0"
void NativeVcallHost_FUN_10c832f0::FUN_10c832f0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cc3370; body size 232 bytes.
#line 1 "ENTRY_10cc3370"
void NativeVcallHost_FUN_10cc3370::FUN_10cc3370(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v60();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd7ce0; body size 232 bytes.
#line 1 "ENTRY_10cd7ce0"
void NativeVcallHost_FUN_10cd7ce0::FUN_10cd7ce0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd7e10; body size 232 bytes.
#line 1 "ENTRY_10cd7e10"
void NativeVcallHost_FUN_10cd7e10::FUN_10cd7e10(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd7f40; body size 232 bytes.
#line 1 "ENTRY_10cd7f40"
void NativeVcallHost_FUN_10cd7f40::FUN_10cd7f40(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd8070; body size 232 bytes.
#line 1 "ENTRY_10cd8070"
void NativeVcallHost_FUN_10cd8070::FUN_10cd8070(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd81a0; body size 232 bytes.
#line 1 "ENTRY_10cd81a0"
void NativeVcallHost_FUN_10cd81a0::FUN_10cd81a0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd82d0; body size 232 bytes.
#line 1 "ENTRY_10cd82d0"
void NativeVcallHost_FUN_10cd82d0::FUN_10cd82d0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd8400; body size 232 bytes.
#line 1 "ENTRY_10cd8400"
void NativeVcallHost_FUN_10cd8400::FUN_10cd8400(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd8530; body size 232 bytes.
#line 1 "ENTRY_10cd8530"
void NativeVcallHost_FUN_10cd8530::FUN_10cd8530(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cd8660; body size 232 bytes.
#line 1 "ENTRY_10cd8660"
void NativeVcallHost_FUN_10cd8660::FUN_10cd8660(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cde7e0; body size 232 bytes.
#line 1 "ENTRY_10cde7e0"
void NativeVcallHost_FUN_10cde7e0::FUN_10cde7e0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cde910; body size 232 bytes.
#line 1 "ENTRY_10cde910"
void NativeVcallHost_FUN_10cde910::FUN_10cde910(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10ce1c00; body size 232 bytes.
#line 1 "ENTRY_10ce1c00"
void NativeVcallHost_FUN_10ce1c00::FUN_10ce1c00(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10cf62a0; body size 232 bytes.
#line 1 "ENTRY_10cf62a0"
void NativeVcallHost_FUN_10cf62a0::FUN_10cf62a0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v44();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10d86860; body size 232 bytes.
#line 1 "ENTRY_10d86860"
void NativeVcallHost_FUN_10d86860::FUN_10d86860(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10d86990; body size 232 bytes.
#line 1 "ENTRY_10d86990"
void NativeVcallHost_FUN_10d86990::FUN_10d86990(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10d86ac0; body size 232 bytes.
#line 1 "ENTRY_10d86ac0"
void NativeVcallHost_FUN_10d86ac0::FUN_10d86ac0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10d86bf0; body size 232 bytes.
#line 1 "ENTRY_10d86bf0"
void NativeVcallHost_FUN_10d86bf0::FUN_10d86bf0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10d9daf0; body size 232 bytes.
#line 1 "ENTRY_10d9daf0"
void NativeVcallHost_FUN_10d9daf0::FUN_10d9daf0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10de8770; body size 232 bytes.
#line 1 "ENTRY_10de8770"
void NativeVcallHost_FUN_10de8770::FUN_10de8770(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v40();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10ea27a0; body size 232 bytes.
#line 1 "ENTRY_10ea27a0"
void NativeVcallHost_FUN_10ea27a0::FUN_10ea27a0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10ef2a30; body size 232 bytes.
#line 1 "ENTRY_10ef2a30"
void NativeVcallHost_FUN_10ef2a30::FUN_10ef2a30(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f13920; body size 232 bytes.
#line 1 "ENTRY_10f13920"
void NativeVcallHost_FUN_10f13920::FUN_10f13920(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v48();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f13a50; body size 232 bytes.
#line 1 "ENTRY_10f13a50"
void NativeVcallHost_FUN_10f13a50::FUN_10f13a50(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v48();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f13b80; body size 232 bytes.
#line 1 "ENTRY_10f13b80"
void NativeVcallHost_FUN_10f13b80::FUN_10f13b80(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v48();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f2bb40; body size 232 bytes.
#line 1 "ENTRY_10f2bb40"
void NativeVcallHost_FUN_10f2bb40::FUN_10f2bb40(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f35c60; body size 232 bytes.
#line 1 "ENTRY_10f35c60"
void NativeVcallHost_FUN_10f35c60::FUN_10f35c60(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f35d90; body size 232 bytes.
#line 1 "ENTRY_10f35d90"
void NativeVcallHost_FUN_10f35d90::FUN_10f35d90(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f35ec0; body size 232 bytes.
#line 1 "ENTRY_10f35ec0"
void NativeVcallHost_FUN_10f35ec0::FUN_10f35ec0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f35ff0; body size 232 bytes.
#line 1 "ENTRY_10f35ff0"
void NativeVcallHost_FUN_10f35ff0::FUN_10f35ff0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f61b80; body size 232 bytes.
#line 1 "ENTRY_10f61b80"
void NativeVcallHost_FUN_10f61b80::FUN_10f61b80(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f61cb0; body size 232 bytes.
#line 1 "ENTRY_10f61cb0"
void NativeVcallHost_FUN_10f61cb0::FUN_10f61cb0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f61de0; body size 232 bytes.
#line 1 "ENTRY_10f61de0"
void NativeVcallHost_FUN_10f61de0::FUN_10f61de0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f61f10; body size 232 bytes.
#line 1 "ENTRY_10f61f10"
void NativeVcallHost_FUN_10f61f10::FUN_10f61f10(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f677b0; body size 232 bytes.
#line 1 "ENTRY_10f677b0"
void NativeVcallHost_FUN_10f677b0::FUN_10f677b0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f73500; body size 232 bytes.
#line 1 "ENTRY_10f73500"
void NativeVcallHost_FUN_10f73500::FUN_10f73500(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f79fd0; body size 232 bytes.
#line 1 "ENTRY_10f79fd0"
void NativeVcallHost_FUN_10f79fd0::FUN_10f79fd0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f80a70; body size 232 bytes.
#line 1 "ENTRY_10f80a70"
void NativeVcallHost_FUN_10f80a70::FUN_10f80a70(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f80ba0; body size 232 bytes.
#line 1 "ENTRY_10f80ba0"
void NativeVcallHost_FUN_10f80ba0::FUN_10f80ba0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f8e050; body size 232 bytes.
#line 1 "ENTRY_10f8e050"
void NativeVcallHost_FUN_10f8e050::FUN_10f8e050(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f8e180; body size 232 bytes.
#line 1 "ENTRY_10f8e180"
void NativeVcallHost_FUN_10f8e180::FUN_10f8e180(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 10f8e2b0; body size 232 bytes.
#line 1 "ENTRY_10f8e2b0"
void NativeVcallHost_FUN_10f8e2b0::FUN_10f8e2b0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 110182c0; body size 232 bytes.
#line 1 "ENTRY_110182c0"
void NativeVcallHost_FUN_110182c0::FUN_110182c0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v48();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 1102d970; body size 232 bytes.
#line 1 "ENTRY_1102d970"
void NativeVcallHost_FUN_1102d970::FUN_1102d970(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 11060a50; body size 232 bytes.
#line 1 "ENTRY_11060a50"
void NativeVcallHost_FUN_11060a50::FUN_11060a50(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v3c();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 11061e90; body size 232 bytes.
#line 1 "ENTRY_11061e90"
void NativeVcallHost_FUN_11061e90::FUN_11061e90(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v40();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 11062e20; body size 232 bytes.
#line 1 "ENTRY_11062e20"
void NativeVcallHost_FUN_11062e20::FUN_11062e20(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v38();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 11065b80; body size 232 bytes.
#line 1 "ENTRY_11065b80"
void NativeVcallHost_FUN_11065b80::FUN_11065b80(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v34();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}

// Reference entry 11067ef0; body size 232 bytes.
#line 1 "ENTRY_11067ef0"
void NativeVcallHost_FUN_11067ef0::FUN_11067ef0(unsigned int param_2, unsigned int param_3) {
NativeVcallThis8 *piVar1 = (NativeVcallThis8 *)((char *)this - 8);
NativeVcallObj *piVar2 = 0;
NativeVcallGuard1 g1; g1.p = piVar1;
NativeVcallGuard2 g2; g2.p = 0;
if (piVar1 != 0) {
  piVar2 = piVar1->vC();
  g2.p = piVar2;
  piVar2->v4();
}
f1c = (unsigned short)param_3;
f14 = 0;
m28.v18();
if (f20 != 0 && *f20 != 0 && f24 != 0 && *f24 != 0) {
  piVar1->v44();
}
if (f4 != 0) {
  f4->v14(param_2, param_3);
  NativeVcallObj *t = f8;
  if (t != 0) {
    f4 = 0; f8 = 0;
    t->v8();
  }
  f4 = 0; f8 = 0;
}
if (g2.p != 0) ((NativeVcallObj *)g2.p)->v8();
}
