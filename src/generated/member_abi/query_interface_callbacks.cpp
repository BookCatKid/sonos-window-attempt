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
struct NativeNameQuery { bool thunk_FUN_101a2dc0(char *other); };
struct NativeQueryObject { virtual void r0(); virtual void AddRef(); };
struct NativeQueryInterfaceHost { unsigned int *FUN_1061dcf0(unsigned int *, NativeNameQuery *); unsigned int *FUN_1067efd0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10680550(unsigned int *, NativeNameQuery *); unsigned int *FUN_10687870(unsigned int *, NativeNameQuery *); unsigned int *FUN_106878f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_1068b530(unsigned int *, NativeNameQuery *); unsigned int *FUN_1068b720(unsigned int *, NativeNameQuery *); unsigned int *FUN_1068b7a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10696b60(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a00d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a0150(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a01d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a0250(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a02d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a0350(unsigned int *, NativeNameQuery *); unsigned int *FUN_106a1df0(unsigned int *, NativeNameQuery *); unsigned int *FUN_106cc8e0(unsigned int *, NativeNameQuery *); unsigned int *FUN_106d0d60(unsigned int *, NativeNameQuery *); unsigned int *FUN_106d6d60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10708510(unsigned int *, NativeNameQuery *); unsigned int *FUN_107cb7f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08110(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08190(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08210(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08290(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08310(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08390(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08410(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a08490(unsigned int *, NativeNameQuery *); unsigned int *FUN_10a7cb70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b721d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b72250(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b7aaa0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b7ab20(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b82e70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b82ef0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b82f70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b83350(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b83500(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b8d5b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b8d630(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b8d6b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b8d730(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b8d7b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b94ef0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b94f70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b9f670(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b9f6f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b9f770(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b9f7f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b9f870(unsigned int *, NativeNameQuery *); unsigned int *FUN_10b9f8f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bb31d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bb3250(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bbc630(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bbed40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bbf370(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bc4d60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bc90f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bc9170(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bc91f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bcb450(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bf1320(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bf2780(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bf3040(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bf3530(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bf92f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10bfdb00(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c00d10(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c00d90(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c00e10(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c03950(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c039d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c15630(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c27280(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c2a670(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c32770(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c38230(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c3b270(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c478e0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c4cf90(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c4d010(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c53000(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c531a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c53220(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c532a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c53320(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c533a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c53550(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c535d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c53650(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c536d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c53750(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58260(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58400(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58480(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58500(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58580(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58730(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c587b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c58830(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c588b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c5a900(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c5aaa0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c5ac50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c5cd30(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c5d000(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c6c1c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c83420(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c834a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c845b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10c9bd90(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cb38c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cbc5b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cc0050(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cc34d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd87f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd8870(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd88f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd8970(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd89f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd8a70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd8af0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd8b70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cd8bf0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cdea40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cdeac0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cdeb40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cdebc0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cdec40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ce0a20(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ce1e20(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ce4cb0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf0980(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf3680(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf3700(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf52a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf63d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf8c60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10cf8ce0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d06d40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d06fa0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d07020(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d07520(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d102d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d19410(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d1d4f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d1d570(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d22340(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d223d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d2b0f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d2b240(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d2b2c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d2b340(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d2b3c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d2b440(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d39e40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d3c9f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d3ca70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d3caf0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d41d20(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d41f10(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d60300(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d71570(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d86dd0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d86e50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d86ed0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d86f50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d86fd0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d89300(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d91bd0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d93ac0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d97210(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d9a400(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d9a480(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d9ded0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d9df50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10d9e640(unsigned int *, NativeNameQuery *); unsigned int *FUN_10da33b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10da3430(unsigned int *, NativeNameQuery *); unsigned int *FUN_10da7540(unsigned int *, NativeNameQuery *); unsigned int *FUN_10da75c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10da7640(unsigned int *, NativeNameQuery *); unsigned int *FUN_10dcef60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10dd5ba0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10de28f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10de4590(unsigned int *, NativeNameQuery *); unsigned int *FUN_10de8950(unsigned int *, NativeNameQuery *); unsigned int *FUN_10de89d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10de8a50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e06af0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e0ae60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e1fba0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e24ac0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e3f100(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e3f180(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e4e5e0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e591f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e72c70(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e72cf0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e7de90(unsigned int *, NativeNameQuery *); unsigned int *FUN_10e86840(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ea2900(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ea2a20(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ead200(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ead280(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ee0c10(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ee1790(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ee8760(unsigned int *, NativeNameQuery *); unsigned int *FUN_10eed620(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ef2b60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f04d30(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f13cb0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f13d30(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f13db0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f228d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f2bf40(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f36120(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f361a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f36220(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f362a0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f3ee80(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f3ef00(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f42e50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f478b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f47a50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f48ce0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f4c9c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f4cb60(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f515b0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f620f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f62170(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f621f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f62270(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f622f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f62370(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f623f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f62470(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f678f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f67970(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f679f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f73640(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f7a100(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f7a180(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f80cd0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f80d50(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f8e410(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f8e490(unsigned int *, NativeNameQuery *); unsigned int *FUN_10f8e510(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fa36e0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fa9e20(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fbcea0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fc95e0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fcf470(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fcf4f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe3570(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe35f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe3670(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe5880(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe6da0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe8550(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe85d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10fe8650(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ff84d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ff8550(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ff86c0(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ffbb30(unsigned int *, NativeNameQuery *); unsigned int *FUN_10ffd0d0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11002fc0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11003050(unsigned int *, NativeNameQuery *); unsigned int *FUN_110183f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11019480(unsigned int *, NativeNameQuery *); unsigned int *FUN_1101bd70(unsigned int *, NativeNameQuery *); unsigned int *FUN_1101bf10(unsigned int *, NativeNameQuery *); unsigned int *FUN_1101e290(unsigned int *, NativeNameQuery *); unsigned int *FUN_11020f20(unsigned int *, NativeNameQuery *); unsigned int *FUN_11022410(unsigned int *, NativeNameQuery *); unsigned int *FUN_1102db80(unsigned int *, NativeNameQuery *); unsigned int *FUN_1102dc00(unsigned int *, NativeNameQuery *); unsigned int *FUN_1102dda0(unsigned int *, NativeNameQuery *); unsigned int *FUN_1102de20(unsigned int *, NativeNameQuery *); unsigned int *FUN_1102dea0(unsigned int *, NativeNameQuery *); unsigned int *FUN_1102df20(unsigned int *, NativeNameQuery *); unsigned int *FUN_11032f80(unsigned int *, NativeNameQuery *); unsigned int *FUN_110334f0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11034ef0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11037810(unsigned int *, NativeNameQuery *); unsigned int *FUN_11037890(unsigned int *, NativeNameQuery *); unsigned int *FUN_11037910(unsigned int *, NativeNameQuery *); unsigned int *FUN_11037a30(unsigned int *, NativeNameQuery *); unsigned int *FUN_1105d8e0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11060b80(unsigned int *, NativeNameQuery *); unsigned int *FUN_11060d30(unsigned int *, NativeNameQuery *); unsigned int *FUN_11061fc0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11062f50(unsigned int *, NativeNameQuery *); unsigned int *FUN_11065cb0(unsigned int *, NativeNameQuery *); unsigned int *FUN_11067290(unsigned int *, NativeNameQuery *); unsigned int *FUN_11068020(unsigned int *, NativeNameQuery *); unsigned int *FUN_110680a0(unsigned int *, NativeNameQuery *); };

template<class... A> int __stdcall thunk_FUN_101a2dc0(A...);

// Reference entry 1061dcf0; body size 103 bytes.
#line 1 "ENTRY_1061dcf0"
unsigned int *NativeQueryInterfaceHost::FUN_1061dcf0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1067efd0; body size 103 bytes.
#line 1 "ENTRY_1067efd0"
unsigned int *NativeQueryInterfaceHost::FUN_1067efd0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10680550; body size 103 bytes.
#line 1 "ENTRY_10680550"
unsigned int *NativeQueryInterfaceHost::FUN_10680550(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10687870; body size 103 bytes.
#line 1 "ENTRY_10687870"
unsigned int *NativeQueryInterfaceHost::FUN_10687870(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106878f0; body size 103 bytes.
#line 1 "ENTRY_106878f0"
unsigned int *NativeQueryInterfaceHost::FUN_106878f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlRequest")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1068b530; body size 103 bytes.
#line 1 "ENTRY_1068b530"
unsigned int *NativeQueryInterfaceHost::FUN_1068b530(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1068b720; body size 103 bytes.
#line 1 "ENTRY_1068b720"
unsigned int *NativeQueryInterfaceHost::FUN_1068b720(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIShare")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1068b7a0; body size 103 bytes.
#line 1 "ENTRY_1068b7a0"
unsigned int *NativeQueryInterfaceHost::FUN_1068b7a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIShareManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10696b60; body size 103 bytes.
#line 1 "ENTRY_10696b60"
unsigned int *NativeQueryInterfaceHost::FUN_10696b60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a00d0; body size 103 bytes.
#line 1 "ENTRY_106a00d0"
unsigned int *NativeQueryInterfaceHost::FUN_106a00d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a0150; body size 103 bytes.
#line 1 "ENTRY_106a0150"
unsigned int *NativeQueryInterfaceHost::FUN_106a0150(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a01d0; body size 103 bytes.
#line 1 "ENTRY_106a01d0"
unsigned int *NativeQueryInterfaceHost::FUN_106a01d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a0250; body size 103 bytes.
#line 1 "ENTRY_106a0250"
unsigned int *NativeQueryInterfaceHost::FUN_106a0250(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a02d0; body size 103 bytes.
#line 1 "ENTRY_106a02d0"
unsigned int *NativeQueryInterfaceHost::FUN_106a02d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a0350; body size 103 bytes.
#line 1 "ENTRY_106a0350"
unsigned int *NativeQueryInterfaceHost::FUN_106a0350(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106a1df0; body size 103 bytes.
#line 1 "ENTRY_106a1df0"
unsigned int *NativeQueryInterfaceHost::FUN_106a1df0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIMusicServiceMenuItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106cc8e0; body size 103 bytes.
#line 1 "ENTRY_106cc8e0"
unsigned int *NativeQueryInterfaceHost::FUN_106cc8e0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106d0d60; body size 103 bytes.
#line 1 "ENTRY_106d0d60"
unsigned int *NativeQueryInterfaceHost::FUN_106d0d60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 106d6d60; body size 103 bytes.
#line 1 "ENTRY_106d6d60"
unsigned int *NativeQueryInterfaceHost::FUN_106d6d60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10708510; body size 103 bytes.
#line 1 "ENTRY_10708510"
unsigned int *NativeQueryInterfaceHost::FUN_10708510(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 107cb7f0; body size 103 bytes.
#line 1 "ENTRY_107cb7f0"
unsigned int *NativeQueryInterfaceHost::FUN_107cb7f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08110; body size 103 bytes.
#line 1 "ENTRY_10a08110"
unsigned int *NativeQueryInterfaceHost::FUN_10a08110(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlCommitLearnedIRCodes")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08190; body size 103 bytes.
#line 1 "ENTRY_10a08190"
unsigned int *NativeQueryInterfaceHost::FUN_10a08190(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlIdentifyIRRemote")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08210; body size 103 bytes.
#line 1 "ENTRY_10a08210"
unsigned int *NativeQueryInterfaceHost::FUN_10a08210(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlIsRemoteConfigured")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08290; body size 103 bytes.
#line 1 "ENTRY_10a08290"
unsigned int *NativeQueryInterfaceHost::FUN_10a08290(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlLearnIRCode")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08310; body size 103 bytes.
#line 1 "ENTRY_10a08310"
unsigned int *NativeQueryInterfaceHost::FUN_10a08310(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlCommitLearnedIRCodes")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08390; body size 103 bytes.
#line 1 "ENTRY_10a08390"
unsigned int *NativeQueryInterfaceHost::FUN_10a08390(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlIdentifyIRRemote")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08410; body size 103 bytes.
#line 1 "ENTRY_10a08410"
unsigned int *NativeQueryInterfaceHost::FUN_10a08410(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlIsRemoteConfigured")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a08490; body size 103 bytes.
#line 1 "ENTRY_10a08490"
unsigned int *NativeQueryInterfaceHost::FUN_10a08490(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlLearnIRCode")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10a7cb70; body size 103 bytes.
#line 1 "ENTRY_10a7cb70"
unsigned int *NativeQueryInterfaceHost::FUN_10a7cb70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b721d0; body size 103 bytes.
#line 1 "ENTRY_10b721d0"
unsigned int *NativeQueryInterfaceHost::FUN_10b721d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAVTransportEndDirectControlSession")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b72250; body size 103 bytes.
#line 1 "ENTRY_10b72250"
unsigned int *NativeQueryInterfaceHost::FUN_10b72250(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAVTransportEndDirectControlSession")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b7aaa0; body size 103 bytes.
#line 1 "ENTRY_10b7aaa0"
unsigned int *NativeQueryInterfaceHost::FUN_10b7aaa0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b7ab20; body size 103 bytes.
#line 1 "ENTRY_10b7ab20"
unsigned int *NativeQueryInterfaceHost::FUN_10b7ab20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b82e70; body size 103 bytes.
#line 1 "ENTRY_10b82e70"
unsigned int *NativeQueryInterfaceHost::FUN_10b82e70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseService")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b82ef0; body size 103 bytes.
#line 1 "ENTRY_10b82ef0"
unsigned int *NativeQueryInterfaceHost::FUN_10b82ef0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIScrobblingService")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b82f70; body size 103 bytes.
#line 1 "ENTRY_10b82f70"
unsigned int *NativeQueryInterfaceHost::FUN_10b82f70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCISimpleMessagingService")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b83350; body size 103 bytes.
#line 1 "ENTRY_10b83350"
unsigned int *NativeQueryInterfaceHost::FUN_10b83350(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpReplaceAccount")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b83500; body size 103 bytes.
#line 1 "ENTRY_10b83500"
unsigned int *NativeQueryInterfaceHost::FUN_10b83500(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpReplaceAccount")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b8d5b0; body size 103 bytes.
#line 1 "ENTRY_10b8d5b0"
unsigned int *NativeQueryInterfaceHost::FUN_10b8d5b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDeviceDelete")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b8d630; body size 103 bytes.
#line 1 "ENTRY_10b8d630"
unsigned int *NativeQueryInterfaceHost::FUN_10b8d630(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDeviceGet")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b8d6b0; body size 103 bytes.
#line 1 "ENTRY_10b8d6b0"
unsigned int *NativeQueryInterfaceHost::FUN_10b8d6b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePost")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b8d730; body size 103 bytes.
#line 1 "ENTRY_10b8d730"
unsigned int *NativeQueryInterfaceHost::FUN_10b8d730(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePut")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b8d7b0; body size 103 bytes.
#line 1 "ENTRY_10b8d7b0"
unsigned int *NativeQueryInterfaceHost::FUN_10b8d7b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDeviceGet")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b94ef0; body size 103 bytes.
#line 1 "ENTRY_10b94ef0"
unsigned int *NativeQueryInterfaceHost::FUN_10b94ef0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b94f70; body size 103 bytes.
#line 1 "ENTRY_10b94f70"
unsigned int *NativeQueryInterfaceHost::FUN_10b94f70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b9f670; body size 103 bytes.
#line 1 "ENTRY_10b9f670"
unsigned int *NativeQueryInterfaceHost::FUN_10b9f670(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIArtworkCache")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b9f6f0; body size 103 bytes.
#line 1 "ENTRY_10b9f6f0"
unsigned int *NativeQueryInterfaceHost::FUN_10b9f6f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIArtworkCacheManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b9f770; body size 103 bytes.
#line 1 "ENTRY_10b9f770"
unsigned int *NativeQueryInterfaceHost::FUN_10b9f770(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIArtworkData")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b9f7f0; body size 103 bytes.
#line 1 "ENTRY_10b9f7f0"
unsigned int *NativeQueryInterfaceHost::FUN_10b9f7f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b9f870; body size 103 bytes.
#line 1 "ENTRY_10b9f870"
unsigned int *NativeQueryInterfaceHost::FUN_10b9f870(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCILogoArtworkCache")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10b9f8f0; body size 103 bytes.
#line 1 "ENTRY_10b9f8f0"
unsigned int *NativeQueryInterfaceHost::FUN_10b9f8f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIArtworkData")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bb31d0; body size 103 bytes.
#line 1 "ENTRY_10bb31d0"
unsigned int *NativeQueryInterfaceHost::FUN_10bb31d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bb3250; body size 103 bytes.
#line 1 "ENTRY_10bb3250"
unsigned int *NativeQueryInterfaceHost::FUN_10bb3250(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAlarmManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bbc630; body size 103 bytes.
#line 1 "ENTRY_10bbc630"
unsigned int *NativeQueryInterfaceHost::FUN_10bbc630(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINetworkManagement")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bbed40; body size 103 bytes.
#line 1 "ENTRY_10bbed40"
unsigned int *NativeQueryInterfaceHost::FUN_10bbed40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIChirpListener")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bbf370; body size 103 bytes.
#line 1 "ENTRY_10bbf370"
unsigned int *NativeQueryInterfaceHost::FUN_10bbf370(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bc4d60; body size 103 bytes.
#line 1 "ENTRY_10bc4d60"
unsigned int *NativeQueryInterfaceHost::FUN_10bc4d60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINfcListener")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bc90f0; body size 103 bytes.
#line 1 "ENTRY_10bc90f0"
unsigned int *NativeQueryInterfaceHost::FUN_10bc90f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bc9170; body size 103 bytes.
#line 1 "ENTRY_10bc9170"
unsigned int *NativeQueryInterfaceHost::FUN_10bc9170(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBTClassicConnectionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bc91f0; body size 103 bytes.
#line 1 "ENTRY_10bc91f0"
unsigned int *NativeQueryInterfaceHost::FUN_10bc91f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBTClassicConnectionManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bcb450; body size 103 bytes.
#line 1 "ENTRY_10bcb450"
unsigned int *NativeQueryInterfaceHost::FUN_10bcb450(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bf1320; body size 103 bytes.
#line 1 "ENTRY_10bf1320"
unsigned int *NativeQueryInterfaceHost::FUN_10bf1320(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bf2780; body size 103 bytes.
#line 1 "ENTRY_10bf2780"
unsigned int *NativeQueryInterfaceHost::FUN_10bf2780(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpFactory")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bf3040; body size 103 bytes.
#line 1 "ENTRY_10bf3040"
unsigned int *NativeQueryInterfaceHost::FUN_10bf3040(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIRoomResource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bf3530; body size 103 bytes.
#line 1 "ENTRY_10bf3530"
unsigned int *NativeQueryInterfaceHost::FUN_10bf3530(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAudioInputResource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bf92f0; body size 103 bytes.
#line 1 "ENTRY_10bf92f0"
unsigned int *NativeQueryInterfaceHost::FUN_10bf92f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAppRatingManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10bfdb00; body size 103 bytes.
#line 1 "ENTRY_10bfdb00"
unsigned int *NativeQueryInterfaceHost::FUN_10bfdb00(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c00d10; body size 103 bytes.
#line 1 "ENTRY_10c00d10"
unsigned int *NativeQueryInterfaceHost::FUN_10c00d10(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEnumerator")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c00d90; body size 103 bytes.
#line 1 "ENTRY_10c00d90"
unsigned int *NativeQueryInterfaceHost::FUN_10c00d90(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIMusicServer")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c00e10; body size 103 bytes.
#line 1 "ENTRY_10c00e10"
unsigned int *NativeQueryInterfaceHost::FUN_10c00e10(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIData")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c03950; body size 103 bytes.
#line 1 "ENTRY_10c03950"
unsigned int *NativeQueryInterfaceHost::FUN_10c03950(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c039d0; body size 103 bytes.
#line 1 "ENTRY_10c039d0"
unsigned int *NativeQueryInterfaceHost::FUN_10c039d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIServiceAppInteropManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c15630; body size 103 bytes.
#line 1 "ENTRY_10c15630"
unsigned int *NativeQueryInterfaceHost::FUN_10c15630(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIZoneGroupMgr")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c27280; body size 103 bytes.
#line 1 "ENTRY_10c27280"
unsigned int *NativeQueryInterfaceHost::FUN_10c27280(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCICachedHousehold")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c2a670; body size 103 bytes.
#line 1 "ENTRY_10c2a670"
unsigned int *NativeQueryInterfaceHost::FUN_10c2a670(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIConnectedPartnersManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c32770; body size 103 bytes.
#line 1 "ENTRY_10c32770"
unsigned int *NativeQueryInterfaceHost::FUN_10c32770(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c38230; body size 103 bytes.
#line 1 "ENTRY_10c38230"
unsigned int *NativeQueryInterfaceHost::FUN_10c38230(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c3b270; body size 103 bytes.
#line 1 "ENTRY_10c3b270"
unsigned int *NativeQueryInterfaceHost::FUN_10c3b270(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c478e0; body size 103 bytes.
#line 1 "ENTRY_10c478e0"
unsigned int *NativeQueryInterfaceHost::FUN_10c478e0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c4cf90; body size 103 bytes.
#line 1 "ENTRY_10c4cf90"
unsigned int *NativeQueryInterfaceHost::FUN_10c4cf90(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c4d010; body size 103 bytes.
#line 1 "ENTRY_10c4d010"
unsigned int *NativeQueryInterfaceHost::FUN_10c4d010(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c53000; body size 103 bytes.
#line 1 "ENTRY_10c53000"
unsigned int *NativeQueryInterfaceHost::FUN_10c53000(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDeviceAutoplay")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c531a0; body size 103 bytes.
#line 1 "ENTRY_10c531a0"
unsigned int *NativeQueryInterfaceHost::FUN_10c531a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetAutoplayLinkedZones")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c53220; body size 103 bytes.
#line 1 "ENTRY_10c53220"
unsigned int *NativeQueryInterfaceHost::FUN_10c53220(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetAutoplayRoomUUID")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c532a0; body size 103 bytes.
#line 1 "ENTRY_10c532a0"
unsigned int *NativeQueryInterfaceHost::FUN_10c532a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetAutoplayVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c53320; body size 103 bytes.
#line 1 "ENTRY_10c53320"
unsigned int *NativeQueryInterfaceHost::FUN_10c53320(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetUseAutoplayVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c533a0; body size 103 bytes.
#line 1 "ENTRY_10c533a0"
unsigned int *NativeQueryInterfaceHost::FUN_10c533a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesSetUseAutoplayVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c53550; body size 103 bytes.
#line 1 "ENTRY_10c53550"
unsigned int *NativeQueryInterfaceHost::FUN_10c53550(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetAutoplayLinkedZones")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c535d0; body size 103 bytes.
#line 1 "ENTRY_10c535d0"
unsigned int *NativeQueryInterfaceHost::FUN_10c535d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetAutoplayRoomUUID")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c53650; body size 103 bytes.
#line 1 "ENTRY_10c53650"
unsigned int *NativeQueryInterfaceHost::FUN_10c53650(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetAutoplayVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c536d0; body size 103 bytes.
#line 1 "ENTRY_10c536d0"
unsigned int *NativeQueryInterfaceHost::FUN_10c536d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesGetUseAutoplayVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c53750; body size 103 bytes.
#line 1 "ENTRY_10c53750"
unsigned int *NativeQueryInterfaceHost::FUN_10c53750(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpDevicePropertiesSetUseAutoplayVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58260; body size 103 bytes.
#line 1 "ENTRY_10c58260"
unsigned int *NativeQueryInterfaceHost::FUN_10c58260(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDeviceLineIn")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58400; body size 103 bytes.
#line 1 "ENTRY_10c58400"
unsigned int *NativeQueryInterfaceHost::FUN_10c58400(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInGetAudioInputAttributes")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58480; body size 103 bytes.
#line 1 "ENTRY_10c58480"
unsigned int *NativeQueryInterfaceHost::FUN_10c58480(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInGetLineInLevel")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58500; body size 103 bytes.
#line 1 "ENTRY_10c58500"
unsigned int *NativeQueryInterfaceHost::FUN_10c58500(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInSetAudioInputAttributes")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58580; body size 103 bytes.
#line 1 "ENTRY_10c58580"
unsigned int *NativeQueryInterfaceHost::FUN_10c58580(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInSetLineInLevel")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58730; body size 103 bytes.
#line 1 "ENTRY_10c58730"
unsigned int *NativeQueryInterfaceHost::FUN_10c58730(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInGetAudioInputAttributes")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c587b0; body size 103 bytes.
#line 1 "ENTRY_10c587b0"
unsigned int *NativeQueryInterfaceHost::FUN_10c587b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInGetLineInLevel")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c58830; body size 103 bytes.
#line 1 "ENTRY_10c58830"
unsigned int *NativeQueryInterfaceHost::FUN_10c58830(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInSetAudioInputAttributes")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c588b0; body size 103 bytes.
#line 1 "ENTRY_10c588b0"
unsigned int *NativeQueryInterfaceHost::FUN_10c588b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAudioInSetLineInLevel")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c5a900; body size 103 bytes.
#line 1 "ENTRY_10c5a900"
unsigned int *NativeQueryInterfaceHost::FUN_10c5a900(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDeviceLineOut")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c5aaa0; body size 103 bytes.
#line 1 "ENTRY_10c5aaa0"
unsigned int *NativeQueryInterfaceHost::FUN_10c5aaa0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpRenderingControlGetSupportsOutputFixed")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c5ac50; body size 103 bytes.
#line 1 "ENTRY_10c5ac50"
unsigned int *NativeQueryInterfaceHost::FUN_10c5ac50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpRenderingControlGetSupportsOutputFixed")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c5cd30; body size 103 bytes.
#line 1 "ENTRY_10c5cd30"
unsigned int *NativeQueryInterfaceHost::FUN_10c5cd30(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDeviceMusicEqualization")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c5d000; body size 103 bytes.
#line 1 "ENTRY_10c5d000"
unsigned int *NativeQueryInterfaceHost::FUN_10c5d000(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c6c1c0; body size 103 bytes.
#line 1 "ENTRY_10c6c1c0"
unsigned int *NativeQueryInterfaceHost::FUN_10c6c1c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c83420; body size 103 bytes.
#line 1 "ENTRY_10c83420"
unsigned int *NativeQueryInterfaceHost::FUN_10c83420(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c834a0; body size 103 bytes.
#line 1 "ENTRY_10c834a0"
unsigned int *NativeQueryInterfaceHost::FUN_10c834a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c845b0; body size 103 bytes.
#line 1 "ENTRY_10c845b0"
unsigned int *NativeQueryInterfaceHost::FUN_10c845b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIZoneGroup")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10c9bd90; body size 103 bytes.
#line 1 "ENTRY_10c9bd90"
unsigned int *NativeQueryInterfaceHost::FUN_10c9bd90(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cb38c0; body size 103 bytes.
#line 1 "ENTRY_10cb38c0"
unsigned int *NativeQueryInterfaceHost::FUN_10cb38c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cbc5b0; body size 103 bytes.
#line 1 "ENTRY_10cbc5b0"
unsigned int *NativeQueryInterfaceHost::FUN_10cbc5b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDisplayType")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cc0050; body size 103 bytes.
#line 1 "ENTRY_10cc0050"
unsigned int *NativeQueryInterfaceHost::FUN_10cc0050(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cc34d0; body size 103 bytes.
#line 1 "ENTRY_10cc34d0"
unsigned int *NativeQueryInterfaceHost::FUN_10cc34d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpGetAboutSonosString")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd87f0; body size 103 bytes.
#line 1 "ENTRY_10cd87f0"
unsigned int *NativeQueryInterfaceHost::FUN_10cd87f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd8870; body size 103 bytes.
#line 1 "ENTRY_10cd8870"
unsigned int *NativeQueryInterfaceHost::FUN_10cd8870(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd88f0; body size 103 bytes.
#line 1 "ENTRY_10cd88f0"
unsigned int *NativeQueryInterfaceHost::FUN_10cd88f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd8970; body size 103 bytes.
#line 1 "ENTRY_10cd8970"
unsigned int *NativeQueryInterfaceHost::FUN_10cd8970(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd89f0; body size 103 bytes.
#line 1 "ENTRY_10cd89f0"
unsigned int *NativeQueryInterfaceHost::FUN_10cd89f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd8a70; body size 103 bytes.
#line 1 "ENTRY_10cd8a70"
unsigned int *NativeQueryInterfaceHost::FUN_10cd8a70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd8af0; body size 103 bytes.
#line 1 "ENTRY_10cd8af0"
unsigned int *NativeQueryInterfaceHost::FUN_10cd8af0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd8b70; body size 103 bytes.
#line 1 "ENTRY_10cd8b70"
unsigned int *NativeQueryInterfaceHost::FUN_10cd8b70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cd8bf0; body size 103 bytes.
#line 1 "ENTRY_10cd8bf0"
unsigned int *NativeQueryInterfaceHost::FUN_10cd8bf0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cdea40; body size 103 bytes.
#line 1 "ENTRY_10cdea40"
unsigned int *NativeQueryInterfaceHost::FUN_10cdea40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAlarmClockGetDailyIndexRefreshTime")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cdeac0; body size 103 bytes.
#line 1 "ENTRY_10cdeac0"
unsigned int *NativeQueryInterfaceHost::FUN_10cdeac0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAlarmClockSetDailyIndexRefreshTime")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cdeb40; body size 103 bytes.
#line 1 "ENTRY_10cdeb40"
unsigned int *NativeQueryInterfaceHost::FUN_10cdeb40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIIndexManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cdebc0; body size 103 bytes.
#line 1 "ENTRY_10cdebc0"
unsigned int *NativeQueryInterfaceHost::FUN_10cdebc0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAlarmClockGetDailyIndexRefreshTime")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cdec40; body size 103 bytes.
#line 1 "ENTRY_10cdec40"
unsigned int *NativeQueryInterfaceHost::FUN_10cdec40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAlarmClockSetDailyIndexRefreshTime")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ce0a20; body size 103 bytes.
#line 1 "ENTRY_10ce0a20"
unsigned int *NativeQueryInterfaceHost::FUN_10ce0a20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ce1e20; body size 103 bytes.
#line 1 "ENTRY_10ce1e20"
unsigned int *NativeQueryInterfaceHost::FUN_10ce1e20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpGetUsageDataShareOption")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ce4cb0; body size 103 bytes.
#line 1 "ENTRY_10ce4cb0"
unsigned int *NativeQueryInterfaceHost::FUN_10ce4cb0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf0980; body size 103 bytes.
#line 1 "ENTRY_10cf0980"
unsigned int *NativeQueryInterfaceHost::FUN_10cf0980(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf3680; body size 103 bytes.
#line 1 "ENTRY_10cf3680"
unsigned int *NativeQueryInterfaceHost::FUN_10cf3680(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf3700; body size 103 bytes.
#line 1 "ENTRY_10cf3700"
unsigned int *NativeQueryInterfaceHost::FUN_10cf3700(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf52a0; body size 103 bytes.
#line 1 "ENTRY_10cf52a0"
unsigned int *NativeQueryInterfaceHost::FUN_10cf52a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf63d0; body size 103 bytes.
#line 1 "ENTRY_10cf63d0"
unsigned int *NativeQueryInterfaceHost::FUN_10cf63d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpValidateServiceCredentials")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf8c60; body size 103 bytes.
#line 1 "ENTRY_10cf8c60"
unsigned int *NativeQueryInterfaceHost::FUN_10cf8c60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10cf8ce0; body size 103 bytes.
#line 1 "ENTRY_10cf8ce0"
unsigned int *NativeQueryInterfaceHost::FUN_10cf8ce0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d06d40; body size 103 bytes.
#line 1 "ENTRY_10d06d40"
unsigned int *NativeQueryInterfaceHost::FUN_10d06d40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d06fa0; body size 103 bytes.
#line 1 "ENTRY_10d06fa0"
unsigned int *NativeQueryInterfaceHost::FUN_10d06fa0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d07020; body size 103 bytes.
#line 1 "ENTRY_10d07020"
unsigned int *NativeQueryInterfaceHost::FUN_10d07020(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAlarmMusic")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d07520; body size 103 bytes.
#line 1 "ENTRY_10d07520"
unsigned int *NativeQueryInterfaceHost::FUN_10d07520(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d102d0; body size 103 bytes.
#line 1 "ENTRY_10d102d0"
unsigned int *NativeQueryInterfaceHost::FUN_10d102d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d19410; body size 103 bytes.
#line 1 "ENTRY_10d19410"
unsigned int *NativeQueryInterfaceHost::FUN_10d19410(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d1d4f0; body size 103 bytes.
#line 1 "ENTRY_10d1d4f0"
unsigned int *NativeQueryInterfaceHost::FUN_10d1d4f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d1d570; body size 103 bytes.
#line 1 "ENTRY_10d1d570"
unsigned int *NativeQueryInterfaceHost::FUN_10d1d570(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d22340; body size 103 bytes.
#line 1 "ENTRY_10d22340"
unsigned int *NativeQueryInterfaceHost::FUN_10d22340(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d223d0; body size 103 bytes.
#line 1 "ENTRY_10d223d0"
unsigned int *NativeQueryInterfaceHost::FUN_10d223d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d2b0f0; body size 103 bytes.
#line 1 "ENTRY_10d2b0f0"
unsigned int *NativeQueryInterfaceHost::FUN_10d2b0f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d2b240; body size 103 bytes.
#line 1 "ENTRY_10d2b240"
unsigned int *NativeQueryInterfaceHost::FUN_10d2b240(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d2b2c0; body size 103 bytes.
#line 1 "ENTRY_10d2b2c0"
unsigned int *NativeQueryInterfaceHost::FUN_10d2b2c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d2b340; body size 103 bytes.
#line 1 "ENTRY_10d2b340"
unsigned int *NativeQueryInterfaceHost::FUN_10d2b340(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d2b3c0; body size 103 bytes.
#line 1 "ENTRY_10d2b3c0"
unsigned int *NativeQueryInterfaceHost::FUN_10d2b3c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d2b440; body size 103 bytes.
#line 1 "ENTRY_10d2b440"
unsigned int *NativeQueryInterfaceHost::FUN_10d2b440(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d39e40; body size 103 bytes.
#line 1 "ENTRY_10d39e40"
unsigned int *NativeQueryInterfaceHost::FUN_10d39e40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d3c9f0; body size 103 bytes.
#line 1 "ENTRY_10d3c9f0"
unsigned int *NativeQueryInterfaceHost::FUN_10d3c9f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d3ca70; body size 103 bytes.
#line 1 "ENTRY_10d3ca70"
unsigned int *NativeQueryInterfaceHost::FUN_10d3ca70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d3caf0; body size 103 bytes.
#line 1 "ENTRY_10d3caf0"
unsigned int *NativeQueryInterfaceHost::FUN_10d3caf0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d41d20; body size 103 bytes.
#line 1 "ENTRY_10d41d20"
unsigned int *NativeQueryInterfaceHost::FUN_10d41d20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d41f10; body size 103 bytes.
#line 1 "ENTRY_10d41f10"
unsigned int *NativeQueryInterfaceHost::FUN_10d41f10(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d60300; body size 103 bytes.
#line 1 "ENTRY_10d60300"
unsigned int *NativeQueryInterfaceHost::FUN_10d60300(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d71570; body size 103 bytes.
#line 1 "ENTRY_10d71570"
unsigned int *NativeQueryInterfaceHost::FUN_10d71570(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d86dd0; body size 103 bytes.
#line 1 "ENTRY_10d86dd0"
unsigned int *NativeQueryInterfaceHost::FUN_10d86dd0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d86e50; body size 103 bytes.
#line 1 "ENTRY_10d86e50"
unsigned int *NativeQueryInterfaceHost::FUN_10d86e50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d86ed0; body size 103 bytes.
#line 1 "ENTRY_10d86ed0"
unsigned int *NativeQueryInterfaceHost::FUN_10d86ed0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d86f50; body size 103 bytes.
#line 1 "ENTRY_10d86f50"
unsigned int *NativeQueryInterfaceHost::FUN_10d86f50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d86fd0; body size 103 bytes.
#line 1 "ENTRY_10d86fd0"
unsigned int *NativeQueryInterfaceHost::FUN_10d86fd0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d89300; body size 103 bytes.
#line 1 "ENTRY_10d89300"
unsigned int *NativeQueryInterfaceHost::FUN_10d89300(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d91bd0; body size 103 bytes.
#line 1 "ENTRY_10d91bd0"
unsigned int *NativeQueryInterfaceHost::FUN_10d91bd0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d93ac0; body size 103 bytes.
#line 1 "ENTRY_10d93ac0"
unsigned int *NativeQueryInterfaceHost::FUN_10d93ac0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIUrlSessionCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d97210; body size 103 bytes.
#line 1 "ENTRY_10d97210"
unsigned int *NativeQueryInterfaceHost::FUN_10d97210(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d9a400; body size 103 bytes.
#line 1 "ENTRY_10d9a400"
unsigned int *NativeQueryInterfaceHost::FUN_10d9a400(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d9a480; body size 103 bytes.
#line 1 "ENTRY_10d9a480"
unsigned int *NativeQueryInterfaceHost::FUN_10d9a480(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d9ded0; body size 103 bytes.
#line 1 "ENTRY_10d9ded0"
unsigned int *NativeQueryInterfaceHost::FUN_10d9ded0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpContentDirectoryRefreshShareIndex")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d9df50; body size 103 bytes.
#line 1 "ENTRY_10d9df50"
unsigned int *NativeQueryInterfaceHost::FUN_10d9df50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpContentDirectoryRefreshShareIndex")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10d9e640; body size 103 bytes.
#line 1 "ENTRY_10d9e640"
unsigned int *NativeQueryInterfaceHost::FUN_10d9e640(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10da33b0; body size 103 bytes.
#line 1 "ENTRY_10da33b0"
unsigned int *NativeQueryInterfaceHost::FUN_10da33b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10da3430; body size 103 bytes.
#line 1 "ENTRY_10da3430"
unsigned int *NativeQueryInterfaceHost::FUN_10da3430(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10da7540; body size 103 bytes.
#line 1 "ENTRY_10da7540"
unsigned int *NativeQueryInterfaceHost::FUN_10da7540(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10da75c0; body size 103 bytes.
#line 1 "ENTRY_10da75c0"
unsigned int *NativeQueryInterfaceHost::FUN_10da75c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDateTimeManager")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10da7640; body size 103 bytes.
#line 1 "ENTRY_10da7640"
unsigned int *NativeQueryInterfaceHost::FUN_10da7640(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCITimeZone")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10dcef60; body size 103 bytes.
#line 1 "ENTRY_10dcef60"
unsigned int *NativeQueryInterfaceHost::FUN_10dcef60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIServicePopup")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10dd5ba0; body size 103 bytes.
#line 1 "ENTRY_10dd5ba0"
unsigned int *NativeQueryInterfaceHost::FUN_10dd5ba0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10de28f0; body size 103 bytes.
#line 1 "ENTRY_10de28f0"
unsigned int *NativeQueryInterfaceHost::FUN_10de28f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowsePageExtension")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10de4590; body size 103 bytes.
#line 1 "ENTRY_10de4590"
unsigned int *NativeQueryInterfaceHost::FUN_10de4590(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10de8950; body size 103 bytes.
#line 1 "ENTRY_10de8950"
unsigned int *NativeQueryInterfaceHost::FUN_10de8950(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAVTransportAddURIToSavedQueue")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10de89d0; body size 103 bytes.
#line 1 "ENTRY_10de89d0"
unsigned int *NativeQueryInterfaceHost::FUN_10de89d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10de8a50; body size 103 bytes.
#line 1 "ENTRY_10de8a50"
unsigned int *NativeQueryInterfaceHost::FUN_10de8a50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAVTransportAddURIToSavedQueue")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e06af0; body size 103 bytes.
#line 1 "ENTRY_10e06af0"
unsigned int *NativeQueryInterfaceHost::FUN_10e06af0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIWifiListener")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e0ae60; body size 103 bytes.
#line 1 "ENTRY_10e0ae60"
unsigned int *NativeQueryInterfaceHost::FUN_10e0ae60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e1fba0; body size 103 bytes.
#line 1 "ENTRY_10e1fba0"
unsigned int *NativeQueryInterfaceHost::FUN_10e1fba0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e24ac0; body size 103 bytes.
#line 1 "ENTRY_10e24ac0"
unsigned int *NativeQueryInterfaceHost::FUN_10e24ac0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e3f100; body size 103 bytes.
#line 1 "ENTRY_10e3f100"
unsigned int *NativeQueryInterfaceHost::FUN_10e3f100(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIServiceAppInteropResponseDelegate")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e3f180; body size 103 bytes.
#line 1 "ENTRY_10e3f180"
unsigned int *NativeQueryInterfaceHost::FUN_10e3f180(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIServiceAppInteropResponseDelegate")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e4e5e0; body size 103 bytes.
#line 1 "ENTRY_10e4e5e0"
unsigned int *NativeQueryInterfaceHost::FUN_10e4e5e0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e591f0; body size 103 bytes.
#line 1 "ENTRY_10e591f0"
unsigned int *NativeQueryInterfaceHost::FUN_10e591f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e72c70; body size 103 bytes.
#line 1 "ENTRY_10e72c70"
unsigned int *NativeQueryInterfaceHost::FUN_10e72c70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e72cf0; body size 103 bytes.
#line 1 "ENTRY_10e72cf0"
unsigned int *NativeQueryInterfaceHost::FUN_10e72cf0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIVSResponseListener")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e7de90; body size 103 bytes.
#line 1 "ENTRY_10e7de90"
unsigned int *NativeQueryInterfaceHost::FUN_10e7de90(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10e86840; body size 103 bytes.
#line 1 "ENTRY_10e86840"
unsigned int *NativeQueryInterfaceHost::FUN_10e86840(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ea2900; body size 103 bytes.
#line 1 "ENTRY_10ea2900"
unsigned int *NativeQueryInterfaceHost::FUN_10ea2900(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlGetLEDFeedbackState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ea2a20; body size 103 bytes.
#line 1 "ENTRY_10ea2a20"
unsigned int *NativeQueryInterfaceHost::FUN_10ea2a20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlGetLEDFeedbackState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ead200; body size 103 bytes.
#line 1 "ENTRY_10ead200"
unsigned int *NativeQueryInterfaceHost::FUN_10ead200(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ead280; body size 103 bytes.
#line 1 "ENTRY_10ead280"
unsigned int *NativeQueryInterfaceHost::FUN_10ead280(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ee0c10; body size 103 bytes.
#line 1 "ENTRY_10ee0c10"
unsigned int *NativeQueryInterfaceHost::FUN_10ee0c10(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ee1790; body size 103 bytes.
#line 1 "ENTRY_10ee1790"
unsigned int *NativeQueryInterfaceHost::FUN_10ee1790(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ee8760; body size 103 bytes.
#line 1 "ENTRY_10ee8760"
unsigned int *NativeQueryInterfaceHost::FUN_10ee8760(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10eed620; body size 103 bytes.
#line 1 "ENTRY_10eed620"
unsigned int *NativeQueryInterfaceHost::FUN_10eed620(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ef2b60; body size 103 bytes.
#line 1 "ENTRY_10ef2b60"
unsigned int *NativeQueryInterfaceHost::FUN_10ef2b60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f04d30; body size 103 bytes.
#line 1 "ENTRY_10f04d30"
unsigned int *NativeQueryInterfaceHost::FUN_10f04d30(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f13cb0; body size 103 bytes.
#line 1 "ENTRY_10f13cb0"
unsigned int *NativeQueryInterfaceHost::FUN_10f13cb0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpSubmitDiagnostics")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f13d30; body size 103 bytes.
#line 1 "ENTRY_10f13d30"
unsigned int *NativeQueryInterfaceHost::FUN_10f13d30(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpSubmitDiagnostics")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f13db0; body size 103 bytes.
#line 1 "ENTRY_10f13db0"
unsigned int *NativeQueryInterfaceHost::FUN_10f13db0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpSubmitDiagnostics")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f228d0; body size 103 bytes.
#line 1 "ENTRY_10f228d0"
unsigned int *NativeQueryInterfaceHost::FUN_10f228d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f2bf40; body size 103 bytes.
#line 1 "ENTRY_10f2bf40"
unsigned int *NativeQueryInterfaceHost::FUN_10f2bf40(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f36120; body size 103 bytes.
#line 1 "ENTRY_10f36120"
unsigned int *NativeQueryInterfaceHost::FUN_10f36120(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f361a0; body size 103 bytes.
#line 1 "ENTRY_10f361a0"
unsigned int *NativeQueryInterfaceHost::FUN_10f361a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f36220; body size 103 bytes.
#line 1 "ENTRY_10f36220"
unsigned int *NativeQueryInterfaceHost::FUN_10f36220(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f362a0; body size 103 bytes.
#line 1 "ENTRY_10f362a0"
unsigned int *NativeQueryInterfaceHost::FUN_10f362a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f3ee80; body size 103 bytes.
#line 1 "ENTRY_10f3ee80"
unsigned int *NativeQueryInterfaceHost::FUN_10f3ee80(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f3ef00; body size 103 bytes.
#line 1 "ENTRY_10f3ef00"
unsigned int *NativeQueryInterfaceHost::FUN_10f3ef00(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f42e50; body size 103 bytes.
#line 1 "ENTRY_10f42e50"
unsigned int *NativeQueryInterfaceHost::FUN_10f42e50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINowPlaying")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f478b0; body size 103 bytes.
#line 1 "ENTRY_10f478b0"
unsigned int *NativeQueryInterfaceHost::FUN_10f478b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIPlayQueue")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f47a50; body size 103 bytes.
#line 1 "ENTRY_10f47a50"
unsigned int *NativeQueryInterfaceHost::FUN_10f47a50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIPlayQueue")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f48ce0; body size 103 bytes.
#line 1 "ENTRY_10f48ce0"
unsigned int *NativeQueryInterfaceHost::FUN_10f48ce0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIArea")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f4c9c0; body size 103 bytes.
#line 1 "ENTRY_10f4c9c0"
unsigned int *NativeQueryInterfaceHost::FUN_10f4c9c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIGroupVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f4cb60; body size 103 bytes.
#line 1 "ENTRY_10f4cb60"
unsigned int *NativeQueryInterfaceHost::FUN_10f4cb60(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIDeviceVolume")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f515b0; body size 103 bytes.
#line 1 "ENTRY_10f515b0"
unsigned int *NativeQueryInterfaceHost::FUN_10f515b0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f620f0; body size 103 bytes.
#line 1 "ENTRY_10f620f0"
unsigned int *NativeQueryInterfaceHost::FUN_10f620f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlGetIRRepeaterState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f62170; body size 103 bytes.
#line 1 "ENTRY_10f62170"
unsigned int *NativeQueryInterfaceHost::FUN_10f62170(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlSetIRRepeaterState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f621f0; body size 103 bytes.
#line 1 "ENTRY_10f621f0"
unsigned int *NativeQueryInterfaceHost::FUN_10f621f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlSetLEDFeedbackState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f62270; body size 103 bytes.
#line 1 "ENTRY_10f62270"
unsigned int *NativeQueryInterfaceHost::FUN_10f62270(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpRenderingControlGetRoomCalibrationStatus")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f622f0; body size 103 bytes.
#line 1 "ENTRY_10f622f0"
unsigned int *NativeQueryInterfaceHost::FUN_10f622f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlGetIRRepeaterState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f62370; body size 103 bytes.
#line 1 "ENTRY_10f62370"
unsigned int *NativeQueryInterfaceHost::FUN_10f62370(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlSetIRRepeaterState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f623f0; body size 103 bytes.
#line 1 "ENTRY_10f623f0"
unsigned int *NativeQueryInterfaceHost::FUN_10f623f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpHTControlSetLEDFeedbackState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f62470; body size 103 bytes.
#line 1 "ENTRY_10f62470"
unsigned int *NativeQueryInterfaceHost::FUN_10f62470(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpRenderingControlGetRoomCalibrationStatus")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f678f0; body size 103 bytes.
#line 1 "ENTRY_10f678f0"
unsigned int *NativeQueryInterfaceHost::FUN_10f678f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpContentDirectoryGetAlbumArtistDisplayOption")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f67970; body size 103 bytes.
#line 1 "ENTRY_10f67970"
unsigned int *NativeQueryInterfaceHost::FUN_10f67970(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f679f0; body size 103 bytes.
#line 1 "ENTRY_10f679f0"
unsigned int *NativeQueryInterfaceHost::FUN_10f679f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpContentDirectoryGetAlbumArtistDisplayOption")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f73640; body size 103 bytes.
#line 1 "ENTRY_10f73640"
unsigned int *NativeQueryInterfaceHost::FUN_10f73640(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f7a100; body size 103 bytes.
#line 1 "ENTRY_10f7a100"
unsigned int *NativeQueryInterfaceHost::FUN_10f7a100(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAlarmSave")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f7a180; body size 103 bytes.
#line 1 "ENTRY_10f7a180"
unsigned int *NativeQueryInterfaceHost::FUN_10f7a180(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAlarm")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f80cd0; body size 103 bytes.
#line 1 "ENTRY_10f80cd0"
unsigned int *NativeQueryInterfaceHost::FUN_10f80cd0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f80d50; body size 103 bytes.
#line 1 "ENTRY_10f80d50"
unsigned int *NativeQueryInterfaceHost::FUN_10f80d50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f8e410; body size 103 bytes.
#line 1 "ENTRY_10f8e410"
unsigned int *NativeQueryInterfaceHost::FUN_10f8e410(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f8e490; body size 103 bytes.
#line 1 "ENTRY_10f8e490"
unsigned int *NativeQueryInterfaceHost::FUN_10f8e490(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10f8e510; body size 103 bytes.
#line 1 "ENTRY_10f8e510"
unsigned int *NativeQueryInterfaceHost::FUN_10f8e510(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fa36e0; body size 103 bytes.
#line 1 "ENTRY_10fa36e0"
unsigned int *NativeQueryInterfaceHost::FUN_10fa36e0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fa9e20; body size 103 bytes.
#line 1 "ENTRY_10fa9e20"
unsigned int *NativeQueryInterfaceHost::FUN_10fa9e20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fbcea0; body size 103 bytes.
#line 1 "ENTRY_10fbcea0"
unsigned int *NativeQueryInterfaceHost::FUN_10fbcea0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIWizard")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fc95e0; body size 103 bytes.
#line 1 "ENTRY_10fc95e0"
unsigned int *NativeQueryInterfaceHost::FUN_10fc95e0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fcf470; body size 103 bytes.
#line 1 "ENTRY_10fcf470"
unsigned int *NativeQueryInterfaceHost::FUN_10fcf470(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseDataSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fcf4f0; body size 103 bytes.
#line 1 "ENTRY_10fcf4f0"
unsigned int *NativeQueryInterfaceHost::FUN_10fcf4f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe3570; body size 103 bytes.
#line 1 "ENTRY_10fe3570"
unsigned int *NativeQueryInterfaceHost::FUN_10fe3570(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe35f0; body size 103 bytes.
#line 1 "ENTRY_10fe35f0"
unsigned int *NativeQueryInterfaceHost::FUN_10fe35f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe3670; body size 103 bytes.
#line 1 "ENTRY_10fe3670"
unsigned int *NativeQueryInterfaceHost::FUN_10fe3670(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIActionDelegate")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe5880; body size 103 bytes.
#line 1 "ENTRY_10fe5880"
unsigned int *NativeQueryInterfaceHost::FUN_10fe5880(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe6da0; body size 103 bytes.
#line 1 "ENTRY_10fe6da0"
unsigned int *NativeQueryInterfaceHost::FUN_10fe6da0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe8550; body size 103 bytes.
#line 1 "ENTRY_10fe8550"
unsigned int *NativeQueryInterfaceHost::FUN_10fe8550(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe85d0; body size 103 bytes.
#line 1 "ENTRY_10fe85d0"
unsigned int *NativeQueryInterfaceHost::FUN_10fe85d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10fe8650; body size 103 bytes.
#line 1 "ENTRY_10fe8650"
unsigned int *NativeQueryInterfaceHost::FUN_10fe8650(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ff84d0; body size 103 bytes.
#line 1 "ENTRY_10ff84d0"
unsigned int *NativeQueryInterfaceHost::FUN_10ff84d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ff8550; body size 103 bytes.
#line 1 "ENTRY_10ff8550"
unsigned int *NativeQueryInterfaceHost::FUN_10ff8550(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ff86c0; body size 103 bytes.
#line 1 "ENTRY_10ff86c0"
unsigned int *NativeQueryInterfaceHost::FUN_10ff86c0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBrowseItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ffbb30; body size 103 bytes.
#line 1 "ENTRY_10ffbb30"
unsigned int *NativeQueryInterfaceHost::FUN_10ffbb30(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIEventSink")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 10ffd0d0; body size 103 bytes.
#line 1 "ENTRY_10ffd0d0"
unsigned int *NativeQueryInterfaceHost::FUN_10ffd0d0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCISettingsMenuItem")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11002fc0; body size 103 bytes.
#line 1 "ENTRY_11002fc0"
unsigned int *NativeQueryInterfaceHost::FUN_11002fc0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11003050; body size 103 bytes.
#line 1 "ENTRY_11003050"
unsigned int *NativeQueryInterfaceHost::FUN_11003050(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIInfoViewTextPaneMetadata")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 110183f0; body size 103 bytes.
#line 1 "ENTRY_110183f0"
unsigned int *NativeQueryInterfaceHost::FUN_110183f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpCheckForControllerUpdates")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11019480; body size 103 bytes.
#line 1 "ENTRY_11019480"
unsigned int *NativeQueryInterfaceHost::FUN_11019480(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCLibSonarAudioSampleCallback")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1101bd70; body size 103 bytes.
#line 1 "ENTRY_1101bd70"
unsigned int *NativeQueryInterfaceHost::FUN_1101bd70(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINowPlayingRatings")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1101bf10; body size 103 bytes.
#line 1 "ENTRY_1101bf10"
unsigned int *NativeQueryInterfaceHost::FUN_1101bf10(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINowPlayingRatings")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1101e290; body size 103 bytes.
#line 1 "ENTRY_1101e290"
unsigned int *NativeQueryInterfaceHost::FUN_1101e290(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINowPlayingSource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11020f20; body size 103 bytes.
#line 1 "ENTRY_11020f20"
unsigned int *NativeQueryInterfaceHost::FUN_11020f20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINowPlayingTransport")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11022410; body size 103 bytes.
#line 1 "ENTRY_11022410"
unsigned int *NativeQueryInterfaceHost::FUN_11022410(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCINowPlayingSleepTimer")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1102db80; body size 103 bytes.
#line 1 "ENTRY_1102db80"
unsigned int *NativeQueryInterfaceHost::FUN_1102db80(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1102dc00; body size 103 bytes.
#line 1 "ENTRY_1102dc00"
unsigned int *NativeQueryInterfaceHost::FUN_1102dc00(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIPlayQueueMgr")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1102dda0; body size 103 bytes.
#line 1 "ENTRY_1102dda0"
unsigned int *NativeQueryInterfaceHost::FUN_1102dda0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpQueueReplaceAllTracks")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1102de20; body size 103 bytes.
#line 1 "ENTRY_1102de20"
unsigned int *NativeQueryInterfaceHost::FUN_1102de20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpQueueReplaceAllTracks")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1102dea0; body size 103 bytes.
#line 1 "ENTRY_1102dea0"
unsigned int *NativeQueryInterfaceHost::FUN_1102dea0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIPlayQueueMgr")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1102df20; body size 103 bytes.
#line 1 "ENTRY_1102df20"
unsigned int *NativeQueryInterfaceHost::FUN_1102df20(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCISonosPlaylist")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11032f80; body size 103 bytes.
#line 1 "ENTRY_11032f80"
unsigned int *NativeQueryInterfaceHost::FUN_11032f80(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIPlayQueueItemState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 110334f0; body size 103 bytes.
#line 1 "ENTRY_110334f0"
unsigned int *NativeQueryInterfaceHost::FUN_110334f0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIPlayQueueItemState")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11034ef0; body size 103 bytes.
#line 1 "ENTRY_11034ef0"
unsigned int *NativeQueryInterfaceHost::FUN_11034ef0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11037810; body size 103 bytes.
#line 1 "ENTRY_11037810"
unsigned int *NativeQueryInterfaceHost::FUN_11037810(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11037890; body size 103 bytes.
#line 1 "ENTRY_11037890"
unsigned int *NativeQueryInterfaceHost::FUN_11037890(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11037910; body size 103 bytes.
#line 1 "ENTRY_11037910"
unsigned int *NativeQueryInterfaceHost::FUN_11037910(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11037a30; body size 103 bytes.
#line 1 "ENTRY_11037a30"
unsigned int *NativeQueryInterfaceHost::FUN_11037a30(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIAction")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 1105d8e0; body size 103 bytes.
#line 1 "ENTRY_1105d8e0"
unsigned int *NativeQueryInterfaceHost::FUN_1105d8e0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11060b80; body size 103 bytes.
#line 1 "ENTRY_11060b80"
unsigned int *NativeQueryInterfaceHost::FUN_11060b80(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAVTransportGetRemainingSleepTimerDuration")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11060d30; body size 103 bytes.
#line 1 "ENTRY_11060d30"
unsigned int *NativeQueryInterfaceHost::FUN_11060d30(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAVTransportGetRemainingSleepTimerDuration")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11061fc0; body size 103 bytes.
#line 1 "ENTRY_11061fc0"
unsigned int *NativeQueryInterfaceHost::FUN_11061fc0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpAddTracksToQueue")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11062f50; body size 103 bytes.
#line 1 "ENTRY_11062f50"
unsigned int *NativeQueryInterfaceHost::FUN_11062f50(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpGenericUpdateQueue")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11065cb0; body size 103 bytes.
#line 1 "ENTRY_11065cb0"
unsigned int *NativeQueryInterfaceHost::FUN_11065cb0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOp")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11067290; body size 103 bytes.
#line 1 "ENTRY_11067290"
unsigned int *NativeQueryInterfaceHost::FUN_11067290(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIBadgeResource")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 11068020; body size 103 bytes.
#line 1 "ENTRY_11068020"
unsigned int *NativeQueryInterfaceHost::FUN_11068020(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpGetTrackPositionInfo")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}

// Reference entry 110680a0; body size 103 bytes.
#line 1 "ENTRY_110680a0"
unsigned int *NativeQueryInterfaceHost::FUN_110680a0(unsigned int *out, NativeNameQuery *name) {
if (name->thunk_FUN_101a2dc0("SCIOpGetTrackPositionInfo")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
if (name->thunk_FUN_101a2dc0("SCIObj")) {
*out = (unsigned int)this;
if (this != 0) ((NativeQueryObject *)this)->AddRef();
return out;
}
*out = 0;
return out;
}
