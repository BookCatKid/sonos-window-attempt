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
extern undefined4 DAT_118d39d4;
extern undefined4 DAT_11907e20;
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
~RecoveredString_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); rep=0; }
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
struct NativeFallbackLow_FUN_105a1c80 { unsigned int fields[3]; ~NativeFallbackLow_FUN_105a1c80() noexcept; };
struct NativeFallbackHigh_FUN_105a1d20 { unsigned int fields[3]; ~NativeFallbackHigh_FUN_105a1d20() noexcept; };
struct NativeFallbackEvent_FUN_10dfcab0 { unsigned int head; NativeFallbackLow_FUN_105a1c80 low; NativeFallbackHigh_FUN_105a1d20 high; NativeFallbackEvent_FUN_10dfcab0(); ~NativeFallbackEvent_FUN_10dfcab0() noexcept = default; };
struct NativeFallbackResult_10c { unsigned char padding[0x10c]; unsigned char flag; };
struct NativeFallbackResult_110 { unsigned char padding[0x110]; unsigned char flag; };
struct NativeByteResult_fc { unsigned char padding[0xfc]; unsigned char flag; };
struct NativePassthroughDispatcher { bool thunk_FUN_10df10f0(const Event_thunk_FUN_10def0d0 &); };
struct NativeChainResult_FUN_10eeb270 { void thunk_FUN_10eeb270(); };
NativeChainResult_FUN_10eeb270 *thunk_FUN_10ee48c0();
struct NativeDelayedDispatcher { bool thunk_FUN_10def450(const Event_thunk_FUN_10def0d0 &); bool thunk_FUN_10def490(const NativeFallbackEvent_FUN_10dfcab0 &); };
struct NativeDelayedResult { unsigned char padding[0x108]; int value; };
struct NativeDelayedEvent_FUN_10df9e30 : Event_thunk_FUN_10def0d0 { NativeDelayedEvent_FUN_10df9e30(); };
struct NativeDelayedEvent_FUN_10dfbb10 : Event_thunk_FUN_10def0d0 { NativeDelayedEvent_FUN_10dfbb10(); };
struct NativeDelayedEvent_FUN_10dfda60 : Event_thunk_FUN_10def0d0 { NativeDelayedEvent_FUN_10dfda60(); };
struct NativeDelayedCallback { void thunk_FUN_10ebb8e0(const char *, int); void thunk_FUN_10ebbab0(int); void thunk_FUN_10ebb850(int); NativeDelayedResult *thunk_FUN_10eb41b0(); void FUN_10644850(NativeDelayedDispatcher *); void FUN_10767520(NativeDelayedDispatcher *); void FUN_107675b0(NativeDelayedDispatcher *); void FUN_1076bef0(NativeDelayedDispatcher *); void FUN_10783270(NativeDelayedDispatcher *); bool FUN_107f7160(); void FUN_107fef90(NativeDelayedDispatcher *); void FUN_107ff6d0(NativeDelayedDispatcher *); bool FUN_1080bd40(); void FUN_1089d870(NativeDelayedDispatcher *); void FUN_108c6dd0(NativeDelayedDispatcher *); bool FUN_108d63f0(); void FUN_108def40(NativeDelayedDispatcher *); void FUN_108df040(NativeDelayedDispatcher *); void FUN_108df610(NativeDelayedDispatcher *); void FUN_108df710(NativeDelayedDispatcher *); void FUN_108f5360(NativeDelayedDispatcher *); void FUN_108f5400(NativeDelayedDispatcher *); void FUN_108f6710(NativeDelayedDispatcher *); void FUN_10914630(NativeDelayedDispatcher *); void FUN_10945640(NativeDelayedDispatcher *); void FUN_10945b50(NativeDelayedDispatcher *); void FUN_10945c50(NativeDelayedDispatcher *); void FUN_10945e70(NativeDelayedDispatcher *); void FUN_10946440(NativeDelayedDispatcher *); void FUN_10946f20(NativeDelayedDispatcher *); void FUN_10947030(NativeDelayedDispatcher *); void FUN_10947130(NativeDelayedDispatcher *); void FUN_1097f540(NativeDelayedDispatcher *); void FUN_1097f930(NativeDelayedDispatcher *); void FUN_109e0d30(NativeDelayedDispatcher *); void FUN_10a07790(NativeDelayedDispatcher *); void FUN_10a07830(NativeDelayedDispatcher *); void FUN_10ab2e30(NativeDelayedDispatcher *); void FUN_10ab5fe0(NativeDelayedDispatcher *); void FUN_10b19560(NativeDelayedDispatcher *); void FUN_10b4fa10(NativeDelayedDispatcher *); void FUN_10b4fbe0(NativeDelayedDispatcher *); void FUN_10b4fc80(NativeDelayedDispatcher *); void FUN_10b58460(NativeDelayedDispatcher *); void FUN_10b6bb30(NativeDelayedDispatcher *); void FUN_10b6bbd0(NativeDelayedDispatcher *); };


extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10df10f0(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10ebb850(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10eeb270(...);


// Reference entry 107fef90; body size 203 bytes.
#line 1 "ENTRY_107fef90"
#pragma optimize("g", off)
void NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher *dispatcher) {
if (dispatcher->thunk_FUN_10def450(NativeDelayedEvent_FUN_10dfbb10())) { thunk_FUN_10ebbab0(16456); return; }
if (dispatcher->thunk_FUN_10def490(NativeFallbackEvent_FUN_10dfcab0())) {
((NativeFallbackResult_10c *)thunk_FUN_10eb41b0())->flag = 1;
}
}
#pragma optimize("", on)
