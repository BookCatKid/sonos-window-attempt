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
extern undefined4 DAT_121a0718;
extern undefined4 DAT_121a071c;
extern undefined4 DAT_121a0830;
extern undefined4 DAT_121a0834;
extern undefined4 DAT_121a08d4;
extern undefined4 DAT_121a08d8;
extern undefined4 DAT_121a08f4;
extern undefined4 DAT_121a08f8;
extern undefined4 DAT_121a0978;
extern undefined4 DAT_121a097c;
extern undefined4 DAT_121a09c4;
extern undefined4 DAT_121a09c8;
extern undefined4 DAT_121a0a18;
extern undefined4 DAT_121a0a1c;
extern undefined4 DAT_121a0a80;
extern undefined4 DAT_121a0a84;
extern undefined4 DAT_121a0a94;
extern undefined4 DAT_121a0a98;
extern undefined4 DAT_121a0ad4;
extern undefined4 DAT_121a0ad8;
extern undefined4 DAT_121a0ae4;
extern undefined4 DAT_121a0ae8;
extern undefined4 DAT_121a0af0;
extern undefined4 DAT_121a0af4;
extern undefined4 DAT_121a0b00;
extern undefined4 DAT_121a0b04;
extern undefined4 DAT_121a0b24;
extern undefined4 DAT_121a0b28;
extern undefined4 DAT_121a0bb4;
extern undefined4 DAT_121a0bb8;
extern undefined4 DAT_121a0c58;
extern undefined4 DAT_121a0c5c;
extern undefined4 DAT_121a0ca8;
extern undefined4 DAT_121a0cac;
extern undefined4 DAT_121a0dc0;
extern undefined4 DAT_121a0dc4;
extern undefined4 DAT_121a11a8;
extern undefined4 DAT_121a11ac;
extern undefined4 DAT_121a1360;
extern undefined4 DAT_121a1364;
extern undefined4 DAT_121a13e8;
extern undefined4 DAT_121a13ec;
extern undefined4 DAT_121a13f8;
extern undefined4 DAT_121a13fc;
extern undefined4 DAT_121a1408;
extern undefined4 DAT_121a140c;
extern undefined4 DAT_121a1524;
extern undefined4 DAT_121a1528;
extern undefined4 DAT_121a1534;
extern undefined4 DAT_121a1538;
extern undefined4 DAT_121a1544;
extern undefined4 DAT_121a1548;
extern undefined4 DAT_121a159c;
extern undefined4 DAT_121a15a0;
extern undefined4 DAT_121a1644;
extern undefined4 DAT_121a1648;
extern undefined4 DAT_121a16cc;
extern undefined4 DAT_121a16d0;
extern undefined4 DAT_121a16dc;
extern undefined4 DAT_121a16e0;
extern undefined4 DAT_121a16ec;
extern undefined4 DAT_121a16f0;
extern undefined4 DAT_121a16fc;
extern undefined4 DAT_121a1700;
extern undefined4 DAT_121a170c;
extern undefined4 DAT_121a1710;
extern undefined4 DAT_121a171c;
extern undefined4 DAT_121a1720;
extern undefined4 DAT_121a172c;
extern undefined4 DAT_121a1730;
extern undefined4 DAT_121a173c;
extern undefined4 DAT_121a1740;
extern undefined4 DAT_121a174c;
extern undefined4 DAT_121a1750;
extern undefined4 DAT_121a18b4;
extern undefined4 DAT_121a18b8;
extern undefined4 DAT_121a18c4;
extern undefined4 DAT_121a18c8;
extern undefined4 DAT_121a1ab8;
extern undefined4 DAT_121a1abc;
extern undefined4 DAT_121a1da8;
extern undefined4 DAT_121a1dac;
extern undefined4 DAT_121a1f90;
extern undefined4 DAT_121a1f94;
extern undefined4 DAT_121a25f0;
extern undefined4 DAT_121a25f4;
extern undefined4 DAT_121a2650;
extern undefined4 DAT_121a2654;
extern undefined4 DAT_121a2684;
extern undefined4 DAT_121a2688;
extern undefined4 DAT_121a4a28;
extern undefined4 DAT_121a4a2c;
extern undefined4 DAT_121a5034;
extern undefined4 DAT_121a5038;
extern undefined4 DAT_121a508c;
extern undefined4 DAT_121a5090;
extern undefined4 DAT_121a50e4;
extern undefined4 DAT_121a50e8;
extern undefined4 DAT_121a50f0;
extern undefined4 DAT_121a50f4;
extern undefined4 DAT_121a5294;
extern undefined4 DAT_121a5298;
extern undefined4 DAT_121a53cc;
extern undefined4 DAT_121a53d0;
extern undefined4 DAT_121a54c0;
extern undefined4 DAT_121a54c4;
extern undefined4 DAT_121a54d4;
extern undefined4 DAT_121a54d8;
extern undefined4 DAT_121a54e4;
extern undefined4 DAT_121a54e8;
extern undefined4 DAT_121a55ac;
extern undefined4 DAT_121a55b0;
extern undefined4 DAT_121a568c;
extern undefined4 DAT_121a5690;
extern undefined4 DAT_121a6288;
extern undefined4 DAT_121a628c;
extern undefined4 DAT_121a6414;
extern undefined4 DAT_121a6418;
extern undefined4 DAT_121a7394;
extern undefined4 DAT_121a7398;
extern undefined4 DAT_121a73a4;
extern undefined4 DAT_121a73a8;
extern undefined4 DAT_121a73b4;
extern undefined4 DAT_121a73b8;
extern undefined4 DAT_121a7440;
extern undefined4 DAT_121a7444;
extern undefined4 DAT_121a7450;
extern undefined4 DAT_121a7454;
extern undefined4 DAT_121a7460;
extern undefined4 DAT_121a7464;
extern undefined4 DAT_121a7474;
extern undefined4 DAT_121a7478;
extern undefined4 DAT_121a7484;
extern undefined4 DAT_121a7488;
extern undefined4 DAT_121a752c;
extern undefined4 DAT_121a7530;
extern undefined4 DAT_121a753c;
extern undefined4 DAT_121a7540;
extern undefined4 DAT_121a7564;
extern undefined4 DAT_121a7568;
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
extern unsigned int DAT_121a0718;
extern unsigned int DAT_121a071c;
extern unsigned int DAT_121a0830;
extern unsigned int DAT_121a0834;
extern unsigned int DAT_121a08d4;
extern unsigned int DAT_121a08d8;
extern unsigned int DAT_121a08f4;
extern unsigned int DAT_121a08f8;
extern unsigned int DAT_121a0978;
extern unsigned int DAT_121a097c;
extern unsigned int DAT_121a09c4;
extern unsigned int DAT_121a09c8;
extern unsigned int DAT_121a0a18;
extern unsigned int DAT_121a0a1c;
extern unsigned int DAT_121a0a80;
extern unsigned int DAT_121a0a84;
extern unsigned int DAT_121a0a94;
extern unsigned int DAT_121a0a98;
extern unsigned int DAT_121a0ad4;
extern unsigned int DAT_121a0ad8;
extern unsigned int DAT_121a0ae4;
extern unsigned int DAT_121a0ae8;
extern unsigned int DAT_121a0af0;
extern unsigned int DAT_121a0af4;
extern unsigned int DAT_121a0b00;
extern unsigned int DAT_121a0b04;
extern unsigned int DAT_121a0b24;
extern unsigned int DAT_121a0b28;
extern unsigned int DAT_121a0bb4;
extern unsigned int DAT_121a0bb8;
extern unsigned int DAT_121a0c58;
extern unsigned int DAT_121a0c5c;
extern unsigned int DAT_121a0ca8;
extern unsigned int DAT_121a0cac;
extern unsigned int DAT_121a0dc0;
extern unsigned int DAT_121a0dc4;
extern unsigned int DAT_121a11a8;
extern unsigned int DAT_121a11ac;
extern unsigned int DAT_121a1360;
extern unsigned int DAT_121a1364;
extern unsigned int DAT_121a13e8;
extern unsigned int DAT_121a13ec;
extern unsigned int DAT_121a13f8;
extern unsigned int DAT_121a13fc;
extern unsigned int DAT_121a1408;
extern unsigned int DAT_121a140c;
extern unsigned int DAT_121a1524;
extern unsigned int DAT_121a1528;
extern unsigned int DAT_121a1534;
extern unsigned int DAT_121a1538;
extern unsigned int DAT_121a1544;
extern unsigned int DAT_121a1548;
extern unsigned int DAT_121a159c;
extern unsigned int DAT_121a15a0;
extern unsigned int DAT_121a1644;
extern unsigned int DAT_121a1648;
extern unsigned int DAT_121a16cc;
extern unsigned int DAT_121a16d0;
extern unsigned int DAT_121a16dc;
extern unsigned int DAT_121a16e0;
extern unsigned int DAT_121a16ec;
extern unsigned int DAT_121a16f0;
extern unsigned int DAT_121a16fc;
extern unsigned int DAT_121a1700;
extern unsigned int DAT_121a170c;
extern unsigned int DAT_121a1710;
extern unsigned int DAT_121a171c;
extern unsigned int DAT_121a1720;
extern unsigned int DAT_121a172c;
extern unsigned int DAT_121a1730;
extern unsigned int DAT_121a173c;
extern unsigned int DAT_121a1740;
extern unsigned int DAT_121a174c;
extern unsigned int DAT_121a1750;
extern unsigned int DAT_121a18b4;
extern unsigned int DAT_121a18b8;
extern unsigned int DAT_121a18c4;
extern unsigned int DAT_121a18c8;
extern unsigned int DAT_121a1ab8;
extern unsigned int DAT_121a1abc;
extern unsigned int DAT_121a1da8;
extern unsigned int DAT_121a1dac;
extern unsigned int DAT_121a1f90;
extern unsigned int DAT_121a1f94;
extern unsigned int DAT_121a25f0;
extern unsigned int DAT_121a25f4;
extern unsigned int DAT_121a2650;
extern unsigned int DAT_121a2654;
extern unsigned int DAT_121a2684;
extern unsigned int DAT_121a2688;
extern unsigned int DAT_121a4a28;
extern unsigned int DAT_121a4a2c;
extern unsigned int DAT_121a5034;
extern unsigned int DAT_121a5038;
extern unsigned int DAT_121a508c;
extern unsigned int DAT_121a5090;
extern unsigned int DAT_121a50e4;
extern unsigned int DAT_121a50e8;
extern unsigned int DAT_121a50f0;
extern unsigned int DAT_121a50f4;
extern unsigned int DAT_121a5294;
extern unsigned int DAT_121a5298;
extern unsigned int DAT_121a53cc;
extern unsigned int DAT_121a53d0;
extern unsigned int DAT_121a54c0;
extern unsigned int DAT_121a54c4;
extern unsigned int DAT_121a54d4;
extern unsigned int DAT_121a54d8;
extern unsigned int DAT_121a54e4;
extern unsigned int DAT_121a54e8;
extern unsigned int DAT_121a55ac;
extern unsigned int DAT_121a55b0;
extern unsigned int DAT_121a568c;
extern unsigned int DAT_121a5690;
extern unsigned int DAT_121a6288;
extern unsigned int DAT_121a628c;
extern unsigned int DAT_121a6414;
extern unsigned int DAT_121a6418;
extern unsigned int DAT_121a7394;
extern unsigned int DAT_121a7398;
extern unsigned int DAT_121a73a4;
extern unsigned int DAT_121a73a8;
extern unsigned int DAT_121a73b4;
extern unsigned int DAT_121a73b8;
extern unsigned int DAT_121a7440;
extern unsigned int DAT_121a7444;
extern unsigned int DAT_121a7450;
extern unsigned int DAT_121a7454;
extern unsigned int DAT_121a7460;
extern unsigned int DAT_121a7464;
extern unsigned int DAT_121a7474;
extern unsigned int DAT_121a7478;
extern unsigned int DAT_121a7484;
extern unsigned int DAT_121a7488;
extern unsigned int DAT_121a752c;
extern unsigned int DAT_121a7530;
extern unsigned int DAT_121a753c;
extern unsigned int DAT_121a7540;
extern unsigned int DAT_121a7564;
extern unsigned int DAT_121a7568;


// Reference entry 117e8ad0; body size 91 bytes.
#line 1 "ENTRY_117e8ad0"
void FUN_117e8ad0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a071c;
if (p != 0) {
  DAT_121a0718 = 0; DAT_121a071c = 0;
  p->v8();
}
}

// Reference entry 117e9d10; body size 91 bytes.
#line 1 "ENTRY_117e9d10"
void FUN_117e9d10() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0834;
if (p != 0) {
  DAT_121a0830 = 0; DAT_121a0834 = 0;
  p->v8();
}
}

// Reference entry 117ea340; body size 91 bytes.
#line 1 "ENTRY_117ea340"
void FUN_117ea340() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a08d8;
if (p != 0) {
  DAT_121a08d4 = 0; DAT_121a08d8 = 0;
  p->v8();
}
}

// Reference entry 117ea900; body size 91 bytes.
#line 1 "ENTRY_117ea900"
void FUN_117ea900() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a08f8;
if (p != 0) {
  DAT_121a08f4 = 0; DAT_121a08f8 = 0;
  p->v8();
}
}

// Reference entry 117eb4b0; body size 91 bytes.
#line 1 "ENTRY_117eb4b0"
void FUN_117eb4b0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a097c;
if (p != 0) {
  DAT_121a0978 = 0; DAT_121a097c = 0;
  p->v8();
}
}

// Reference entry 117eb530; body size 91 bytes.
#line 1 "ENTRY_117eb530"
void FUN_117eb530() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a09c8;
if (p != 0) {
  DAT_121a09c4 = 0; DAT_121a09c8 = 0;
  p->v8();
}
}

// Reference entry 117ebc50; body size 91 bytes.
#line 1 "ENTRY_117ebc50"
void FUN_117ebc50() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0a1c;
if (p != 0) {
  DAT_121a0a18 = 0; DAT_121a0a1c = 0;
  p->v8();
}
}

// Reference entry 117ec520; body size 91 bytes.
#line 1 "ENTRY_117ec520"
void FUN_117ec520() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0a84;
if (p != 0) {
  DAT_121a0a80 = 0; DAT_121a0a84 = 0;
  p->v8();
}
}

// Reference entry 117ecb50; body size 91 bytes.
#line 1 "ENTRY_117ecb50"
void FUN_117ecb50() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0ad8;
if (p != 0) {
  DAT_121a0ad4 = 0; DAT_121a0ad8 = 0;
  p->v8();
}
}

// Reference entry 117ecc40; body size 91 bytes.
#line 1 "ENTRY_117ecc40"
void FUN_117ecc40() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0a98;
if (p != 0) {
  DAT_121a0a94 = 0; DAT_121a0a98 = 0;
  p->v8();
}
}

// Reference entry 117eccc0; body size 91 bytes.
#line 1 "ENTRY_117eccc0"
void FUN_117eccc0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0af4;
if (p != 0) {
  DAT_121a0af0 = 0; DAT_121a0af4 = 0;
  p->v8();
}
}

// Reference entry 117ecd40; body size 91 bytes.
#line 1 "ENTRY_117ecd40"
void FUN_117ecd40() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0ae8;
if (p != 0) {
  DAT_121a0ae4 = 0; DAT_121a0ae8 = 0;
  p->v8();
}
}

// Reference entry 117ecdc0; body size 91 bytes.
#line 1 "ENTRY_117ecdc0"
void FUN_117ecdc0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0b04;
if (p != 0) {
  DAT_121a0b00 = 0; DAT_121a0b04 = 0;
  p->v8();
}
}

// Reference entry 117ecfd0; body size 91 bytes.
#line 1 "ENTRY_117ecfd0"
void FUN_117ecfd0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0b28;
if (p != 0) {
  DAT_121a0b24 = 0; DAT_121a0b28 = 0;
  p->v8();
}
}

// Reference entry 117eda60; body size 91 bytes.
#line 1 "ENTRY_117eda60"
void FUN_117eda60() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0bb8;
if (p != 0) {
  DAT_121a0bb4 = 0; DAT_121a0bb8 = 0;
  p->v8();
}
}

// Reference entry 117ee570; body size 91 bytes.
#line 1 "ENTRY_117ee570"
void FUN_117ee570() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0c5c;
if (p != 0) {
  DAT_121a0c58 = 0; DAT_121a0c5c = 0;
  p->v8();
}
}

// Reference entry 117eeba0; body size 91 bytes.
#line 1 "ENTRY_117eeba0"
void FUN_117eeba0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0cac;
if (p != 0) {
  DAT_121a0ca8 = 0; DAT_121a0cac = 0;
  p->v8();
}
}

// Reference entry 117f0730; body size 91 bytes.
#line 1 "ENTRY_117f0730"
void FUN_117f0730() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a0dc4;
if (p != 0) {
  DAT_121a0dc0 = 0; DAT_121a0dc4 = 0;
  p->v8();
}
}

// Reference entry 117f41e0; body size 91 bytes.
#line 1 "ENTRY_117f41e0"
void FUN_117f41e0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a11ac;
if (p != 0) {
  DAT_121a11a8 = 0; DAT_121a11ac = 0;
  p->v8();
}
}

// Reference entry 117f61c0; body size 91 bytes.
#line 1 "ENTRY_117f61c0"
void FUN_117f61c0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1364;
if (p != 0) {
  DAT_121a1360 = 0; DAT_121a1364 = 0;
  p->v8();
}
}

// Reference entry 117f6cc0; body size 91 bytes.
#line 1 "ENTRY_117f6cc0"
void FUN_117f6cc0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a13fc;
if (p != 0) {
  DAT_121a13f8 = 0; DAT_121a13fc = 0;
  p->v8();
}
}

// Reference entry 117f6d40; body size 91 bytes.
#line 1 "ENTRY_117f6d40"
void FUN_117f6d40() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a140c;
if (p != 0) {
  DAT_121a1408 = 0; DAT_121a140c = 0;
  p->v8();
}
}

// Reference entry 117f6dc0; body size 91 bytes.
#line 1 "ENTRY_117f6dc0"
void FUN_117f6dc0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a13ec;
if (p != 0) {
  DAT_121a13e8 = 0; DAT_121a13ec = 0;
  p->v8();
}
}

// Reference entry 117f7a10; body size 91 bytes.
#line 1 "ENTRY_117f7a10"
void FUN_117f7a10() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1538;
if (p != 0) {
  DAT_121a1534 = 0; DAT_121a1538 = 0;
  p->v8();
}
}

// Reference entry 117f7a90; body size 91 bytes.
#line 1 "ENTRY_117f7a90"
void FUN_117f7a90() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1528;
if (p != 0) {
  DAT_121a1524 = 0; DAT_121a1528 = 0;
  p->v8();
}
}

// Reference entry 117f7b10; body size 91 bytes.
#line 1 "ENTRY_117f7b10"
void FUN_117f7b10() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1548;
if (p != 0) {
  DAT_121a1544 = 0; DAT_121a1548 = 0;
  p->v8();
}
}

// Reference entry 117f8240; body size 91 bytes.
#line 1 "ENTRY_117f8240"
void FUN_117f8240() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a15a0;
if (p != 0) {
  DAT_121a159c = 0; DAT_121a15a0 = 0;
  p->v8();
}
}

// Reference entry 117f8fe0; body size 91 bytes.
#line 1 "ENTRY_117f8fe0"
void FUN_117f8fe0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1648;
if (p != 0) {
  DAT_121a1644 = 0; DAT_121a1648 = 0;
  p->v8();
}
}

// Reference entry 117f9ae0; body size 91 bytes.
#line 1 "ENTRY_117f9ae0"
void FUN_117f9ae0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1750;
if (p != 0) {
  DAT_121a174c = 0; DAT_121a1750 = 0;
  p->v8();
}
}

// Reference entry 117f9b60; body size 91 bytes.
#line 1 "ENTRY_117f9b60"
void FUN_117f9b60() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1740;
if (p != 0) {
  DAT_121a173c = 0; DAT_121a1740 = 0;
  p->v8();
}
}

// Reference entry 117f9be0; body size 91 bytes.
#line 1 "ENTRY_117f9be0"
void FUN_117f9be0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a16d0;
if (p != 0) {
  DAT_121a16cc = 0; DAT_121a16d0 = 0;
  p->v8();
}
}

// Reference entry 117f9c60; body size 91 bytes.
#line 1 "ENTRY_117f9c60"
void FUN_117f9c60() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a16f0;
if (p != 0) {
  DAT_121a16ec = 0; DAT_121a16f0 = 0;
  p->v8();
}
}

// Reference entry 117f9ce0; body size 91 bytes.
#line 1 "ENTRY_117f9ce0"
void FUN_117f9ce0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1720;
if (p != 0) {
  DAT_121a171c = 0; DAT_121a1720 = 0;
  p->v8();
}
}

// Reference entry 117f9d60; body size 91 bytes.
#line 1 "ENTRY_117f9d60"
void FUN_117f9d60() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1710;
if (p != 0) {
  DAT_121a170c = 0; DAT_121a1710 = 0;
  p->v8();
}
}

// Reference entry 117f9de0; body size 91 bytes.
#line 1 "ENTRY_117f9de0"
void FUN_117f9de0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a16e0;
if (p != 0) {
  DAT_121a16dc = 0; DAT_121a16e0 = 0;
  p->v8();
}
}

// Reference entry 117f9e60; body size 91 bytes.
#line 1 "ENTRY_117f9e60"
void FUN_117f9e60() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1700;
if (p != 0) {
  DAT_121a16fc = 0; DAT_121a1700 = 0;
  p->v8();
}
}

// Reference entry 117f9ee0; body size 91 bytes.
#line 1 "ENTRY_117f9ee0"
void FUN_117f9ee0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1730;
if (p != 0) {
  DAT_121a172c = 0; DAT_121a1730 = 0;
  p->v8();
}
}

// Reference entry 117fbe00; body size 91 bytes.
#line 1 "ENTRY_117fbe00"
void FUN_117fbe00() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a18b8;
if (p != 0) {
  DAT_121a18b4 = 0; DAT_121a18b8 = 0;
  p->v8();
}
}

// Reference entry 117fbef0; body size 91 bytes.
#line 1 "ENTRY_117fbef0"
void FUN_117fbef0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a18c8;
if (p != 0) {
  DAT_121a18c4 = 0; DAT_121a18c8 = 0;
  p->v8();
}
}

// Reference entry 117fe9e0; body size 91 bytes.
#line 1 "ENTRY_117fe9e0"
void FUN_117fe9e0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1abc;
if (p != 0) {
  DAT_121a1ab8 = 0; DAT_121a1abc = 0;
  p->v8();
}
}

// Reference entry 11802ff0; body size 91 bytes.
#line 1 "ENTRY_11802ff0"
void FUN_11802ff0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1dac;
if (p != 0) {
  DAT_121a1da8 = 0; DAT_121a1dac = 0;
  p->v8();
}
}

// Reference entry 118055a0; body size 91 bytes.
#line 1 "ENTRY_118055a0"
void FUN_118055a0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a1f94;
if (p != 0) {
  DAT_121a1f90 = 0; DAT_121a1f94 = 0;
  p->v8();
}
}

// Reference entry 1180a9b0; body size 91 bytes.
#line 1 "ENTRY_1180a9b0"
void FUN_1180a9b0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a25f4;
if (p != 0) {
  DAT_121a25f0 = 0; DAT_121a25f4 = 0;
  p->v8();
}
}

// Reference entry 1180abf0; body size 91 bytes.
#line 1 "ENTRY_1180abf0"
void FUN_1180abf0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a2654;
if (p != 0) {
  DAT_121a2650 = 0; DAT_121a2654 = 0;
  p->v8();
}
}

// Reference entry 1180baa0; body size 91 bytes.
#line 1 "ENTRY_1180baa0"
void FUN_1180baa0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a2688;
if (p != 0) {
  DAT_121a2684 = 0; DAT_121a2688 = 0;
  p->v8();
}
}

// Reference entry 1182acc0; body size 91 bytes.
#line 1 "ENTRY_1182acc0"
void FUN_1182acc0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a4a2c;
if (p != 0) {
  DAT_121a4a28 = 0; DAT_121a4a2c = 0;
  p->v8();
}
}

// Reference entry 1182fa20; body size 91 bytes.
#line 1 "ENTRY_1182fa20"
void FUN_1182fa20() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a5038;
if (p != 0) {
  DAT_121a5034 = 0; DAT_121a5038 = 0;
  p->v8();
}
}

// Reference entry 118301a0; body size 91 bytes.
#line 1 "ENTRY_118301a0"
void FUN_118301a0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a5090;
if (p != 0) {
  DAT_121a508c = 0; DAT_121a5090 = 0;
  p->v8();
}
}

// Reference entry 118308b0; body size 91 bytes.
#line 1 "ENTRY_118308b0"
void FUN_118308b0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a50e8;
if (p != 0) {
  DAT_121a50e4 = 0; DAT_121a50e8 = 0;
  p->v8();
}
}

// Reference entry 118309a0; body size 91 bytes.
#line 1 "ENTRY_118309a0"
void FUN_118309a0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a50f4;
if (p != 0) {
  DAT_121a50f0 = 0; DAT_121a50f4 = 0;
  p->v8();
}
}

// Reference entry 118316e0; body size 91 bytes.
#line 1 "ENTRY_118316e0"
void FUN_118316e0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a5298;
if (p != 0) {
  DAT_121a5294 = 0; DAT_121a5298 = 0;
  p->v8();
}
}

// Reference entry 11833980; body size 91 bytes.
#line 1 "ENTRY_11833980"
void FUN_11833980() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a53d0;
if (p != 0) {
  DAT_121a53cc = 0; DAT_121a53d0 = 0;
  p->v8();
}
}

// Reference entry 11834500; body size 91 bytes.
#line 1 "ENTRY_11834500"
void FUN_11834500() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a54c4;
if (p != 0) {
  DAT_121a54c0 = 0; DAT_121a54c4 = 0;
  p->v8();
}
}

// Reference entry 11834580; body size 91 bytes.
#line 1 "ENTRY_11834580"
void FUN_11834580() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a54e8;
if (p != 0) {
  DAT_121a54e4 = 0; DAT_121a54e8 = 0;
  p->v8();
}
}

// Reference entry 11834600; body size 91 bytes.
#line 1 "ENTRY_11834600"
void FUN_11834600() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a54d8;
if (p != 0) {
  DAT_121a54d4 = 0; DAT_121a54d8 = 0;
  p->v8();
}
}

// Reference entry 11834bf0; body size 91 bytes.
#line 1 "ENTRY_11834bf0"
void FUN_11834bf0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a55b0;
if (p != 0) {
  DAT_121a55ac = 0; DAT_121a55b0 = 0;
  p->v8();
}
}

// Reference entry 11834d60; body size 91 bytes.
#line 1 "ENTRY_11834d60"
void FUN_11834d60() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a5690;
if (p != 0) {
  DAT_121a568c = 0; DAT_121a5690 = 0;
  p->v8();
}
}

// Reference entry 11842710; body size 91 bytes.
#line 1 "ENTRY_11842710"
void FUN_11842710() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a628c;
if (p != 0) {
  DAT_121a6288 = 0; DAT_121a628c = 0;
  p->v8();
}
}

// Reference entry 11844910; body size 91 bytes.
#line 1 "ENTRY_11844910"
void FUN_11844910() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a6418;
if (p != 0) {
  DAT_121a6414 = 0; DAT_121a6418 = 0;
  p->v8();
}
}

// Reference entry 11859aa0; body size 91 bytes.
#line 1 "ENTRY_11859aa0"
void FUN_11859aa0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7398;
if (p != 0) {
  DAT_121a7394 = 0; DAT_121a7398 = 0;
  p->v8();
}
}

// Reference entry 11859ba0; body size 91 bytes.
#line 1 "ENTRY_11859ba0"
void FUN_11859ba0() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a73b8;
if (p != 0) {
  DAT_121a73b4 = 0; DAT_121a73b8 = 0;
  p->v8();
}
}

// Reference entry 11859c20; body size 91 bytes.
#line 1 "ENTRY_11859c20"
void FUN_11859c20() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a73a8;
if (p != 0) {
  DAT_121a73a4 = 0; DAT_121a73a8 = 0;
  p->v8();
}
}

// Reference entry 1185a720; body size 91 bytes.
#line 1 "ENTRY_1185a720"
void FUN_1185a720() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7444;
if (p != 0) {
  DAT_121a7440 = 0; DAT_121a7444 = 0;
  p->v8();
}
}

// Reference entry 1185a810; body size 91 bytes.
#line 1 "ENTRY_1185a810"
void FUN_1185a810() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7454;
if (p != 0) {
  DAT_121a7450 = 0; DAT_121a7454 = 0;
  p->v8();
}
}

// Reference entry 1185a890; body size 91 bytes.
#line 1 "ENTRY_1185a890"
void FUN_1185a890() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7464;
if (p != 0) {
  DAT_121a7460 = 0; DAT_121a7464 = 0;
  p->v8();
}
}

// Reference entry 1185a910; body size 91 bytes.
#line 1 "ENTRY_1185a910"
void FUN_1185a910() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7488;
if (p != 0) {
  DAT_121a7484 = 0; DAT_121a7488 = 0;
  p->v8();
}
}

// Reference entry 1185a990; body size 91 bytes.
#line 1 "ENTRY_1185a990"
void FUN_1185a990() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7478;
if (p != 0) {
  DAT_121a7474 = 0; DAT_121a7478 = 0;
  p->v8();
}
}

// Reference entry 1185b490; body size 91 bytes.
#line 1 "ENTRY_1185b490"
void FUN_1185b490() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7540;
if (p != 0) {
  DAT_121a753c = 0; DAT_121a7540 = 0;
  p->v8();
}
}

// Reference entry 1185b510; body size 91 bytes.
#line 1 "ENTRY_1185b510"
void FUN_1185b510() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7530;
if (p != 0) {
  DAT_121a752c = 0; DAT_121a7530 = 0;
  p->v8();
}
}

// Reference entry 1185b630; body size 91 bytes.
#line 1 "ENTRY_1185b630"
void FUN_1185b630() noexcept {
NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a7568;
if (p != 0) {
  DAT_121a7564 = 0; DAT_121a7568 = 0;
  p->v8();
}
}
