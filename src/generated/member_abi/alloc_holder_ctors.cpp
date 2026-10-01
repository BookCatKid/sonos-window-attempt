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
void *operator_new(unsigned int);
struct NativeAllocBase_thunk_FUN_1027f780 { void *f0; ~NativeAllocBase_thunk_FUN_1027f780(); };
struct NativeAllocBase_thunk_FUN_10683f60 { void *f0; ~NativeAllocBase_thunk_FUN_10683f60(); };
struct NativeAllocBase_thunk_FUN_10683f80 { void *f0; ~NativeAllocBase_thunk_FUN_10683f80(); };
struct NativeAllocBase_thunk_FUN_106b3630 { void *f0; ~NativeAllocBase_thunk_FUN_106b3630(); };
struct NativeAllocBase_thunk_FUN_106b3650 { void *f0; ~NativeAllocBase_thunk_FUN_106b3650(); };
struct NativeAllocBase_thunk_FUN_106d2b10 { void *f0; ~NativeAllocBase_thunk_FUN_106d2b10(); };
struct NativeAllocBase_thunk_FUN_106da2e0 { void *f0; ~NativeAllocBase_thunk_FUN_106da2e0(); };
struct NativeAllocBase_thunk_FUN_106da300 { void *f0; ~NativeAllocBase_thunk_FUN_106da300(); };
struct NativeAllocBase_thunk_FUN_106de510 { void *f0; ~NativeAllocBase_thunk_FUN_106de510(); };
struct NativeAllocBase_thunk_FUN_106de530 { void *f0; ~NativeAllocBase_thunk_FUN_106de530(); };
struct NativeAllocBase_thunk_FUN_106e4f80 { void *f0; ~NativeAllocBase_thunk_FUN_106e4f80(); };
struct NativeAllocBase_thunk_FUN_1072ae00 { void *f0; ~NativeAllocBase_thunk_FUN_1072ae00(); };
struct NativeAllocBase_thunk_FUN_1082b4a0 { void *f0; ~NativeAllocBase_thunk_FUN_1082b4a0(); };
struct NativeAllocBase_thunk_FUN_109901d0 { void *f0; ~NativeAllocBase_thunk_FUN_109901d0(); };
struct NativeAllocBase_thunk_FUN_10af6910 { void *f0; ~NativeAllocBase_thunk_FUN_10af6910(); };
struct NativeAllocBase_thunk_FUN_10af6930 { void *f0; ~NativeAllocBase_thunk_FUN_10af6930(); };
struct NativeAllocBase_thunk_FUN_10b04d80 { void *f0; ~NativeAllocBase_thunk_FUN_10b04d80(); };
struct NativeAllocBase_thunk_FUN_10b5da30 { void *f0; ~NativeAllocBase_thunk_FUN_10b5da30(); };
struct NativeAllocBase_thunk_FUN_10ba6c30 { void *f0; ~NativeAllocBase_thunk_FUN_10ba6c30(); };
struct NativeAllocBase_thunk_FUN_10ba6c50 { void *f0; ~NativeAllocBase_thunk_FUN_10ba6c50(); };
struct NativeAllocBase_thunk_FUN_10bb58d0 { void *f0; ~NativeAllocBase_thunk_FUN_10bb58d0(); };
struct NativeAllocBase_thunk_FUN_10bc0390 { void *f0; ~NativeAllocBase_thunk_FUN_10bc0390(); };
struct NativeAllocBase_thunk_FUN_10bd6260 { void *f0; ~NativeAllocBase_thunk_FUN_10bd6260(); };
struct NativeAllocBase_thunk_FUN_10bd6280 { void *f0; ~NativeAllocBase_thunk_FUN_10bd6280(); };
struct NativeAllocBase_thunk_FUN_10bd62a0 { void *f0; ~NativeAllocBase_thunk_FUN_10bd62a0(); };
struct NativeAllocBase_thunk_FUN_10bd62c0 { void *f0; ~NativeAllocBase_thunk_FUN_10bd62c0(); };
struct NativeAllocBase_thunk_FUN_10bd62e0 { void *f0; ~NativeAllocBase_thunk_FUN_10bd62e0(); };
struct NativeAllocBase_thunk_FUN_10bd6300 { void *f0; ~NativeAllocBase_thunk_FUN_10bd6300(); };
struct NativeAllocBase_thunk_FUN_10bd6320 { void *f0; ~NativeAllocBase_thunk_FUN_10bd6320(); };
struct NativeAllocBase_thunk_FUN_10bd6340 { void *f0; ~NativeAllocBase_thunk_FUN_10bd6340(); };
struct NativeAllocBase_thunk_FUN_10bd6360 { void *f0; ~NativeAllocBase_thunk_FUN_10bd6360(); };
struct NativeAllocBase_thunk_FUN_10c5f930 { void *f0; ~NativeAllocBase_thunk_FUN_10c5f930(); };
struct NativeAllocBase_thunk_FUN_10cb9340 { void *f0; ~NativeAllocBase_thunk_FUN_10cb9340(); };
struct NativeAllocBase_thunk_FUN_10d27420 { void *f0; ~NativeAllocBase_thunk_FUN_10d27420(); };
struct NativeAllocBase_thunk_FUN_10d69760 { void *f0; ~NativeAllocBase_thunk_FUN_10d69760(); };
struct NativeAllocBase_thunk_FUN_10d9f950 { void *f0; ~NativeAllocBase_thunk_FUN_10d9f950(); };
struct NativeAllocBase_thunk_FUN_10db3250 { void *f0; ~NativeAllocBase_thunk_FUN_10db3250(); };
struct NativeAllocBase_thunk_FUN_10db3270 { void *f0; ~NativeAllocBase_thunk_FUN_10db3270(); };
struct NativeAllocBase_thunk_FUN_10dd7ec0 { void *f0; ~NativeAllocBase_thunk_FUN_10dd7ec0(); };
struct NativeAllocBase_thunk_FUN_10dd7ee0 { void *f0; ~NativeAllocBase_thunk_FUN_10dd7ee0(); };
struct NativeAllocBase_thunk_FUN_10deef50 { void *f0; ~NativeAllocBase_thunk_FUN_10deef50(); };
struct NativeAllocBase_thunk_FUN_10deef70 { void *f0; ~NativeAllocBase_thunk_FUN_10deef70(); };
struct NativeAllocBase_thunk_FUN_10e0c410 { void *f0; ~NativeAllocBase_thunk_FUN_10e0c410(); };
struct NativeAllocBase_thunk_FUN_10e0c430 { void *f0; ~NativeAllocBase_thunk_FUN_10e0c430(); };
struct NativeAllocBase_thunk_FUN_10e5e300 { void *f0; ~NativeAllocBase_thunk_FUN_10e5e300(); };
struct NativeAllocBase_thunk_FUN_10eab2a0 { void *f0; ~NativeAllocBase_thunk_FUN_10eab2a0(); };
struct NativeAllocBase_thunk_FUN_10eb66d0 { void *f0; ~NativeAllocBase_thunk_FUN_10eb66d0(); };
struct NativeAllocBase_thunk_FUN_10eb66f0 { void *f0; ~NativeAllocBase_thunk_FUN_10eb66f0(); };
struct NativeAllocBase_thunk_FUN_10eb6710 { void *f0; ~NativeAllocBase_thunk_FUN_10eb6710(); };
struct NativeAllocBase_thunk_FUN_10ed0c50 { void *f0; ~NativeAllocBase_thunk_FUN_10ed0c50(); };
struct NativeAllocBase_thunk_FUN_10eedbb0 { void *f0; ~NativeAllocBase_thunk_FUN_10eedbb0(); };
struct NativeAllocBase_thunk_FUN_10eef240 { void *f0; ~NativeAllocBase_thunk_FUN_10eef240(); };
struct NativeAllocBase_thunk_FUN_10ef5120 { void *f0; ~NativeAllocBase_thunk_FUN_10ef5120(); };
struct NativeAllocBase_thunk_FUN_10ef9de0 { void *f0; ~NativeAllocBase_thunk_FUN_10ef9de0(); };
struct NativeAllocBase_thunk_FUN_10f02dd0 { void *f0; ~NativeAllocBase_thunk_FUN_10f02dd0(); };
struct NativeAllocBase_thunk_FUN_10f174e0 { void *f0; ~NativeAllocBase_thunk_FUN_10f174e0(); };
struct NativeAllocBase_thunk_FUN_10f1c470 { void *f0; ~NativeAllocBase_thunk_FUN_10f1c470(); };
struct NativeAllocBase_thunk_FUN_10f1c490 { void *f0; ~NativeAllocBase_thunk_FUN_10f1c490(); };
struct NativeAllocBase_thunk_FUN_10f1c4b0 { void *f0; ~NativeAllocBase_thunk_FUN_10f1c4b0(); };
struct NativeAllocBase_thunk_FUN_10f25b40 { void *f0; ~NativeAllocBase_thunk_FUN_10f25b40(); };
struct NativeAllocBase_thunk_FUN_10f38170 { void *f0; ~NativeAllocBase_thunk_FUN_10f38170(); };
struct NativeAllocBase_thunk_FUN_10f38190 { void *f0; ~NativeAllocBase_thunk_FUN_10f38190(); };
struct NativeAllocBase_thunk_FUN_10f6bc80 { void *f0; ~NativeAllocBase_thunk_FUN_10f6bc80(); };
struct NativeAllocBase_thunk_FUN_10f7db60 { void *f0; ~NativeAllocBase_thunk_FUN_10f7db60(); };
struct NativeAllocBase_thunk_FUN_10f9b030 { void *f0; ~NativeAllocBase_thunk_FUN_10f9b030(); };
struct NativeAllocBase_thunk_FUN_10f9b050 { void *f0; ~NativeAllocBase_thunk_FUN_10f9b050(); };
struct NativeAllocBase_thunk_FUN_10fc1d60 { void *f0; ~NativeAllocBase_thunk_FUN_10fc1d60(); };
struct NativeAllocBase_thunk_FUN_10fed720 { void *f0; ~NativeAllocBase_thunk_FUN_10fed720(); };
struct NativeAllocBase_thunk_FUN_11027110 { void *f0; ~NativeAllocBase_thunk_FUN_11027110(); };
struct NativeAllocBase_thunk_FUN_11078bc0 { void *f0; ~NativeAllocBase_thunk_FUN_11078bc0(); };
struct NativeAllocBase_thunk_FUN_11078be0 { void *f0; ~NativeAllocBase_thunk_FUN_11078be0(); };
struct NativeAllocBase_thunk_FUN_11078c00 { void *f0; ~NativeAllocBase_thunk_FUN_11078c00(); };
struct NativeAllocBase_thunk_FUN_11078c20 { void *f0; ~NativeAllocBase_thunk_FUN_11078c20(); };
struct NativeAllocBase_thunk_FUN_110991c0 { void *f0; ~NativeAllocBase_thunk_FUN_110991c0(); };
struct NativeAllocBase_thunk_FUN_110c79f0 { void *f0; ~NativeAllocBase_thunk_FUN_110c79f0(); };
struct NativeAllocBase_thunk_FUN_110f0440 { void *f0; ~NativeAllocBase_thunk_FUN_110f0440(); };
struct NativeAllocBase_thunk_FUN_1110b2f0 { void *f0; ~NativeAllocBase_thunk_FUN_1110b2f0(); };
struct NativeAllocBase_thunk_FUN_1117fa40 { void *f0; ~NativeAllocBase_thunk_FUN_1117fa40(); };
struct NativeAllocBase_thunk_FUN_1117fa60 { void *f0; ~NativeAllocBase_thunk_FUN_1117fa60(); };
struct NativeAllocBase_thunk_FUN_1117fa80 { void *f0; ~NativeAllocBase_thunk_FUN_1117fa80(); };
struct NativeAllocBase_thunk_FUN_1117faa0 { void *f0; ~NativeAllocBase_thunk_FUN_1117faa0(); };
struct NativeAllocBase_thunk_FUN_1117fac0 { void *f0; ~NativeAllocBase_thunk_FUN_1117fac0(); };
struct NativeAllocBase_thunk_FUN_1118dcc0 { void *f0; ~NativeAllocBase_thunk_FUN_1118dcc0(); };
struct NativeAllocBase_thunk_FUN_111c3960 { void *f0; ~NativeAllocBase_thunk_FUN_111c3960(); };
struct NativeAllocBase_thunk_FUN_111d2f20 { void *f0; ~NativeAllocBase_thunk_FUN_111d2f20(); };
struct NativeAllocBase_thunk_FUN_1126e270 { void *f0; ~NativeAllocBase_thunk_FUN_1126e270(); };
struct NativeAllocBase_thunk_FUN_11294ae0 { void *f0; ~NativeAllocBase_thunk_FUN_11294ae0(); };
struct NativeAllocHolder_FUN_10683170 : NativeAllocBase_thunk_FUN_10683f60 { void *f4;
NativeAllocHolder_FUN_10683170(void *param_2); };
struct NativeAllocHolder_FUN_106831f0 : NativeAllocBase_thunk_FUN_10683f80 { void *f4;
NativeAllocHolder_FUN_106831f0(void *param_2); };
struct NativeAllocHolder_FUN_106a3b50 : NativeAllocBase_thunk_FUN_1027f780 { void *f4;
NativeAllocHolder_FUN_106a3b50(void *param_2); };
struct NativeAllocHolder_FUN_106b09f0 : NativeAllocBase_thunk_FUN_106b3630 { void *f4;
NativeAllocHolder_FUN_106b09f0(void *param_2); };
struct NativeAllocHolder_FUN_106b0a70 : NativeAllocBase_thunk_FUN_106b3650 { void *f4;
NativeAllocHolder_FUN_106b0a70(void *param_2); };
struct NativeAllocHolder_FUN_106d2580 : NativeAllocBase_thunk_FUN_106d2b10 { void *f4;
NativeAllocHolder_FUN_106d2580(void *param_2); };
struct NativeAllocHolder_FUN_106d9d00 : NativeAllocBase_thunk_FUN_106da2e0 { void *f4;
NativeAllocHolder_FUN_106d9d00(void *param_2); };
struct NativeAllocHolder_FUN_106d9d80 : NativeAllocBase_thunk_FUN_106da300 { void *f4;
NativeAllocHolder_FUN_106d9d80(void *param_2); };
struct NativeAllocHolder_FUN_106ddec0 : NativeAllocBase_thunk_FUN_106de510 { void *f4;
NativeAllocHolder_FUN_106ddec0(void *param_2); };
struct NativeAllocHolder_FUN_106ddf40 : NativeAllocBase_thunk_FUN_106de530 { void *f4;
NativeAllocHolder_FUN_106ddf40(void *param_2); };
struct NativeAllocHolder_FUN_106e27f0 : NativeAllocBase_thunk_FUN_106e4f80 { void *f4;
NativeAllocHolder_FUN_106e27f0(void *param_2); };
struct NativeAllocHolder_FUN_10726ca0 : NativeAllocBase_thunk_FUN_1072ae00 { void *f4;
NativeAllocHolder_FUN_10726ca0(void *param_2); };
struct NativeAllocHolder_FUN_10829d10 : NativeAllocBase_thunk_FUN_1082b4a0 { void *f4;
NativeAllocHolder_FUN_10829d10(void *param_2); };
struct NativeAllocHolder_FUN_1098ef60 : NativeAllocBase_thunk_FUN_109901d0 { void *f4;
NativeAllocHolder_FUN_1098ef60(void *param_2); };
struct NativeAllocHolder_FUN_10af56e0 : NativeAllocBase_thunk_FUN_10af6910 { void *f4;
NativeAllocHolder_FUN_10af56e0(void *param_2); };
struct NativeAllocHolder_FUN_10af5760 : NativeAllocBase_thunk_FUN_10af6930 { void *f4;
NativeAllocHolder_FUN_10af5760(void *param_2); };
struct NativeAllocHolder_FUN_10b04170 : NativeAllocBase_thunk_FUN_10b04d80 { void *f4;
NativeAllocHolder_FUN_10b04170(void *param_2); };
struct NativeAllocHolder_FUN_10b5b4c0 : NativeAllocBase_thunk_FUN_10b5da30 { void *f4;
NativeAllocHolder_FUN_10b5b4c0(void *param_2); };
struct NativeAllocHolder_FUN_10ba5310 : NativeAllocBase_thunk_FUN_10ba6c30 { void *f4;
NativeAllocHolder_FUN_10ba5310(void *param_2); };
struct NativeAllocHolder_FUN_10ba5390 : NativeAllocBase_thunk_FUN_10ba6c50 { void *f4;
NativeAllocHolder_FUN_10ba5390(void *param_2); };
struct NativeAllocHolder_FUN_10bb5350 : NativeAllocBase_thunk_FUN_10bb58d0 { void *f4;
NativeAllocHolder_FUN_10bb5350(void *param_2); };
struct NativeAllocHolder_FUN_10bc0100 : NativeAllocBase_thunk_FUN_10bc0390 { void *f4;
NativeAllocHolder_FUN_10bc0100(void *param_2); };
struct NativeAllocHolder_FUN_10bd3750 : NativeAllocBase_thunk_FUN_10bd6260 { void *f4;
NativeAllocHolder_FUN_10bd3750(void *param_2); };
struct NativeAllocHolder_FUN_10bd37d0 : NativeAllocBase_thunk_FUN_10bd6280 { void *f4;
NativeAllocHolder_FUN_10bd37d0(void *param_2); };
struct NativeAllocHolder_FUN_10bd3850 : NativeAllocBase_thunk_FUN_10bd62a0 { void *f4;
NativeAllocHolder_FUN_10bd3850(void *param_2); };
struct NativeAllocHolder_FUN_10bd38d0 : NativeAllocBase_thunk_FUN_10bd62c0 { void *f4;
NativeAllocHolder_FUN_10bd38d0(void *param_2); };
struct NativeAllocHolder_FUN_10bd3950 : NativeAllocBase_thunk_FUN_10bd62e0 { void *f4;
NativeAllocHolder_FUN_10bd3950(void *param_2); };
struct NativeAllocHolder_FUN_10bd39d0 : NativeAllocBase_thunk_FUN_10bd6300 { void *f4;
NativeAllocHolder_FUN_10bd39d0(void *param_2); };
struct NativeAllocHolder_FUN_10bd3a50 : NativeAllocBase_thunk_FUN_10bd6320 { void *f4;
NativeAllocHolder_FUN_10bd3a50(void *param_2); };
struct NativeAllocHolder_FUN_10bd3ad0 : NativeAllocBase_thunk_FUN_10bd6340 { void *f4;
NativeAllocHolder_FUN_10bd3ad0(void *param_2); };
struct NativeAllocHolder_FUN_10bd3b50 : NativeAllocBase_thunk_FUN_10bd6360 { void *f4;
NativeAllocHolder_FUN_10bd3b50(void *param_2); };
struct NativeAllocHolder_FUN_10c5eb40 : NativeAllocBase_thunk_FUN_10c5f930 { void *f4;
NativeAllocHolder_FUN_10c5eb40(void *param_2); };
struct NativeAllocHolder_FUN_10cb8f90 : NativeAllocBase_thunk_FUN_10cb9340 { void *f4;
NativeAllocHolder_FUN_10cb8f90(void *param_2); };
struct NativeAllocHolder_FUN_10d26370 : NativeAllocBase_thunk_FUN_10d27420 { void *f4;
NativeAllocHolder_FUN_10d26370(void *param_2); };
struct NativeAllocHolder_FUN_10d68aa0 : NativeAllocBase_thunk_FUN_10d69760 { void *f4;
NativeAllocHolder_FUN_10d68aa0(void *param_2); };
struct NativeAllocHolder_FUN_10d9f590 : NativeAllocBase_thunk_FUN_10d9f950 { void *f4;
NativeAllocHolder_FUN_10d9f590(void *param_2); };
struct NativeAllocHolder_FUN_10db3130 : NativeAllocBase_thunk_FUN_10db3250 { void *f4;
NativeAllocHolder_FUN_10db3130(void *param_2); };
struct NativeAllocHolder_FUN_10db31b0 : NativeAllocBase_thunk_FUN_10db3270 { void *f4;
NativeAllocHolder_FUN_10db31b0(void *param_2); };
struct NativeAllocHolder_FUN_10dd72e0 : NativeAllocBase_thunk_FUN_10dd7ec0 { void *f4;
NativeAllocHolder_FUN_10dd72e0(void *param_2); };
struct NativeAllocHolder_FUN_10dd7360 : NativeAllocBase_thunk_FUN_10dd7ee0 { void *f4;
NativeAllocHolder_FUN_10dd7360(void *param_2); };
struct NativeAllocHolder_FUN_10dee300 : NativeAllocBase_thunk_FUN_10deef50 { void *f4;
NativeAllocHolder_FUN_10dee300(void *param_2); };
struct NativeAllocHolder_FUN_10df4f60 : NativeAllocBase_thunk_FUN_10deef70 { void *f4;
NativeAllocHolder_FUN_10df4f60(void *param_2); };
struct NativeAllocHolder_FUN_10e0bf90 : NativeAllocBase_thunk_FUN_10e0c410 { void *f4;
NativeAllocHolder_FUN_10e0bf90(void *param_2); };
struct NativeAllocHolder_FUN_10e0c010 : NativeAllocBase_thunk_FUN_10e0c430 { void *f4;
NativeAllocHolder_FUN_10e0c010(void *param_2); };
struct NativeAllocHolder_FUN_10e5c060 : NativeAllocBase_thunk_FUN_10e5e300 { void *f4;
NativeAllocHolder_FUN_10e5c060(void *param_2); };
struct NativeAllocHolder_FUN_10eb6130 : NativeAllocBase_thunk_FUN_10eb66d0 { void *f4;
NativeAllocHolder_FUN_10eb6130(void *param_2); };
struct NativeAllocHolder_FUN_10eb61b0 : NativeAllocBase_thunk_FUN_10eb66f0 { void *f4;
NativeAllocHolder_FUN_10eb61b0(void *param_2); };
struct NativeAllocHolder_FUN_10eb6230 : NativeAllocBase_thunk_FUN_10eb6710 { void *f4;
NativeAllocHolder_FUN_10eb6230(void *param_2); };
struct NativeAllocHolder_FUN_10ed0a10 : NativeAllocBase_thunk_FUN_10ed0c50 { void *f4;
NativeAllocHolder_FUN_10ed0a10(void *param_2); };
struct NativeAllocHolder_FUN_10eedb00 : NativeAllocBase_thunk_FUN_10eedbb0 { void *f4;
NativeAllocHolder_FUN_10eedb00(void *param_2); };
struct NativeAllocHolder_FUN_10eef110 : NativeAllocBase_thunk_FUN_10eef240 { void *f4;
NativeAllocHolder_FUN_10eef110(void *param_2); };
struct NativeAllocHolder_FUN_10ef4e80 : NativeAllocBase_thunk_FUN_10ef5120 { void *f4;
NativeAllocHolder_FUN_10ef4e80(void *param_2); };
struct NativeAllocHolder_FUN_10ef9d30 : NativeAllocBase_thunk_FUN_10ef9de0 { void *f4;
NativeAllocHolder_FUN_10ef9d30(void *param_2); };
struct NativeAllocHolder_FUN_10f02250 : NativeAllocBase_thunk_FUN_10f02dd0 { void *f4;
NativeAllocHolder_FUN_10f02250(void *param_2); };
struct NativeAllocHolder_FUN_10f022d0 : NativeAllocBase_thunk_FUN_10eab2a0 { void *f4;
NativeAllocHolder_FUN_10f022d0(void *param_2); };
struct NativeAllocHolder_FUN_10f16f90 : NativeAllocBase_thunk_FUN_10f174e0 { void *f4;
NativeAllocHolder_FUN_10f16f90(void *param_2); };
struct NativeAllocHolder_FUN_10f1bfc0 : NativeAllocBase_thunk_FUN_10f1c470 { void *f4;
NativeAllocHolder_FUN_10f1bfc0(void *param_2); };
struct NativeAllocHolder_FUN_10f1c040 : NativeAllocBase_thunk_FUN_10f1c490 { void *f4;
NativeAllocHolder_FUN_10f1c040(void *param_2); };
struct NativeAllocHolder_FUN_10f1c0c0 : NativeAllocBase_thunk_FUN_10f1c4b0 { void *f4;
NativeAllocHolder_FUN_10f1c0c0(void *param_2); };
struct NativeAllocHolder_FUN_10f24b20 : NativeAllocBase_thunk_FUN_10f25b40 { void *f4;
NativeAllocHolder_FUN_10f24b20(void *param_2); };
struct NativeAllocHolder_FUN_10f37ea0 : NativeAllocBase_thunk_FUN_10f38170 { void *f4;
NativeAllocHolder_FUN_10f37ea0(void *param_2); };
struct NativeAllocHolder_FUN_10f37f20 : NativeAllocBase_thunk_FUN_10f38190 { void *f4;
NativeAllocHolder_FUN_10f37f20(void *param_2); };
struct NativeAllocHolder_FUN_10f6b9e0 : NativeAllocBase_thunk_FUN_10f6bc80 { void *f4;
NativeAllocHolder_FUN_10f6b9e0(void *param_2); };
struct NativeAllocHolder_FUN_10f7c710 : NativeAllocBase_thunk_FUN_10f7db60 { void *f4;
NativeAllocHolder_FUN_10f7c710(void *param_2); };
struct NativeAllocHolder_FUN_10f9a790 : NativeAllocBase_thunk_FUN_10f9b030 { void *f4;
NativeAllocHolder_FUN_10f9a790(void *param_2); };
struct NativeAllocHolder_FUN_10f9a810 : NativeAllocBase_thunk_FUN_10f9b050 { void *f4;
NativeAllocHolder_FUN_10f9a810(void *param_2); };
struct NativeAllocHolder_FUN_10fc1320 : NativeAllocBase_thunk_FUN_10fc1d60 { void *f4;
NativeAllocHolder_FUN_10fc1320(void *param_2); };
struct NativeAllocHolder_FUN_10fec2e0 : NativeAllocBase_thunk_FUN_10fed720 { void *f4;
NativeAllocHolder_FUN_10fec2e0(void *param_2); };
struct NativeAllocHolder_FUN_110262f0 : NativeAllocBase_thunk_FUN_11027110 { void *f4;
NativeAllocHolder_FUN_110262f0(void *param_2); };
struct NativeAllocHolder_FUN_11076d30 : NativeAllocBase_thunk_FUN_11078bc0 { void *f4;
NativeAllocHolder_FUN_11076d30(void *param_2); };
struct NativeAllocHolder_FUN_11076db0 : NativeAllocBase_thunk_FUN_11078be0 { void *f4;
NativeAllocHolder_FUN_11076db0(void *param_2); };
struct NativeAllocHolder_FUN_11076e30 : NativeAllocBase_thunk_FUN_11078c00 { void *f4;
NativeAllocHolder_FUN_11076e30(void *param_2); };
struct NativeAllocHolder_FUN_11076eb0 : NativeAllocBase_thunk_FUN_11078c20 { void *f4;
NativeAllocHolder_FUN_11076eb0(void *param_2); };
struct NativeAllocHolder_FUN_11098f50 : NativeAllocBase_thunk_FUN_110991c0 { void *f4;
NativeAllocHolder_FUN_11098f50(void *param_2); };
struct NativeAllocHolder_FUN_110c6600 : NativeAllocBase_thunk_FUN_110c79f0 { void *f4;
NativeAllocHolder_FUN_110c6600(void *param_2); };
struct NativeAllocHolder_FUN_110ee5a0 : NativeAllocBase_thunk_FUN_110f0440 { void *f4;
NativeAllocHolder_FUN_110ee5a0(void *param_2); };
struct NativeAllocHolder_FUN_111099f0 : NativeAllocBase_thunk_FUN_1110b2f0 { void *f4;
NativeAllocHolder_FUN_111099f0(void *param_2); };
struct NativeAllocHolder_FUN_1117e280 : NativeAllocBase_thunk_FUN_1117fa40 { void *f4;
NativeAllocHolder_FUN_1117e280(void *param_2); };
struct NativeAllocHolder_FUN_1117e300 : NativeAllocBase_thunk_FUN_1117fa60 { void *f4;
NativeAllocHolder_FUN_1117e300(void *param_2); };
struct NativeAllocHolder_FUN_1117e380 : NativeAllocBase_thunk_FUN_1117fa80 { void *f4;
NativeAllocHolder_FUN_1117e380(void *param_2); };
struct NativeAllocHolder_FUN_1117e400 : NativeAllocBase_thunk_FUN_1117faa0 { void *f4;
NativeAllocHolder_FUN_1117e400(void *param_2); };
struct NativeAllocHolder_FUN_1117e480 : NativeAllocBase_thunk_FUN_1117fac0 { void *f4;
NativeAllocHolder_FUN_1117e480(void *param_2); };
struct NativeAllocHolder_FUN_1118d950 : NativeAllocBase_thunk_FUN_1118dcc0 { void *f4;
NativeAllocHolder_FUN_1118d950(void *param_2); };
struct NativeAllocHolder_FUN_111c3030 : NativeAllocBase_thunk_FUN_111c3960 { void *f4;
NativeAllocHolder_FUN_111c3030(void *param_2); };
struct NativeAllocHolder_FUN_111c9ff0 : NativeAllocBase_thunk_FUN_111d2f20 { void *f4;
NativeAllocHolder_FUN_111c9ff0(void *param_2); };
struct NativeAllocHolder_FUN_1126ddf0 : NativeAllocBase_thunk_FUN_1126e270 { void *f4;
NativeAllocHolder_FUN_1126ddf0(void *param_2); };
struct NativeAllocHolder_FUN_11294860 : NativeAllocBase_thunk_FUN_11294ae0 { void *f4;
NativeAllocHolder_FUN_11294860(void *param_2); };

extern int operator_new(...);

// Reference entry 10683170; body size 93 bytes.
#line 1 "ENTRY_10683170"
NativeAllocHolder_FUN_10683170::NativeAllocHolder_FUN_10683170(void *param_2) {
this->NativeAllocBase_thunk_FUN_10683f60::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 106831f0; body size 93 bytes.
#line 1 "ENTRY_106831f0"
NativeAllocHolder_FUN_106831f0::NativeAllocHolder_FUN_106831f0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10683f80::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 106a3b50; body size 93 bytes.
#line 1 "ENTRY_106a3b50"
NativeAllocHolder_FUN_106a3b50::NativeAllocHolder_FUN_106a3b50(void *param_2) {
this->NativeAllocBase_thunk_FUN_1027f780::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 106b09f0; body size 93 bytes.
#line 1 "ENTRY_106b09f0"
NativeAllocHolder_FUN_106b09f0::NativeAllocHolder_FUN_106b09f0(void *param_2) {
this->NativeAllocBase_thunk_FUN_106b3630::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 106b0a70; body size 93 bytes.
#line 1 "ENTRY_106b0a70"
NativeAllocHolder_FUN_106b0a70::NativeAllocHolder_FUN_106b0a70(void *param_2) {
this->NativeAllocBase_thunk_FUN_106b3650::f0 = param_2;
f4 = 0;
f4 = operator_new(0x28);
}

// Reference entry 106d2580; body size 93 bytes.
#line 1 "ENTRY_106d2580"
NativeAllocHolder_FUN_106d2580::NativeAllocHolder_FUN_106d2580(void *param_2) {
this->NativeAllocBase_thunk_FUN_106d2b10::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 106d9d00; body size 93 bytes.
#line 1 "ENTRY_106d9d00"
NativeAllocHolder_FUN_106d9d00::NativeAllocHolder_FUN_106d9d00(void *param_2) {
this->NativeAllocBase_thunk_FUN_106da2e0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 106d9d80; body size 93 bytes.
#line 1 "ENTRY_106d9d80"
NativeAllocHolder_FUN_106d9d80::NativeAllocHolder_FUN_106d9d80(void *param_2) {
this->NativeAllocBase_thunk_FUN_106da300::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 106ddec0; body size 93 bytes.
#line 1 "ENTRY_106ddec0"
NativeAllocHolder_FUN_106ddec0::NativeAllocHolder_FUN_106ddec0(void *param_2) {
this->NativeAllocBase_thunk_FUN_106de510::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 106ddf40; body size 93 bytes.
#line 1 "ENTRY_106ddf40"
NativeAllocHolder_FUN_106ddf40::NativeAllocHolder_FUN_106ddf40(void *param_2) {
this->NativeAllocBase_thunk_FUN_106de530::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 106e27f0; body size 93 bytes.
#line 1 "ENTRY_106e27f0"
NativeAllocHolder_FUN_106e27f0::NativeAllocHolder_FUN_106e27f0(void *param_2) {
this->NativeAllocBase_thunk_FUN_106e4f80::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 10726ca0; body size 93 bytes.
#line 1 "ENTRY_10726ca0"
NativeAllocHolder_FUN_10726ca0::NativeAllocHolder_FUN_10726ca0(void *param_2) {
this->NativeAllocBase_thunk_FUN_1072ae00::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10829d10; body size 93 bytes.
#line 1 "ENTRY_10829d10"
NativeAllocHolder_FUN_10829d10::NativeAllocHolder_FUN_10829d10(void *param_2) {
this->NativeAllocBase_thunk_FUN_1082b4a0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 1098ef60; body size 93 bytes.
#line 1 "ENTRY_1098ef60"
NativeAllocHolder_FUN_1098ef60::NativeAllocHolder_FUN_1098ef60(void *param_2) {
this->NativeAllocBase_thunk_FUN_109901d0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10af56e0; body size 93 bytes.
#line 1 "ENTRY_10af56e0"
NativeAllocHolder_FUN_10af56e0::NativeAllocHolder_FUN_10af56e0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10af6910::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10af5760; body size 93 bytes.
#line 1 "ENTRY_10af5760"
NativeAllocHolder_FUN_10af5760::NativeAllocHolder_FUN_10af5760(void *param_2) {
this->NativeAllocBase_thunk_FUN_10af6930::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10b04170; body size 93 bytes.
#line 1 "ENTRY_10b04170"
NativeAllocHolder_FUN_10b04170::NativeAllocHolder_FUN_10b04170(void *param_2) {
this->NativeAllocBase_thunk_FUN_10b04d80::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 10b5b4c0; body size 93 bytes.
#line 1 "ENTRY_10b5b4c0"
NativeAllocHolder_FUN_10b5b4c0::NativeAllocHolder_FUN_10b5b4c0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10b5da30::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10ba5310; body size 93 bytes.
#line 1 "ENTRY_10ba5310"
NativeAllocHolder_FUN_10ba5310::NativeAllocHolder_FUN_10ba5310(void *param_2) {
this->NativeAllocBase_thunk_FUN_10ba6c30::f0 = param_2;
f4 = 0;
f4 = operator_new(0x2c);
}

// Reference entry 10ba5390; body size 93 bytes.
#line 1 "ENTRY_10ba5390"
NativeAllocHolder_FUN_10ba5390::NativeAllocHolder_FUN_10ba5390(void *param_2) {
this->NativeAllocBase_thunk_FUN_10ba6c50::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10bb5350; body size 93 bytes.
#line 1 "ENTRY_10bb5350"
NativeAllocHolder_FUN_10bb5350::NativeAllocHolder_FUN_10bb5350(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bb58d0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10bc0100; body size 93 bytes.
#line 1 "ENTRY_10bc0100"
NativeAllocHolder_FUN_10bc0100::NativeAllocHolder_FUN_10bc0100(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bc0390::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10bd3750; body size 93 bytes.
#line 1 "ENTRY_10bd3750"
NativeAllocHolder_FUN_10bd3750::NativeAllocHolder_FUN_10bd3750(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd6260::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10bd37d0; body size 93 bytes.
#line 1 "ENTRY_10bd37d0"
NativeAllocHolder_FUN_10bd37d0::NativeAllocHolder_FUN_10bd37d0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd6280::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10bd3850; body size 93 bytes.
#line 1 "ENTRY_10bd3850"
NativeAllocHolder_FUN_10bd3850::NativeAllocHolder_FUN_10bd3850(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd62a0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10bd38d0; body size 93 bytes.
#line 1 "ENTRY_10bd38d0"
NativeAllocHolder_FUN_10bd38d0::NativeAllocHolder_FUN_10bd38d0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd62c0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10bd3950; body size 93 bytes.
#line 1 "ENTRY_10bd3950"
NativeAllocHolder_FUN_10bd3950::NativeAllocHolder_FUN_10bd3950(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd62e0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x30);
}

// Reference entry 10bd39d0; body size 93 bytes.
#line 1 "ENTRY_10bd39d0"
NativeAllocHolder_FUN_10bd39d0::NativeAllocHolder_FUN_10bd39d0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd6300::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10bd3a50; body size 93 bytes.
#line 1 "ENTRY_10bd3a50"
NativeAllocHolder_FUN_10bd3a50::NativeAllocHolder_FUN_10bd3a50(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd6320::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10bd3ad0; body size 93 bytes.
#line 1 "ENTRY_10bd3ad0"
NativeAllocHolder_FUN_10bd3ad0::NativeAllocHolder_FUN_10bd3ad0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd6340::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10bd3b50; body size 93 bytes.
#line 1 "ENTRY_10bd3b50"
NativeAllocHolder_FUN_10bd3b50::NativeAllocHolder_FUN_10bd3b50(void *param_2) {
this->NativeAllocBase_thunk_FUN_10bd6360::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 10c5eb40; body size 93 bytes.
#line 1 "ENTRY_10c5eb40"
NativeAllocHolder_FUN_10c5eb40::NativeAllocHolder_FUN_10c5eb40(void *param_2) {
this->NativeAllocBase_thunk_FUN_10c5f930::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10cb8f90; body size 93 bytes.
#line 1 "ENTRY_10cb8f90"
NativeAllocHolder_FUN_10cb8f90::NativeAllocHolder_FUN_10cb8f90(void *param_2) {
this->NativeAllocBase_thunk_FUN_10cb9340::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10d26370; body size 93 bytes.
#line 1 "ENTRY_10d26370"
NativeAllocHolder_FUN_10d26370::NativeAllocHolder_FUN_10d26370(void *param_2) {
this->NativeAllocBase_thunk_FUN_10d27420::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 10d68aa0; body size 93 bytes.
#line 1 "ENTRY_10d68aa0"
NativeAllocHolder_FUN_10d68aa0::NativeAllocHolder_FUN_10d68aa0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10d69760::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10d9f590; body size 93 bytes.
#line 1 "ENTRY_10d9f590"
NativeAllocHolder_FUN_10d9f590::NativeAllocHolder_FUN_10d9f590(void *param_2) {
this->NativeAllocBase_thunk_FUN_10d9f950::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10db3130; body size 93 bytes.
#line 1 "ENTRY_10db3130"
NativeAllocHolder_FUN_10db3130::NativeAllocHolder_FUN_10db3130(void *param_2) {
this->NativeAllocBase_thunk_FUN_10db3250::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10db31b0; body size 93 bytes.
#line 1 "ENTRY_10db31b0"
NativeAllocHolder_FUN_10db31b0::NativeAllocHolder_FUN_10db31b0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10db3270::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10dd72e0; body size 93 bytes.
#line 1 "ENTRY_10dd72e0"
NativeAllocHolder_FUN_10dd72e0::NativeAllocHolder_FUN_10dd72e0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10dd7ec0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 10dd7360; body size 93 bytes.
#line 1 "ENTRY_10dd7360"
NativeAllocHolder_FUN_10dd7360::NativeAllocHolder_FUN_10dd7360(void *param_2) {
this->NativeAllocBase_thunk_FUN_10dd7ee0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 10dee300; body size 93 bytes.
#line 1 "ENTRY_10dee300"
NativeAllocHolder_FUN_10dee300::NativeAllocHolder_FUN_10dee300(void *param_2) {
this->NativeAllocBase_thunk_FUN_10deef50::f0 = param_2;
f4 = 0;
f4 = operator_new(0x2c);
}

// Reference entry 10df4f60; body size 93 bytes.
#line 1 "ENTRY_10df4f60"
NativeAllocHolder_FUN_10df4f60::NativeAllocHolder_FUN_10df4f60(void *param_2) {
this->NativeAllocBase_thunk_FUN_10deef70::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10e0bf90; body size 93 bytes.
#line 1 "ENTRY_10e0bf90"
NativeAllocHolder_FUN_10e0bf90::NativeAllocHolder_FUN_10e0bf90(void *param_2) {
this->NativeAllocBase_thunk_FUN_10e0c410::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10e0c010; body size 93 bytes.
#line 1 "ENTRY_10e0c010"
NativeAllocHolder_FUN_10e0c010::NativeAllocHolder_FUN_10e0c010(void *param_2) {
this->NativeAllocBase_thunk_FUN_10e0c430::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10e5c060; body size 93 bytes.
#line 1 "ENTRY_10e5c060"
NativeAllocHolder_FUN_10e5c060::NativeAllocHolder_FUN_10e5c060(void *param_2) {
this->NativeAllocBase_thunk_FUN_10e5e300::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10eb6130; body size 93 bytes.
#line 1 "ENTRY_10eb6130"
NativeAllocHolder_FUN_10eb6130::NativeAllocHolder_FUN_10eb6130(void *param_2) {
this->NativeAllocBase_thunk_FUN_10eb66d0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10eb61b0; body size 93 bytes.
#line 1 "ENTRY_10eb61b0"
NativeAllocHolder_FUN_10eb61b0::NativeAllocHolder_FUN_10eb61b0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10eb66f0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 10eb6230; body size 93 bytes.
#line 1 "ENTRY_10eb6230"
NativeAllocHolder_FUN_10eb6230::NativeAllocHolder_FUN_10eb6230(void *param_2) {
this->NativeAllocBase_thunk_FUN_10eb6710::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10ed0a10; body size 93 bytes.
#line 1 "ENTRY_10ed0a10"
NativeAllocHolder_FUN_10ed0a10::NativeAllocHolder_FUN_10ed0a10(void *param_2) {
this->NativeAllocBase_thunk_FUN_10ed0c50::f0 = param_2;
f4 = 0;
f4 = operator_new(0x30);
}

// Reference entry 10eedb00; body size 93 bytes.
#line 1 "ENTRY_10eedb00"
NativeAllocHolder_FUN_10eedb00::NativeAllocHolder_FUN_10eedb00(void *param_2) {
this->NativeAllocBase_thunk_FUN_10eedbb0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10eef110; body size 93 bytes.
#line 1 "ENTRY_10eef110"
NativeAllocHolder_FUN_10eef110::NativeAllocHolder_FUN_10eef110(void *param_2) {
this->NativeAllocBase_thunk_FUN_10eef240::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10ef4e80; body size 93 bytes.
#line 1 "ENTRY_10ef4e80"
NativeAllocHolder_FUN_10ef4e80::NativeAllocHolder_FUN_10ef4e80(void *param_2) {
this->NativeAllocBase_thunk_FUN_10ef5120::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10ef9d30; body size 93 bytes.
#line 1 "ENTRY_10ef9d30"
NativeAllocHolder_FUN_10ef9d30::NativeAllocHolder_FUN_10ef9d30(void *param_2) {
this->NativeAllocBase_thunk_FUN_10ef9de0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10f02250; body size 93 bytes.
#line 1 "ENTRY_10f02250"
NativeAllocHolder_FUN_10f02250::NativeAllocHolder_FUN_10f02250(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f02dd0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x74);
}

// Reference entry 10f022d0; body size 93 bytes.
#line 1 "ENTRY_10f022d0"
NativeAllocHolder_FUN_10f022d0::NativeAllocHolder_FUN_10f022d0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10eab2a0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 10f16f90; body size 93 bytes.
#line 1 "ENTRY_10f16f90"
NativeAllocHolder_FUN_10f16f90::NativeAllocHolder_FUN_10f16f90(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f174e0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x30);
}

// Reference entry 10f1bfc0; body size 93 bytes.
#line 1 "ENTRY_10f1bfc0"
NativeAllocHolder_FUN_10f1bfc0::NativeAllocHolder_FUN_10f1bfc0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f1c470::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 10f1c040; body size 93 bytes.
#line 1 "ENTRY_10f1c040"
NativeAllocHolder_FUN_10f1c040::NativeAllocHolder_FUN_10f1c040(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f1c490::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10f1c0c0; body size 93 bytes.
#line 1 "ENTRY_10f1c0c0"
NativeAllocHolder_FUN_10f1c0c0::NativeAllocHolder_FUN_10f1c0c0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f1c4b0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10f24b20; body size 93 bytes.
#line 1 "ENTRY_10f24b20"
NativeAllocHolder_FUN_10f24b20::NativeAllocHolder_FUN_10f24b20(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f25b40::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10f37ea0; body size 93 bytes.
#line 1 "ENTRY_10f37ea0"
NativeAllocHolder_FUN_10f37ea0::NativeAllocHolder_FUN_10f37ea0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f38170::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10f37f20; body size 93 bytes.
#line 1 "ENTRY_10f37f20"
NativeAllocHolder_FUN_10f37f20::NativeAllocHolder_FUN_10f37f20(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f38190::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10f6b9e0; body size 93 bytes.
#line 1 "ENTRY_10f6b9e0"
NativeAllocHolder_FUN_10f6b9e0::NativeAllocHolder_FUN_10f6b9e0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f6bc80::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10f7c710; body size 93 bytes.
#line 1 "ENTRY_10f7c710"
NativeAllocHolder_FUN_10f7c710::NativeAllocHolder_FUN_10f7c710(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f7db60::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 10f9a790; body size 93 bytes.
#line 1 "ENTRY_10f9a790"
NativeAllocHolder_FUN_10f9a790::NativeAllocHolder_FUN_10f9a790(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f9b030::f0 = param_2;
f4 = 0;
f4 = operator_new(0x24);
}

// Reference entry 10f9a810; body size 93 bytes.
#line 1 "ENTRY_10f9a810"
NativeAllocHolder_FUN_10f9a810::NativeAllocHolder_FUN_10f9a810(void *param_2) {
this->NativeAllocBase_thunk_FUN_10f9b050::f0 = param_2;
f4 = 0;
f4 = operator_new(0x1c);
}

// Reference entry 10fc1320; body size 93 bytes.
#line 1 "ENTRY_10fc1320"
NativeAllocHolder_FUN_10fc1320::NativeAllocHolder_FUN_10fc1320(void *param_2) {
this->NativeAllocBase_thunk_FUN_10fc1d60::f0 = param_2;
f4 = 0;
f4 = operator_new(0x24);
}

// Reference entry 10fec2e0; body size 93 bytes.
#line 1 "ENTRY_10fec2e0"
NativeAllocHolder_FUN_10fec2e0::NativeAllocHolder_FUN_10fec2e0(void *param_2) {
this->NativeAllocBase_thunk_FUN_10fed720::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 110262f0; body size 93 bytes.
#line 1 "ENTRY_110262f0"
NativeAllocHolder_FUN_110262f0::NativeAllocHolder_FUN_110262f0(void *param_2) {
this->NativeAllocBase_thunk_FUN_11027110::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 11076d30; body size 93 bytes.
#line 1 "ENTRY_11076d30"
NativeAllocHolder_FUN_11076d30::NativeAllocHolder_FUN_11076d30(void *param_2) {
this->NativeAllocBase_thunk_FUN_11078bc0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 11076db0; body size 93 bytes.
#line 1 "ENTRY_11076db0"
NativeAllocHolder_FUN_11076db0::NativeAllocHolder_FUN_11076db0(void *param_2) {
this->NativeAllocBase_thunk_FUN_11078be0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 11076e30; body size 93 bytes.
#line 1 "ENTRY_11076e30"
NativeAllocHolder_FUN_11076e30::NativeAllocHolder_FUN_11076e30(void *param_2) {
this->NativeAllocBase_thunk_FUN_11078c00::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 11076eb0; body size 93 bytes.
#line 1 "ENTRY_11076eb0"
NativeAllocHolder_FUN_11076eb0::NativeAllocHolder_FUN_11076eb0(void *param_2) {
this->NativeAllocBase_thunk_FUN_11078c20::f0 = param_2;
f4 = 0;
f4 = operator_new(0x14);
}

// Reference entry 11098f50; body size 93 bytes.
#line 1 "ENTRY_11098f50"
NativeAllocHolder_FUN_11098f50::NativeAllocHolder_FUN_11098f50(void *param_2) {
this->NativeAllocBase_thunk_FUN_110991c0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 110c6600; body size 93 bytes.
#line 1 "ENTRY_110c6600"
NativeAllocHolder_FUN_110c6600::NativeAllocHolder_FUN_110c6600(void *param_2) {
this->NativeAllocBase_thunk_FUN_110c79f0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x50);
}

// Reference entry 110ee5a0; body size 93 bytes.
#line 1 "ENTRY_110ee5a0"
NativeAllocHolder_FUN_110ee5a0::NativeAllocHolder_FUN_110ee5a0(void *param_2) {
this->NativeAllocBase_thunk_FUN_110f0440::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 111099f0; body size 93 bytes.
#line 1 "ENTRY_111099f0"
NativeAllocHolder_FUN_111099f0::NativeAllocHolder_FUN_111099f0(void *param_2) {
this->NativeAllocBase_thunk_FUN_1110b2f0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x20);
}

// Reference entry 1117e280; body size 93 bytes.
#line 1 "ENTRY_1117e280"
NativeAllocHolder_FUN_1117e280::NativeAllocHolder_FUN_1117e280(void *param_2) {
this->NativeAllocBase_thunk_FUN_1117fa40::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 1117e300; body size 93 bytes.
#line 1 "ENTRY_1117e300"
NativeAllocHolder_FUN_1117e300::NativeAllocHolder_FUN_1117e300(void *param_2) {
this->NativeAllocBase_thunk_FUN_1117fa60::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 1117e380; body size 93 bytes.
#line 1 "ENTRY_1117e380"
NativeAllocHolder_FUN_1117e380::NativeAllocHolder_FUN_1117e380(void *param_2) {
this->NativeAllocBase_thunk_FUN_1117fa80::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 1117e400; body size 93 bytes.
#line 1 "ENTRY_1117e400"
NativeAllocHolder_FUN_1117e400::NativeAllocHolder_FUN_1117e400(void *param_2) {
this->NativeAllocBase_thunk_FUN_1117faa0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}

// Reference entry 1117e480; body size 93 bytes.
#line 1 "ENTRY_1117e480"
NativeAllocHolder_FUN_1117e480::NativeAllocHolder_FUN_1117e480(void *param_2) {
this->NativeAllocBase_thunk_FUN_1117fac0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x24);
}

// Reference entry 1118d950; body size 93 bytes.
#line 1 "ENTRY_1118d950"
NativeAllocHolder_FUN_1118d950::NativeAllocHolder_FUN_1118d950(void *param_2) {
this->NativeAllocBase_thunk_FUN_1118dcc0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x24);
}

// Reference entry 111c3030; body size 93 bytes.
#line 1 "ENTRY_111c3030"
NativeAllocHolder_FUN_111c3030::NativeAllocHolder_FUN_111c3030(void *param_2) {
this->NativeAllocBase_thunk_FUN_111c3960::f0 = param_2;
f4 = 0;
f4 = operator_new(0x2c);
}

// Reference entry 111c9ff0; body size 93 bytes.
#line 1 "ENTRY_111c9ff0"
NativeAllocHolder_FUN_111c9ff0::NativeAllocHolder_FUN_111c9ff0(void *param_2) {
this->NativeAllocBase_thunk_FUN_111d2f20::f0 = param_2;
f4 = 0;
f4 = operator_new(0x44);
}

// Reference entry 1126ddf0; body size 93 bytes.
#line 1 "ENTRY_1126ddf0"
NativeAllocHolder_FUN_1126ddf0::NativeAllocHolder_FUN_1126ddf0(void *param_2) {
this->NativeAllocBase_thunk_FUN_1126e270::f0 = param_2;
f4 = 0;
f4 = operator_new(0x38);
}

// Reference entry 11294860; body size 93 bytes.
#line 1 "ENTRY_11294860"
NativeAllocHolder_FUN_11294860::NativeAllocHolder_FUN_11294860(void *param_2) {
this->NativeAllocBase_thunk_FUN_11294ae0::f0 = param_2;
f4 = 0;
f4 = operator_new(0x18);
}
