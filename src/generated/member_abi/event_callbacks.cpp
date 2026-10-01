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
struct FactoryOutputLocation { void *receiver; };
__forceinline void *operator new(unsigned int,FactoryOutputLocation location) { return location.receiver; }
struct NativeEventDispatcher { void thunk_FUN_10df15a0(Event_thunk_FUN_10def0d0 *); };
struct NativeEventValue_10e02820 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e02820():Event_thunk_FUN_10def0d0("productUpdateStarted",0x3b) {} };
struct NativeEventValue_10e02dd0 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e02dd0():Event_thunk_FUN_10def0d0("btScanDataReady",0x29) {} };
struct NativeEventValue_10e032f0 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e032f0():Event_thunk_FUN_10def0d0("discoveryHistoryUpdated",0x56) {} };
struct NativeEventValue_10e033e0 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e033e0():Event_thunk_FUN_10def0d0("netstart2DiscoveryTimeoutReceived",0x74) {} };
struct NativeEventValue_10e03d30 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e03d30():Event_thunk_FUN_10def0d0("lifecycleManagerReadyForSetup",0x47) {} };
struct NativeEventValue_10e03e20 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e03e20():Event_thunk_FUN_10def0d0("lifecycleManagerLegacyManifestReady",0x48) {} };
struct NativeEventValue_10e057f0 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e057f0():Event_thunk_FUN_10def0d0("secureSettingsChanged",0x2e) {} };
struct NativeEventValue_10e05f40 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e05f40():Event_thunk_FUN_10def0d0("netstart2SendStartIslandSucceeded",0x6e) {} };
struct NativeEventValue_10e06170 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e06170():Event_thunk_FUN_10def0d0("netstart2SendStartOpenApSucceeded",0x6c) {} };
struct NativeEventValue_10e06390 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e06390():Event_thunk_FUN_10def0d0("netstart2SetupContinueReceived",0x71) {} };
struct NativeEventValue_10e069b0 : Event_thunk_FUN_10def0d0 { __forceinline NativeEventValue_10e069b0():Event_thunk_FUN_10def0d0("zoneGroupsChanged",0x2d) {} };
struct NativeEventCallback { void FUN_10e02820(); void FUN_10e02dd0(); void FUN_10e032f0(); void FUN_10e033e0(); void FUN_10e03d30(unsigned int unused0); void FUN_10e03e20(unsigned int unused0); void FUN_10e057f0(unsigned int unused0); void FUN_10e05f40(); void FUN_10e06170(); void FUN_10e06390(); void FUN_10e069b0(unsigned int unused0); };

extern int thunk_FUN_10df15a0(...);

// Reference entry 10e02820; body size 190 bytes.
#line 1 "ENTRY_10e02820"
void NativeEventCallback::FUN_10e02820() { NativeEventValue_10e02820 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e02dd0; body size 190 bytes.
#line 1 "ENTRY_10e02dd0"
void NativeEventCallback::FUN_10e02dd0() { NativeEventValue_10e02dd0 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e032f0; body size 190 bytes.
#line 1 "ENTRY_10e032f0"
void NativeEventCallback::FUN_10e032f0() { NativeEventValue_10e032f0 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e033e0; body size 190 bytes.
#line 1 "ENTRY_10e033e0"
void NativeEventCallback::FUN_10e033e0() { NativeEventValue_10e033e0 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e03d30; body size 192 bytes.
#line 1 "ENTRY_10e03d30"
void NativeEventCallback::FUN_10e03d30(unsigned int unused0) { NativeEventValue_10e03d30 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e03e20; body size 192 bytes.
#line 1 "ENTRY_10e03e20"
void NativeEventCallback::FUN_10e03e20(unsigned int unused0) { NativeEventValue_10e03e20 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e057f0; body size 192 bytes.
#line 1 "ENTRY_10e057f0"
void NativeEventCallback::FUN_10e057f0(unsigned int unused0) { NativeEventValue_10e057f0 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e05f40; body size 190 bytes.
#line 1 "ENTRY_10e05f40"
void NativeEventCallback::FUN_10e05f40() { NativeEventValue_10e05f40 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e06170; body size 190 bytes.
#line 1 "ENTRY_10e06170"
void NativeEventCallback::FUN_10e06170() { NativeEventValue_10e06170 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e06390; body size 190 bytes.
#line 1 "ENTRY_10e06390"
void NativeEventCallback::FUN_10e06390() { NativeEventValue_10e06390 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }
// Reference entry 10e069b0; body size 192 bytes.
#line 1 "ENTRY_10e069b0"
void NativeEventCallback::FUN_10e069b0(unsigned int unused0) { NativeEventValue_10e069b0 event; ((NativeEventDispatcher *)((char *)this + -16))->thunk_FUN_10df15a0(&event); }