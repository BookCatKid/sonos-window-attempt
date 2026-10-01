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
struct NativePairSetter_FUN_10656a30 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10656a30 *FUN_10656a30(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_106979b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_106979b0 *FUN_106979b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_1069c7e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_1069c7e0 *FUN_1069c7e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_106b5300 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_106b5300 *FUN_106b5300(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_106b5370 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_106b5370 *FUN_106b5370(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_106b53e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_106b53e0 *FUN_106b53e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_106b5520 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_106b5520 *FUN_106b5520(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_106e5b00 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_106e5b00 *FUN_106e5b00(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_107744c0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_107744c0 *FUN_107744c0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10790020 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10790020 *FUN_10790020(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10790090 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10790090 *FUN_10790090(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10790100 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10790100 *FUN_10790100(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10790170 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10790170 *FUN_10790170(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_107e6cb0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_107e6cb0 *FUN_107e6cb0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10846a20 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10846a20 *FUN_10846a20(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10846a90 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10846a90 *FUN_10846a90(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_108622f0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_108622f0 *FUN_108622f0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_109a96b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_109a96b0 *FUN_109a96b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_109f8a60 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_109f8a60 *FUN_109f8a60(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_109f8ad0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_109f8ad0 *FUN_109f8ad0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_109f8b40 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_109f8b40 *FUN_109f8b40(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_109f8bb0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_109f8bb0 *FUN_109f8bb0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10a51f30 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10a51f30 *FUN_10a51f30(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10a52000 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10a52000 *FUN_10a52000(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10a76fd0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10a76fd0 *FUN_10a76fd0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10a77040 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10a77040 *FUN_10a77040(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b1c0b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b1c0b0 *FUN_10b1c0b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b6da70 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b6da70 *FUN_10b6da70(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b76cc0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b76cc0 *FUN_10b76cc0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b76d90 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b76d90 *FUN_10b76d90(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b7d780 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b7d780 *FUN_10b7d780(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b91ca0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b91ca0 *FUN_10b91ca0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b99520 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b99520 *FUN_10b99520(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b99590 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b99590 *FUN_10b99590(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b99600 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b99600 *FUN_10b99600(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10b99670 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10b99670 *FUN_10b99670(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10ba7570 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10ba7570 *FUN_10ba7570(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10ba75e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10ba75e0 *FUN_10ba75e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10ba7650 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10ba7650 *FUN_10ba7650(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10ba76c0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10ba76c0 *FUN_10ba76c0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bbe300 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bbe300 *FUN_10bbe300(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bc41a0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bc41a0 *FUN_10bc41a0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bc6b70 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bc6b70 *FUN_10bc6b70(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bc6be0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bc6be0 *FUN_10bc6be0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bc6c50 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bc6c50 *FUN_10bc6c50(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bf0470 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bf0470 *FUN_10bf0470(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bf04e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bf04e0 *FUN_10bf04e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bfb9e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bfb9e0 *FUN_10bfb9e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bfed00 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bfed00 *FUN_10bfed00(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10bfed70 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10bfed70 *FUN_10bfed70(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c29420 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c29420 *FUN_10c29420(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c36490 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c36490 *FUN_10c36490(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c3a4f0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c3a4f0 *FUN_10c3a4f0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c4b840 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c4b840 *FUN_10c4b840(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c5b680 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c5b680 *FUN_10c5b680(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c76670 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c76670 *FUN_10c76670(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c89cd0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c89cd0 *FUN_10c89cd0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10c93d00 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10c93d00 *FUN_10c93d00(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cb7d50 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cb7d50 *FUN_10cb7d50(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cb94d0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cb94d0 *FUN_10cb94d0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cbe750 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cbe750 *FUN_10cbe750(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cc1890 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cc1890 *FUN_10cc1890(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cdfc40 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cdfc40 *FUN_10cdfc40(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10ceeac0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10ceeac0 *FUN_10ceeac0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cf72f0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cf72f0 *FUN_10cf72f0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10cf7360 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10cf7360 *FUN_10cf7360(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d02310 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d02310 *FUN_10d02310(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d09820 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d09820 *FUN_10d09820(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d09890 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d09890 *FUN_10d09890(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d12820 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d12820 *FUN_10d12820(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d1dee0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d1dee0 *FUN_10d1dee0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d27c50 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d27c50 *FUN_10d27c50(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d27cc0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d27cc0 *FUN_10d27cc0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d301b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d301b0 *FUN_10d301b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d30220 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d30220 *FUN_10d30220(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d3e480 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d3e480 *FUN_10d3e480(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d3e4f0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d3e4f0 *FUN_10d3e4f0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d3e560 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d3e560 *FUN_10d3e560(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d4c370 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d4c370 *FUN_10d4c370(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d4c3e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d4c3e0 *FUN_10d4c3e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d596b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d596b0 *FUN_10d596b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d59720 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d59720 *FUN_10d59720(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d5e4e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d5e4e0 *FUN_10d5e4e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d75d50 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d75d50 *FUN_10d75d50(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d81d60 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d81d60 *FUN_10d81d60(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d81dd0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d81dd0 *FUN_10d81dd0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d81e40 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d81e40 *FUN_10d81e40(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d81eb0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d81eb0 *FUN_10d81eb0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d81f20 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d81f20 *FUN_10d81f20(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d81f90 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d81f90 *FUN_10d81f90(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d82000 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d82000 *FUN_10d82000(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d82070 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d82070 *FUN_10d82070(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d820e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d820e0 *FUN_10d820e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d82150 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d82150 *FUN_10d82150(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d88b30 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d88b30 *FUN_10d88b30(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d88ba0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d88ba0 *FUN_10d88ba0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d88c10 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d88c10 *FUN_10d88c10(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10d9bd40 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10d9bd40 *FUN_10d9bd40(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10da24b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10da24b0 *FUN_10da24b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10da80a0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10da80a0 *FUN_10da80a0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10db8dd0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10db8dd0 *FUN_10db8dd0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10dd1760 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10dd1760 *FUN_10dd1760(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10dd17d0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10dd17d0 *FUN_10dd17d0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10dde8e0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10dde8e0 *FUN_10dde8e0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10de56c0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10de56c0 *FUN_10de56c0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10dff5f0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10dff5f0 *FUN_10dff5f0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10dff660 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10dff660 *FUN_10dff660(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e136b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e136b0 *FUN_10e136b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e28ac0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e28ac0 *FUN_10e28ac0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e28b30 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e28b30 *FUN_10e28b30(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e28ba0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e28ba0 *FUN_10e28ba0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e5f5d0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e5f5d0 *FUN_10e5f5d0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e5f640 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e5f640 *FUN_10e5f640(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e96640 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e96640 *FUN_10e96640(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10e966b0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10e966b0 *FUN_10e966b0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10ee25a0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10ee25a0 *FUN_10ee25a0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f44df0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f44df0 *FUN_10f44df0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f4aae0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f4aae0 *FUN_10f4aae0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f4eb10 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f4eb10 *FUN_10f4eb10(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f4ebe0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f4ebe0 *FUN_10f4ebe0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f52500 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f52500 *FUN_10f52500(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57b50 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57b50 *FUN_10f57b50(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57bc0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57bc0 *FUN_10f57bc0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57c30 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57c30 *FUN_10f57c30(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57ca0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57ca0 *FUN_10f57ca0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57d10 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57d10 *FUN_10f57d10(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57d80 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57d80 *FUN_10f57d80(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57df0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57df0 *FUN_10f57df0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57e60 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57e60 *FUN_10f57e60(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57ed0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57ed0 *FUN_10f57ed0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57f40 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57f40 *FUN_10f57f40(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f57fb0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f57fb0 *FUN_10f57fb0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f66150 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f66150 *FUN_10f66150(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10f6bfd0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10f6bfd0 *FUN_10f6bfd0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fcbfc0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fcbfc0 *FUN_10fcbfc0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fcc030 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fcc030 *FUN_10fcc030(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fd0de0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fd0de0 *FUN_10fd0de0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fd9660 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fd9660 *FUN_10fd9660(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fee260 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fee260 *FUN_10fee260(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fee330 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fee330 *FUN_10fee330(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_10fee3a0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_10fee3a0 *FUN_10fee3a0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11010700 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11010700 *FUN_11010700(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11018b40 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11018b40 *FUN_11018b40(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_1101b630 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_1101b630 *FUN_1101b630(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_1101d030 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_1101d030 *FUN_1101d030(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_1101fe70 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_1101fe70 *FUN_1101fe70(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11021f90 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11021f90 *FUN_11021f90(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11027680 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11027680 *FUN_11027680(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_110276f0 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_110276f0 *FUN_110276f0(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11027760 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11027760 *FUN_11027760(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11042a10 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11042a10 *FUN_11042a10(NativeReleaseIface *param_2); };
struct NativePairSetter_FUN_11056980 { NativeReleaseIface *rep; NativeReleaseIface *next;
  NativePairSetter_FUN_11056980 *FUN_11056980(NativeReleaseIface *param_2); };


// Reference entry 10656a30; body size 81 bytes.
#line 1 "ENTRY_10656a30"
NativePairSetter_FUN_10656a30 *NativePairSetter_FUN_10656a30::FUN_10656a30(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 106979b0; body size 81 bytes.
#line 1 "ENTRY_106979b0"
NativePairSetter_FUN_106979b0 *NativePairSetter_FUN_106979b0::FUN_106979b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 1069c7e0; body size 81 bytes.
#line 1 "ENTRY_1069c7e0"
NativePairSetter_FUN_1069c7e0 *NativePairSetter_FUN_1069c7e0::FUN_1069c7e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 106b5300; body size 81 bytes.
#line 1 "ENTRY_106b5300"
NativePairSetter_FUN_106b5300 *NativePairSetter_FUN_106b5300::FUN_106b5300(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 106b5370; body size 81 bytes.
#line 1 "ENTRY_106b5370"
NativePairSetter_FUN_106b5370 *NativePairSetter_FUN_106b5370::FUN_106b5370(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 106b53e0; body size 81 bytes.
#line 1 "ENTRY_106b53e0"
NativePairSetter_FUN_106b53e0 *NativePairSetter_FUN_106b53e0::FUN_106b53e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 106b5520; body size 81 bytes.
#line 1 "ENTRY_106b5520"
NativePairSetter_FUN_106b5520 *NativePairSetter_FUN_106b5520::FUN_106b5520(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 106e5b00; body size 81 bytes.
#line 1 "ENTRY_106e5b00"
NativePairSetter_FUN_106e5b00 *NativePairSetter_FUN_106e5b00::FUN_106e5b00(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 107744c0; body size 81 bytes.
#line 1 "ENTRY_107744c0"
NativePairSetter_FUN_107744c0 *NativePairSetter_FUN_107744c0::FUN_107744c0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10790020; body size 81 bytes.
#line 1 "ENTRY_10790020"
NativePairSetter_FUN_10790020 *NativePairSetter_FUN_10790020::FUN_10790020(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10790090; body size 81 bytes.
#line 1 "ENTRY_10790090"
NativePairSetter_FUN_10790090 *NativePairSetter_FUN_10790090::FUN_10790090(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10790100; body size 81 bytes.
#line 1 "ENTRY_10790100"
NativePairSetter_FUN_10790100 *NativePairSetter_FUN_10790100::FUN_10790100(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10790170; body size 81 bytes.
#line 1 "ENTRY_10790170"
NativePairSetter_FUN_10790170 *NativePairSetter_FUN_10790170::FUN_10790170(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 107e6cb0; body size 81 bytes.
#line 1 "ENTRY_107e6cb0"
NativePairSetter_FUN_107e6cb0 *NativePairSetter_FUN_107e6cb0::FUN_107e6cb0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10846a20; body size 81 bytes.
#line 1 "ENTRY_10846a20"
NativePairSetter_FUN_10846a20 *NativePairSetter_FUN_10846a20::FUN_10846a20(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10846a90; body size 81 bytes.
#line 1 "ENTRY_10846a90"
NativePairSetter_FUN_10846a90 *NativePairSetter_FUN_10846a90::FUN_10846a90(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 108622f0; body size 81 bytes.
#line 1 "ENTRY_108622f0"
NativePairSetter_FUN_108622f0 *NativePairSetter_FUN_108622f0::FUN_108622f0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 109a96b0; body size 81 bytes.
#line 1 "ENTRY_109a96b0"
NativePairSetter_FUN_109a96b0 *NativePairSetter_FUN_109a96b0::FUN_109a96b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 109f8a60; body size 81 bytes.
#line 1 "ENTRY_109f8a60"
NativePairSetter_FUN_109f8a60 *NativePairSetter_FUN_109f8a60::FUN_109f8a60(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 109f8ad0; body size 81 bytes.
#line 1 "ENTRY_109f8ad0"
NativePairSetter_FUN_109f8ad0 *NativePairSetter_FUN_109f8ad0::FUN_109f8ad0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 109f8b40; body size 81 bytes.
#line 1 "ENTRY_109f8b40"
NativePairSetter_FUN_109f8b40 *NativePairSetter_FUN_109f8b40::FUN_109f8b40(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 109f8bb0; body size 81 bytes.
#line 1 "ENTRY_109f8bb0"
NativePairSetter_FUN_109f8bb0 *NativePairSetter_FUN_109f8bb0::FUN_109f8bb0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10a51f30; body size 81 bytes.
#line 1 "ENTRY_10a51f30"
NativePairSetter_FUN_10a51f30 *NativePairSetter_FUN_10a51f30::FUN_10a51f30(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10a52000; body size 81 bytes.
#line 1 "ENTRY_10a52000"
NativePairSetter_FUN_10a52000 *NativePairSetter_FUN_10a52000::FUN_10a52000(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10a76fd0; body size 81 bytes.
#line 1 "ENTRY_10a76fd0"
NativePairSetter_FUN_10a76fd0 *NativePairSetter_FUN_10a76fd0::FUN_10a76fd0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10a77040; body size 81 bytes.
#line 1 "ENTRY_10a77040"
NativePairSetter_FUN_10a77040 *NativePairSetter_FUN_10a77040::FUN_10a77040(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b1c0b0; body size 81 bytes.
#line 1 "ENTRY_10b1c0b0"
NativePairSetter_FUN_10b1c0b0 *NativePairSetter_FUN_10b1c0b0::FUN_10b1c0b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b6da70; body size 81 bytes.
#line 1 "ENTRY_10b6da70"
NativePairSetter_FUN_10b6da70 *NativePairSetter_FUN_10b6da70::FUN_10b6da70(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b76cc0; body size 81 bytes.
#line 1 "ENTRY_10b76cc0"
NativePairSetter_FUN_10b76cc0 *NativePairSetter_FUN_10b76cc0::FUN_10b76cc0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b76d90; body size 81 bytes.
#line 1 "ENTRY_10b76d90"
NativePairSetter_FUN_10b76d90 *NativePairSetter_FUN_10b76d90::FUN_10b76d90(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b7d780; body size 81 bytes.
#line 1 "ENTRY_10b7d780"
NativePairSetter_FUN_10b7d780 *NativePairSetter_FUN_10b7d780::FUN_10b7d780(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b91ca0; body size 81 bytes.
#line 1 "ENTRY_10b91ca0"
NativePairSetter_FUN_10b91ca0 *NativePairSetter_FUN_10b91ca0::FUN_10b91ca0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b99520; body size 81 bytes.
#line 1 "ENTRY_10b99520"
NativePairSetter_FUN_10b99520 *NativePairSetter_FUN_10b99520::FUN_10b99520(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b99590; body size 81 bytes.
#line 1 "ENTRY_10b99590"
NativePairSetter_FUN_10b99590 *NativePairSetter_FUN_10b99590::FUN_10b99590(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b99600; body size 81 bytes.
#line 1 "ENTRY_10b99600"
NativePairSetter_FUN_10b99600 *NativePairSetter_FUN_10b99600::FUN_10b99600(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10b99670; body size 81 bytes.
#line 1 "ENTRY_10b99670"
NativePairSetter_FUN_10b99670 *NativePairSetter_FUN_10b99670::FUN_10b99670(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10ba7570; body size 81 bytes.
#line 1 "ENTRY_10ba7570"
NativePairSetter_FUN_10ba7570 *NativePairSetter_FUN_10ba7570::FUN_10ba7570(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10ba75e0; body size 81 bytes.
#line 1 "ENTRY_10ba75e0"
NativePairSetter_FUN_10ba75e0 *NativePairSetter_FUN_10ba75e0::FUN_10ba75e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10ba7650; body size 81 bytes.
#line 1 "ENTRY_10ba7650"
NativePairSetter_FUN_10ba7650 *NativePairSetter_FUN_10ba7650::FUN_10ba7650(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10ba76c0; body size 81 bytes.
#line 1 "ENTRY_10ba76c0"
NativePairSetter_FUN_10ba76c0 *NativePairSetter_FUN_10ba76c0::FUN_10ba76c0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bbe300; body size 81 bytes.
#line 1 "ENTRY_10bbe300"
NativePairSetter_FUN_10bbe300 *NativePairSetter_FUN_10bbe300::FUN_10bbe300(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bc41a0; body size 81 bytes.
#line 1 "ENTRY_10bc41a0"
NativePairSetter_FUN_10bc41a0 *NativePairSetter_FUN_10bc41a0::FUN_10bc41a0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bc6b70; body size 81 bytes.
#line 1 "ENTRY_10bc6b70"
NativePairSetter_FUN_10bc6b70 *NativePairSetter_FUN_10bc6b70::FUN_10bc6b70(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bc6be0; body size 81 bytes.
#line 1 "ENTRY_10bc6be0"
NativePairSetter_FUN_10bc6be0 *NativePairSetter_FUN_10bc6be0::FUN_10bc6be0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bc6c50; body size 81 bytes.
#line 1 "ENTRY_10bc6c50"
NativePairSetter_FUN_10bc6c50 *NativePairSetter_FUN_10bc6c50::FUN_10bc6c50(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bf0470; body size 81 bytes.
#line 1 "ENTRY_10bf0470"
NativePairSetter_FUN_10bf0470 *NativePairSetter_FUN_10bf0470::FUN_10bf0470(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bf04e0; body size 81 bytes.
#line 1 "ENTRY_10bf04e0"
NativePairSetter_FUN_10bf04e0 *NativePairSetter_FUN_10bf04e0::FUN_10bf04e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bfb9e0; body size 81 bytes.
#line 1 "ENTRY_10bfb9e0"
NativePairSetter_FUN_10bfb9e0 *NativePairSetter_FUN_10bfb9e0::FUN_10bfb9e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bfed00; body size 81 bytes.
#line 1 "ENTRY_10bfed00"
NativePairSetter_FUN_10bfed00 *NativePairSetter_FUN_10bfed00::FUN_10bfed00(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10bfed70; body size 81 bytes.
#line 1 "ENTRY_10bfed70"
NativePairSetter_FUN_10bfed70 *NativePairSetter_FUN_10bfed70::FUN_10bfed70(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c29420; body size 81 bytes.
#line 1 "ENTRY_10c29420"
NativePairSetter_FUN_10c29420 *NativePairSetter_FUN_10c29420::FUN_10c29420(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c36490; body size 81 bytes.
#line 1 "ENTRY_10c36490"
NativePairSetter_FUN_10c36490 *NativePairSetter_FUN_10c36490::FUN_10c36490(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c3a4f0; body size 81 bytes.
#line 1 "ENTRY_10c3a4f0"
NativePairSetter_FUN_10c3a4f0 *NativePairSetter_FUN_10c3a4f0::FUN_10c3a4f0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c4b840; body size 81 bytes.
#line 1 "ENTRY_10c4b840"
NativePairSetter_FUN_10c4b840 *NativePairSetter_FUN_10c4b840::FUN_10c4b840(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c5b680; body size 81 bytes.
#line 1 "ENTRY_10c5b680"
NativePairSetter_FUN_10c5b680 *NativePairSetter_FUN_10c5b680::FUN_10c5b680(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c76670; body size 81 bytes.
#line 1 "ENTRY_10c76670"
NativePairSetter_FUN_10c76670 *NativePairSetter_FUN_10c76670::FUN_10c76670(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c89cd0; body size 81 bytes.
#line 1 "ENTRY_10c89cd0"
NativePairSetter_FUN_10c89cd0 *NativePairSetter_FUN_10c89cd0::FUN_10c89cd0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10c93d00; body size 81 bytes.
#line 1 "ENTRY_10c93d00"
NativePairSetter_FUN_10c93d00 *NativePairSetter_FUN_10c93d00::FUN_10c93d00(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cb7d50; body size 81 bytes.
#line 1 "ENTRY_10cb7d50"
NativePairSetter_FUN_10cb7d50 *NativePairSetter_FUN_10cb7d50::FUN_10cb7d50(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cb94d0; body size 81 bytes.
#line 1 "ENTRY_10cb94d0"
NativePairSetter_FUN_10cb94d0 *NativePairSetter_FUN_10cb94d0::FUN_10cb94d0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cbe750; body size 81 bytes.
#line 1 "ENTRY_10cbe750"
NativePairSetter_FUN_10cbe750 *NativePairSetter_FUN_10cbe750::FUN_10cbe750(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cc1890; body size 81 bytes.
#line 1 "ENTRY_10cc1890"
NativePairSetter_FUN_10cc1890 *NativePairSetter_FUN_10cc1890::FUN_10cc1890(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cdfc40; body size 81 bytes.
#line 1 "ENTRY_10cdfc40"
NativePairSetter_FUN_10cdfc40 *NativePairSetter_FUN_10cdfc40::FUN_10cdfc40(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10ceeac0; body size 81 bytes.
#line 1 "ENTRY_10ceeac0"
NativePairSetter_FUN_10ceeac0 *NativePairSetter_FUN_10ceeac0::FUN_10ceeac0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cf72f0; body size 81 bytes.
#line 1 "ENTRY_10cf72f0"
NativePairSetter_FUN_10cf72f0 *NativePairSetter_FUN_10cf72f0::FUN_10cf72f0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10cf7360; body size 81 bytes.
#line 1 "ENTRY_10cf7360"
NativePairSetter_FUN_10cf7360 *NativePairSetter_FUN_10cf7360::FUN_10cf7360(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d02310; body size 81 bytes.
#line 1 "ENTRY_10d02310"
NativePairSetter_FUN_10d02310 *NativePairSetter_FUN_10d02310::FUN_10d02310(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d09820; body size 81 bytes.
#line 1 "ENTRY_10d09820"
NativePairSetter_FUN_10d09820 *NativePairSetter_FUN_10d09820::FUN_10d09820(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d09890; body size 81 bytes.
#line 1 "ENTRY_10d09890"
NativePairSetter_FUN_10d09890 *NativePairSetter_FUN_10d09890::FUN_10d09890(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d12820; body size 81 bytes.
#line 1 "ENTRY_10d12820"
NativePairSetter_FUN_10d12820 *NativePairSetter_FUN_10d12820::FUN_10d12820(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d1dee0; body size 81 bytes.
#line 1 "ENTRY_10d1dee0"
NativePairSetter_FUN_10d1dee0 *NativePairSetter_FUN_10d1dee0::FUN_10d1dee0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d27c50; body size 81 bytes.
#line 1 "ENTRY_10d27c50"
NativePairSetter_FUN_10d27c50 *NativePairSetter_FUN_10d27c50::FUN_10d27c50(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d27cc0; body size 81 bytes.
#line 1 "ENTRY_10d27cc0"
NativePairSetter_FUN_10d27cc0 *NativePairSetter_FUN_10d27cc0::FUN_10d27cc0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d301b0; body size 81 bytes.
#line 1 "ENTRY_10d301b0"
NativePairSetter_FUN_10d301b0 *NativePairSetter_FUN_10d301b0::FUN_10d301b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d30220; body size 81 bytes.
#line 1 "ENTRY_10d30220"
NativePairSetter_FUN_10d30220 *NativePairSetter_FUN_10d30220::FUN_10d30220(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d3e480; body size 81 bytes.
#line 1 "ENTRY_10d3e480"
NativePairSetter_FUN_10d3e480 *NativePairSetter_FUN_10d3e480::FUN_10d3e480(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d3e4f0; body size 81 bytes.
#line 1 "ENTRY_10d3e4f0"
NativePairSetter_FUN_10d3e4f0 *NativePairSetter_FUN_10d3e4f0::FUN_10d3e4f0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d3e560; body size 81 bytes.
#line 1 "ENTRY_10d3e560"
NativePairSetter_FUN_10d3e560 *NativePairSetter_FUN_10d3e560::FUN_10d3e560(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d4c370; body size 81 bytes.
#line 1 "ENTRY_10d4c370"
NativePairSetter_FUN_10d4c370 *NativePairSetter_FUN_10d4c370::FUN_10d4c370(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d4c3e0; body size 81 bytes.
#line 1 "ENTRY_10d4c3e0"
NativePairSetter_FUN_10d4c3e0 *NativePairSetter_FUN_10d4c3e0::FUN_10d4c3e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d596b0; body size 81 bytes.
#line 1 "ENTRY_10d596b0"
NativePairSetter_FUN_10d596b0 *NativePairSetter_FUN_10d596b0::FUN_10d596b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d59720; body size 81 bytes.
#line 1 "ENTRY_10d59720"
NativePairSetter_FUN_10d59720 *NativePairSetter_FUN_10d59720::FUN_10d59720(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d5e4e0; body size 81 bytes.
#line 1 "ENTRY_10d5e4e0"
NativePairSetter_FUN_10d5e4e0 *NativePairSetter_FUN_10d5e4e0::FUN_10d5e4e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d75d50; body size 81 bytes.
#line 1 "ENTRY_10d75d50"
NativePairSetter_FUN_10d75d50 *NativePairSetter_FUN_10d75d50::FUN_10d75d50(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d81d60; body size 81 bytes.
#line 1 "ENTRY_10d81d60"
NativePairSetter_FUN_10d81d60 *NativePairSetter_FUN_10d81d60::FUN_10d81d60(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d81dd0; body size 81 bytes.
#line 1 "ENTRY_10d81dd0"
NativePairSetter_FUN_10d81dd0 *NativePairSetter_FUN_10d81dd0::FUN_10d81dd0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d81e40; body size 81 bytes.
#line 1 "ENTRY_10d81e40"
NativePairSetter_FUN_10d81e40 *NativePairSetter_FUN_10d81e40::FUN_10d81e40(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d81eb0; body size 81 bytes.
#line 1 "ENTRY_10d81eb0"
NativePairSetter_FUN_10d81eb0 *NativePairSetter_FUN_10d81eb0::FUN_10d81eb0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d81f20; body size 81 bytes.
#line 1 "ENTRY_10d81f20"
NativePairSetter_FUN_10d81f20 *NativePairSetter_FUN_10d81f20::FUN_10d81f20(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d81f90; body size 81 bytes.
#line 1 "ENTRY_10d81f90"
NativePairSetter_FUN_10d81f90 *NativePairSetter_FUN_10d81f90::FUN_10d81f90(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d82000; body size 81 bytes.
#line 1 "ENTRY_10d82000"
NativePairSetter_FUN_10d82000 *NativePairSetter_FUN_10d82000::FUN_10d82000(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d82070; body size 81 bytes.
#line 1 "ENTRY_10d82070"
NativePairSetter_FUN_10d82070 *NativePairSetter_FUN_10d82070::FUN_10d82070(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d820e0; body size 81 bytes.
#line 1 "ENTRY_10d820e0"
NativePairSetter_FUN_10d820e0 *NativePairSetter_FUN_10d820e0::FUN_10d820e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d82150; body size 81 bytes.
#line 1 "ENTRY_10d82150"
NativePairSetter_FUN_10d82150 *NativePairSetter_FUN_10d82150::FUN_10d82150(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d88b30; body size 81 bytes.
#line 1 "ENTRY_10d88b30"
NativePairSetter_FUN_10d88b30 *NativePairSetter_FUN_10d88b30::FUN_10d88b30(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d88ba0; body size 81 bytes.
#line 1 "ENTRY_10d88ba0"
NativePairSetter_FUN_10d88ba0 *NativePairSetter_FUN_10d88ba0::FUN_10d88ba0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d88c10; body size 81 bytes.
#line 1 "ENTRY_10d88c10"
NativePairSetter_FUN_10d88c10 *NativePairSetter_FUN_10d88c10::FUN_10d88c10(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10d9bd40; body size 81 bytes.
#line 1 "ENTRY_10d9bd40"
NativePairSetter_FUN_10d9bd40 *NativePairSetter_FUN_10d9bd40::FUN_10d9bd40(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10da24b0; body size 81 bytes.
#line 1 "ENTRY_10da24b0"
NativePairSetter_FUN_10da24b0 *NativePairSetter_FUN_10da24b0::FUN_10da24b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10da80a0; body size 81 bytes.
#line 1 "ENTRY_10da80a0"
NativePairSetter_FUN_10da80a0 *NativePairSetter_FUN_10da80a0::FUN_10da80a0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10db8dd0; body size 81 bytes.
#line 1 "ENTRY_10db8dd0"
NativePairSetter_FUN_10db8dd0 *NativePairSetter_FUN_10db8dd0::FUN_10db8dd0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10dd1760; body size 81 bytes.
#line 1 "ENTRY_10dd1760"
NativePairSetter_FUN_10dd1760 *NativePairSetter_FUN_10dd1760::FUN_10dd1760(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10dd17d0; body size 81 bytes.
#line 1 "ENTRY_10dd17d0"
NativePairSetter_FUN_10dd17d0 *NativePairSetter_FUN_10dd17d0::FUN_10dd17d0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10dde8e0; body size 81 bytes.
#line 1 "ENTRY_10dde8e0"
NativePairSetter_FUN_10dde8e0 *NativePairSetter_FUN_10dde8e0::FUN_10dde8e0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10de56c0; body size 81 bytes.
#line 1 "ENTRY_10de56c0"
NativePairSetter_FUN_10de56c0 *NativePairSetter_FUN_10de56c0::FUN_10de56c0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10dff5f0; body size 81 bytes.
#line 1 "ENTRY_10dff5f0"
NativePairSetter_FUN_10dff5f0 *NativePairSetter_FUN_10dff5f0::FUN_10dff5f0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10dff660; body size 81 bytes.
#line 1 "ENTRY_10dff660"
NativePairSetter_FUN_10dff660 *NativePairSetter_FUN_10dff660::FUN_10dff660(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e136b0; body size 81 bytes.
#line 1 "ENTRY_10e136b0"
NativePairSetter_FUN_10e136b0 *NativePairSetter_FUN_10e136b0::FUN_10e136b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e28ac0; body size 81 bytes.
#line 1 "ENTRY_10e28ac0"
NativePairSetter_FUN_10e28ac0 *NativePairSetter_FUN_10e28ac0::FUN_10e28ac0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e28b30; body size 81 bytes.
#line 1 "ENTRY_10e28b30"
NativePairSetter_FUN_10e28b30 *NativePairSetter_FUN_10e28b30::FUN_10e28b30(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e28ba0; body size 81 bytes.
#line 1 "ENTRY_10e28ba0"
NativePairSetter_FUN_10e28ba0 *NativePairSetter_FUN_10e28ba0::FUN_10e28ba0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e5f5d0; body size 81 bytes.
#line 1 "ENTRY_10e5f5d0"
NativePairSetter_FUN_10e5f5d0 *NativePairSetter_FUN_10e5f5d0::FUN_10e5f5d0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e5f640; body size 81 bytes.
#line 1 "ENTRY_10e5f640"
NativePairSetter_FUN_10e5f640 *NativePairSetter_FUN_10e5f640::FUN_10e5f640(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e96640; body size 81 bytes.
#line 1 "ENTRY_10e96640"
NativePairSetter_FUN_10e96640 *NativePairSetter_FUN_10e96640::FUN_10e96640(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10e966b0; body size 81 bytes.
#line 1 "ENTRY_10e966b0"
NativePairSetter_FUN_10e966b0 *NativePairSetter_FUN_10e966b0::FUN_10e966b0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10ee25a0; body size 81 bytes.
#line 1 "ENTRY_10ee25a0"
NativePairSetter_FUN_10ee25a0 *NativePairSetter_FUN_10ee25a0::FUN_10ee25a0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f44df0; body size 81 bytes.
#line 1 "ENTRY_10f44df0"
NativePairSetter_FUN_10f44df0 *NativePairSetter_FUN_10f44df0::FUN_10f44df0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f4aae0; body size 81 bytes.
#line 1 "ENTRY_10f4aae0"
NativePairSetter_FUN_10f4aae0 *NativePairSetter_FUN_10f4aae0::FUN_10f4aae0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f4eb10; body size 81 bytes.
#line 1 "ENTRY_10f4eb10"
NativePairSetter_FUN_10f4eb10 *NativePairSetter_FUN_10f4eb10::FUN_10f4eb10(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f4ebe0; body size 81 bytes.
#line 1 "ENTRY_10f4ebe0"
NativePairSetter_FUN_10f4ebe0 *NativePairSetter_FUN_10f4ebe0::FUN_10f4ebe0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f52500; body size 81 bytes.
#line 1 "ENTRY_10f52500"
NativePairSetter_FUN_10f52500 *NativePairSetter_FUN_10f52500::FUN_10f52500(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57b50; body size 81 bytes.
#line 1 "ENTRY_10f57b50"
NativePairSetter_FUN_10f57b50 *NativePairSetter_FUN_10f57b50::FUN_10f57b50(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57bc0; body size 81 bytes.
#line 1 "ENTRY_10f57bc0"
NativePairSetter_FUN_10f57bc0 *NativePairSetter_FUN_10f57bc0::FUN_10f57bc0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57c30; body size 81 bytes.
#line 1 "ENTRY_10f57c30"
NativePairSetter_FUN_10f57c30 *NativePairSetter_FUN_10f57c30::FUN_10f57c30(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57ca0; body size 81 bytes.
#line 1 "ENTRY_10f57ca0"
NativePairSetter_FUN_10f57ca0 *NativePairSetter_FUN_10f57ca0::FUN_10f57ca0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57d10; body size 81 bytes.
#line 1 "ENTRY_10f57d10"
NativePairSetter_FUN_10f57d10 *NativePairSetter_FUN_10f57d10::FUN_10f57d10(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57d80; body size 81 bytes.
#line 1 "ENTRY_10f57d80"
NativePairSetter_FUN_10f57d80 *NativePairSetter_FUN_10f57d80::FUN_10f57d80(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57df0; body size 81 bytes.
#line 1 "ENTRY_10f57df0"
NativePairSetter_FUN_10f57df0 *NativePairSetter_FUN_10f57df0::FUN_10f57df0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57e60; body size 81 bytes.
#line 1 "ENTRY_10f57e60"
NativePairSetter_FUN_10f57e60 *NativePairSetter_FUN_10f57e60::FUN_10f57e60(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57ed0; body size 81 bytes.
#line 1 "ENTRY_10f57ed0"
NativePairSetter_FUN_10f57ed0 *NativePairSetter_FUN_10f57ed0::FUN_10f57ed0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57f40; body size 81 bytes.
#line 1 "ENTRY_10f57f40"
NativePairSetter_FUN_10f57f40 *NativePairSetter_FUN_10f57f40::FUN_10f57f40(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f57fb0; body size 81 bytes.
#line 1 "ENTRY_10f57fb0"
NativePairSetter_FUN_10f57fb0 *NativePairSetter_FUN_10f57fb0::FUN_10f57fb0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f66150; body size 81 bytes.
#line 1 "ENTRY_10f66150"
NativePairSetter_FUN_10f66150 *NativePairSetter_FUN_10f66150::FUN_10f66150(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10f6bfd0; body size 81 bytes.
#line 1 "ENTRY_10f6bfd0"
NativePairSetter_FUN_10f6bfd0 *NativePairSetter_FUN_10f6bfd0::FUN_10f6bfd0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fcbfc0; body size 81 bytes.
#line 1 "ENTRY_10fcbfc0"
NativePairSetter_FUN_10fcbfc0 *NativePairSetter_FUN_10fcbfc0::FUN_10fcbfc0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fcc030; body size 81 bytes.
#line 1 "ENTRY_10fcc030"
NativePairSetter_FUN_10fcc030 *NativePairSetter_FUN_10fcc030::FUN_10fcc030(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fd0de0; body size 81 bytes.
#line 1 "ENTRY_10fd0de0"
NativePairSetter_FUN_10fd0de0 *NativePairSetter_FUN_10fd0de0::FUN_10fd0de0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fd9660; body size 81 bytes.
#line 1 "ENTRY_10fd9660"
NativePairSetter_FUN_10fd9660 *NativePairSetter_FUN_10fd9660::FUN_10fd9660(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fee260; body size 81 bytes.
#line 1 "ENTRY_10fee260"
NativePairSetter_FUN_10fee260 *NativePairSetter_FUN_10fee260::FUN_10fee260(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fee330; body size 81 bytes.
#line 1 "ENTRY_10fee330"
NativePairSetter_FUN_10fee330 *NativePairSetter_FUN_10fee330::FUN_10fee330(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 10fee3a0; body size 81 bytes.
#line 1 "ENTRY_10fee3a0"
NativePairSetter_FUN_10fee3a0 *NativePairSetter_FUN_10fee3a0::FUN_10fee3a0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11010700; body size 81 bytes.
#line 1 "ENTRY_11010700"
NativePairSetter_FUN_11010700 *NativePairSetter_FUN_11010700::FUN_11010700(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11018b40; body size 81 bytes.
#line 1 "ENTRY_11018b40"
NativePairSetter_FUN_11018b40 *NativePairSetter_FUN_11018b40::FUN_11018b40(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 1101b630; body size 81 bytes.
#line 1 "ENTRY_1101b630"
NativePairSetter_FUN_1101b630 *NativePairSetter_FUN_1101b630::FUN_1101b630(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 1101d030; body size 81 bytes.
#line 1 "ENTRY_1101d030"
NativePairSetter_FUN_1101d030 *NativePairSetter_FUN_1101d030::FUN_1101d030(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 1101fe70; body size 81 bytes.
#line 1 "ENTRY_1101fe70"
NativePairSetter_FUN_1101fe70 *NativePairSetter_FUN_1101fe70::FUN_1101fe70(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11021f90; body size 81 bytes.
#line 1 "ENTRY_11021f90"
NativePairSetter_FUN_11021f90 *NativePairSetter_FUN_11021f90::FUN_11021f90(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11027680; body size 81 bytes.
#line 1 "ENTRY_11027680"
NativePairSetter_FUN_11027680 *NativePairSetter_FUN_11027680::FUN_11027680(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 110276f0; body size 81 bytes.
#line 1 "ENTRY_110276f0"
NativePairSetter_FUN_110276f0 *NativePairSetter_FUN_110276f0::FUN_110276f0(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11027760; body size 81 bytes.
#line 1 "ENTRY_11027760"
NativePairSetter_FUN_11027760 *NativePairSetter_FUN_11027760::FUN_11027760(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11042a10; body size 81 bytes.
#line 1 "ENTRY_11042a10"
NativePairSetter_FUN_11042a10 *NativePairSetter_FUN_11042a10::FUN_11042a10(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}

// Reference entry 11056980; body size 81 bytes.
#line 1 "ENTRY_11056980"
NativePairSetter_FUN_11056980 *NativePairSetter_FUN_11056980::FUN_11056980(NativeReleaseIface *param_2) {
if (param_2 != rep) {
  NativeReleaseIface *old = next;
  if (old != 0) { rep = 0; next = 0; old->v8(); }
  rep = param_2;
  if (param_2 != 0) { next = (NativeReleaseIface *)param_2->vC(); next->v4(); }
  else next = 0;
}
return this;
}
