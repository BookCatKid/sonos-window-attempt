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
int __cdecl SCThreadSafeDec(int *);
struct NativeRefVtable { virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void slot4(int); };
struct NativeGuard {
void thunk_FUN_101b9190(int *);
void thunk_FUN_101b9240();
void thunk_FUN_101b91d0();
__forceinline NativeGuard(int *p) { thunk_FUN_101b9190(p); }
__forceinline ~NativeGuard() { thunk_FUN_101b91d0(); }
};
struct NativeRefCountedHost { void *vtbl; int refcount; int FUN_10687970(); int FUN_1068b820(); int FUN_1068b8c0(); int FUN_106a1e70(); int FUN_106ccac0(); int FUN_10a08510(); int FUN_10a085b0(); int FUN_10a08650(); int FUN_10a086f0(); int FUN_10b72620(); int FUN_10b726c0(); int FUN_10b83be0(); int FUN_10b83c80(); int FUN_10b83d20(); int FUN_10b83dc0(); int FUN_10b83e60(); int FUN_10b84310(); int FUN_10b8d830(); int FUN_10b8d8d0(); int FUN_10b8d970(); int FUN_10b8da10(); int FUN_10b95230(); int FUN_10b9f970(); int FUN_10b9fa10(); int FUN_10b9fab0(); int FUN_10b9fb50(); int FUN_10b9fd60(); int FUN_10b9fe00(); int FUN_10bb32d0(); int FUN_10bbcc80(); int FUN_10bbee40(); int FUN_10bc4e60(); int FUN_10bc9270(); int FUN_10bc9310(); int FUN_10bf14c0(); int FUN_10bf15c0(); int FUN_10bf2a50(); int FUN_10bf30c0(); int FUN_10bf35b0(); int FUN_10bf9370(); int FUN_10c00e90(); int FUN_10c00f30(); int FUN_10c03c20(); int FUN_10c03cf0(); int FUN_10c15900(); int FUN_10c20d40(); int FUN_10c20e00(); int FUN_10c27300(); int FUN_10c2a720(); int FUN_10c2a7f0(); int FUN_10c38a70(); int FUN_10c3b6e0(); int FUN_10c537d0(); int FUN_10c53870(); int FUN_10c53910(); int FUN_10c539b0(); int FUN_10c53a50(); int FUN_10c53af0(); int FUN_10c58930(); int FUN_10c589d0(); int FUN_10c58a70(); int FUN_10c58b10(); int FUN_10c58bb0(); int FUN_10c5acd0(); int FUN_10c5ad70(); int FUN_10c5d080(); int FUN_10c6e410(); int FUN_10c6ee80(); int FUN_10c7fbd0(); int FUN_10cbc7c0(); int FUN_10cc3550(); int FUN_10cdecc0(); int FUN_10cded60(); int FUN_10cdee00(); int FUN_10ce1fe0(); int FUN_10ce2080(); int FUN_10ce2b20(); int FUN_10cebc90(); int FUN_10cebd90(); int FUN_10cf6450(); int FUN_10cfb120(); int FUN_10cfdfb0(); int FUN_10cfe060(); int FUN_10d07710(); int FUN_10d077b0(); int FUN_10d07b00(); int FUN_10d07ba0(); int FUN_10d108c0(); int FUN_10d15020(); int FUN_10d15110(); int FUN_10d151c0(); int FUN_10d15270(); int FUN_10d19550(); int FUN_10d1e830(); int FUN_10d22450(); int FUN_10d2b520(); int FUN_10d2b5c0(); int FUN_10d2b670(); int FUN_10d2b710(); int FUN_10d2b7b0(); int FUN_10d3a020(); int FUN_10d3a0c0(); int FUN_10d41fa0(); int FUN_10d42040(); int FUN_10d42170(); int FUN_10d42220(); int FUN_10d49a10(); int FUN_10d49ac0(); int FUN_10d49b80(); int FUN_10d49c30(); int FUN_10d49cf0(); int FUN_10d49da0(); int FUN_10d51470(); int FUN_10d58960(); int FUN_10d5ad10(); int FUN_10d603f0(); int FUN_10d63620(); int FUN_10d636d0(); int FUN_10d63780(); int FUN_10d63830(); int FUN_10d67680(); int FUN_10d67720(); int FUN_10d67840(); int FUN_10d678f0(); int FUN_10d679a0(); int FUN_10d67a50(); int FUN_10d71b90(); int FUN_10d71d10(); int FUN_10d71de0(); int FUN_10d90630(); int FUN_10d9dfd0(); int FUN_10da34e0(); int FUN_10da76c0(); int FUN_10da7760(); int FUN_10dcefe0(); int FUN_10dcf080(); int FUN_10ddce40(); int FUN_10ddcef0(); int FUN_10de2970(); int FUN_10de8ad0(); int FUN_10e3f320(); int FUN_10e3f3c0(); int FUN_10e72d70(); int FUN_10e72f00(); int FUN_10ea5c30(); int FUN_10ea5cd0(); int FUN_10ea5d70(); int FUN_10ea5e10(); int FUN_10ea6330(); int FUN_10ea63e0(); int FUN_10ea64a0(); int FUN_10ea6550(); int FUN_10ea6600(); int FUN_10ea66b0(); int FUN_10ea6760(); int FUN_10ea6820(); int FUN_10ea68d0(); int FUN_10ea6980(); int FUN_10ea6a30(); int FUN_10ea6ae0(); int FUN_10f13e30(); int FUN_10f3ef80(); int FUN_10f43460(); int FUN_10f47d00(); int FUN_10f48d60(); int FUN_10f4cda0(); int FUN_10f4ce40(); int FUN_10f51670(); int FUN_10f53600(); int FUN_10f62b20(); int FUN_10f62bc0(); int FUN_10f62c60(); int FUN_10f62d00(); int FUN_10f62e60(); int FUN_10f62f10(); int FUN_10f68380(); int FUN_10f684b0(); int FUN_10f6a950(); int FUN_10f6dae0(); int FUN_10f740a0(); int FUN_10f7a370(); int FUN_10f7a410(); int FUN_10fa3930(); int FUN_10fc9830(); int FUN_10fd2cf0(); int FUN_10fd2e50(); int FUN_10fd2f00(); int FUN_10fddfe0(); int FUN_10fde090(); int FUN_10fde160(); int FUN_10fde230(); int FUN_10fde2e0(); int FUN_10fde3b0(); int FUN_10fde480(); int FUN_10fde530(); int FUN_10fde600(); int FUN_10fde6b0(); int FUN_10fde760(); int FUN_10fe6ec0(); int FUN_10ff8830(); int FUN_10ff88e0(); int FUN_10ff89a0(); int FUN_10ffbbb0(); int FUN_10ffd160(); int FUN_110030d0(); int FUN_11018470(); int FUN_11019500(); int FUN_1101c0d0(); int FUN_1101e6d0(); int FUN_11021320(); int FUN_110226e0(); int FUN_1102dfa0(); int FUN_1102e040(); int FUN_1102e0e0(); int FUN_11033570(); int FUN_110337d0(); int FUN_11060db0(); int FUN_11062040(); int FUN_11062fd0(); int FUN_11067310(); int FUN_110673b0(); int FUN_11068120(); };

extern int thunk_FUN_101b9240(...);

// Reference entry 10687970; body size 123 bytes.
#line 1 "ENTRY_10687970"
int NativeRefCountedHost::FUN_10687970() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1068b820; body size 123 bytes.
#line 1 "ENTRY_1068b820"
int NativeRefCountedHost::FUN_1068b820() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1068b8c0; body size 123 bytes.
#line 1 "ENTRY_1068b8c0"
int NativeRefCountedHost::FUN_1068b8c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 106a1e70; body size 123 bytes.
#line 1 "ENTRY_106a1e70"
int NativeRefCountedHost::FUN_106a1e70() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 106ccac0; body size 123 bytes.
#line 1 "ENTRY_106ccac0"
int NativeRefCountedHost::FUN_106ccac0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10a08510; body size 123 bytes.
#line 1 "ENTRY_10a08510"
int NativeRefCountedHost::FUN_10a08510() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10a085b0; body size 123 bytes.
#line 1 "ENTRY_10a085b0"
int NativeRefCountedHost::FUN_10a085b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10a08650; body size 123 bytes.
#line 1 "ENTRY_10a08650"
int NativeRefCountedHost::FUN_10a08650() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10a086f0; body size 123 bytes.
#line 1 "ENTRY_10a086f0"
int NativeRefCountedHost::FUN_10a086f0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b72620; body size 123 bytes.
#line 1 "ENTRY_10b72620"
int NativeRefCountedHost::FUN_10b72620() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b726c0; body size 123 bytes.
#line 1 "ENTRY_10b726c0"
int NativeRefCountedHost::FUN_10b726c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b83be0; body size 123 bytes.
#line 1 "ENTRY_10b83be0"
int NativeRefCountedHost::FUN_10b83be0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b83c80; body size 123 bytes.
#line 1 "ENTRY_10b83c80"
int NativeRefCountedHost::FUN_10b83c80() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b83d20; body size 123 bytes.
#line 1 "ENTRY_10b83d20"
int NativeRefCountedHost::FUN_10b83d20() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b83dc0; body size 123 bytes.
#line 1 "ENTRY_10b83dc0"
int NativeRefCountedHost::FUN_10b83dc0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b83e60; body size 123 bytes.
#line 1 "ENTRY_10b83e60"
int NativeRefCountedHost::FUN_10b83e60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b84310; body size 123 bytes.
#line 1 "ENTRY_10b84310"
int NativeRefCountedHost::FUN_10b84310() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b8d830; body size 123 bytes.
#line 1 "ENTRY_10b8d830"
int NativeRefCountedHost::FUN_10b8d830() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b8d8d0; body size 123 bytes.
#line 1 "ENTRY_10b8d8d0"
int NativeRefCountedHost::FUN_10b8d8d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b8d970; body size 123 bytes.
#line 1 "ENTRY_10b8d970"
int NativeRefCountedHost::FUN_10b8d970() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b8da10; body size 123 bytes.
#line 1 "ENTRY_10b8da10"
int NativeRefCountedHost::FUN_10b8da10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b95230; body size 123 bytes.
#line 1 "ENTRY_10b95230"
int NativeRefCountedHost::FUN_10b95230() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b9f970; body size 123 bytes.
#line 1 "ENTRY_10b9f970"
int NativeRefCountedHost::FUN_10b9f970() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b9fa10; body size 123 bytes.
#line 1 "ENTRY_10b9fa10"
int NativeRefCountedHost::FUN_10b9fa10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b9fab0; body size 123 bytes.
#line 1 "ENTRY_10b9fab0"
int NativeRefCountedHost::FUN_10b9fab0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b9fb50; body size 123 bytes.
#line 1 "ENTRY_10b9fb50"
int NativeRefCountedHost::FUN_10b9fb50() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b9fd60; body size 123 bytes.
#line 1 "ENTRY_10b9fd60"
int NativeRefCountedHost::FUN_10b9fd60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10b9fe00; body size 123 bytes.
#line 1 "ENTRY_10b9fe00"
int NativeRefCountedHost::FUN_10b9fe00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bb32d0; body size 123 bytes.
#line 1 "ENTRY_10bb32d0"
int NativeRefCountedHost::FUN_10bb32d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bbcc80; body size 123 bytes.
#line 1 "ENTRY_10bbcc80"
int NativeRefCountedHost::FUN_10bbcc80() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bbee40; body size 123 bytes.
#line 1 "ENTRY_10bbee40"
int NativeRefCountedHost::FUN_10bbee40() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bc4e60; body size 123 bytes.
#line 1 "ENTRY_10bc4e60"
int NativeRefCountedHost::FUN_10bc4e60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bc9270; body size 123 bytes.
#line 1 "ENTRY_10bc9270"
int NativeRefCountedHost::FUN_10bc9270() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bc9310; body size 123 bytes.
#line 1 "ENTRY_10bc9310"
int NativeRefCountedHost::FUN_10bc9310() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bf14c0; body size 123 bytes.
#line 1 "ENTRY_10bf14c0"
int NativeRefCountedHost::FUN_10bf14c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bf15c0; body size 123 bytes.
#line 1 "ENTRY_10bf15c0"
int NativeRefCountedHost::FUN_10bf15c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bf2a50; body size 123 bytes.
#line 1 "ENTRY_10bf2a50"
int NativeRefCountedHost::FUN_10bf2a50() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bf30c0; body size 123 bytes.
#line 1 "ENTRY_10bf30c0"
int NativeRefCountedHost::FUN_10bf30c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bf35b0; body size 123 bytes.
#line 1 "ENTRY_10bf35b0"
int NativeRefCountedHost::FUN_10bf35b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10bf9370; body size 123 bytes.
#line 1 "ENTRY_10bf9370"
int NativeRefCountedHost::FUN_10bf9370() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c00e90; body size 123 bytes.
#line 1 "ENTRY_10c00e90"
int NativeRefCountedHost::FUN_10c00e90() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c00f30; body size 123 bytes.
#line 1 "ENTRY_10c00f30"
int NativeRefCountedHost::FUN_10c00f30() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c03c20; body size 123 bytes.
#line 1 "ENTRY_10c03c20"
int NativeRefCountedHost::FUN_10c03c20() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c03cf0; body size 123 bytes.
#line 1 "ENTRY_10c03cf0"
int NativeRefCountedHost::FUN_10c03cf0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c15900; body size 123 bytes.
#line 1 "ENTRY_10c15900"
int NativeRefCountedHost::FUN_10c15900() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c20d40; body size 123 bytes.
#line 1 "ENTRY_10c20d40"
int NativeRefCountedHost::FUN_10c20d40() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c20e00; body size 123 bytes.
#line 1 "ENTRY_10c20e00"
int NativeRefCountedHost::FUN_10c20e00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c27300; body size 123 bytes.
#line 1 "ENTRY_10c27300"
int NativeRefCountedHost::FUN_10c27300() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c2a720; body size 123 bytes.
#line 1 "ENTRY_10c2a720"
int NativeRefCountedHost::FUN_10c2a720() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c2a7f0; body size 123 bytes.
#line 1 "ENTRY_10c2a7f0"
int NativeRefCountedHost::FUN_10c2a7f0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c38a70; body size 123 bytes.
#line 1 "ENTRY_10c38a70"
int NativeRefCountedHost::FUN_10c38a70() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c3b6e0; body size 123 bytes.
#line 1 "ENTRY_10c3b6e0"
int NativeRefCountedHost::FUN_10c3b6e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c537d0; body size 123 bytes.
#line 1 "ENTRY_10c537d0"
int NativeRefCountedHost::FUN_10c537d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c53870; body size 123 bytes.
#line 1 "ENTRY_10c53870"
int NativeRefCountedHost::FUN_10c53870() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c53910; body size 123 bytes.
#line 1 "ENTRY_10c53910"
int NativeRefCountedHost::FUN_10c53910() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c539b0; body size 123 bytes.
#line 1 "ENTRY_10c539b0"
int NativeRefCountedHost::FUN_10c539b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c53a50; body size 123 bytes.
#line 1 "ENTRY_10c53a50"
int NativeRefCountedHost::FUN_10c53a50() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c53af0; body size 123 bytes.
#line 1 "ENTRY_10c53af0"
int NativeRefCountedHost::FUN_10c53af0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c58930; body size 123 bytes.
#line 1 "ENTRY_10c58930"
int NativeRefCountedHost::FUN_10c58930() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c589d0; body size 123 bytes.
#line 1 "ENTRY_10c589d0"
int NativeRefCountedHost::FUN_10c589d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c58a70; body size 123 bytes.
#line 1 "ENTRY_10c58a70"
int NativeRefCountedHost::FUN_10c58a70() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c58b10; body size 123 bytes.
#line 1 "ENTRY_10c58b10"
int NativeRefCountedHost::FUN_10c58b10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c58bb0; body size 123 bytes.
#line 1 "ENTRY_10c58bb0"
int NativeRefCountedHost::FUN_10c58bb0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c5acd0; body size 123 bytes.
#line 1 "ENTRY_10c5acd0"
int NativeRefCountedHost::FUN_10c5acd0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c5ad70; body size 123 bytes.
#line 1 "ENTRY_10c5ad70"
int NativeRefCountedHost::FUN_10c5ad70() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c5d080; body size 123 bytes.
#line 1 "ENTRY_10c5d080"
int NativeRefCountedHost::FUN_10c5d080() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c6e410; body size 123 bytes.
#line 1 "ENTRY_10c6e410"
int NativeRefCountedHost::FUN_10c6e410() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c6ee80; body size 123 bytes.
#line 1 "ENTRY_10c6ee80"
int NativeRefCountedHost::FUN_10c6ee80() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10c7fbd0; body size 123 bytes.
#line 1 "ENTRY_10c7fbd0"
int NativeRefCountedHost::FUN_10c7fbd0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cbc7c0; body size 123 bytes.
#line 1 "ENTRY_10cbc7c0"
int NativeRefCountedHost::FUN_10cbc7c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cc3550; body size 123 bytes.
#line 1 "ENTRY_10cc3550"
int NativeRefCountedHost::FUN_10cc3550() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cdecc0; body size 123 bytes.
#line 1 "ENTRY_10cdecc0"
int NativeRefCountedHost::FUN_10cdecc0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cded60; body size 123 bytes.
#line 1 "ENTRY_10cded60"
int NativeRefCountedHost::FUN_10cded60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cdee00; body size 123 bytes.
#line 1 "ENTRY_10cdee00"
int NativeRefCountedHost::FUN_10cdee00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ce1fe0; body size 123 bytes.
#line 1 "ENTRY_10ce1fe0"
int NativeRefCountedHost::FUN_10ce1fe0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ce2080; body size 123 bytes.
#line 1 "ENTRY_10ce2080"
int NativeRefCountedHost::FUN_10ce2080() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ce2b20; body size 123 bytes.
#line 1 "ENTRY_10ce2b20"
int NativeRefCountedHost::FUN_10ce2b20() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cebc90; body size 123 bytes.
#line 1 "ENTRY_10cebc90"
int NativeRefCountedHost::FUN_10cebc90() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cebd90; body size 123 bytes.
#line 1 "ENTRY_10cebd90"
int NativeRefCountedHost::FUN_10cebd90() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cf6450; body size 123 bytes.
#line 1 "ENTRY_10cf6450"
int NativeRefCountedHost::FUN_10cf6450() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cfb120; body size 123 bytes.
#line 1 "ENTRY_10cfb120"
int NativeRefCountedHost::FUN_10cfb120() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cfdfb0; body size 123 bytes.
#line 1 "ENTRY_10cfdfb0"
int NativeRefCountedHost::FUN_10cfdfb0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10cfe060; body size 123 bytes.
#line 1 "ENTRY_10cfe060"
int NativeRefCountedHost::FUN_10cfe060() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d07710; body size 123 bytes.
#line 1 "ENTRY_10d07710"
int NativeRefCountedHost::FUN_10d07710() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d077b0; body size 123 bytes.
#line 1 "ENTRY_10d077b0"
int NativeRefCountedHost::FUN_10d077b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d07b00; body size 123 bytes.
#line 1 "ENTRY_10d07b00"
int NativeRefCountedHost::FUN_10d07b00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d07ba0; body size 123 bytes.
#line 1 "ENTRY_10d07ba0"
int NativeRefCountedHost::FUN_10d07ba0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d108c0; body size 123 bytes.
#line 1 "ENTRY_10d108c0"
int NativeRefCountedHost::FUN_10d108c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d15020; body size 123 bytes.
#line 1 "ENTRY_10d15020"
int NativeRefCountedHost::FUN_10d15020() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d15110; body size 123 bytes.
#line 1 "ENTRY_10d15110"
int NativeRefCountedHost::FUN_10d15110() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d151c0; body size 123 bytes.
#line 1 "ENTRY_10d151c0"
int NativeRefCountedHost::FUN_10d151c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d15270; body size 123 bytes.
#line 1 "ENTRY_10d15270"
int NativeRefCountedHost::FUN_10d15270() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d19550; body size 123 bytes.
#line 1 "ENTRY_10d19550"
int NativeRefCountedHost::FUN_10d19550() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d1e830; body size 123 bytes.
#line 1 "ENTRY_10d1e830"
int NativeRefCountedHost::FUN_10d1e830() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d22450; body size 123 bytes.
#line 1 "ENTRY_10d22450"
int NativeRefCountedHost::FUN_10d22450() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d2b520; body size 123 bytes.
#line 1 "ENTRY_10d2b520"
int NativeRefCountedHost::FUN_10d2b520() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d2b5c0; body size 123 bytes.
#line 1 "ENTRY_10d2b5c0"
int NativeRefCountedHost::FUN_10d2b5c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d2b670; body size 123 bytes.
#line 1 "ENTRY_10d2b670"
int NativeRefCountedHost::FUN_10d2b670() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d2b710; body size 123 bytes.
#line 1 "ENTRY_10d2b710"
int NativeRefCountedHost::FUN_10d2b710() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d2b7b0; body size 123 bytes.
#line 1 "ENTRY_10d2b7b0"
int NativeRefCountedHost::FUN_10d2b7b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d3a020; body size 123 bytes.
#line 1 "ENTRY_10d3a020"
int NativeRefCountedHost::FUN_10d3a020() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d3a0c0; body size 123 bytes.
#line 1 "ENTRY_10d3a0c0"
int NativeRefCountedHost::FUN_10d3a0c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d41fa0; body size 123 bytes.
#line 1 "ENTRY_10d41fa0"
int NativeRefCountedHost::FUN_10d41fa0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d42040; body size 123 bytes.
#line 1 "ENTRY_10d42040"
int NativeRefCountedHost::FUN_10d42040() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d42170; body size 123 bytes.
#line 1 "ENTRY_10d42170"
int NativeRefCountedHost::FUN_10d42170() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d42220; body size 123 bytes.
#line 1 "ENTRY_10d42220"
int NativeRefCountedHost::FUN_10d42220() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d49a10; body size 123 bytes.
#line 1 "ENTRY_10d49a10"
int NativeRefCountedHost::FUN_10d49a10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d49ac0; body size 123 bytes.
#line 1 "ENTRY_10d49ac0"
int NativeRefCountedHost::FUN_10d49ac0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d49b80; body size 123 bytes.
#line 1 "ENTRY_10d49b80"
int NativeRefCountedHost::FUN_10d49b80() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d49c30; body size 123 bytes.
#line 1 "ENTRY_10d49c30"
int NativeRefCountedHost::FUN_10d49c30() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d49cf0; body size 123 bytes.
#line 1 "ENTRY_10d49cf0"
int NativeRefCountedHost::FUN_10d49cf0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d49da0; body size 123 bytes.
#line 1 "ENTRY_10d49da0"
int NativeRefCountedHost::FUN_10d49da0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d51470; body size 123 bytes.
#line 1 "ENTRY_10d51470"
int NativeRefCountedHost::FUN_10d51470() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d58960; body size 123 bytes.
#line 1 "ENTRY_10d58960"
int NativeRefCountedHost::FUN_10d58960() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d5ad10; body size 123 bytes.
#line 1 "ENTRY_10d5ad10"
int NativeRefCountedHost::FUN_10d5ad10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d603f0; body size 123 bytes.
#line 1 "ENTRY_10d603f0"
int NativeRefCountedHost::FUN_10d603f0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d63620; body size 123 bytes.
#line 1 "ENTRY_10d63620"
int NativeRefCountedHost::FUN_10d63620() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d636d0; body size 123 bytes.
#line 1 "ENTRY_10d636d0"
int NativeRefCountedHost::FUN_10d636d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d63780; body size 123 bytes.
#line 1 "ENTRY_10d63780"
int NativeRefCountedHost::FUN_10d63780() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d63830; body size 123 bytes.
#line 1 "ENTRY_10d63830"
int NativeRefCountedHost::FUN_10d63830() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d67680; body size 123 bytes.
#line 1 "ENTRY_10d67680"
int NativeRefCountedHost::FUN_10d67680() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d67720; body size 123 bytes.
#line 1 "ENTRY_10d67720"
int NativeRefCountedHost::FUN_10d67720() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d67840; body size 123 bytes.
#line 1 "ENTRY_10d67840"
int NativeRefCountedHost::FUN_10d67840() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d678f0; body size 123 bytes.
#line 1 "ENTRY_10d678f0"
int NativeRefCountedHost::FUN_10d678f0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d679a0; body size 123 bytes.
#line 1 "ENTRY_10d679a0"
int NativeRefCountedHost::FUN_10d679a0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d67a50; body size 123 bytes.
#line 1 "ENTRY_10d67a50"
int NativeRefCountedHost::FUN_10d67a50() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d71b90; body size 123 bytes.
#line 1 "ENTRY_10d71b90"
int NativeRefCountedHost::FUN_10d71b90() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d71d10; body size 123 bytes.
#line 1 "ENTRY_10d71d10"
int NativeRefCountedHost::FUN_10d71d10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d71de0; body size 123 bytes.
#line 1 "ENTRY_10d71de0"
int NativeRefCountedHost::FUN_10d71de0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d90630; body size 123 bytes.
#line 1 "ENTRY_10d90630"
int NativeRefCountedHost::FUN_10d90630() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10d9dfd0; body size 123 bytes.
#line 1 "ENTRY_10d9dfd0"
int NativeRefCountedHost::FUN_10d9dfd0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10da34e0; body size 123 bytes.
#line 1 "ENTRY_10da34e0"
int NativeRefCountedHost::FUN_10da34e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10da76c0; body size 123 bytes.
#line 1 "ENTRY_10da76c0"
int NativeRefCountedHost::FUN_10da76c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10da7760; body size 123 bytes.
#line 1 "ENTRY_10da7760"
int NativeRefCountedHost::FUN_10da7760() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10dcefe0; body size 123 bytes.
#line 1 "ENTRY_10dcefe0"
int NativeRefCountedHost::FUN_10dcefe0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10dcf080; body size 123 bytes.
#line 1 "ENTRY_10dcf080"
int NativeRefCountedHost::FUN_10dcf080() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ddce40; body size 123 bytes.
#line 1 "ENTRY_10ddce40"
int NativeRefCountedHost::FUN_10ddce40() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ddcef0; body size 123 bytes.
#line 1 "ENTRY_10ddcef0"
int NativeRefCountedHost::FUN_10ddcef0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10de2970; body size 123 bytes.
#line 1 "ENTRY_10de2970"
int NativeRefCountedHost::FUN_10de2970() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10de8ad0; body size 123 bytes.
#line 1 "ENTRY_10de8ad0"
int NativeRefCountedHost::FUN_10de8ad0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10e3f320; body size 123 bytes.
#line 1 "ENTRY_10e3f320"
int NativeRefCountedHost::FUN_10e3f320() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10e3f3c0; body size 123 bytes.
#line 1 "ENTRY_10e3f3c0"
int NativeRefCountedHost::FUN_10e3f3c0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10e72d70; body size 123 bytes.
#line 1 "ENTRY_10e72d70"
int NativeRefCountedHost::FUN_10e72d70() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10e72f00; body size 123 bytes.
#line 1 "ENTRY_10e72f00"
int NativeRefCountedHost::FUN_10e72f00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea5c30; body size 123 bytes.
#line 1 "ENTRY_10ea5c30"
int NativeRefCountedHost::FUN_10ea5c30() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea5cd0; body size 123 bytes.
#line 1 "ENTRY_10ea5cd0"
int NativeRefCountedHost::FUN_10ea5cd0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea5d70; body size 123 bytes.
#line 1 "ENTRY_10ea5d70"
int NativeRefCountedHost::FUN_10ea5d70() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea5e10; body size 123 bytes.
#line 1 "ENTRY_10ea5e10"
int NativeRefCountedHost::FUN_10ea5e10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6330; body size 123 bytes.
#line 1 "ENTRY_10ea6330"
int NativeRefCountedHost::FUN_10ea6330() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea63e0; body size 123 bytes.
#line 1 "ENTRY_10ea63e0"
int NativeRefCountedHost::FUN_10ea63e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea64a0; body size 123 bytes.
#line 1 "ENTRY_10ea64a0"
int NativeRefCountedHost::FUN_10ea64a0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6550; body size 123 bytes.
#line 1 "ENTRY_10ea6550"
int NativeRefCountedHost::FUN_10ea6550() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6600; body size 123 bytes.
#line 1 "ENTRY_10ea6600"
int NativeRefCountedHost::FUN_10ea6600() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea66b0; body size 123 bytes.
#line 1 "ENTRY_10ea66b0"
int NativeRefCountedHost::FUN_10ea66b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6760; body size 123 bytes.
#line 1 "ENTRY_10ea6760"
int NativeRefCountedHost::FUN_10ea6760() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6820; body size 123 bytes.
#line 1 "ENTRY_10ea6820"
int NativeRefCountedHost::FUN_10ea6820() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea68d0; body size 123 bytes.
#line 1 "ENTRY_10ea68d0"
int NativeRefCountedHost::FUN_10ea68d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6980; body size 123 bytes.
#line 1 "ENTRY_10ea6980"
int NativeRefCountedHost::FUN_10ea6980() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6a30; body size 123 bytes.
#line 1 "ENTRY_10ea6a30"
int NativeRefCountedHost::FUN_10ea6a30() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ea6ae0; body size 123 bytes.
#line 1 "ENTRY_10ea6ae0"
int NativeRefCountedHost::FUN_10ea6ae0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f13e30; body size 123 bytes.
#line 1 "ENTRY_10f13e30"
int NativeRefCountedHost::FUN_10f13e30() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f3ef80; body size 123 bytes.
#line 1 "ENTRY_10f3ef80"
int NativeRefCountedHost::FUN_10f3ef80() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f43460; body size 123 bytes.
#line 1 "ENTRY_10f43460"
int NativeRefCountedHost::FUN_10f43460() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f47d00; body size 123 bytes.
#line 1 "ENTRY_10f47d00"
int NativeRefCountedHost::FUN_10f47d00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f48d60; body size 123 bytes.
#line 1 "ENTRY_10f48d60"
int NativeRefCountedHost::FUN_10f48d60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f4cda0; body size 123 bytes.
#line 1 "ENTRY_10f4cda0"
int NativeRefCountedHost::FUN_10f4cda0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f4ce40; body size 123 bytes.
#line 1 "ENTRY_10f4ce40"
int NativeRefCountedHost::FUN_10f4ce40() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f51670; body size 123 bytes.
#line 1 "ENTRY_10f51670"
int NativeRefCountedHost::FUN_10f51670() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f53600; body size 123 bytes.
#line 1 "ENTRY_10f53600"
int NativeRefCountedHost::FUN_10f53600() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f62b20; body size 123 bytes.
#line 1 "ENTRY_10f62b20"
int NativeRefCountedHost::FUN_10f62b20() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f62bc0; body size 123 bytes.
#line 1 "ENTRY_10f62bc0"
int NativeRefCountedHost::FUN_10f62bc0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f62c60; body size 123 bytes.
#line 1 "ENTRY_10f62c60"
int NativeRefCountedHost::FUN_10f62c60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f62d00; body size 123 bytes.
#line 1 "ENTRY_10f62d00"
int NativeRefCountedHost::FUN_10f62d00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f62e60; body size 123 bytes.
#line 1 "ENTRY_10f62e60"
int NativeRefCountedHost::FUN_10f62e60() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f62f10; body size 123 bytes.
#line 1 "ENTRY_10f62f10"
int NativeRefCountedHost::FUN_10f62f10() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f68380; body size 123 bytes.
#line 1 "ENTRY_10f68380"
int NativeRefCountedHost::FUN_10f68380() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f684b0; body size 123 bytes.
#line 1 "ENTRY_10f684b0"
int NativeRefCountedHost::FUN_10f684b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f6a950; body size 123 bytes.
#line 1 "ENTRY_10f6a950"
int NativeRefCountedHost::FUN_10f6a950() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f6dae0; body size 123 bytes.
#line 1 "ENTRY_10f6dae0"
int NativeRefCountedHost::FUN_10f6dae0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f740a0; body size 123 bytes.
#line 1 "ENTRY_10f740a0"
int NativeRefCountedHost::FUN_10f740a0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f7a370; body size 123 bytes.
#line 1 "ENTRY_10f7a370"
int NativeRefCountedHost::FUN_10f7a370() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10f7a410; body size 123 bytes.
#line 1 "ENTRY_10f7a410"
int NativeRefCountedHost::FUN_10f7a410() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fa3930; body size 123 bytes.
#line 1 "ENTRY_10fa3930"
int NativeRefCountedHost::FUN_10fa3930() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fc9830; body size 123 bytes.
#line 1 "ENTRY_10fc9830"
int NativeRefCountedHost::FUN_10fc9830() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fd2cf0; body size 123 bytes.
#line 1 "ENTRY_10fd2cf0"
int NativeRefCountedHost::FUN_10fd2cf0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fd2e50; body size 123 bytes.
#line 1 "ENTRY_10fd2e50"
int NativeRefCountedHost::FUN_10fd2e50() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fd2f00; body size 123 bytes.
#line 1 "ENTRY_10fd2f00"
int NativeRefCountedHost::FUN_10fd2f00() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fddfe0; body size 123 bytes.
#line 1 "ENTRY_10fddfe0"
int NativeRefCountedHost::FUN_10fddfe0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde090; body size 123 bytes.
#line 1 "ENTRY_10fde090"
int NativeRefCountedHost::FUN_10fde090() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde160; body size 123 bytes.
#line 1 "ENTRY_10fde160"
int NativeRefCountedHost::FUN_10fde160() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde230; body size 123 bytes.
#line 1 "ENTRY_10fde230"
int NativeRefCountedHost::FUN_10fde230() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde2e0; body size 123 bytes.
#line 1 "ENTRY_10fde2e0"
int NativeRefCountedHost::FUN_10fde2e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde3b0; body size 123 bytes.
#line 1 "ENTRY_10fde3b0"
int NativeRefCountedHost::FUN_10fde3b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde480; body size 123 bytes.
#line 1 "ENTRY_10fde480"
int NativeRefCountedHost::FUN_10fde480() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde530; body size 123 bytes.
#line 1 "ENTRY_10fde530"
int NativeRefCountedHost::FUN_10fde530() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde600; body size 123 bytes.
#line 1 "ENTRY_10fde600"
int NativeRefCountedHost::FUN_10fde600() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde6b0; body size 123 bytes.
#line 1 "ENTRY_10fde6b0"
int NativeRefCountedHost::FUN_10fde6b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fde760; body size 123 bytes.
#line 1 "ENTRY_10fde760"
int NativeRefCountedHost::FUN_10fde760() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10fe6ec0; body size 123 bytes.
#line 1 "ENTRY_10fe6ec0"
int NativeRefCountedHost::FUN_10fe6ec0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ff8830; body size 123 bytes.
#line 1 "ENTRY_10ff8830"
int NativeRefCountedHost::FUN_10ff8830() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ff88e0; body size 123 bytes.
#line 1 "ENTRY_10ff88e0"
int NativeRefCountedHost::FUN_10ff88e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ff89a0; body size 123 bytes.
#line 1 "ENTRY_10ff89a0"
int NativeRefCountedHost::FUN_10ff89a0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ffbbb0; body size 123 bytes.
#line 1 "ENTRY_10ffbbb0"
int NativeRefCountedHost::FUN_10ffbbb0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 10ffd160; body size 123 bytes.
#line 1 "ENTRY_10ffd160"
int NativeRefCountedHost::FUN_10ffd160() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 110030d0; body size 123 bytes.
#line 1 "ENTRY_110030d0"
int NativeRefCountedHost::FUN_110030d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11018470; body size 123 bytes.
#line 1 "ENTRY_11018470"
int NativeRefCountedHost::FUN_11018470() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11019500; body size 123 bytes.
#line 1 "ENTRY_11019500"
int NativeRefCountedHost::FUN_11019500() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1101c0d0; body size 123 bytes.
#line 1 "ENTRY_1101c0d0"
int NativeRefCountedHost::FUN_1101c0d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1101e6d0; body size 123 bytes.
#line 1 "ENTRY_1101e6d0"
int NativeRefCountedHost::FUN_1101e6d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11021320; body size 123 bytes.
#line 1 "ENTRY_11021320"
int NativeRefCountedHost::FUN_11021320() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 110226e0; body size 123 bytes.
#line 1 "ENTRY_110226e0"
int NativeRefCountedHost::FUN_110226e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1102dfa0; body size 123 bytes.
#line 1 "ENTRY_1102dfa0"
int NativeRefCountedHost::FUN_1102dfa0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1102e040; body size 123 bytes.
#line 1 "ENTRY_1102e040"
int NativeRefCountedHost::FUN_1102e040() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 1102e0e0; body size 123 bytes.
#line 1 "ENTRY_1102e0e0"
int NativeRefCountedHost::FUN_1102e0e0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11033570; body size 123 bytes.
#line 1 "ENTRY_11033570"
int NativeRefCountedHost::FUN_11033570() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 110337d0; body size 123 bytes.
#line 1 "ENTRY_110337d0"
int NativeRefCountedHost::FUN_110337d0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11060db0; body size 123 bytes.
#line 1 "ENTRY_11060db0"
int NativeRefCountedHost::FUN_11060db0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11062040; body size 123 bytes.
#line 1 "ENTRY_11062040"
int NativeRefCountedHost::FUN_11062040() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11062fd0; body size 123 bytes.
#line 1 "ENTRY_11062fd0"
int NativeRefCountedHost::FUN_11062fd0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11067310; body size 123 bytes.
#line 1 "ENTRY_11067310"
int NativeRefCountedHost::FUN_11067310() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 110673b0; body size 123 bytes.
#line 1 "ENTRY_110673b0"
int NativeRefCountedHost::FUN_110673b0() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}

// Reference entry 11068120; body size 123 bytes.
#line 1 "ENTRY_11068120"
int NativeRefCountedHost::FUN_11068120() {
NativeGuard guard((int *)this);
int r = SCThreadSafeDec(&this->refcount);
if (r == 0) {
guard.thunk_FUN_101b9240();
if (this != 0) ((NativeRefVtable *)this)->slot4(1);
}
return r;
}
