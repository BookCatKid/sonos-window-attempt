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
extern undefined4 DAT_1189e9f4;
extern undefined4 DAT_118abe30;
extern undefined4 DAT_118af10c;
extern undefined4 DAT_118ba17c;
extern undefined4 DAT_118ba188;
extern undefined4 DAT_118ba4a0;
extern undefined4 DAT_118c62f8;
extern undefined4 DAT_118f1a0c;
extern undefined4 DAT_118f1b68;
extern undefined4 DAT_118f1cd0;
extern undefined4 DAT_118f1e3c;
extern undefined4 DAT_1190a9a4;
extern undefined4 DAT_1190e1dc;
extern undefined4 DAT_11916ca0;
extern undefined4 DAT_1191758c;
extern undefined4 DAT_11917694;
extern undefined4 DAT_1191779c;
extern undefined4 DAT_11917a08;
extern undefined4 DAT_11917fe4;
extern undefined4 DAT_11918250;
extern undefined4 DAT_1191856c;
extern undefined4 DAT_1191af84;
extern undefined4 DAT_1191b040;
extern undefined4 DAT_1191c0dc;
extern undefined4 DAT_1191edc8;
extern undefined4 DAT_1191ef54;
extern undefined4 DAT_1191f010;
extern undefined4 DAT_1191f0cc;
extern undefined4 DAT_1191f188;
extern undefined4 DAT_1191f244;
extern undefined4 DAT_1191f300;
extern undefined4 DAT_1191f3bc;
extern undefined4 DAT_1191f478;
extern undefined4 DAT_1191f534;
extern undefined4 DAT_11920a04;
extern undefined4 DAT_11920b78;
extern undefined4 DAT_11920e2c;
extern undefined4 DAT_11921350;
extern undefined4 DAT_11922750;
extern undefined4 DAT_1192f214;
extern undefined4 DAT_1192f2d0;
extern undefined4 DAT_1192f38c;
extern undefined4 DAT_11935fb0;
extern undefined4 DAT_119468a0;
extern undefined4 DAT_1194b768;
extern undefined4 DAT_1194cc44;
extern undefined4 DAT_1194cd30;
extern undefined4 DAT_1194ce1c;
extern undefined4 DAT_1194e610;
extern undefined4 DAT_1194f12c;
extern undefined4 DAT_1194f1ec;
extern undefined4 DAT_1194f2ac;
extern undefined4 DAT_1194f36c;
extern undefined4 DAT_11950a7c;
extern undefined4 DAT_11951f18;
extern undefined4 DAT_11952084;
extern undefined4 DAT_119521f0;
extern undefined4 DAT_11952374;
extern undefined4 DAT_11952780;
extern undefined4 DAT_11952b10;
extern undefined4 DAT_11953a6c;
extern undefined4 DAT_11953b28;
extern undefined4 DAT_1195474c;
extern undefined4 DAT_1195480c;
extern undefined4 DAT_119548cc;
extern undefined4 DAT_119606a8;
extern undefined4 DAT_119639e0;
extern undefined4 DAT_11966100;
extern undefined4 DAT_1196651c;
extern undefined4 DAT_119668ac;
extern undefined4 DAT_119d3bbc;
extern undefined4 DAT_119d3bc8;
extern undefined4 DAT_119d3df0;
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
extern unsigned int DAT_1188207c;
extern unsigned int DAT_1189e9f4;
extern unsigned int DAT_118abe30;
extern unsigned int DAT_118af10c;
extern unsigned int DAT_118ba17c;
extern unsigned int DAT_118ba188;
extern unsigned int DAT_118ba4a0;
extern unsigned int DAT_118c62f8;
extern unsigned int DAT_118f1a0c;
extern unsigned int DAT_118f1b68;
extern unsigned int DAT_118f1cd0;
extern unsigned int DAT_118f1e3c;
extern unsigned int DAT_1190a9a4;
extern unsigned int DAT_1190e1dc;
extern unsigned int DAT_11916ca0;
extern unsigned int DAT_1191758c;
extern unsigned int DAT_11917694;
extern unsigned int DAT_1191779c;
extern unsigned int DAT_11917a08;
extern unsigned int DAT_11917fe4;
extern unsigned int DAT_11918250;
extern unsigned int DAT_1191856c;
extern unsigned int DAT_1191af84;
extern unsigned int DAT_1191b040;
extern unsigned int DAT_1191c0dc;
extern unsigned int DAT_1191edc8;
extern unsigned int DAT_1191ef54;
extern unsigned int DAT_1191f010;
extern unsigned int DAT_1191f0cc;
extern unsigned int DAT_1191f188;
extern unsigned int DAT_1191f244;
extern unsigned int DAT_1191f300;
extern unsigned int DAT_1191f3bc;
extern unsigned int DAT_1191f478;
extern unsigned int DAT_1191f534;
extern unsigned int DAT_11920a04;
extern unsigned int DAT_11920b78;
extern unsigned int DAT_11920e2c;
extern unsigned int DAT_11921350;
extern unsigned int DAT_11922750;
extern unsigned int DAT_1192f214;
extern unsigned int DAT_1192f2d0;
extern unsigned int DAT_1192f38c;
extern unsigned int DAT_11935fb0;
extern unsigned int DAT_119468a0;
extern unsigned int DAT_1194b768;
extern unsigned int DAT_1194cc44;
extern unsigned int DAT_1194cd30;
extern unsigned int DAT_1194ce1c;
extern unsigned int DAT_1194e610;
extern unsigned int DAT_1194f12c;
extern unsigned int DAT_1194f1ec;
extern unsigned int DAT_1194f2ac;
extern unsigned int DAT_1194f36c;
extern unsigned int DAT_11950a7c;
extern unsigned int DAT_11951f18;
extern unsigned int DAT_11952084;
extern unsigned int DAT_119521f0;
extern unsigned int DAT_11952374;
extern unsigned int DAT_11952780;
extern unsigned int DAT_11952b10;
extern unsigned int DAT_11953a6c;
extern unsigned int DAT_11953b28;
extern unsigned int DAT_1195474c;
extern unsigned int DAT_1195480c;
extern unsigned int DAT_119548cc;
extern unsigned int DAT_119606a8;
extern unsigned int DAT_119639e0;
extern unsigned int DAT_11966100;
extern unsigned int DAT_1196651c;
extern unsigned int DAT_119668ac;
extern unsigned int DAT_119d3bbc;
extern unsigned int DAT_119d3bc8;
extern unsigned int DAT_119d3df0;
void __cdecl thunk_FUN_1123fce0(void *);
struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;
~NativeOpRefMember_thunk_FUN_101ba1b0(); };
struct NativeOpRefBase_FUN_10687d70 { void *vptr;
NativeOpRefBase_FUN_10687d70() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10687d70(void *param_2); };
struct NativeOpRefBase_FUN_109f3cd0 { void *vptr;
NativeOpRefBase_FUN_109f3cd0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_109f3cd0 : NativeOpRefBase_FUN_109f3cd0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_109f3cd0(void *param_2); };
struct NativeOpRefBase_FUN_109f3d60 { void *vptr;
NativeOpRefBase_FUN_109f3d60() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_109f3d60 : NativeOpRefBase_FUN_109f3d60 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_109f3d60(void *param_2); };
struct NativeOpRefBase_FUN_109f3df0 { void *vptr;
NativeOpRefBase_FUN_109f3df0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_109f3df0 : NativeOpRefBase_FUN_109f3df0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_109f3df0(void *param_2); };
struct NativeOpRefBase_FUN_109f3eb0 { void *vptr;
NativeOpRefBase_FUN_109f3eb0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_109f3eb0 : NativeOpRefBase_FUN_109f3eb0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_109f3eb0(void *param_2); };
struct NativeOpRefBase_FUN_10b6cc40 { void *vptr;
NativeOpRefBase_FUN_10b6cc40() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10b6cc40 : NativeOpRefBase_FUN_10b6cc40 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10b6cc40(void *param_2); };
struct NativeOpRefBase_FUN_10b7bc50 { void *vptr;
NativeOpRefBase_FUN_10b7bc50() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10b7bc50 : NativeOpRefBase_FUN_10b7bc50 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10b7bc50(void *param_2); };
struct NativeOpRefBase_FUN_10c4a320 { void *vptr;
NativeOpRefBase_FUN_10c4a320() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c4a320 : NativeOpRefBase_FUN_10c4a320 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c4a320(void *param_2); };
struct NativeOpRefBase_FUN_10c4da10 { void *vptr;
NativeOpRefBase_FUN_10c4da10() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c4da10 : NativeOpRefBase_FUN_10c4da10 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c4da10(void *param_2); };
struct NativeOpRefBase_FUN_10c4daa0 { void *vptr;
NativeOpRefBase_FUN_10c4daa0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c4daa0 : NativeOpRefBase_FUN_10c4daa0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c4daa0(void *param_2); };
struct NativeOpRefBase_FUN_10c4db30 { void *vptr;
NativeOpRefBase_FUN_10c4db30() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c4db30 : NativeOpRefBase_FUN_10c4db30 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c4db30(void *param_2); };
struct NativeOpRefBase_FUN_10c4dbc0 { void *vptr;
NativeOpRefBase_FUN_10c4dbc0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c4dbc0 : NativeOpRefBase_FUN_10c4dbc0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c4dbc0(void *param_2); };
struct NativeOpRefBase_FUN_10c4dc50 { void *vptr;
NativeOpRefBase_FUN_10c4dc50() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c4dc50 : NativeOpRefBase_FUN_10c4dc50 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c4dc50(void *param_2); };
struct NativeOpRefBase_FUN_10c54280 { void *vptr;
NativeOpRefBase_FUN_10c54280() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c54280 : NativeOpRefBase_FUN_10c54280 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c54280(void *param_2); };
struct NativeOpRefBase_FUN_10c54310 { void *vptr;
NativeOpRefBase_FUN_10c54310() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c54310 : NativeOpRefBase_FUN_10c54310 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c54310(void *param_2); };
struct NativeOpRefBase_FUN_10c543a0 { void *vptr;
NativeOpRefBase_FUN_10c543a0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c543a0 : NativeOpRefBase_FUN_10c543a0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c543a0(void *param_2); };
struct NativeOpRefBase_FUN_10c54430 { void *vptr;
NativeOpRefBase_FUN_10c54430() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c54430 : NativeOpRefBase_FUN_10c54430 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c54430(void *param_2); };
struct NativeOpRefBase_FUN_10c590a0 { void *vptr;
NativeOpRefBase_FUN_10c590a0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c590a0 : NativeOpRefBase_FUN_10c590a0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c590a0(void *param_2); };
struct NativeOpRefBase_FUN_10c80280 { void *vptr;
NativeOpRefBase_FUN_10c80280() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c80280 : NativeOpRefBase_FUN_10c80280 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c80280(void *param_2); };
struct NativeOpRefBase_FUN_10c80310 { void *vptr;
NativeOpRefBase_FUN_10c80310() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10c80310 : NativeOpRefBase_FUN_10c80310 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10c80310(void *param_2); };
struct NativeOpRefBase_FUN_10cc0ab0 { void *vptr;
NativeOpRefBase_FUN_10cc0ab0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc0ab0 : NativeOpRefBase_FUN_10cc0ab0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc0ab0(void *param_2); };
struct NativeOpRefBase_FUN_10cc5bf0 { void *vptr;
NativeOpRefBase_FUN_10cc5bf0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5bf0 : NativeOpRefBase_FUN_10cc5bf0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5bf0(void *param_2); };
struct NativeOpRefBase_FUN_10cc5c80 { void *vptr;
NativeOpRefBase_FUN_10cc5c80() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5c80 : NativeOpRefBase_FUN_10cc5c80 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5c80(void *param_2); };
struct NativeOpRefBase_FUN_10cc5d10 { void *vptr;
NativeOpRefBase_FUN_10cc5d10() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5d10 : NativeOpRefBase_FUN_10cc5d10 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5d10(void *param_2); };
struct NativeOpRefBase_FUN_10cc5da0 { void *vptr;
NativeOpRefBase_FUN_10cc5da0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5da0 : NativeOpRefBase_FUN_10cc5da0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5da0(void *param_2); };
struct NativeOpRefBase_FUN_10cc5e30 { void *vptr;
NativeOpRefBase_FUN_10cc5e30() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5e30 : NativeOpRefBase_FUN_10cc5e30 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5e30(void *param_2); };
struct NativeOpRefBase_FUN_10cc5ec0 { void *vptr;
NativeOpRefBase_FUN_10cc5ec0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5ec0 : NativeOpRefBase_FUN_10cc5ec0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5ec0(void *param_2); };
struct NativeOpRefBase_FUN_10cc5f50 { void *vptr;
NativeOpRefBase_FUN_10cc5f50() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5f50 : NativeOpRefBase_FUN_10cc5f50 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5f50(void *param_2); };
struct NativeOpRefBase_FUN_10cc5fe0 { void *vptr;
NativeOpRefBase_FUN_10cc5fe0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc5fe0 : NativeOpRefBase_FUN_10cc5fe0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc5fe0(void *param_2); };
struct NativeOpRefBase_FUN_10cc6070 { void *vptr;
NativeOpRefBase_FUN_10cc6070() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cc6070 : NativeOpRefBase_FUN_10cc6070 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cc6070(void *param_2); };
struct NativeOpRefBase_FUN_10cdacd0 { void *vptr;
NativeOpRefBase_FUN_10cdacd0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cdacd0 : NativeOpRefBase_FUN_10cdacd0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cdacd0(void *param_2); };
struct NativeOpRefBase_FUN_10cdad60 { void *vptr;
NativeOpRefBase_FUN_10cdad60() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cdad60 : NativeOpRefBase_FUN_10cdad60 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cdad60(void *param_2); };
struct NativeOpRefBase_FUN_10ce0b40 { void *vptr;
NativeOpRefBase_FUN_10ce0b40() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10ce0b40 : NativeOpRefBase_FUN_10ce0b40 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10ce0b40(void *param_2); };
struct NativeOpRefBase_FUN_10ce2220 { void *vptr;
NativeOpRefBase_FUN_10ce2220() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10ce2220 : NativeOpRefBase_FUN_10ce2220 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10ce2220(void *param_2); };
struct NativeOpRefBase_FUN_10cf53f0 { void *vptr;
NativeOpRefBase_FUN_10cf53f0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10cf53f0 : NativeOpRefBase_FUN_10cf53f0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10cf53f0(void *param_2); };
struct NativeOpRefBase_FUN_10d7c290 { void *vptr;
NativeOpRefBase_FUN_10d7c290() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10d7c290 : NativeOpRefBase_FUN_10d7c290 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10d7c290(void *param_2); };
struct NativeOpRefBase_FUN_10d7c320 { void *vptr;
NativeOpRefBase_FUN_10d7c320() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10d7c320 : NativeOpRefBase_FUN_10d7c320 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10d7c320(void *param_2); };
struct NativeOpRefBase_FUN_10d7c3b0 { void *vptr;
NativeOpRefBase_FUN_10d7c3b0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10d7c3b0 : NativeOpRefBase_FUN_10d7c3b0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10d7c3b0(void *param_2); };
struct NativeOpRefBase_FUN_10d7c440 { void *vptr;
NativeOpRefBase_FUN_10d7c440() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10d7c440 : NativeOpRefBase_FUN_10d7c440 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10d7c440(void *param_2); };
struct NativeOpRefBase_FUN_10d9aa90 { void *vptr;
NativeOpRefBase_FUN_10d9aa90() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10d9aa90 : NativeOpRefBase_FUN_10d9aa90 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10d9aa90(void *param_2); };
struct NativeOpRefBase_FUN_10de4660 { void *vptr;
NativeOpRefBase_FUN_10de4660() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10de4660 : NativeOpRefBase_FUN_10de4660 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10de4660(void *param_2); };
struct NativeOpRefBase_FUN_10e8b3d0 { void *vptr;
NativeOpRefBase_FUN_10e8b3d0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10e8b3d0 : NativeOpRefBase_FUN_10e8b3d0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10e8b3d0(void *param_2); };
struct NativeOpRefBase_FUN_10ef1200 { void *vptr;
NativeOpRefBase_FUN_10ef1200() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10ef1200 : NativeOpRefBase_FUN_10ef1200 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10ef1200(void *param_2); };
struct NativeOpRefBase_FUN_10f0d4e0 { void *vptr;
NativeOpRefBase_FUN_10f0d4e0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f0d4e0 : NativeOpRefBase_FUN_10f0d4e0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f0d4e0(void *param_2); };
struct NativeOpRefBase_FUN_10f0d5a0 { void *vptr;
NativeOpRefBase_FUN_10f0d5a0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f0d5a0 : NativeOpRefBase_FUN_10f0d5a0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f0d5a0(void *param_2); };
struct NativeOpRefBase_FUN_10f0d630 { void *vptr;
NativeOpRefBase_FUN_10f0d630() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f0d630 : NativeOpRefBase_FUN_10f0d630 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f0d630(void *param_2); };
struct NativeOpRefBase_FUN_10f246a0 { void *vptr;
NativeOpRefBase_FUN_10f246a0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f246a0 : NativeOpRefBase_FUN_10f246a0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f246a0(void *param_2); };
struct NativeOpRefBase_FUN_10f2f770 { void *vptr;
NativeOpRefBase_FUN_10f2f770() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f2f770 : NativeOpRefBase_FUN_10f2f770 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f2f770(void *param_2); };
struct NativeOpRefBase_FUN_10f2f800 { void *vptr;
NativeOpRefBase_FUN_10f2f800() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f2f800 : NativeOpRefBase_FUN_10f2f800 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f2f800(void *param_2); };
struct NativeOpRefBase_FUN_10f2f890 { void *vptr;
NativeOpRefBase_FUN_10f2f890() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f2f890 : NativeOpRefBase_FUN_10f2f890 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f2f890(void *param_2); };
struct NativeOpRefBase_FUN_10f2f920 { void *vptr;
NativeOpRefBase_FUN_10f2f920() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f2f920 : NativeOpRefBase_FUN_10f2f920 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f2f920(void *param_2); };
struct NativeOpRefBase_FUN_10f55960 { void *vptr;
NativeOpRefBase_FUN_10f55960() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f55960 : NativeOpRefBase_FUN_10f55960 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f55960(void *param_2); };
struct NativeOpRefBase_FUN_10f559f0 { void *vptr;
NativeOpRefBase_FUN_10f559f0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f559f0 : NativeOpRefBase_FUN_10f559f0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f559f0(void *param_2); };
struct NativeOpRefBase_FUN_10f55a80 { void *vptr;
NativeOpRefBase_FUN_10f55a80() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f55a80 : NativeOpRefBase_FUN_10f55a80 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f55a80(void *param_2); };
struct NativeOpRefBase_FUN_10f55b10 { void *vptr;
NativeOpRefBase_FUN_10f55b10() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f55b10 : NativeOpRefBase_FUN_10f55b10 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f55b10(void *param_2); };
struct NativeOpRefBase_FUN_10f64d40 { void *vptr;
NativeOpRefBase_FUN_10f64d40() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f64d40 : NativeOpRefBase_FUN_10f64d40 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f64d40(void *param_2); };
struct NativeOpRefBase_FUN_10f6faa0 { void *vptr;
NativeOpRefBase_FUN_10f6faa0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f6faa0 : NativeOpRefBase_FUN_10f6faa0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f6faa0(void *param_2); };
struct NativeOpRefBase_FUN_10f77370 { void *vptr;
NativeOpRefBase_FUN_10f77370() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f77370 : NativeOpRefBase_FUN_10f77370 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f77370(void *param_2); };
struct NativeOpRefBase_FUN_10f7c2c0 { void *vptr;
NativeOpRefBase_FUN_10f7c2c0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f7c2c0 : NativeOpRefBase_FUN_10f7c2c0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f7c2c0(void *param_2); };
struct NativeOpRefBase_FUN_10f7c350 { void *vptr;
NativeOpRefBase_FUN_10f7c350() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f7c350 : NativeOpRefBase_FUN_10f7c350 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f7c350(void *param_2); };
struct NativeOpRefBase_FUN_10f8a080 { void *vptr;
NativeOpRefBase_FUN_10f8a080() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f8a080 : NativeOpRefBase_FUN_10f8a080 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f8a080(void *param_2); };
struct NativeOpRefBase_FUN_10f8a110 { void *vptr;
NativeOpRefBase_FUN_10f8a110() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f8a110 : NativeOpRefBase_FUN_10f8a110 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f8a110(void *param_2); };
struct NativeOpRefBase_FUN_10f8a1a0 { void *vptr;
NativeOpRefBase_FUN_10f8a1a0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_10f8a1a0 : NativeOpRefBase_FUN_10f8a1a0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10f8a1a0(void *param_2); };
struct NativeOpRefBase_FUN_110178a0 { void *vptr;
NativeOpRefBase_FUN_110178a0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_110178a0 : NativeOpRefBase_FUN_110178a0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_110178a0(void *param_2); };
struct NativeOpRefBase_FUN_11025cf0 { void *vptr;
NativeOpRefBase_FUN_11025cf0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_11025cf0 : NativeOpRefBase_FUN_11025cf0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_11025cf0(void *param_2); };
struct NativeOpRefBase_FUN_1105f190 { void *vptr;
NativeOpRefBase_FUN_1105f190() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_1105f190 : NativeOpRefBase_FUN_1105f190 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_1105f190(void *param_2); };
struct NativeOpRefBase_FUN_11061520 { void *vptr;
NativeOpRefBase_FUN_11061520() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_11061520 : NativeOpRefBase_FUN_11061520 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_11061520(void *param_2); };
struct NativeOpRefBase_FUN_11064630 { void *vptr;
NativeOpRefBase_FUN_11064630() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_11064630 : NativeOpRefBase_FUN_11064630 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_11064630(void *param_2); };
struct NativeOpRefBase_FUN_11067460 { void *vptr;
NativeOpRefBase_FUN_11067460() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_11067460 : NativeOpRefBase_FUN_11067460 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_11067460(void *param_2); };
struct NativeOpRefBase_FUN_111c9920 { void *vptr;
NativeOpRefBase_FUN_111c9920() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_111c9920 : NativeOpRefBase_FUN_111c9920 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_111c9920(void *param_2); };
struct NativeOpRefBase_FUN_111c99b0 { void *vptr;
NativeOpRefBase_FUN_111c99b0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_111c99b0 : NativeOpRefBase_FUN_111c99b0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_111c99b0(void *param_2); };
struct NativeOpRefBase_FUN_111c9a40 { void *vptr;
NativeOpRefBase_FUN_111c9a40() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_111c9a40 : NativeOpRefBase_FUN_111c9a40 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_111c9a40(void *param_2); };
struct NativeOpRefBase_FUN_111c9ad0 { void *vptr;
NativeOpRefBase_FUN_111c9ad0() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefCtor_FUN_111c9ad0 : NativeOpRefBase_FUN_111c9ad0 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_111c9ad0(void *param_2); };

extern int thunk_FUN_1123fce0(...);

// Reference entry 10687d70; body size 114 bytes.
#line 1 "ENTRY_10687d70"
NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)
    : NativeOpRefBase_FUN_10687d70(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118c62f8;
}

// Reference entry 109f3cd0; body size 114 bytes.
#line 1 "ENTRY_109f3cd0"
NativeOpRefCtor_FUN_109f3cd0::NativeOpRefCtor_FUN_109f3cd0(void *param_2)
    : NativeOpRefBase_FUN_109f3cd0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118f1cd0;
}

// Reference entry 109f3d60; body size 114 bytes.
#line 1 "ENTRY_109f3d60"
NativeOpRefCtor_FUN_109f3d60::NativeOpRefCtor_FUN_109f3d60(void *param_2)
    : NativeOpRefBase_FUN_109f3d60(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118f1a0c;
}

// Reference entry 109f3df0; body size 114 bytes.
#line 1 "ENTRY_109f3df0"
NativeOpRefCtor_FUN_109f3df0::NativeOpRefCtor_FUN_109f3df0(void *param_2)
    : NativeOpRefBase_FUN_109f3df0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118f1e3c;
}

// Reference entry 109f3eb0; body size 114 bytes.
#line 1 "ENTRY_109f3eb0"
NativeOpRefCtor_FUN_109f3eb0::NativeOpRefCtor_FUN_109f3eb0(void *param_2)
    : NativeOpRefBase_FUN_109f3eb0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118f1b68;
}

// Reference entry 10b6cc40; body size 114 bytes.
#line 1 "ENTRY_10b6cc40"
NativeOpRefCtor_FUN_10b6cc40::NativeOpRefCtor_FUN_10b6cc40(void *param_2)
    : NativeOpRefBase_FUN_10b6cc40(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1190a9a4;
}

// Reference entry 10b7bc50; body size 114 bytes.
#line 1 "ENTRY_10b7bc50"
NativeOpRefCtor_FUN_10b7bc50::NativeOpRefCtor_FUN_10b7bc50(void *param_2)
    : NativeOpRefBase_FUN_10b7bc50(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1190e1dc;
}

// Reference entry 10c4a320; body size 114 bytes.
#line 1 "ENTRY_10c4a320"
NativeOpRefCtor_FUN_10c4a320::NativeOpRefCtor_FUN_10c4a320(void *param_2)
    : NativeOpRefBase_FUN_10c4a320(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11916ca0;
}

// Reference entry 10c4da10; body size 114 bytes.
#line 1 "ENTRY_10c4da10"
NativeOpRefCtor_FUN_10c4da10::NativeOpRefCtor_FUN_10c4da10(void *param_2)
    : NativeOpRefBase_FUN_10c4da10(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191758c;
}

// Reference entry 10c4daa0; body size 114 bytes.
#line 1 "ENTRY_10c4daa0"
NativeOpRefCtor_FUN_10c4daa0::NativeOpRefCtor_FUN_10c4daa0(void *param_2)
    : NativeOpRefBase_FUN_10c4daa0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11917694;
}

// Reference entry 10c4db30; body size 114 bytes.
#line 1 "ENTRY_10c4db30"
NativeOpRefCtor_FUN_10c4db30::NativeOpRefCtor_FUN_10c4db30(void *param_2)
    : NativeOpRefBase_FUN_10c4db30(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191779c;
}

// Reference entry 10c4dbc0; body size 114 bytes.
#line 1 "ENTRY_10c4dbc0"
NativeOpRefCtor_FUN_10c4dbc0::NativeOpRefCtor_FUN_10c4dbc0(void *param_2)
    : NativeOpRefBase_FUN_10c4dbc0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11917a08;
}

// Reference entry 10c4dc50; body size 114 bytes.
#line 1 "ENTRY_10c4dc50"
NativeOpRefCtor_FUN_10c4dc50::NativeOpRefCtor_FUN_10c4dc50(void *param_2)
    : NativeOpRefBase_FUN_10c4dc50(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118ba4a0;
}

// Reference entry 10c54280; body size 114 bytes.
#line 1 "ENTRY_10c54280"
NativeOpRefCtor_FUN_10c54280::NativeOpRefCtor_FUN_10c54280(void *param_2)
    : NativeOpRefBase_FUN_10c54280(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11917fe4;
}

// Reference entry 10c54310; body size 114 bytes.
#line 1 "ENTRY_10c54310"
NativeOpRefCtor_FUN_10c54310::NativeOpRefCtor_FUN_10c54310(void *param_2)
    : NativeOpRefBase_FUN_10c54310(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11918250;
}

// Reference entry 10c543a0; body size 114 bytes.
#line 1 "ENTRY_10c543a0"
NativeOpRefCtor_FUN_10c543a0::NativeOpRefCtor_FUN_10c543a0(void *param_2)
    : NativeOpRefBase_FUN_10c543a0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118ba17c;
}

// Reference entry 10c54430; body size 114 bytes.
#line 1 "ENTRY_10c54430"
NativeOpRefCtor_FUN_10c54430::NativeOpRefCtor_FUN_10c54430(void *param_2)
    : NativeOpRefBase_FUN_10c54430(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118ba188;
}

// Reference entry 10c590a0; body size 114 bytes.
#line 1 "ENTRY_10c590a0"
NativeOpRefCtor_FUN_10c590a0::NativeOpRefCtor_FUN_10c590a0(void *param_2)
    : NativeOpRefBase_FUN_10c590a0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191856c;
}

// Reference entry 10c80280; body size 114 bytes.
#line 1 "ENTRY_10c80280"
NativeOpRefCtor_FUN_10c80280::NativeOpRefCtor_FUN_10c80280(void *param_2)
    : NativeOpRefBase_FUN_10c80280(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191af84;
}

// Reference entry 10c80310; body size 114 bytes.
#line 1 "ENTRY_10c80310"
NativeOpRefCtor_FUN_10c80310::NativeOpRefCtor_FUN_10c80310(void *param_2)
    : NativeOpRefBase_FUN_10c80310(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191b040;
}

// Reference entry 10cc0ab0; body size 114 bytes.
#line 1 "ENTRY_10cc0ab0"
NativeOpRefCtor_FUN_10cc0ab0::NativeOpRefCtor_FUN_10cc0ab0(void *param_2)
    : NativeOpRefBase_FUN_10cc0ab0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191edc8;
}

// Reference entry 10cc5bf0; body size 114 bytes.
#line 1 "ENTRY_10cc5bf0"
NativeOpRefCtor_FUN_10cc5bf0::NativeOpRefCtor_FUN_10cc5bf0(void *param_2)
    : NativeOpRefBase_FUN_10cc5bf0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f534;
}

// Reference entry 10cc5c80; body size 114 bytes.
#line 1 "ENTRY_10cc5c80"
NativeOpRefCtor_FUN_10cc5c80::NativeOpRefCtor_FUN_10cc5c80(void *param_2)
    : NativeOpRefBase_FUN_10cc5c80(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f188;
}

// Reference entry 10cc5d10; body size 114 bytes.
#line 1 "ENTRY_10cc5d10"
NativeOpRefCtor_FUN_10cc5d10::NativeOpRefCtor_FUN_10cc5d10(void *param_2)
    : NativeOpRefBase_FUN_10cc5d10(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191ef54;
}

// Reference entry 10cc5da0; body size 114 bytes.
#line 1 "ENTRY_10cc5da0"
NativeOpRefCtor_FUN_10cc5da0::NativeOpRefCtor_FUN_10cc5da0(void *param_2)
    : NativeOpRefBase_FUN_10cc5da0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f0cc;
}

// Reference entry 10cc5e30; body size 114 bytes.
#line 1 "ENTRY_10cc5e30"
NativeOpRefCtor_FUN_10cc5e30::NativeOpRefCtor_FUN_10cc5e30(void *param_2)
    : NativeOpRefBase_FUN_10cc5e30(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f010;
}

// Reference entry 10cc5ec0; body size 114 bytes.
#line 1 "ENTRY_10cc5ec0"
NativeOpRefCtor_FUN_10cc5ec0::NativeOpRefCtor_FUN_10cc5ec0(void *param_2)
    : NativeOpRefBase_FUN_10cc5ec0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f244;
}

// Reference entry 10cc5f50; body size 114 bytes.
#line 1 "ENTRY_10cc5f50"
NativeOpRefCtor_FUN_10cc5f50::NativeOpRefCtor_FUN_10cc5f50(void *param_2)
    : NativeOpRefBase_FUN_10cc5f50(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f3bc;
}

// Reference entry 10cc5fe0; body size 114 bytes.
#line 1 "ENTRY_10cc5fe0"
NativeOpRefCtor_FUN_10cc5fe0::NativeOpRefCtor_FUN_10cc5fe0(void *param_2)
    : NativeOpRefBase_FUN_10cc5fe0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f478;
}

// Reference entry 10cc6070; body size 114 bytes.
#line 1 "ENTRY_10cc6070"
NativeOpRefCtor_FUN_10cc6070::NativeOpRefCtor_FUN_10cc6070(void *param_2)
    : NativeOpRefBase_FUN_10cc6070(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191f300;
}

// Reference entry 10cdacd0; body size 114 bytes.
#line 1 "ENTRY_10cdacd0"
NativeOpRefCtor_FUN_10cdacd0::NativeOpRefCtor_FUN_10cdacd0(void *param_2)
    : NativeOpRefBase_FUN_10cdacd0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11920b78;
}

// Reference entry 10cdad60; body size 114 bytes.
#line 1 "ENTRY_10cdad60"
NativeOpRefCtor_FUN_10cdad60::NativeOpRefCtor_FUN_10cdad60(void *param_2)
    : NativeOpRefBase_FUN_10cdad60(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11920a04;
}

// Reference entry 10ce0b40; body size 114 bytes.
#line 1 "ENTRY_10ce0b40"
NativeOpRefCtor_FUN_10ce0b40::NativeOpRefCtor_FUN_10ce0b40(void *param_2)
    : NativeOpRefBase_FUN_10ce0b40(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1191c0dc;
}

// Reference entry 10ce2220; body size 114 bytes.
#line 1 "ENTRY_10ce2220"
NativeOpRefCtor_FUN_10ce2220::NativeOpRefCtor_FUN_10ce2220(void *param_2)
    : NativeOpRefBase_FUN_10ce2220(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11921350;
}

// Reference entry 10cf53f0; body size 114 bytes.
#line 1 "ENTRY_10cf53f0"
NativeOpRefCtor_FUN_10cf53f0::NativeOpRefCtor_FUN_10cf53f0(void *param_2)
    : NativeOpRefBase_FUN_10cf53f0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11922750;
}

// Reference entry 10d7c290; body size 114 bytes.
#line 1 "ENTRY_10d7c290"
NativeOpRefCtor_FUN_10d7c290::NativeOpRefCtor_FUN_10d7c290(void *param_2)
    : NativeOpRefBase_FUN_10d7c290(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1192f214;
}

// Reference entry 10d7c320; body size 114 bytes.
#line 1 "ENTRY_10d7c320"
NativeOpRefCtor_FUN_10d7c320::NativeOpRefCtor_FUN_10d7c320(void *param_2)
    : NativeOpRefBase_FUN_10d7c320(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1192f38c;
}

// Reference entry 10d7c3b0; body size 114 bytes.
#line 1 "ENTRY_10d7c3b0"
NativeOpRefCtor_FUN_10d7c3b0::NativeOpRefCtor_FUN_10d7c3b0(void *param_2)
    : NativeOpRefBase_FUN_10d7c3b0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1189e9f4;
}

// Reference entry 10d7c440; body size 114 bytes.
#line 1 "ENTRY_10d7c440"
NativeOpRefCtor_FUN_10d7c440::NativeOpRefCtor_FUN_10d7c440(void *param_2)
    : NativeOpRefBase_FUN_10d7c440(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1192f2d0;
}

// Reference entry 10d9aa90; body size 114 bytes.
#line 1 "ENTRY_10d9aa90"
NativeOpRefCtor_FUN_10d9aa90::NativeOpRefCtor_FUN_10d9aa90(void *param_2)
    : NativeOpRefBase_FUN_10d9aa90(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11920e2c;
}

// Reference entry 10de4660; body size 114 bytes.
#line 1 "ENTRY_10de4660"
NativeOpRefCtor_FUN_10de4660::NativeOpRefCtor_FUN_10de4660(void *param_2)
    : NativeOpRefBase_FUN_10de4660(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11935fb0;
}

// Reference entry 10e8b3d0; body size 114 bytes.
#line 1 "ENTRY_10e8b3d0"
NativeOpRefCtor_FUN_10e8b3d0::NativeOpRefCtor_FUN_10e8b3d0(void *param_2)
    : NativeOpRefBase_FUN_10e8b3d0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119468a0;
}

// Reference entry 10ef1200; body size 114 bytes.
#line 1 "ENTRY_10ef1200"
NativeOpRefCtor_FUN_10ef1200::NativeOpRefCtor_FUN_10ef1200(void *param_2)
    : NativeOpRefBase_FUN_10ef1200(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194b768;
}

// Reference entry 10f0d4e0; body size 114 bytes.
#line 1 "ENTRY_10f0d4e0"
NativeOpRefCtor_FUN_10f0d4e0::NativeOpRefCtor_FUN_10f0d4e0(void *param_2)
    : NativeOpRefBase_FUN_10f0d4e0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194ce1c;
}

// Reference entry 10f0d5a0; body size 114 bytes.
#line 1 "ENTRY_10f0d5a0"
NativeOpRefCtor_FUN_10f0d5a0::NativeOpRefCtor_FUN_10f0d5a0(void *param_2)
    : NativeOpRefBase_FUN_10f0d5a0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194cc44;
}

// Reference entry 10f0d630; body size 114 bytes.
#line 1 "ENTRY_10f0d630"
NativeOpRefCtor_FUN_10f0d630::NativeOpRefCtor_FUN_10f0d630(void *param_2)
    : NativeOpRefBase_FUN_10f0d630(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194cd30;
}

// Reference entry 10f246a0; body size 114 bytes.
#line 1 "ENTRY_10f246a0"
NativeOpRefCtor_FUN_10f246a0::NativeOpRefCtor_FUN_10f246a0(void *param_2)
    : NativeOpRefBase_FUN_10f246a0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194e610;
}

// Reference entry 10f2f770; body size 114 bytes.
#line 1 "ENTRY_10f2f770"
NativeOpRefCtor_FUN_10f2f770::NativeOpRefCtor_FUN_10f2f770(void *param_2)
    : NativeOpRefBase_FUN_10f2f770(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194f36c;
}

// Reference entry 10f2f800; body size 114 bytes.
#line 1 "ENTRY_10f2f800"
NativeOpRefCtor_FUN_10f2f800::NativeOpRefCtor_FUN_10f2f800(void *param_2)
    : NativeOpRefBase_FUN_10f2f800(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194f2ac;
}

// Reference entry 10f2f890; body size 114 bytes.
#line 1 "ENTRY_10f2f890"
NativeOpRefCtor_FUN_10f2f890::NativeOpRefCtor_FUN_10f2f890(void *param_2)
    : NativeOpRefBase_FUN_10f2f890(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194f1ec;
}

// Reference entry 10f2f920; body size 114 bytes.
#line 1 "ENTRY_10f2f920"
NativeOpRefCtor_FUN_10f2f920::NativeOpRefCtor_FUN_10f2f920(void *param_2)
    : NativeOpRefBase_FUN_10f2f920(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1194f12c;
}

// Reference entry 10f55960; body size 114 bytes.
#line 1 "ENTRY_10f55960"
NativeOpRefCtor_FUN_10f55960::NativeOpRefCtor_FUN_10f55960(void *param_2)
    : NativeOpRefBase_FUN_10f55960(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11952084;
}

// Reference entry 10f559f0; body size 114 bytes.
#line 1 "ENTRY_10f559f0"
NativeOpRefCtor_FUN_10f559f0::NativeOpRefCtor_FUN_10f559f0(void *param_2)
    : NativeOpRefBase_FUN_10f559f0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11951f18;
}

// Reference entry 10f55a80; body size 114 bytes.
#line 1 "ENTRY_10f55a80"
NativeOpRefCtor_FUN_10f55a80::NativeOpRefCtor_FUN_10f55a80(void *param_2)
    : NativeOpRefBase_FUN_10f55a80(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119521f0;
}

// Reference entry 10f55b10; body size 114 bytes.
#line 1 "ENTRY_10f55b10"
NativeOpRefCtor_FUN_10f55b10::NativeOpRefCtor_FUN_10f55b10(void *param_2)
    : NativeOpRefBase_FUN_10f55b10(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11952374;
}

// Reference entry 10f64d40; body size 114 bytes.
#line 1 "ENTRY_10f64d40"
NativeOpRefCtor_FUN_10f64d40::NativeOpRefCtor_FUN_10f64d40(void *param_2)
    : NativeOpRefBase_FUN_10f64d40(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11952780;
}

// Reference entry 10f6faa0; body size 114 bytes.
#line 1 "ENTRY_10f6faa0"
NativeOpRefCtor_FUN_10f6faa0::NativeOpRefCtor_FUN_10f6faa0(void *param_2)
    : NativeOpRefBase_FUN_10f6faa0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11952b10;
}

// Reference entry 10f77370; body size 114 bytes.
#line 1 "ENTRY_10f77370"
NativeOpRefCtor_FUN_10f77370::NativeOpRefCtor_FUN_10f77370(void *param_2)
    : NativeOpRefBase_FUN_10f77370(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11950a7c;
}

// Reference entry 10f7c2c0; body size 114 bytes.
#line 1 "ENTRY_10f7c2c0"
NativeOpRefCtor_FUN_10f7c2c0::NativeOpRefCtor_FUN_10f7c2c0(void *param_2)
    : NativeOpRefBase_FUN_10f7c2c0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11953b28;
}

// Reference entry 10f7c350; body size 114 bytes.
#line 1 "ENTRY_10f7c350"
NativeOpRefCtor_FUN_10f7c350::NativeOpRefCtor_FUN_10f7c350(void *param_2)
    : NativeOpRefBase_FUN_10f7c350(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11953a6c;
}

// Reference entry 10f8a080; body size 114 bytes.
#line 1 "ENTRY_10f8a080"
NativeOpRefCtor_FUN_10f8a080::NativeOpRefCtor_FUN_10f8a080(void *param_2)
    : NativeOpRefBase_FUN_10f8a080(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1195474c;
}

// Reference entry 10f8a110; body size 114 bytes.
#line 1 "ENTRY_10f8a110"
NativeOpRefCtor_FUN_10f8a110::NativeOpRefCtor_FUN_10f8a110(void *param_2)
    : NativeOpRefBase_FUN_10f8a110(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1195480c;
}

// Reference entry 10f8a1a0; body size 114 bytes.
#line 1 "ENTRY_10f8a1a0"
NativeOpRefCtor_FUN_10f8a1a0::NativeOpRefCtor_FUN_10f8a1a0(void *param_2)
    : NativeOpRefBase_FUN_10f8a1a0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119548cc;
}

// Reference entry 110178a0; body size 114 bytes.
#line 1 "ENTRY_110178a0"
NativeOpRefCtor_FUN_110178a0::NativeOpRefCtor_FUN_110178a0(void *param_2)
    : NativeOpRefBase_FUN_110178a0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119606a8;
}

// Reference entry 11025cf0; body size 114 bytes.
#line 1 "ENTRY_11025cf0"
NativeOpRefCtor_FUN_11025cf0::NativeOpRefCtor_FUN_11025cf0(void *param_2)
    : NativeOpRefBase_FUN_11025cf0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119639e0;
}

// Reference entry 1105f190; body size 114 bytes.
#line 1 "ENTRY_1105f190"
NativeOpRefCtor_FUN_1105f190::NativeOpRefCtor_FUN_1105f190(void *param_2)
    : NativeOpRefBase_FUN_1105f190(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_11966100;
}

// Reference entry 11061520; body size 114 bytes.
#line 1 "ENTRY_11061520"
NativeOpRefCtor_FUN_11061520::NativeOpRefCtor_FUN_11061520(void *param_2)
    : NativeOpRefBase_FUN_11061520(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118af10c;
}

// Reference entry 11064630; body size 114 bytes.
#line 1 "ENTRY_11064630"
NativeOpRefCtor_FUN_11064630::NativeOpRefCtor_FUN_11064630(void *param_2)
    : NativeOpRefBase_FUN_11064630(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_1196651c;
}

// Reference entry 11067460; body size 114 bytes.
#line 1 "ENTRY_11067460"
NativeOpRefCtor_FUN_11067460::NativeOpRefCtor_FUN_11067460(void *param_2)
    : NativeOpRefBase_FUN_11067460(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119668ac;
}

// Reference entry 111c9920; body size 114 bytes.
#line 1 "ENTRY_111c9920"
NativeOpRefCtor_FUN_111c9920::NativeOpRefCtor_FUN_111c9920(void *param_2)
    : NativeOpRefBase_FUN_111c9920(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119d3df0;
}

// Reference entry 111c99b0; body size 114 bytes.
#line 1 "ENTRY_111c99b0"
NativeOpRefCtor_FUN_111c99b0::NativeOpRefCtor_FUN_111c99b0(void *param_2)
    : NativeOpRefBase_FUN_111c99b0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118abe30;
}

// Reference entry 111c9a40; body size 114 bytes.
#line 1 "ENTRY_111c9a40"
NativeOpRefCtor_FUN_111c9a40::NativeOpRefCtor_FUN_111c9a40(void *param_2)
    : NativeOpRefBase_FUN_111c9a40(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119d3bc8;
}

// Reference entry 111c9ad0; body size 114 bytes.
#line 1 "ENTRY_111c9ad0"
NativeOpRefCtor_FUN_111c9ad0::NativeOpRefCtor_FUN_111c9ad0(void *param_2)
    : NativeOpRefBase_FUN_111c9ad0(), m4() {
m4.rep = param_2;
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_119d3bbc;
}
