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
union { FactoryTree *tree; unsigned int word; } home; *(FactoryTree * volatile *)&home.tree=this; _ReadWriteBarrier(); head=0; size=0;
FactoryTreeNode *node=(FactoryTreeNode *)operator_new(28);
node->left=node; node->parent=node; node->right=node; node->color=1; node->nil=1; head=node;
}
~FactoryTree();
};
struct RecoveredString_FUN_1008c50b {
volatile unsigned int rep;
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
struct NativePropertyBag {
virtual void reserved0(); virtual void reserved1(); virtual void reserved2();
virtual void reserved3(); virtual void reserved4(); virtual void reserved5();
virtual void reserved6(); virtual void setString(const RecoveredString_FUN_1008c50b &key,SCStr *value);
virtual void reserved8(); virtual void reserved9();
virtual void setInteger(const RecoveredString_FUN_1008c50b &key,unsigned int value);
virtual void reserved11(); virtual void reserved12(); virtual void reserved13();
virtual void reserved14(); virtual void reserved15();
virtual void setWord(const RecoveredString_FUN_1008c50b &key,unsigned int value);
};
struct NativePropertyDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };
struct NativePropertyEvent_10e02910 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e02910():Event_thunk_FUN_10def0d0("btProductConnectionStateChanged",0x27) {} };
struct NativePropertyEvent_10e02a90 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e02a90():Event_thunk_FUN_10def0d0("btProductDiscovered",0x28) {} };
struct NativePropertyEvent_10e02c10 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e02c10():Event_thunk_FUN_10def0d0("btProductPairingAttemptCompleted",0x2a) {} };
struct NativePropertyEvent_10e03040 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e03040():Event_thunk_FUN_10def0d0("chirpDataReceived",0x43) {} };
struct NativePropertyEvent_10e034d0 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e034d0():Event_thunk_FUN_10def0d0("echoMsgReceived",0x2c) {} };
struct NativePropertyEvent_10e03610 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e03610():Event_thunk_FUN_10def0d0("netstart2EchoResponseReceived",0x70) {} };
struct NativePropertyEvent_10e03880 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e03880():Event_thunk_FUN_10def0d0("productUpdateEnded",0x3a) {} };
struct NativePropertyEvent_10e03f20 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e03f20():Event_thunk_FUN_10def0d0("netstartStoreRefreshComplete",0x75) {} };
struct NativePropertyEvent_10e04070 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e04070():Event_thunk_FUN_10def0d0("netstartStoreRefreshFailed",0x76) {} };
struct NativePropertyEvent_10e04b50 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e04b50():Event_thunk_FUN_10def0d0("productReceivedBleConfig",0x57) {} };
struct NativePropertyEvent_10e058e0 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e058e0():Event_thunk_FUN_10def0d0("netstart2SendEchoRequestFailed",0x69) {} };
struct NativePropertyEvent_10e05e00 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e05e00():Event_thunk_FUN_10def0d0("netstart2SendStartIslandFailed",0x6f) {} };
struct NativePropertyEvent_10e06030 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e06030():Event_thunk_FUN_10def0d0("netstart2SendStartOpenApFailed",0x6d) {} };
struct NativePropertyEvent_10e06830 : Event_thunk_FUN_10def0d0 { __forceinline NativePropertyEvent_10e06830():Event_thunk_FUN_10def0d0("productUpdateProgressed",0x3c) {} };
struct NativePropertyCallback { void FUN_10e02910(SCStr *value0, unsigned int value1); void FUN_10e02a90(SCStr *value0, SCStr *value1); void FUN_10e02c10(SCStr *value0, SCStr *value1, unsigned int value2); void FUN_10e03040(SCStr *value0, unsigned int value1); void FUN_10e034d0(unsigned int value0); void FUN_10e03610(SCStr *value0); void FUN_10e03880(unsigned int value0); void FUN_10e03f20(unsigned int value0); void FUN_10e04070(unsigned int value0); void FUN_10e04b50(unsigned int value0, unsigned int value1); void FUN_10e058e0(unsigned int value0); void FUN_10e05e00(unsigned int value0); void FUN_10e06030(unsigned int value0); void FUN_10e06830(unsigned int value0, unsigned int value1); };

extern int thunk_FUN_10df15a0(...);

// Reference entry 10e02910; body size 302 bytes.
#line 1 "ENTRY_10e02910"
void NativePropertyCallback::FUN_10e02910(SCStr *value0, unsigned int value1) {
NativePropertyEvent_10e02910 event;
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("deviceid"),value0);
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("state"),value1);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e02a90; body size 302 bytes.
#line 1 "ENTRY_10e02a90"
void NativePropertyCallback::FUN_10e02a90(SCStr *value0, SCStr *value1) {
NativePropertyEvent_10e02a90 event;
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("deviceid"),value0);
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("devicename"),value1);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e02c10; body size 357 bytes.
#line 1 "ENTRY_10e02c10"
void NativePropertyCallback::FUN_10e02c10(SCStr *value0, SCStr *value1, unsigned int value2) {
NativePropertyEvent_10e02c10 event;
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("deviceid"),value0);
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("devicename"),value1);
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("result"),value2);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e03040; body size 302 bytes.
#line 1 "ENTRY_10e03040"
void NativePropertyCallback::FUN_10e03040(SCStr *value0, unsigned int value1) {
NativePropertyEvent_10e03040 event;
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("chirpData"),value0);
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("channel"),value1);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e034d0; body size 247 bytes.
#line 1 "ENTRY_10e034d0"
void NativePropertyCallback::FUN_10e034d0(unsigned int value0) {
NativePropertyEvent_10e034d0 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("msgLen"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e03610; body size 247 bytes.
#line 1 "ENTRY_10e03610"
void NativePropertyCallback::FUN_10e03610(SCStr *value0) {
NativePropertyEvent_10e03610 event;
((NativePropertyBag *)event.representation.properties)->setString(RecoveredString_FUN_1008c50b("response"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e03880; body size 247 bytes.
#line 1 "ENTRY_10e03880"
void NativePropertyCallback::FUN_10e03880(unsigned int value0) {
NativePropertyEvent_10e03880 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("endUpdateStatus"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e03f20; body size 247 bytes.
#line 1 "ENTRY_10e03f20"
void NativePropertyCallback::FUN_10e03f20(unsigned int value0) {
NativePropertyEvent_10e03f20 event;
((NativePropertyBag *)event.representation.properties)->setWord(RecoveredString_FUN_1008c50b("dataUpdated"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e04070; body size 247 bytes.
#line 1 "ENTRY_10e04070"
void NativePropertyCallback::FUN_10e04070(unsigned int value0) {
NativePropertyEvent_10e04070 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("opResult"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e04b50; body size 302 bytes.
#line 1 "ENTRY_10e04b50"
void NativePropertyCallback::FUN_10e04b50(unsigned int value0, unsigned int value1) {
NativePropertyEvent_10e04b50 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("configPacketInterval"),value0);
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("configPacketCount"),value1);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e058e0; body size 247 bytes.
#line 1 "ENTRY_10e058e0"
void NativePropertyCallback::FUN_10e058e0(unsigned int value0) {
NativePropertyEvent_10e058e0 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("opResult"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e05e00; body size 247 bytes.
#line 1 "ENTRY_10e05e00"
void NativePropertyCallback::FUN_10e05e00(unsigned int value0) {
NativePropertyEvent_10e05e00 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("opResult"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e06030; body size 247 bytes.
#line 1 "ENTRY_10e06030"
void NativePropertyCallback::FUN_10e06030(unsigned int value0) {
NativePropertyEvent_10e06030 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("opResult"),value0);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}

// Reference entry 10e06830; body size 302 bytes.
#line 1 "ENTRY_10e06830"
void NativePropertyCallback::FUN_10e06830(unsigned int value0, unsigned int value1) {
NativePropertyEvent_10e06830 event;
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("updatePhase"),value0);
((NativePropertyBag *)event.representation.properties)->setInteger(RecoveredString_FUN_1008c50b("updatePercent"),value1);
((NativePropertyDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event);
}
