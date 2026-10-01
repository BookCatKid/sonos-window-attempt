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
extern undefined4 DAT_1188d58c;
extern undefined4 DAT_11936848;
extern undefined4 DAT_11936850;
extern undefined4 DAT_11936860;
extern undefined4 DAT_11936870;
extern undefined4 DAT_11936880;
extern undefined4 DAT_11936898;
extern undefined4 DAT_119368a8;
extern undefined4 DAT_119368b8;
extern undefined4 DAT_119368d0;
extern undefined4 DAT_119368f4;
extern undefined4 DAT_11936904;
extern undefined4 DAT_11936914;
extern undefined4 DAT_11936924;
extern undefined4 DAT_11936938;
extern undefined4 DAT_119369ec;
extern undefined4 DAT_11936a6c;
extern undefined4 DAT_11936a84;
extern undefined4 DAT_11936ab8;
extern undefined4 DAT_11936ae0;
extern undefined4 DAT_11936af4;
extern undefined4 DAT_11936b1c;
extern undefined4 DAT_11936b44;
extern undefined4 DAT_11936bbc;
extern undefined4 DAT_11936bcc;
extern undefined4 DAT_11936bd8;
extern undefined4 DAT_11936be8;
extern undefined4 DAT_11936bfc;
extern undefined4 DAT_11936c0c;
extern undefined4 DAT_11936c20;
extern undefined4 DAT_11936c38;
extern undefined4 DAT_11936d08;
extern undefined4 DAT_11936d5c;
extern undefined4 DAT_11936d84;
extern undefined4 DAT_11936dac;
extern undefined4 DAT_11936dc8;
extern undefined4 DAT_11936de0;
extern undefined4 DAT_11936dfc;
extern undefined4 DAT_11936e18;
extern undefined4 DAT_11936e30;
extern undefined4 DAT_11936e44;
extern undefined4 DAT_11936e54;
extern undefined4 DAT_11936e6c;
extern undefined4 DAT_11936e90;
extern undefined4 DAT_11936ebc;
extern undefined4 DAT_11936ed4;
extern undefined4 DAT_11936ef0;
extern undefined4 DAT_11936f14;
extern undefined4 DAT_11936f38;
extern undefined4 DAT_11936f54;
extern undefined4 DAT_11936f70;
extern undefined4 DAT_11936fa0;
extern undefined4 DAT_11936fbc;
extern undefined4 DAT_11936ff0;
extern undefined4 DAT_11937010;
extern undefined4 DAT_11937040;
extern undefined4 DAT_11937064;
extern undefined4 DAT_11937094;
extern undefined4 DAT_119370c0;
extern undefined4 DAT_119370ec;
extern undefined4 DAT_11937114;
extern undefined4 DAT_11937134;
extern undefined4 DAT_11937150;
extern undefined4 DAT_11937174;
extern undefined4 DAT_11937194;
extern undefined4 DAT_119371c0;
extern undefined4 DAT_119371e8;
extern undefined4 DAT_11937214;
extern undefined4 DAT_1193723c;
extern undefined4 DAT_11937260;
extern undefined4 DAT_11937280;
extern undefined4 DAT_119372a4;
extern undefined4 DAT_119372c4;
extern undefined4 DAT_119372e4;
extern undefined4 DAT_11937308;
extern undefined4 DAT_11937330;
extern undefined4 DAT_11937358;
extern undefined4 DAT_11937380;
extern undefined4 DAT_119373a8;
extern undefined4 DAT_119373d0;
extern undefined4 DAT_119373f8;
extern undefined4 DAT_1193741c;
extern undefined4 DAT_1193743c;
extern undefined4 DAT_11937464;
extern undefined4 DAT_11937488;
extern undefined4 DAT_1193749c;
extern undefined4 DAT_119374b8;
extern undefined4 DAT_119374d0;
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
struct NativeRegStr_thunk_FUN_1008c50b {
  unsigned int rep;
  __forceinline NativeRegStr_thunk_FUN_1008c50b(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }
  ~NativeRegStr_thunk_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); }
};
extern unsigned int DAT_1188d58c;
extern unsigned int DAT_11936848;
extern unsigned int DAT_11936850;
extern unsigned int DAT_11936860;
extern unsigned int DAT_11936870;
extern unsigned int DAT_11936880;
extern unsigned int DAT_11936898;
extern unsigned int DAT_119368a8;
extern unsigned int DAT_119368b8;
extern unsigned int DAT_119368d0;
extern unsigned int DAT_119368f4;
extern unsigned int DAT_11936904;
extern unsigned int DAT_11936914;
extern unsigned int DAT_11936924;
extern unsigned int DAT_11936938;
extern unsigned int DAT_119369ec;
extern unsigned int DAT_11936a6c;
extern unsigned int DAT_11936a84;
extern unsigned int DAT_11936ab8;
extern unsigned int DAT_11936ae0;
extern unsigned int DAT_11936af4;
extern unsigned int DAT_11936b1c;
extern unsigned int DAT_11936b44;
extern unsigned int DAT_11936bbc;
extern unsigned int DAT_11936bcc;
extern unsigned int DAT_11936bd8;
extern unsigned int DAT_11936be8;
extern unsigned int DAT_11936bfc;
extern unsigned int DAT_11936c0c;
extern unsigned int DAT_11936c20;
extern unsigned int DAT_11936c38;
extern unsigned int DAT_11936d08;
extern unsigned int DAT_11936d5c;
extern unsigned int DAT_11936d84;
extern unsigned int DAT_11936dac;
extern unsigned int DAT_11936dc8;
extern unsigned int DAT_11936de0;
extern unsigned int DAT_11936dfc;
extern unsigned int DAT_11936e18;
extern unsigned int DAT_11936e30;
extern unsigned int DAT_11936e44;
extern unsigned int DAT_11936e54;
extern unsigned int DAT_11936e6c;
extern unsigned int DAT_11936e90;
extern unsigned int DAT_11936ebc;
extern unsigned int DAT_11936ed4;
extern unsigned int DAT_11936ef0;
extern unsigned int DAT_11936f14;
extern unsigned int DAT_11936f38;
extern unsigned int DAT_11936f54;
extern unsigned int DAT_11936f70;
extern unsigned int DAT_11936fa0;
extern unsigned int DAT_11936fbc;
extern unsigned int DAT_11936ff0;
extern unsigned int DAT_11937010;
extern unsigned int DAT_11937040;
extern unsigned int DAT_11937064;
extern unsigned int DAT_11937094;
extern unsigned int DAT_119370c0;
extern unsigned int DAT_119370ec;
extern unsigned int DAT_11937114;
extern unsigned int DAT_11937134;
extern unsigned int DAT_11937150;
extern unsigned int DAT_11937174;
extern unsigned int DAT_11937194;
extern unsigned int DAT_119371c0;
extern unsigned int DAT_119371e8;
extern unsigned int DAT_11937214;
extern unsigned int DAT_1193723c;
extern unsigned int DAT_11937260;
extern unsigned int DAT_11937280;
extern unsigned int DAT_119372a4;
extern unsigned int DAT_119372c4;
extern unsigned int DAT_119372e4;
extern unsigned int DAT_11937308;
extern unsigned int DAT_11937330;
extern unsigned int DAT_11937358;
extern unsigned int DAT_11937380;
extern unsigned int DAT_119373a8;
extern unsigned int DAT_119373d0;
extern unsigned int DAT_119373f8;
extern unsigned int DAT_1193741c;
extern unsigned int DAT_1193743c;
extern unsigned int DAT_11937464;
extern unsigned int DAT_11937488;
extern unsigned int DAT_1193749c;
extern unsigned int DAT_119374b8;
extern unsigned int DAT_119374d0;
struct NativeRegCtor_FUN_10df5400 { NativeRegCtor_FUN_10df5400(); };
struct NativeRegCtor_FUN_10df54d0 { NativeRegCtor_FUN_10df54d0(); };
struct NativeRegCtor_FUN_10df5720 { NativeRegCtor_FUN_10df5720(); };
struct NativeRegCtor_FUN_10df57f0 { NativeRegCtor_FUN_10df57f0(); };
struct NativeRegCtor_FUN_10df59d0 { NativeRegCtor_FUN_10df59d0(); };
struct NativeRegCtor_FUN_10df5aa0 { NativeRegCtor_FUN_10df5aa0(); };
struct NativeRegCtor_FUN_10df5b70 { NativeRegCtor_FUN_10df5b70(); };
struct NativeRegCtor_FUN_10df5c40 { NativeRegCtor_FUN_10df5c40(); };
struct NativeRegCtor_FUN_10df6290 { NativeRegCtor_FUN_10df6290(); };
struct NativeRegCtor_FUN_10df6360 { NativeRegCtor_FUN_10df6360(); };
struct NativeRegCtor_FUN_10df6430 { NativeRegCtor_FUN_10df6430(); };
struct NativeRegCtor_FUN_10df65d0 { NativeRegCtor_FUN_10df65d0(); };
struct NativeRegCtor_FUN_10df66a0 { NativeRegCtor_FUN_10df66a0(); };
struct NativeRegCtor_FUN_10df6770 { NativeRegCtor_FUN_10df6770(); };
struct NativeRegCtor_FUN_10df6840 { NativeRegCtor_FUN_10df6840(); };
struct NativeRegCtor_FUN_10df6910 { NativeRegCtor_FUN_10df6910(); };
struct NativeRegCtor_FUN_10df69e0 { NativeRegCtor_FUN_10df69e0(); };
struct NativeRegCtor_FUN_10df6da0 { NativeRegCtor_FUN_10df6da0(); };
struct NativeRegCtor_FUN_10df7c20 { NativeRegCtor_FUN_10df7c20(); };
struct NativeRegCtor_FUN_10df7ed0 { NativeRegCtor_FUN_10df7ed0(); };
struct NativeRegCtor_FUN_10df8600 { NativeRegCtor_FUN_10df8600(); };
struct NativeRegCtor_FUN_10df86d0 { NativeRegCtor_FUN_10df86d0(); };
struct NativeRegCtor_FUN_10df87a0 { NativeRegCtor_FUN_10df87a0(); };
struct NativeRegCtor_FUN_10df8a60 { NativeRegCtor_FUN_10df8a60(); };
struct NativeRegCtor_FUN_10df8b30 { NativeRegCtor_FUN_10df8b30(); };
struct NativeRegCtor_FUN_10df8c00 { NativeRegCtor_FUN_10df8c00(); };
struct NativeRegCtor_FUN_10df8cd0 { NativeRegCtor_FUN_10df8cd0(); };
struct NativeRegCtor_FUN_10df8f50 { NativeRegCtor_FUN_10df8f50(); };
struct NativeRegCtor_FUN_10df9020 { NativeRegCtor_FUN_10df9020(); };
struct NativeRegCtor_FUN_10df90f0 { NativeRegCtor_FUN_10df90f0(); };
struct NativeRegCtor_FUN_10df91c0 { NativeRegCtor_FUN_10df91c0(); };
struct NativeRegCtor_FUN_10df92c0 { NativeRegCtor_FUN_10df92c0(); };
struct NativeRegCtor_FUN_10df9440 { NativeRegCtor_FUN_10df9440(); };
struct NativeRegCtor_FUN_10df9510 { NativeRegCtor_FUN_10df9510(); };
struct NativeRegCtor_FUN_10df9690 { NativeRegCtor_FUN_10df9690(); };
struct NativeRegCtor_FUN_10df9760 { NativeRegCtor_FUN_10df9760(); };
struct NativeRegCtor_FUN_10df9830 { NativeRegCtor_FUN_10df9830(); };
struct NativeRegCtor_FUN_10df9900 { NativeRegCtor_FUN_10df9900(); };
struct NativeRegCtor_FUN_10df9a80 { NativeRegCtor_FUN_10df9a80(); };
struct NativeRegCtor_FUN_10df9b50 { NativeRegCtor_FUN_10df9b50(); };
struct NativeRegCtor_FUN_10df9d60 { NativeRegCtor_FUN_10df9d60(); };
struct NativeRegCtor_FUN_10df9e30 { NativeRegCtor_FUN_10df9e30(); };
struct NativeRegCtor_FUN_10df9fb0 { NativeRegCtor_FUN_10df9fb0(); };
struct NativeRegCtor_FUN_10dfa080 { NativeRegCtor_FUN_10dfa080(); };
struct NativeRegCtor_FUN_10dfa150 { NativeRegCtor_FUN_10dfa150(); };
struct NativeRegCtor_FUN_10dfa2d0 { NativeRegCtor_FUN_10dfa2d0(); };
struct NativeRegCtor_FUN_10dfa3a0 { NativeRegCtor_FUN_10dfa3a0(); };
struct NativeRegCtor_FUN_10dfa520 { NativeRegCtor_FUN_10dfa520(); };
struct NativeRegCtor_FUN_10dfa5f0 { NativeRegCtor_FUN_10dfa5f0(); };
struct NativeRegCtor_FUN_10dfa6c0 { NativeRegCtor_FUN_10dfa6c0(); };
struct NativeRegCtor_FUN_10dfa790 { NativeRegCtor_FUN_10dfa790(); };
struct NativeRegCtor_FUN_10dfa860 { NativeRegCtor_FUN_10dfa860(); };
struct NativeRegCtor_FUN_10dfa930 { NativeRegCtor_FUN_10dfa930(); };
struct NativeRegCtor_FUN_10dfaa00 { NativeRegCtor_FUN_10dfaa00(); };
struct NativeRegCtor_FUN_10dfab80 { NativeRegCtor_FUN_10dfab80(); };
struct NativeRegCtor_FUN_10dfac50 { NativeRegCtor_FUN_10dfac50(); };
struct NativeRegCtor_FUN_10dfadd0 { NativeRegCtor_FUN_10dfadd0(); };
struct NativeRegCtor_FUN_10dfaea0 { NativeRegCtor_FUN_10dfaea0(); };
struct NativeRegCtor_FUN_10dfb020 { NativeRegCtor_FUN_10dfb020(); };
struct NativeRegCtor_FUN_10dfb0f0 { NativeRegCtor_FUN_10dfb0f0(); };
struct NativeRegCtor_FUN_10dfb250 { NativeRegCtor_FUN_10dfb250(); };
struct NativeRegCtor_FUN_10dfb320 { NativeRegCtor_FUN_10dfb320(); };
struct NativeRegCtor_FUN_10dfb530 { NativeRegCtor_FUN_10dfb530(); };
struct NativeRegCtor_FUN_10dfb600 { NativeRegCtor_FUN_10dfb600(); };
struct NativeRegCtor_FUN_10dfbb10 { NativeRegCtor_FUN_10dfbb10(); };
struct NativeRegCtor_FUN_10dfbbe0 { NativeRegCtor_FUN_10dfbbe0(); };
struct NativeRegCtor_FUN_10dfbcb0 { NativeRegCtor_FUN_10dfbcb0(); };
struct NativeRegCtor_FUN_10dfbd80 { NativeRegCtor_FUN_10dfbd80(); };
struct NativeRegCtor_FUN_10dfbe50 { NativeRegCtor_FUN_10dfbe50(); };
struct NativeRegCtor_FUN_10dfc370 { NativeRegCtor_FUN_10dfc370(); };
struct NativeRegCtor_FUN_10dfc440 { NativeRegCtor_FUN_10dfc440(); };
struct NativeRegCtor_FUN_10dfc510 { NativeRegCtor_FUN_10dfc510(); };
struct NativeRegCtor_FUN_10dfcdc0 { NativeRegCtor_FUN_10dfcdc0(); };
struct NativeRegCtor_FUN_10dfce90 { NativeRegCtor_FUN_10dfce90(); };
struct NativeRegCtor_FUN_10dfcf60 { NativeRegCtor_FUN_10dfcf60(); };
struct NativeRegCtor_FUN_10dfd030 { NativeRegCtor_FUN_10dfd030(); };
struct NativeRegCtor_FUN_10dfd100 { NativeRegCtor_FUN_10dfd100(); };
struct NativeRegCtor_FUN_10dfd2d0 { NativeRegCtor_FUN_10dfd2d0(); };
struct NativeRegCtor_FUN_10dfd3a0 { NativeRegCtor_FUN_10dfd3a0(); };
struct NativeRegCtor_FUN_10dfd470 { NativeRegCtor_FUN_10dfd470(); };
struct NativeRegCtor_FUN_10dfd540 { NativeRegCtor_FUN_10dfd540(); };
struct NativeRegCtor_FUN_10dfd610 { NativeRegCtor_FUN_10dfd610(); };
struct NativeRegCtor_FUN_10dfd6e0 { NativeRegCtor_FUN_10dfd6e0(); };
struct NativeRegCtor_FUN_10dfd8c0 { NativeRegCtor_FUN_10dfd8c0(); };
struct NativeRegCtor_FUN_10dfda60 { NativeRegCtor_FUN_10dfda60(); };
struct NativeRegCtor_FUN_10dfdff0 { NativeRegCtor_FUN_10dfdff0(); };
struct NativeRegCtor_FUN_10dfe0c0 { NativeRegCtor_FUN_10dfe0c0(); };
struct NativeRegCtor_FUN_10dfe190 { NativeRegCtor_FUN_10dfe190(); };
struct NativeRegCtor_FUN_10dfe3d0 { NativeRegCtor_FUN_10dfe3d0(); };

extern int thunk_FUN_10dee620(...);

// Reference entry 10df5400; body size 160 bytes.
#line 1 "ENTRY_10df5400"
NativeRegCtor_FUN_10df5400::NativeRegCtor_FUN_10df5400() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937488);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 75, 0, FactoryTree());
}

// Reference entry 10df54d0; body size 160 bytes.
#line 1 "ENTRY_10df54d0"
NativeRegCtor_FUN_10df54d0::NativeRegCtor_FUN_10df54d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_1193749c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 76, 0, FactoryTree());
}

// Reference entry 10df5720; body size 160 bytes.
#line 1 "ENTRY_10df5720"
NativeRegCtor_FUN_10df5720::NativeRegCtor_FUN_10df5720() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119374d0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 78, 0, FactoryTree());
}

// Reference entry 10df57f0; body size 160 bytes.
#line 1 "ENTRY_10df57f0"
NativeRegCtor_FUN_10df57f0::NativeRegCtor_FUN_10df57f0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119374b8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 77, 0, FactoryTree());
}

// Reference entry 10df59d0; body size 160 bytes.
#line 1 "ENTRY_10df59d0"
NativeRegCtor_FUN_10df59d0::NativeRegCtor_FUN_10df59d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936880);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 6, 0, FactoryTree());
}

// Reference entry 10df5aa0; body size 160 bytes.
#line 1 "ENTRY_10df5aa0"
NativeRegCtor_FUN_10df5aa0::NativeRegCtor_FUN_10df5aa0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119368b8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 9, 0, FactoryTree());
}

// Reference entry 10df5b70; body size 160 bytes.
#line 1 "ENTRY_10df5b70"
NativeRegCtor_FUN_10df5b70::NativeRegCtor_FUN_10df5b70() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119368d0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 10, 0, FactoryTree());
}

// Reference entry 10df5c40; body size 160 bytes.
#line 1 "ENTRY_10df5c40"
NativeRegCtor_FUN_10df5c40::NativeRegCtor_FUN_10df5c40() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936860);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 4, 0, FactoryTree());
}

// Reference entry 10df6290; body size 160 bytes.
#line 1 "ENTRY_10df6290"
NativeRegCtor_FUN_10df6290::NativeRegCtor_FUN_10df6290() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936938);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 13, 0, FactoryTree());
}

// Reference entry 10df6360; body size 160 bytes.
#line 1 "ENTRY_10df6360"
NativeRegCtor_FUN_10df6360::NativeRegCtor_FUN_10df6360() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936924);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 12, 0, FactoryTree());
}

// Reference entry 10df6430; body size 160 bytes.
#line 1 "ENTRY_10df6430"
NativeRegCtor_FUN_10df6430::NativeRegCtor_FUN_10df6430() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936dc8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 62, 0, FactoryTree());
}

// Reference entry 10df65d0; body size 160 bytes.
#line 1 "ENTRY_10df65d0"
NativeRegCtor_FUN_10df65d0::NativeRegCtor_FUN_10df65d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936dac);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 61, 0, FactoryTree());
}

// Reference entry 10df66a0; body size 160 bytes.
#line 1 "ENTRY_10df66a0"
NativeRegCtor_FUN_10df66a0::NativeRegCtor_FUN_10df66a0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119368f4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 11, 0, FactoryTree());
}

// Reference entry 10df6770; body size 160 bytes.
#line 1 "ENTRY_10df6770"
NativeRegCtor_FUN_10df6770::NativeRegCtor_FUN_10df6770() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936a84);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 39, 0, FactoryTree());
}

// Reference entry 10df6840; body size 160 bytes.
#line 1 "ENTRY_10df6840"
NativeRegCtor_FUN_10df6840::NativeRegCtor_FUN_10df6840() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936ab8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 40, 0, FactoryTree());
}

// Reference entry 10df6910; body size 160 bytes.
#line 1 "ENTRY_10df6910"
NativeRegCtor_FUN_10df6910::NativeRegCtor_FUN_10df6910() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936af4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 42, 0, FactoryTree());
}

// Reference entry 10df69e0; body size 160 bytes.
#line 1 "ENTRY_10df69e0"
NativeRegCtor_FUN_10df69e0::NativeRegCtor_FUN_10df69e0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936ae0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 41, 0, FactoryTree());
}

// Reference entry 10df6da0; body size 160 bytes.
#line 1 "ENTRY_10df6da0"
NativeRegCtor_FUN_10df6da0::NativeRegCtor_FUN_10df6da0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936e54);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 67, 0, FactoryTree());
}

// Reference entry 10df7c20; body size 160 bytes.
#line 1 "ENTRY_10df7c20"
NativeRegCtor_FUN_10df7c20::NativeRegCtor_FUN_10df7c20() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936fa0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 86, 0, FactoryTree());
}

// Reference entry 10df7ed0; body size 160 bytes.
#line 1 "ENTRY_10df7ed0"
NativeRegCtor_FUN_10df7ed0::NativeRegCtor_FUN_10df7ed0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936b44);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 44, 0, FactoryTree());
}

// Reference entry 10df8600; body size 160 bytes.
#line 1 "ENTRY_10df8600"
NativeRegCtor_FUN_10df8600::NativeRegCtor_FUN_10df8600() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936ef0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 81, 0, FactoryTree());
}

// Reference entry 10df86d0; body size 160 bytes.
#line 1 "ENTRY_10df86d0"
NativeRegCtor_FUN_10df86d0::NativeRegCtor_FUN_10df86d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936f14);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 82, 0, FactoryTree());
}

// Reference entry 10df87a0; body size 160 bytes.
#line 1 "ENTRY_10df87a0"
NativeRegCtor_FUN_10df87a0::NativeRegCtor_FUN_10df87a0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937464);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 119, 0, FactoryTree());
}

// Reference entry 10df8a60; body size 160 bytes.
#line 1 "ENTRY_10df8a60"
NativeRegCtor_FUN_10df8a60::NativeRegCtor_FUN_10df8a60() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936c0c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 54, 0, FactoryTree());
}

// Reference entry 10df8b30; body size 160 bytes.
#line 1 "ENTRY_10df8b30"
NativeRegCtor_FUN_10df8b30::NativeRegCtor_FUN_10df8b30() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936bfc);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 53, 0, FactoryTree());
}

// Reference entry 10df8c00; body size 160 bytes.
#line 1 "ENTRY_10df8c00"
NativeRegCtor_FUN_10df8c00::NativeRegCtor_FUN_10df8c00() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936be8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 52, 0, FactoryTree());
}

// Reference entry 10df8cd0; body size 160 bytes.
#line 1 "ENTRY_10df8cd0"
NativeRegCtor_FUN_10df8cd0::NativeRegCtor_FUN_10df8cd0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936848);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 1, 0, FactoryTree());
}

// Reference entry 10df8f50; body size 160 bytes.
#line 1 "ENTRY_10df8f50"
NativeRegCtor_FUN_10df8f50::NativeRegCtor_FUN_10df8f50() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936e90);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 72, 0, FactoryTree());
}

// Reference entry 10df9020; body size 160 bytes.
#line 1 "ENTRY_10df9020"
NativeRegCtor_FUN_10df9020::NativeRegCtor_FUN_10df9020() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936e6c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 71, 0, FactoryTree());
}

// Reference entry 10df90f0; body size 160 bytes.
#line 1 "ENTRY_10df90f0"
NativeRegCtor_FUN_10df90f0::NativeRegCtor_FUN_10df90f0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936f54);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 84, 0, FactoryTree());
}

// Reference entry 10df91c0; body size 160 bytes.
#line 1 "ENTRY_10df91c0"
NativeRegCtor_FUN_10df91c0::NativeRegCtor_FUN_10df91c0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936f70);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 85, 0, FactoryTree());
}

// Reference entry 10df92c0; body size 160 bytes.
#line 1 "ENTRY_10df92c0"
NativeRegCtor_FUN_10df92c0::NativeRegCtor_FUN_10df92c0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936f38);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 83, 0, FactoryTree());
}

// Reference entry 10df9440; body size 160 bytes.
#line 1 "ENTRY_10df9440"
NativeRegCtor_FUN_10df9440::NativeRegCtor_FUN_10df9440() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937174);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 97, 0, FactoryTree());
}

// Reference entry 10df9510; body size 160 bytes.
#line 1 "ENTRY_10df9510"
NativeRegCtor_FUN_10df9510::NativeRegCtor_FUN_10df9510() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937150);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 96, 0, FactoryTree());
}

// Reference entry 10df9690; body size 160 bytes.
#line 1 "ENTRY_10df9690"
NativeRegCtor_FUN_10df9690::NativeRegCtor_FUN_10df9690() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119372a4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 105, 0, FactoryTree());
}

// Reference entry 10df9760; body size 160 bytes.
#line 1 "ENTRY_10df9760"
NativeRegCtor_FUN_10df9760::NativeRegCtor_FUN_10df9760() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937280);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 104, 0, FactoryTree());
}

// Reference entry 10df9830; body size 160 bytes.
#line 1 "ENTRY_10df9830"
NativeRegCtor_FUN_10df9830::NativeRegCtor_FUN_10df9830() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_1193743c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 116, 0, FactoryTree());
}

// Reference entry 10df9900; body size 160 bytes.
#line 1 "ENTRY_10df9900"
NativeRegCtor_FUN_10df9900::NativeRegCtor_FUN_10df9900() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119372e4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 112, 0, FactoryTree());
}

// Reference entry 10df9a80; body size 160 bytes.
#line 1 "ENTRY_10df9a80"
NativeRegCtor_FUN_10df9a80::NativeRegCtor_FUN_10df9a80() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937260);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 103, 0, FactoryTree());
}

// Reference entry 10df9b50; body size 160 bytes.
#line 1 "ENTRY_10df9b50"
NativeRegCtor_FUN_10df9b50::NativeRegCtor_FUN_10df9b50() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_1193723c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 102, 0, FactoryTree());
}

// Reference entry 10df9d60; body size 160 bytes.
#line 1 "ENTRY_10df9d60"
NativeRegCtor_FUN_10df9d60::NativeRegCtor_FUN_10df9d60() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937134);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 95, 0, FactoryTree());
}

// Reference entry 10df9e30; body size 160 bytes.
#line 1 "ENTRY_10df9e30"
NativeRegCtor_FUN_10df9e30::NativeRegCtor_FUN_10df9e30() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937114);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 94, 0, FactoryTree());
}

// Reference entry 10df9fb0; body size 160 bytes.
#line 1 "ENTRY_10df9fb0"
NativeRegCtor_FUN_10df9fb0::NativeRegCtor_FUN_10df9fb0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_1193741c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 115, 0, FactoryTree());
}

// Reference entry 10dfa080; body size 160 bytes.
#line 1 "ENTRY_10dfa080"
NativeRegCtor_FUN_10dfa080::NativeRegCtor_FUN_10dfa080() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119373f8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 114, 0, FactoryTree());
}

// Reference entry 10dfa150; body size 160 bytes.
#line 1 "ENTRY_10dfa150"
NativeRegCtor_FUN_10dfa150::NativeRegCtor_FUN_10dfa150() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937308);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 105, 0, FactoryTree());
}

// Reference entry 10dfa2d0; body size 160 bytes.
#line 1 "ENTRY_10dfa2d0"
NativeRegCtor_FUN_10dfa2d0::NativeRegCtor_FUN_10dfa2d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937214);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 101, 0, FactoryTree());
}

// Reference entry 10dfa3a0; body size 160 bytes.
#line 1 "ENTRY_10dfa3a0"
NativeRegCtor_FUN_10dfa3a0::NativeRegCtor_FUN_10dfa3a0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119371e8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 100, 0, FactoryTree());
}

// Reference entry 10dfa520; body size 160 bytes.
#line 1 "ENTRY_10dfa520"
NativeRegCtor_FUN_10dfa520::NativeRegCtor_FUN_10dfa520() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119371c0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 99, 0, FactoryTree());
}

// Reference entry 10dfa5f0; body size 160 bytes.
#line 1 "ENTRY_10dfa5f0"
NativeRegCtor_FUN_10dfa5f0::NativeRegCtor_FUN_10dfa5f0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937194);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 98, 0, FactoryTree());
}

// Reference entry 10dfa6c0; body size 160 bytes.
#line 1 "ENTRY_10dfa6c0"
NativeRegCtor_FUN_10dfa6c0::NativeRegCtor_FUN_10dfa6c0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119373a8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 111, 0, FactoryTree());
}

// Reference entry 10dfa790; body size 160 bytes.
#line 1 "ENTRY_10dfa790"
NativeRegCtor_FUN_10dfa790::NativeRegCtor_FUN_10dfa790() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937380);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 110, 0, FactoryTree());
}

// Reference entry 10dfa860; body size 160 bytes.
#line 1 "ENTRY_10dfa860"
NativeRegCtor_FUN_10dfa860::NativeRegCtor_FUN_10dfa860() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937358);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 109, 0, FactoryTree());
}

// Reference entry 10dfa930; body size 160 bytes.
#line 1 "ENTRY_10dfa930"
NativeRegCtor_FUN_10dfa930::NativeRegCtor_FUN_10dfa930() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937330);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 108, 0, FactoryTree());
}

// Reference entry 10dfaa00; body size 160 bytes.
#line 1 "ENTRY_10dfaa00"
NativeRegCtor_FUN_10dfaa00::NativeRegCtor_FUN_10dfaa00() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119373d0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 113, 0, FactoryTree());
}

// Reference entry 10dfab80; body size 160 bytes.
#line 1 "ENTRY_10dfab80"
NativeRegCtor_FUN_10dfab80::NativeRegCtor_FUN_10dfab80() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937094);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 91, 0, FactoryTree());
}

// Reference entry 10dfac50; body size 160 bytes.
#line 1 "ENTRY_10dfac50"
NativeRegCtor_FUN_10dfac50::NativeRegCtor_FUN_10dfac50() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937064);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 90, 0, FactoryTree());
}

// Reference entry 10dfadd0; body size 160 bytes.
#line 1 "ENTRY_10dfadd0"
NativeRegCtor_FUN_10dfadd0::NativeRegCtor_FUN_10dfadd0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119370ec);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 93, 0, FactoryTree());
}

// Reference entry 10dfaea0; body size 160 bytes.
#line 1 "ENTRY_10dfaea0"
NativeRegCtor_FUN_10dfaea0::NativeRegCtor_FUN_10dfaea0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119370c0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 92, 0, FactoryTree());
}

// Reference entry 10dfb020; body size 160 bytes.
#line 1 "ENTRY_10dfb020"
NativeRegCtor_FUN_10dfb020::NativeRegCtor_FUN_10dfb020() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119372a4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 107, 0, FactoryTree());
}

// Reference entry 10dfb0f0; body size 160 bytes.
#line 1 "ENTRY_10dfb0f0"
NativeRegCtor_FUN_10dfb0f0::NativeRegCtor_FUN_10dfb0f0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119372c4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 106, 0, FactoryTree());
}

// Reference entry 10dfb250; body size 160 bytes.
#line 1 "ENTRY_10dfb250"
NativeRegCtor_FUN_10dfb250::NativeRegCtor_FUN_10dfb250() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936fbc);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 117, 0, FactoryTree());
}

// Reference entry 10dfb320; body size 160 bytes.
#line 1 "ENTRY_10dfb320"
NativeRegCtor_FUN_10dfb320::NativeRegCtor_FUN_10dfb320() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936ff0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 118, 0, FactoryTree());
}

// Reference entry 10dfb530; body size 160 bytes.
#line 1 "ENTRY_10dfb530"
NativeRegCtor_FUN_10dfb530::NativeRegCtor_FUN_10dfb530() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936e44);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 65, 0, FactoryTree());
}

// Reference entry 10dfb600; body size 160 bytes.
#line 1 "ENTRY_10dfb600"
NativeRegCtor_FUN_10dfb600::NativeRegCtor_FUN_10dfb600() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936e30);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 64, 0, FactoryTree());
}

// Reference entry 10dfbb10; body size 160 bytes.
#line 1 "ENTRY_10dfbb10"
NativeRegCtor_FUN_10dfbb10::NativeRegCtor_FUN_10dfbb10() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936904);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 14, 0, FactoryTree());
}

// Reference entry 10dfbbe0; body size 160 bytes.
#line 1 "ENTRY_10dfbbe0"
NativeRegCtor_FUN_10dfbbe0::NativeRegCtor_FUN_10dfbbe0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936914);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 15, 0, FactoryTree());
}

// Reference entry 10dfbcb0; body size 160 bytes.
#line 1 "ENTRY_10dfbcb0"
NativeRegCtor_FUN_10dfbcb0::NativeRegCtor_FUN_10dfbcb0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936ebc);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 79, 0, FactoryTree());
}

// Reference entry 10dfbd80; body size 160 bytes.
#line 1 "ENTRY_10dfbd80"
NativeRegCtor_FUN_10dfbd80::NativeRegCtor_FUN_10dfbd80() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936ed4);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 80, 0, FactoryTree());
}

// Reference entry 10dfbe50; body size 160 bytes.
#line 1 "ENTRY_10dfbe50"
NativeRegCtor_FUN_10dfbe50::NativeRegCtor_FUN_10dfbe50() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936a6c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 32, 0, FactoryTree());
}

// Reference entry 10dfc370; body size 160 bytes.
#line 1 "ENTRY_10dfc370"
NativeRegCtor_FUN_10dfc370::NativeRegCtor_FUN_10dfc370() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936d5c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 73, 0, FactoryTree());
}

// Reference entry 10dfc440; body size 160 bytes.
#line 1 "ENTRY_10dfc440"
NativeRegCtor_FUN_10dfc440::NativeRegCtor_FUN_10dfc440() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936d84);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 74, 0, FactoryTree());
}

// Reference entry 10dfc510; body size 160 bytes.
#line 1 "ENTRY_10dfc510"
NativeRegCtor_FUN_10dfc510::NativeRegCtor_FUN_10dfc510() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936d08);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 87, 0, FactoryTree());
}

// Reference entry 10dfcdc0; body size 160 bytes.
#line 1 "ENTRY_10dfcdc0"
NativeRegCtor_FUN_10dfcdc0::NativeRegCtor_FUN_10dfcdc0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936e18);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 58, 0, FactoryTree());
}

// Reference entry 10dfce90; body size 160 bytes.
#line 1 "ENTRY_10dfce90"
NativeRegCtor_FUN_10dfce90::NativeRegCtor_FUN_10dfce90() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936dfc);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 60, 0, FactoryTree());
}

// Reference entry 10dfcf60; body size 160 bytes.
#line 1 "ENTRY_10dfcf60"
NativeRegCtor_FUN_10dfcf60::NativeRegCtor_FUN_10dfcf60() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936de0);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 59, 0, FactoryTree());
}

// Reference entry 10dfd030; body size 160 bytes.
#line 1 "ENTRY_10dfd030"
NativeRegCtor_FUN_10dfd030::NativeRegCtor_FUN_10dfd030() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937010);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 88, 0, FactoryTree());
}

// Reference entry 10dfd100; body size 160 bytes.
#line 1 "ENTRY_10dfd100"
NativeRegCtor_FUN_10dfd100::NativeRegCtor_FUN_10dfd100() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11937040);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 89, 0, FactoryTree());
}

// Reference entry 10dfd2d0; body size 160 bytes.
#line 1 "ENTRY_10dfd2d0"
NativeRegCtor_FUN_10dfd2d0::NativeRegCtor_FUN_10dfd2d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936c38);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 46, 0, FactoryTree());
}

// Reference entry 10dfd3a0; body size 160 bytes.
#line 1 "ENTRY_10dfd3a0"
NativeRegCtor_FUN_10dfd3a0::NativeRegCtor_FUN_10dfd3a0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_1188d58c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 2, 0, FactoryTree());
}

// Reference entry 10dfd470; body size 160 bytes.
#line 1 "ENTRY_10dfd470"
NativeRegCtor_FUN_10dfd470::NativeRegCtor_FUN_10dfd470() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936850);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 3, 0, FactoryTree());
}

// Reference entry 10dfd540; body size 160 bytes.
#line 1 "ENTRY_10dfd540"
NativeRegCtor_FUN_10dfd540::NativeRegCtor_FUN_10dfd540() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936870);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 5, 0, FactoryTree());
}

// Reference entry 10dfd610; body size 160 bytes.
#line 1 "ENTRY_10dfd610"
NativeRegCtor_FUN_10dfd610::NativeRegCtor_FUN_10dfd610() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936898);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 7, 0, FactoryTree());
}

// Reference entry 10dfd6e0; body size 160 bytes.
#line 1 "ENTRY_10dfd6e0"
NativeRegCtor_FUN_10dfd6e0::NativeRegCtor_FUN_10dfd6e0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119368a8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 8, 0, FactoryTree());
}

// Reference entry 10dfd8c0; body size 160 bytes.
#line 1 "ENTRY_10dfd8c0"
NativeRegCtor_FUN_10dfd8c0::NativeRegCtor_FUN_10dfd8c0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936b1c);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 43, 0, FactoryTree());
}

// Reference entry 10dfda60; body size 160 bytes.
#line 1 "ENTRY_10dfda60"
NativeRegCtor_FUN_10dfda60::NativeRegCtor_FUN_10dfda60() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_119369ec);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 16, 0, FactoryTree());
}

// Reference entry 10dfdff0; body size 160 bytes.
#line 1 "ENTRY_10dfdff0"
NativeRegCtor_FUN_10dfdff0::NativeRegCtor_FUN_10dfdff0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936bd8);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 57, 0, FactoryTree());
}

// Reference entry 10dfe0c0; body size 160 bytes.
#line 1 "ENTRY_10dfe0c0"
NativeRegCtor_FUN_10dfe0c0::NativeRegCtor_FUN_10dfe0c0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936bcc);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 56, 0, FactoryTree());
}

// Reference entry 10dfe190; body size 160 bytes.
#line 1 "ENTRY_10dfe190"
NativeRegCtor_FUN_10dfe190::NativeRegCtor_FUN_10dfe190() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936bbc);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 55, 0, FactoryTree());
}

// Reference entry 10dfe3d0; body size 160 bytes.
#line 1 "ENTRY_10dfe3d0"
NativeRegCtor_FUN_10dfe3d0::NativeRegCtor_FUN_10dfe3d0() {
NativeRegStr_thunk_FUN_1008c50b text((const char *)&DAT_11936c20);
((FactoryConsumer *)this)->thunk_FUN_10dee620((SCStr *)&text, 45, 0, FactoryTree());
}
