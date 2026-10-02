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
extern undefined4 DAT_118f1a70;
extern undefined4 DAT_118f1ab8;
extern undefined4 DAT_118f1bcc;
extern undefined4 DAT_118f1c14;
extern undefined4 DAT_118f1d34;
extern undefined4 DAT_118f1d7c;
extern undefined4 DAT_118f1ea4;
extern undefined4 DAT_118f1ef0;
extern undefined4 DAT_1190aa08;
extern undefined4 DAT_1190aa50;
extern undefined4 DAT_1190e244;
extern undefined4 DAT_1190e298;
extern undefined4 DAT_119175f4;
extern undefined4 DAT_11917640;
extern undefined4 DAT_119176fc;
extern undefined4 DAT_11917748;
extern undefined4 DAT_11917804;
extern undefined4 DAT_11917850;
extern undefined4 DAT_1191796c;
extern undefined4 DAT_119179b4;
extern undefined4 DAT_11917a70;
extern undefined4 DAT_11917abc;
extern undefined4 DAT_11917f44;
extern undefined4 DAT_11917f8c;
extern undefined4 DAT_11918054;
extern undefined4 DAT_119180a8;
extern undefined4 DAT_119181b0;
extern undefined4 DAT_119181f8;
extern undefined4 DAT_119182c0;
extern undefined4 DAT_11918314;
extern undefined4 DAT_119185d4;
extern undefined4 DAT_11918620;
extern undefined4 DAT_1191ee60;
extern undefined4 DAT_1191eedc;
extern undefined4 DAT_1191f598;
extern undefined4 DAT_1191f5e0;
extern undefined4 DAT_11920a68;
extern undefined4 DAT_11920ab0;
extern undefined4 DAT_11920be0;
extern undefined4 DAT_11920c2c;
extern undefined4 DAT_11921228;
extern undefined4 DAT_1192127c;
extern undefined4 DAT_11931a28;
extern undefined4 DAT_11931a70;
extern undefined4 DAT_11936024;
extern undefined4 DAT_1193607c;
extern undefined4 DAT_11946908;
extern undefined4 DAT_11946954;
extern undefined4 DAT_11951f7c;
extern undefined4 DAT_11951fc4;
extern undefined4 DAT_119520ec;
extern undefined4 DAT_11952138;
extern undefined4 DAT_11952254;
extern undefined4 DAT_1195229c;
extern undefined4 DAT_119523e4;
extern undefined4 DAT_11952438;
extern undefined4 DAT_119527e8;
extern undefined4 DAT_11952834;
extern undefined4 DAT_11963d74;
extern undefined4 DAT_11963dc8;
extern undefined4 DAT_11966170;
extern undefined4 DAT_119661c4;
extern undefined4 DAT_1196631c;
extern undefined4 DAT_11966374;
extern undefined4 DAT_11966924;
extern undefined4 DAT_11966980;
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
extern unsigned int DAT_1188206c;
extern unsigned int DAT_1188207c;
extern unsigned int DAT_118820e4;
extern unsigned int DAT_11882120;
extern unsigned int DAT_11882180;
extern unsigned int DAT_118821c0;
extern unsigned int DAT_1189e9f4;
extern unsigned int DAT_118af10c;
extern unsigned int DAT_118ba17c;
extern unsigned int DAT_118ba188;
extern unsigned int DAT_118ba4a0;
extern unsigned int DAT_118c62f8;
extern unsigned int DAT_118c6304;
extern unsigned int DAT_118c634c;
extern unsigned int DAT_118f19cc;
extern unsigned int DAT_118f1a0c;
extern unsigned int DAT_118f1a18;
extern unsigned int DAT_118f1a60;
extern unsigned int DAT_118f1a70;
extern unsigned int DAT_118f1ab8;
extern unsigned int DAT_118f1b28;
extern unsigned int DAT_118f1b68;
extern unsigned int DAT_118f1b74;
extern unsigned int DAT_118f1bbc;
extern unsigned int DAT_118f1bcc;
extern unsigned int DAT_118f1c14;
extern unsigned int DAT_118f1c90;
extern unsigned int DAT_118f1cd0;
extern unsigned int DAT_118f1cdc;
extern unsigned int DAT_118f1d24;
extern unsigned int DAT_118f1d34;
extern unsigned int DAT_118f1d7c;
extern unsigned int DAT_118f1df8;
extern unsigned int DAT_118f1e3c;
extern unsigned int DAT_118f1e48;
extern unsigned int DAT_118f1e94;
extern unsigned int DAT_118f1ea4;
extern unsigned int DAT_118f1ef0;
extern unsigned int DAT_1190a964;
extern unsigned int DAT_1190a9a4;
extern unsigned int DAT_1190a9b0;
extern unsigned int DAT_1190a9f8;
extern unsigned int DAT_1190aa08;
extern unsigned int DAT_1190aa50;
extern unsigned int DAT_1190e198;
extern unsigned int DAT_1190e1dc;
extern unsigned int DAT_1190e1e8;
extern unsigned int DAT_1190e234;
extern unsigned int DAT_1190e244;
extern unsigned int DAT_1190e298;
extern unsigned int DAT_11916ca0;
extern unsigned int DAT_11916cac;
extern unsigned int DAT_11916cf4;
extern unsigned int DAT_11917548;
extern unsigned int DAT_1191758c;
extern unsigned int DAT_11917598;
extern unsigned int DAT_119175e4;
extern unsigned int DAT_119175f4;
extern unsigned int DAT_11917640;
extern unsigned int DAT_11917650;
extern unsigned int DAT_11917694;
extern unsigned int DAT_119176a0;
extern unsigned int DAT_119176ec;
extern unsigned int DAT_119176fc;
extern unsigned int DAT_11917748;
extern unsigned int DAT_11917758;
extern unsigned int DAT_1191779c;
extern unsigned int DAT_119177a8;
extern unsigned int DAT_119177f4;
extern unsigned int DAT_11917804;
extern unsigned int DAT_11917850;
extern unsigned int DAT_119178d4;
extern unsigned int DAT_11917914;
extern unsigned int DAT_1191795c;
extern unsigned int DAT_1191796c;
extern unsigned int DAT_119179b4;
extern unsigned int DAT_119179c4;
extern unsigned int DAT_11917a08;
extern unsigned int DAT_11917a14;
extern unsigned int DAT_11917a60;
extern unsigned int DAT_11917a70;
extern unsigned int DAT_11917abc;
extern unsigned int DAT_11917eac;
extern unsigned int DAT_11917eec;
extern unsigned int DAT_11917f34;
extern unsigned int DAT_11917f44;
extern unsigned int DAT_11917f8c;
extern unsigned int DAT_11917f9c;
extern unsigned int DAT_11917fe4;
extern unsigned int DAT_11917ff0;
extern unsigned int DAT_11918044;
extern unsigned int DAT_11918054;
extern unsigned int DAT_119180a8;
extern unsigned int DAT_11918118;
extern unsigned int DAT_11918158;
extern unsigned int DAT_119181a0;
extern unsigned int DAT_119181b0;
extern unsigned int DAT_119181f8;
extern unsigned int DAT_11918208;
extern unsigned int DAT_11918250;
extern unsigned int DAT_1191825c;
extern unsigned int DAT_119182b0;
extern unsigned int DAT_119182c0;
extern unsigned int DAT_11918314;
extern unsigned int DAT_11918528;
extern unsigned int DAT_1191856c;
extern unsigned int DAT_11918578;
extern unsigned int DAT_119185c4;
extern unsigned int DAT_119185d4;
extern unsigned int DAT_11918620;
extern unsigned int DAT_1191af84;
extern unsigned int DAT_1191af90;
extern unsigned int DAT_1191afd8;
extern unsigned int DAT_1191b040;
extern unsigned int DAT_1191b04c;
extern unsigned int DAT_1191b094;
extern unsigned int DAT_1191c0dc;
extern unsigned int DAT_1191ed54;
extern unsigned int DAT_1191edc8;
extern unsigned int DAT_1191edd4;
extern unsigned int DAT_1191ee50;
extern unsigned int DAT_1191ee60;
extern unsigned int DAT_1191eedc;
extern unsigned int DAT_1191ef54;
extern unsigned int DAT_1191ef60;
extern unsigned int DAT_1191efa8;
extern unsigned int DAT_1191f010;
extern unsigned int DAT_1191f01c;
extern unsigned int DAT_1191f064;
extern unsigned int DAT_1191f0cc;
extern unsigned int DAT_1191f0d8;
extern unsigned int DAT_1191f120;
extern unsigned int DAT_1191f188;
extern unsigned int DAT_1191f194;
extern unsigned int DAT_1191f1dc;
extern unsigned int DAT_1191f244;
extern unsigned int DAT_1191f250;
extern unsigned int DAT_1191f298;
extern unsigned int DAT_1191f300;
extern unsigned int DAT_1191f30c;
extern unsigned int DAT_1191f354;
extern unsigned int DAT_1191f3bc;
extern unsigned int DAT_1191f3c8;
extern unsigned int DAT_1191f410;
extern unsigned int DAT_1191f478;
extern unsigned int DAT_1191f484;
extern unsigned int DAT_1191f4cc;
extern unsigned int DAT_1191f534;
extern unsigned int DAT_1191f540;
extern unsigned int DAT_1191f588;
extern unsigned int DAT_1191f598;
extern unsigned int DAT_1191f5e0;
extern unsigned int DAT_119209c4;
extern unsigned int DAT_11920a04;
extern unsigned int DAT_11920a10;
extern unsigned int DAT_11920a58;
extern unsigned int DAT_11920a68;
extern unsigned int DAT_11920ab0;
extern unsigned int DAT_11920b34;
extern unsigned int DAT_11920b78;
extern unsigned int DAT_11920b84;
extern unsigned int DAT_11920bd0;
extern unsigned int DAT_11920be0;
extern unsigned int DAT_11920c2c;
extern unsigned int DAT_11920e2c;
extern unsigned int DAT_11921188;
extern unsigned int DAT_119211cc;
extern unsigned int DAT_11921218;
extern unsigned int DAT_11921228;
extern unsigned int DAT_1192127c;
extern unsigned int DAT_119226fc;
extern unsigned int DAT_11922750;
extern unsigned int DAT_1192275c;
extern unsigned int DAT_119227b8;
extern unsigned int DAT_1192f164;
extern unsigned int DAT_1192f1ac;
extern unsigned int DAT_1192f214;
extern unsigned int DAT_1192f220;
extern unsigned int DAT_1192f268;
extern unsigned int DAT_1192f2d0;
extern unsigned int DAT_1192f2dc;
extern unsigned int DAT_1192f324;
extern unsigned int DAT_1192f38c;
extern unsigned int DAT_1192f398;
extern unsigned int DAT_1192f3e0;
extern unsigned int DAT_11931990;
extern unsigned int DAT_119319d0;
extern unsigned int DAT_11931a18;
extern unsigned int DAT_11931a28;
extern unsigned int DAT_11931a70;
extern unsigned int DAT_11935f64;
extern unsigned int DAT_11935fb0;
extern unsigned int DAT_11935fbc;
extern unsigned int DAT_11936014;
extern unsigned int DAT_11936024;
extern unsigned int DAT_1193607c;
extern unsigned int DAT_1194685c;
extern unsigned int DAT_119468a0;
extern unsigned int DAT_119468ac;
extern unsigned int DAT_119468f8;
extern unsigned int DAT_11946908;
extern unsigned int DAT_11946954;
extern unsigned int DAT_1194b768;
extern unsigned int DAT_1194b774;
extern unsigned int DAT_1194b7bc;
extern unsigned int DAT_1194cbec;
extern unsigned int DAT_1194cc44;
extern unsigned int DAT_1194cc50;
extern unsigned int DAT_1194ccb0;
extern unsigned int DAT_1194cd30;
extern unsigned int DAT_1194cd3c;
extern unsigned int DAT_1194cd9c;
extern unsigned int DAT_1194ce1c;
extern unsigned int DAT_1194ce28;
extern unsigned int DAT_1194ce88;
extern unsigned int DAT_1194e610;
extern unsigned int DAT_1194e61c;
extern unsigned int DAT_1194e664;
extern unsigned int DAT_1194f12c;
extern unsigned int DAT_1194f138;
extern unsigned int DAT_1194f180;
extern unsigned int DAT_1194f1ec;
extern unsigned int DAT_1194f1f8;
extern unsigned int DAT_1194f240;
extern unsigned int DAT_1194f2ac;
extern unsigned int DAT_1194f2b8;
extern unsigned int DAT_1194f300;
extern unsigned int DAT_1194f36c;
extern unsigned int DAT_1194f378;
extern unsigned int DAT_1194f3c0;
extern unsigned int DAT_11950a7c;
extern unsigned int DAT_11951ed8;
extern unsigned int DAT_11951f18;
extern unsigned int DAT_11951f24;
extern unsigned int DAT_11951f6c;
extern unsigned int DAT_11951f7c;
extern unsigned int DAT_11951fc4;
extern unsigned int DAT_11952040;
extern unsigned int DAT_11952084;
extern unsigned int DAT_11952090;
extern unsigned int DAT_119520dc;
extern unsigned int DAT_119520ec;
extern unsigned int DAT_11952138;
extern unsigned int DAT_119521b0;
extern unsigned int DAT_119521f0;
extern unsigned int DAT_119521fc;
extern unsigned int DAT_11952244;
extern unsigned int DAT_11952254;
extern unsigned int DAT_1195229c;
extern unsigned int DAT_1195232c;
extern unsigned int DAT_11952374;
extern unsigned int DAT_11952380;
extern unsigned int DAT_119523d4;
extern unsigned int DAT_119523e4;
extern unsigned int DAT_11952438;
extern unsigned int DAT_1195273c;
extern unsigned int DAT_11952780;
extern unsigned int DAT_1195278c;
extern unsigned int DAT_119527d8;
extern unsigned int DAT_119527e8;
extern unsigned int DAT_11952834;
extern unsigned int DAT_11952b10;
extern unsigned int DAT_11952b1c;
extern unsigned int DAT_11952b64;
extern unsigned int DAT_119534fc;
extern unsigned int DAT_11953540;
extern unsigned int DAT_1195358c;
extern unsigned int DAT_11953a6c;
extern unsigned int DAT_11953a78;
extern unsigned int DAT_11953ac0;
extern unsigned int DAT_11953b28;
extern unsigned int DAT_11953b34;
extern unsigned int DAT_11953b7c;
extern unsigned int DAT_1195474c;
extern unsigned int DAT_11954758;
extern unsigned int DAT_119547a0;
extern unsigned int DAT_1195480c;
extern unsigned int DAT_11954818;
extern unsigned int DAT_11954860;
extern unsigned int DAT_119548cc;
extern unsigned int DAT_119548d8;
extern unsigned int DAT_11954920;
extern unsigned int DAT_11960650;
extern unsigned int DAT_119606a8;
extern unsigned int DAT_119606b4;
extern unsigned int DAT_11960714;
extern unsigned int DAT_119639e0;
extern unsigned int DAT_11963cc8;
extern unsigned int DAT_11963d10;
extern unsigned int DAT_11963d64;
extern unsigned int DAT_11963d74;
extern unsigned int DAT_11963dc8;
extern unsigned int DAT_119660b8;
extern unsigned int DAT_11966100;
extern unsigned int DAT_1196610c;
extern unsigned int DAT_11966160;
extern unsigned int DAT_11966170;
extern unsigned int DAT_119661c4;
extern unsigned int DAT_11966268;
extern unsigned int DAT_119662b4;
extern unsigned int DAT_1196630c;
extern unsigned int DAT_1196631c;
extern unsigned int DAT_11966374;
extern unsigned int DAT_119663e4;
extern unsigned int DAT_11966428;
extern unsigned int DAT_11966474;
extern unsigned int DAT_1196651c;
extern unsigned int DAT_11966528;
extern unsigned int DAT_11966570;
extern unsigned int DAT_11966858;
extern unsigned int DAT_119668ac;
extern unsigned int DAT_119668b8;
extern unsigned int DAT_11966914;
extern unsigned int DAT_11966924;
extern unsigned int DAT_11966980;
#pragma warning(disable: 4355)
extern unsigned int g_lSCObjCount;
void __cdecl thunk_FUN_1123fce0(void *);
int __cdecl thunk_FUN_1123fcd0(void *);
struct NativeOpMember8V_thunk_FUN_11240650 { void *vptr; NativeOpMember8V_thunk_FUN_11240650(); };
extern unsigned int DAT_1188eb3c;
struct NativeOpMember8VDtor_thunk_FUN_100748ed { void *vptr;
~NativeOpMember8VDtor_thunk_FUN_100748ed() { *(void *volatile *)&vptr = (void *)&DAT_1188eb3c; } };
struct NativeOpMember8_thunk_FUN_101ba0c0 : NativeOpMember8V_thunk_FUN_11240650 { ~NativeOpMember8_thunk_FUN_101ba0c0() { *(void *volatile *)&vptr = (void *)&DAT_1188206c;
    ((NativeOpMember8VDtor_thunk_FUN_100748ed *)this)->~NativeOpMember8VDtor_thunk_FUN_100748ed(); } __forceinline NativeOpMember8_thunk_FUN_101ba0c0() { *(void *volatile *)&vptr = (void *)&DAT_1188206c; } };
struct NativeOpMemberCItem { virtual void a(); virtual void b(); virtual void release(); };
struct NativeOpMemberC_thunk_FUN_101b9eb0 { void *rep; NativeOpMemberCItem *next; ~NativeOpMemberC_thunk_FUN_101b9eb0(); __forceinline NativeOpMemberC_thunk_FUN_101b9eb0() { rep = 0; next = 0; } };
NativeOpMemberC_thunk_FUN_101b9eb0::~NativeOpMemberC_thunk_FUN_101b9eb0() {
NativeOpMemberCItem *n = next;
if (n != 0) { rep = 0; next = 0; n->release(); }
}
struct NativeOpRepSub { void *p; ~NativeOpRepSub(); };
struct NativeOpSmart14_thunk_FUN_101ba1b0 { NativeOpRepSub rep;
    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { rep.p = value; if (value != 0) thunk_FUN_1123fce0((char *)value + 4); }
    ~NativeOpSmart14_thunk_FUN_101ba1b0(); };
struct NativeOpMember14V { void *vptr;
    __forceinline NativeOpMember14V() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpS30 { void *vptr; void *f4;
    __forceinline NativeOpS30() { vptr = (void *)&DAT_118820e4; f4 = 0; g_lSCObjCount++; } };
struct NativeOpM30 : NativeOpS30 {
    __forceinline NativeOpM30() { vptr = (void *)&DAT_11882120; } };
struct NativeOpF38Base { unsigned int lo; unsigned int hi; };
struct NativeOpF38 : NativeOpF38Base { NativeOpF38() : NativeOpF38Base{} { hi = 0; } };
struct NativeOpTarget { virtual ~NativeOpTarget(); };
NativeOpRepSub::~NativeOpRepSub() {
void *v = p;
if (v != 0) {
if (thunk_FUN_1123fcd0((char *)v + 4) == 0)
delete (NativeOpTarget *)v;
}
}
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_101b9b80 { void *v0;
~NativeOpImplRoot_101b9b80() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10687e80 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10687e80();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10687e80() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10687e80::~NativeOpImplBase_thunk_FUN_101b9b80_10687e80() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10687e80 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10687e80(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118c62f8; } };
struct NativeOpImpl_FUN_10687e80_vt {
__forceinline NativeOpImpl_FUN_10687e80_vt(void *self) { *(void **)self = (void *)&DAT_118c6304; *(void **)((char *)self + 8) = (void *)&DAT_118c634c; } };
struct NativeOpImpl_FUN_10687e80 : NativeOpImplBase_thunk_FUN_101b9b80_10687e80, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10687e80_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10687e80 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10687e80(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_109f7750 { void *v0;
~NativeOpImplRoot_109f7750() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_118f1c90;
struct NativeOpImplBase_thunk_FUN_109f7750_109f4aa0 : NativeOpImplRoot_109f7750 { void *f4; ~NativeOpImplBase_thunk_FUN_109f7750_109f4aa0();
__forceinline NativeOpImplBase_thunk_FUN_109f7750_109f4aa0() { v0 = (void *)&DAT_118f1c90; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f7750_109f4aa0::~NativeOpImplBase_thunk_FUN_109f7750_109f4aa0() { v0 = (void *)&DAT_118f1c90; g_lSCObjCount--; };
struct NativeOpMember14_109f4aa0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f4aa0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1cd0; } };
struct NativeOpImpl_FUN_109f4aa0_vt {
__forceinline NativeOpImpl_FUN_109f4aa0_vt(void *self) { *(void **)self = (void *)&DAT_118f1cdc; *(void **)((char *)self + 8) = (void *)&DAT_118f1d24; } };
struct NativeOpImpl_FUN_109f4aa0 : NativeOpImplBase_thunk_FUN_109f7750_109f4aa0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f4aa0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f4aa0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f4aa0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_109f7770 { void *v0;
~NativeOpImplRoot_109f7770() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_118f19cc;
struct NativeOpImplBase_thunk_FUN_109f7770_109f4c00 : NativeOpImplRoot_109f7770 { void *f4; ~NativeOpImplBase_thunk_FUN_109f7770_109f4c00();
__forceinline NativeOpImplBase_thunk_FUN_109f7770_109f4c00() { v0 = (void *)&DAT_118f19cc; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f7770_109f4c00::~NativeOpImplBase_thunk_FUN_109f7770_109f4c00() { v0 = (void *)&DAT_118f19cc; g_lSCObjCount--; };
struct NativeOpMember14_109f4c00 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f4c00(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1a0c; } };
struct NativeOpImpl_FUN_109f4c00_vt {
__forceinline NativeOpImpl_FUN_109f4c00_vt(void *self) { *(void **)self = (void *)&DAT_118f1a18; *(void **)((char *)self + 8) = (void *)&DAT_118f1a60; } };
struct NativeOpImpl_FUN_109f4c00 : NativeOpImplBase_thunk_FUN_109f7770_109f4c00, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f4c00_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f4c00 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f4c00(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_109f7790 { void *v0;
~NativeOpImplRoot_109f7790() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_118f1df8;
struct NativeOpImplBase_thunk_FUN_109f7790_109f4d60 : NativeOpImplRoot_109f7790 { void *f4; ~NativeOpImplBase_thunk_FUN_109f7790_109f4d60();
__forceinline NativeOpImplBase_thunk_FUN_109f7790_109f4d60() { v0 = (void *)&DAT_118f1df8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f7790_109f4d60::~NativeOpImplBase_thunk_FUN_109f7790_109f4d60() { v0 = (void *)&DAT_118f1df8; g_lSCObjCount--; };
struct NativeOpMember14_109f4d60 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f4d60(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1e3c; } };
struct NativeOpImpl_FUN_109f4d60_vt {
__forceinline NativeOpImpl_FUN_109f4d60_vt(void *self) { *(void **)self = (void *)&DAT_118f1e48; *(void **)((char *)self + 8) = (void *)&DAT_118f1e94; } };
struct NativeOpImpl_FUN_109f4d60 : NativeOpImplBase_thunk_FUN_109f7790_109f4d60, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f4d60_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f4d60 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f4d60(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_109f77b0 { void *v0;
~NativeOpImplRoot_109f77b0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_118f1b28;
struct NativeOpImplBase_thunk_FUN_109f77b0_109f4ec0 : NativeOpImplRoot_109f77b0 { void *f4; ~NativeOpImplBase_thunk_FUN_109f77b0_109f4ec0();
__forceinline NativeOpImplBase_thunk_FUN_109f77b0_109f4ec0() { v0 = (void *)&DAT_118f1b28; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f77b0_109f4ec0::~NativeOpImplBase_thunk_FUN_109f77b0_109f4ec0() { v0 = (void *)&DAT_118f1b28; g_lSCObjCount--; };
struct NativeOpMember14_109f4ec0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f4ec0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1b68; } };
struct NativeOpImpl_FUN_109f4ec0_vt {
__forceinline NativeOpImpl_FUN_109f4ec0_vt(void *self) { *(void **)self = (void *)&DAT_118f1b74; *(void **)((char *)self + 8) = (void *)&DAT_118f1bbc; } };
struct NativeOpImpl_FUN_109f4ec0 : NativeOpImplBase_thunk_FUN_109f77b0_109f4ec0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f4ec0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f4ec0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f4ec0(void *param_2);
};
extern unsigned int DAT_118f1c90;
struct NativeOpImplBase_thunk_FUN_109f7750_109f5470 : NativeOpImplRoot_109f7750 { void *f4; ~NativeOpImplBase_thunk_FUN_109f7750_109f5470();
__forceinline NativeOpImplBase_thunk_FUN_109f7750_109f5470() { v0 = (void *)&DAT_118f1c90; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f7750_109f5470::~NativeOpImplBase_thunk_FUN_109f7750_109f5470() { v0 = (void *)&DAT_118f1c90; g_lSCObjCount--; };
struct NativeOpMember14_109f5470 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f5470(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1cd0; } };
struct NativeOpImpl_FUN_109f5470_vt {
__forceinline NativeOpImpl_FUN_109f5470_vt(void *self) { *(void **)self = (void *)&DAT_118f1cdc; *(void **)((char *)self + 8) = (void *)&DAT_118f1d24; } };
struct NativeOpImpl_FUN_109f5470 : NativeOpImplBase_thunk_FUN_109f7750_109f5470, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f5470_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f5470 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f5470(void *param_2);
};
extern unsigned int DAT_118f19cc;
struct NativeOpImplBase_thunk_FUN_109f7770_109f55e0 : NativeOpImplRoot_109f7770 { void *f4; ~NativeOpImplBase_thunk_FUN_109f7770_109f55e0();
__forceinline NativeOpImplBase_thunk_FUN_109f7770_109f55e0() { v0 = (void *)&DAT_118f19cc; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f7770_109f55e0::~NativeOpImplBase_thunk_FUN_109f7770_109f55e0() { v0 = (void *)&DAT_118f19cc; g_lSCObjCount--; };
struct NativeOpMember14_109f55e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f55e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1a0c; } };
struct NativeOpImpl_FUN_109f55e0_vt {
__forceinline NativeOpImpl_FUN_109f55e0_vt(void *self) { *(void **)self = (void *)&DAT_118f1a18; *(void **)((char *)self + 8) = (void *)&DAT_118f1a60; } };
struct NativeOpImpl_FUN_109f55e0 : NativeOpImplBase_thunk_FUN_109f7770_109f55e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f55e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f55e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f55e0(void *param_2);
};
extern unsigned int DAT_118f1df8;
struct NativeOpImplBase_thunk_FUN_109f7790_109f5750 : NativeOpImplRoot_109f7790 { void *f4; ~NativeOpImplBase_thunk_FUN_109f7790_109f5750();
__forceinline NativeOpImplBase_thunk_FUN_109f7790_109f5750() { v0 = (void *)&DAT_118f1df8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f7790_109f5750::~NativeOpImplBase_thunk_FUN_109f7790_109f5750() { v0 = (void *)&DAT_118f1df8; g_lSCObjCount--; };
struct NativeOpMember14_109f5750 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f5750(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1e3c; } };
struct NativeOpImpl_FUN_109f5750_vt {
__forceinline NativeOpImpl_FUN_109f5750_vt(void *self) { *(void **)self = (void *)&DAT_118f1e48; *(void **)((char *)self + 8) = (void *)&DAT_118f1e94; } };
struct NativeOpImpl_FUN_109f5750 : NativeOpImplBase_thunk_FUN_109f7790_109f5750, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f5750_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f5750 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f5750(void *param_2);
};
extern unsigned int DAT_118f1b28;
struct NativeOpImplBase_thunk_FUN_109f77b0_109f58c0 : NativeOpImplRoot_109f77b0 { void *f4; ~NativeOpImplBase_thunk_FUN_109f77b0_109f58c0();
__forceinline NativeOpImplBase_thunk_FUN_109f77b0_109f58c0() { v0 = (void *)&DAT_118f1b28; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_109f77b0_109f58c0::~NativeOpImplBase_thunk_FUN_109f77b0_109f58c0() { v0 = (void *)&DAT_118f1b28; g_lSCObjCount--; };
struct NativeOpMember14_109f58c0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_109f58c0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118f1b68; } };
struct NativeOpImpl_FUN_109f58c0_vt {
__forceinline NativeOpImpl_FUN_109f58c0_vt(void *self) { *(void **)self = (void *)&DAT_118f1b74; *(void **)((char *)self + 8) = (void *)&DAT_118f1bbc; } };
struct NativeOpImpl_FUN_109f58c0 : NativeOpImplBase_thunk_FUN_109f77b0_109f58c0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_109f58c0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_109f58c0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_109f58c0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10b6d380 { void *v0;
~NativeOpImplRoot_10b6d380() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1190a964;
struct NativeOpImplBase_thunk_FUN_10b6d380_10b6cd30 : NativeOpImplRoot_10b6d380 { void *f4; ~NativeOpImplBase_thunk_FUN_10b6d380_10b6cd30();
__forceinline NativeOpImplBase_thunk_FUN_10b6d380_10b6cd30() { v0 = (void *)&DAT_1190a964; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10b6d380_10b6cd30::~NativeOpImplBase_thunk_FUN_10b6d380_10b6cd30() { v0 = (void *)&DAT_1190a964; g_lSCObjCount--; };
struct NativeOpMember14_10b6cd30 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10b6cd30(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1190a9a4; } };
struct NativeOpImpl_FUN_10b6cd30_vt {
__forceinline NativeOpImpl_FUN_10b6cd30_vt(void *self) { *(void **)self = (void *)&DAT_1190a9b0; *(void **)((char *)self + 8) = (void *)&DAT_1190a9f8; } };
struct NativeOpImpl_FUN_10b6cd30 : NativeOpImplBase_thunk_FUN_10b6d380_10b6cd30, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10b6cd30_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10b6cd30 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10b6cd30(void *param_2);
};
extern unsigned int DAT_1190a964;
struct NativeOpImplBase_thunk_FUN_10b6d380_10b6d0a0 : NativeOpImplRoot_10b6d380 { void *f4; ~NativeOpImplBase_thunk_FUN_10b6d380_10b6d0a0();
__forceinline NativeOpImplBase_thunk_FUN_10b6d380_10b6d0a0() { v0 = (void *)&DAT_1190a964; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10b6d380_10b6d0a0::~NativeOpImplBase_thunk_FUN_10b6d380_10b6d0a0() { v0 = (void *)&DAT_1190a964; g_lSCObjCount--; };
struct NativeOpMember14_10b6d0a0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10b6d0a0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1190a9a4; } };
struct NativeOpImpl_FUN_10b6d0a0_vt {
__forceinline NativeOpImpl_FUN_10b6d0a0_vt(void *self) { *(void **)self = (void *)&DAT_1190a9b0; *(void **)((char *)self + 8) = (void *)&DAT_1190a9f8; } };
struct NativeOpImpl_FUN_10b6d0a0 : NativeOpImplBase_thunk_FUN_10b6d380_10b6d0a0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10b6d0a0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10b6d0a0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10b6d0a0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10b7cb50 { void *v0;
~NativeOpImplRoot_10b7cb50() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1190e198;
struct NativeOpImplBase_thunk_FUN_10b7cb50_10b7bf50 : NativeOpImplRoot_10b7cb50 { void *f4; ~NativeOpImplBase_thunk_FUN_10b7cb50_10b7bf50();
__forceinline NativeOpImplBase_thunk_FUN_10b7cb50_10b7bf50() { v0 = (void *)&DAT_1190e198; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10b7cb50_10b7bf50::~NativeOpImplBase_thunk_FUN_10b7cb50_10b7bf50() { v0 = (void *)&DAT_1190e198; g_lSCObjCount--; };
struct NativeOpMember14_10b7bf50 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10b7bf50(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1190e1dc; } };
struct NativeOpImpl_FUN_10b7bf50_vt {
__forceinline NativeOpImpl_FUN_10b7bf50_vt(void *self) { *(void **)self = (void *)&DAT_1190e1e8; *(void **)((char *)self + 8) = (void *)&DAT_1190e234; } };
struct NativeOpImpl_FUN_10b7bf50 : NativeOpImplBase_thunk_FUN_10b7cb50_10b7bf50, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10b7bf50_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10b7bf50 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10b7bf50(void *param_2);
};
extern unsigned int DAT_1190e198;
struct NativeOpImplBase_thunk_FUN_10b7cb50_10b7c6a0 : NativeOpImplRoot_10b7cb50 { void *f4; ~NativeOpImplBase_thunk_FUN_10b7cb50_10b7c6a0();
__forceinline NativeOpImplBase_thunk_FUN_10b7cb50_10b7c6a0() { v0 = (void *)&DAT_1190e198; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10b7cb50_10b7c6a0::~NativeOpImplBase_thunk_FUN_10b7cb50_10b7c6a0() { v0 = (void *)&DAT_1190e198; g_lSCObjCount--; };
struct NativeOpMember14_10b7c6a0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10b7c6a0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1190e1dc; } };
struct NativeOpImpl_FUN_10b7c6a0_vt {
__forceinline NativeOpImpl_FUN_10b7c6a0_vt(void *self) { *(void **)self = (void *)&DAT_1190e1e8; *(void **)((char *)self + 8) = (void *)&DAT_1190e234; } };
struct NativeOpImpl_FUN_10b7c6a0 : NativeOpImplBase_thunk_FUN_10b7cb50_10b7c6a0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10b7c6a0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10b7c6a0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10b7c6a0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10c4a3b0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10c4a3b0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10c4a3b0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10c4a3b0::~NativeOpImplBase_thunk_FUN_101b9b80_10c4a3b0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10c4a3b0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4a3b0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11916ca0; } };
struct NativeOpImpl_FUN_10c4a3b0_vt {
__forceinline NativeOpImpl_FUN_10c4a3b0_vt(void *self) { *(void **)self = (void *)&DAT_11916cac; *(void **)((char *)self + 8) = (void *)&DAT_11916cf4; } };
struct NativeOpImpl_FUN_10c4a3b0 : NativeOpImplBase_thunk_FUN_101b9b80_10c4a3b0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4a3b0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4a3b0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4a3b0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c4f2b0 { void *v0;
~NativeOpImplRoot_10c4f2b0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11917548;
struct NativeOpImplBase_thunk_FUN_10c4f2b0_10c4de80 : NativeOpImplRoot_10c4f2b0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f2b0_10c4de80();
__forceinline NativeOpImplBase_thunk_FUN_10c4f2b0_10c4de80() { v0 = (void *)&DAT_11917548; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f2b0_10c4de80::~NativeOpImplBase_thunk_FUN_10c4f2b0_10c4de80() { v0 = (void *)&DAT_11917548; g_lSCObjCount--; };
struct NativeOpMember14_10c4de80 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4de80(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191758c; } };
struct NativeOpImpl_FUN_10c4de80_vt {
__forceinline NativeOpImpl_FUN_10c4de80_vt(void *self) { *(void **)self = (void *)&DAT_11917598; *(void **)((char *)self + 8) = (void *)&DAT_119175e4; } };
struct NativeOpImpl_FUN_10c4de80 : NativeOpImplBase_thunk_FUN_10c4f2b0_10c4de80, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4de80_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4de80 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4de80(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c4f2d0 { void *v0;
~NativeOpImplRoot_10c4f2d0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11917650;
struct NativeOpImplBase_thunk_FUN_10c4f2d0_10c4dfe0 : NativeOpImplRoot_10c4f2d0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f2d0_10c4dfe0();
__forceinline NativeOpImplBase_thunk_FUN_10c4f2d0_10c4dfe0() { v0 = (void *)&DAT_11917650; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f2d0_10c4dfe0::~NativeOpImplBase_thunk_FUN_10c4f2d0_10c4dfe0() { v0 = (void *)&DAT_11917650; g_lSCObjCount--; };
struct NativeOpMember14_10c4dfe0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4dfe0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11917694; } };
struct NativeOpImpl_FUN_10c4dfe0_vt {
__forceinline NativeOpImpl_FUN_10c4dfe0_vt(void *self) { *(void **)self = (void *)&DAT_119176a0; *(void **)((char *)self + 8) = (void *)&DAT_119176ec; } };
struct NativeOpImpl_FUN_10c4dfe0 : NativeOpImplBase_thunk_FUN_10c4f2d0_10c4dfe0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4dfe0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4dfe0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4dfe0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c4f2f0 { void *v0;
~NativeOpImplRoot_10c4f2f0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11917758;
struct NativeOpImplBase_thunk_FUN_10c4f2f0_10c4e140 : NativeOpImplRoot_10c4f2f0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f2f0_10c4e140();
__forceinline NativeOpImplBase_thunk_FUN_10c4f2f0_10c4e140() { v0 = (void *)&DAT_11917758; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f2f0_10c4e140::~NativeOpImplBase_thunk_FUN_10c4f2f0_10c4e140() { v0 = (void *)&DAT_11917758; g_lSCObjCount--; };
struct NativeOpMember14_10c4e140 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4e140(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191779c; } };
struct NativeOpImpl_FUN_10c4e140_vt {
__forceinline NativeOpImpl_FUN_10c4e140_vt(void *self) { *(void **)self = (void *)&DAT_119177a8; *(void **)((char *)self + 8) = (void *)&DAT_119177f4; } };
struct NativeOpImpl_FUN_10c4e140 : NativeOpImplBase_thunk_FUN_10c4f2f0_10c4e140, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4e140_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4e140 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4e140(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c4f310 { void *v0;
~NativeOpImplRoot_10c4f310() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119179c4;
struct NativeOpImplBase_thunk_FUN_10c4f310_10c4e2a0 : NativeOpImplRoot_10c4f310 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f310_10c4e2a0();
__forceinline NativeOpImplBase_thunk_FUN_10c4f310_10c4e2a0() { v0 = (void *)&DAT_119179c4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f310_10c4e2a0::~NativeOpImplBase_thunk_FUN_10c4f310_10c4e2a0() { v0 = (void *)&DAT_119179c4; g_lSCObjCount--; };
struct NativeOpMember14_10c4e2a0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4e2a0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11917a08; } };
struct NativeOpImpl_FUN_10c4e2a0_vt {
__forceinline NativeOpImpl_FUN_10c4e2a0_vt(void *self) { *(void **)self = (void *)&DAT_11917a14; *(void **)((char *)self + 8) = (void *)&DAT_11917a60; } };
struct NativeOpImpl_FUN_10c4e2a0 : NativeOpImplBase_thunk_FUN_10c4f310_10c4e2a0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4e2a0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4e2a0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4e2a0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c4f330 { void *v0;
~NativeOpImplRoot_10c4f330() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119178d4;
struct NativeOpImplBase_thunk_FUN_10c4f330_10c4e400 : NativeOpImplRoot_10c4f330 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f330_10c4e400();
__forceinline NativeOpImplBase_thunk_FUN_10c4f330_10c4e400() { v0 = (void *)&DAT_119178d4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f330_10c4e400::~NativeOpImplBase_thunk_FUN_10c4f330_10c4e400() { v0 = (void *)&DAT_119178d4; g_lSCObjCount--; };
struct NativeOpMember14_10c4e400 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4e400(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118ba4a0; } };
struct NativeOpImpl_FUN_10c4e400_vt {
__forceinline NativeOpImpl_FUN_10c4e400_vt(void *self) { *(void **)self = (void *)&DAT_11917914; *(void **)((char *)self + 8) = (void *)&DAT_1191795c; } };
struct NativeOpImpl_FUN_10c4e400 : NativeOpImplBase_thunk_FUN_10c4f330_10c4e400, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4e400_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4e400 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4e400(void *param_2);
};
extern unsigned int DAT_11917548;
struct NativeOpImplBase_thunk_FUN_10c4f2b0_10c4eb20 : NativeOpImplRoot_10c4f2b0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f2b0_10c4eb20();
__forceinline NativeOpImplBase_thunk_FUN_10c4f2b0_10c4eb20() { v0 = (void *)&DAT_11917548; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f2b0_10c4eb20::~NativeOpImplBase_thunk_FUN_10c4f2b0_10c4eb20() { v0 = (void *)&DAT_11917548; g_lSCObjCount--; };
struct NativeOpMember14_10c4eb20 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4eb20(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191758c; } };
struct NativeOpImpl_FUN_10c4eb20_vt {
__forceinline NativeOpImpl_FUN_10c4eb20_vt(void *self) { *(void **)self = (void *)&DAT_11917598; *(void **)((char *)self + 8) = (void *)&DAT_119175e4; } };
struct NativeOpImpl_FUN_10c4eb20 : NativeOpImplBase_thunk_FUN_10c4f2b0_10c4eb20, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4eb20_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4eb20 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4eb20(void *param_2);
};
extern unsigned int DAT_11917650;
struct NativeOpImplBase_thunk_FUN_10c4f2d0_10c4ec90 : NativeOpImplRoot_10c4f2d0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f2d0_10c4ec90();
__forceinline NativeOpImplBase_thunk_FUN_10c4f2d0_10c4ec90() { v0 = (void *)&DAT_11917650; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f2d0_10c4ec90::~NativeOpImplBase_thunk_FUN_10c4f2d0_10c4ec90() { v0 = (void *)&DAT_11917650; g_lSCObjCount--; };
struct NativeOpMember14_10c4ec90 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4ec90(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11917694; } };
struct NativeOpImpl_FUN_10c4ec90_vt {
__forceinline NativeOpImpl_FUN_10c4ec90_vt(void *self) { *(void **)self = (void *)&DAT_119176a0; *(void **)((char *)self + 8) = (void *)&DAT_119176ec; } };
struct NativeOpImpl_FUN_10c4ec90 : NativeOpImplBase_thunk_FUN_10c4f2d0_10c4ec90, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4ec90_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4ec90 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4ec90(void *param_2);
};
extern unsigned int DAT_11917758;
struct NativeOpImplBase_thunk_FUN_10c4f2f0_10c4ee00 : NativeOpImplRoot_10c4f2f0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f2f0_10c4ee00();
__forceinline NativeOpImplBase_thunk_FUN_10c4f2f0_10c4ee00() { v0 = (void *)&DAT_11917758; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f2f0_10c4ee00::~NativeOpImplBase_thunk_FUN_10c4f2f0_10c4ee00() { v0 = (void *)&DAT_11917758; g_lSCObjCount--; };
struct NativeOpMember14_10c4ee00 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4ee00(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191779c; } };
struct NativeOpImpl_FUN_10c4ee00_vt {
__forceinline NativeOpImpl_FUN_10c4ee00_vt(void *self) { *(void **)self = (void *)&DAT_119177a8; *(void **)((char *)self + 8) = (void *)&DAT_119177f4; } };
struct NativeOpImpl_FUN_10c4ee00 : NativeOpImplBase_thunk_FUN_10c4f2f0_10c4ee00, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4ee00_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4ee00 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4ee00(void *param_2);
};
extern unsigned int DAT_119179c4;
struct NativeOpImplBase_thunk_FUN_10c4f310_10c4ef70 : NativeOpImplRoot_10c4f310 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f310_10c4ef70();
__forceinline NativeOpImplBase_thunk_FUN_10c4f310_10c4ef70() { v0 = (void *)&DAT_119179c4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f310_10c4ef70::~NativeOpImplBase_thunk_FUN_10c4f310_10c4ef70() { v0 = (void *)&DAT_119179c4; g_lSCObjCount--; };
struct NativeOpMember14_10c4ef70 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4ef70(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11917a08; } };
struct NativeOpImpl_FUN_10c4ef70_vt {
__forceinline NativeOpImpl_FUN_10c4ef70_vt(void *self) { *(void **)self = (void *)&DAT_11917a14; *(void **)((char *)self + 8) = (void *)&DAT_11917a60; } };
struct NativeOpImpl_FUN_10c4ef70 : NativeOpImplBase_thunk_FUN_10c4f310_10c4ef70, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4ef70_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4ef70 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4ef70(void *param_2);
};
extern unsigned int DAT_119178d4;
struct NativeOpImplBase_thunk_FUN_10c4f330_10c4f0e0 : NativeOpImplRoot_10c4f330 { void *f4; ~NativeOpImplBase_thunk_FUN_10c4f330_10c4f0e0();
__forceinline NativeOpImplBase_thunk_FUN_10c4f330_10c4f0e0() { v0 = (void *)&DAT_119178d4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c4f330_10c4f0e0::~NativeOpImplBase_thunk_FUN_10c4f330_10c4f0e0() { v0 = (void *)&DAT_119178d4; g_lSCObjCount--; };
struct NativeOpMember14_10c4f0e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c4f0e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118ba4a0; } };
struct NativeOpImpl_FUN_10c4f0e0_vt {
__forceinline NativeOpImpl_FUN_10c4f0e0_vt(void *self) { *(void **)self = (void *)&DAT_11917914; *(void **)((char *)self + 8) = (void *)&DAT_1191795c; } };
struct NativeOpImpl_FUN_10c4f0e0 : NativeOpImplBase_thunk_FUN_10c4f330_10c4f0e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c4f0e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c4f0e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c4f0e0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c55540 { void *v0;
~NativeOpImplRoot_10c55540() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11917f9c;
struct NativeOpImplBase_thunk_FUN_10c55540_10c54630 : NativeOpImplRoot_10c55540 { void *f4; ~NativeOpImplBase_thunk_FUN_10c55540_10c54630();
__forceinline NativeOpImplBase_thunk_FUN_10c55540_10c54630() { v0 = (void *)&DAT_11917f9c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c55540_10c54630::~NativeOpImplBase_thunk_FUN_10c55540_10c54630() { v0 = (void *)&DAT_11917f9c; g_lSCObjCount--; };
struct NativeOpMember14_10c54630 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c54630(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11917fe4; } };
struct NativeOpImpl_FUN_10c54630_vt {
__forceinline NativeOpImpl_FUN_10c54630_vt(void *self) { *(void **)self = (void *)&DAT_11917ff0; *(void **)((char *)self + 8) = (void *)&DAT_11918044; } };
struct NativeOpImpl_FUN_10c54630 : NativeOpImplBase_thunk_FUN_10c55540_10c54630, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c54630_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c54630 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c54630(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c55560 { void *v0;
~NativeOpImplRoot_10c55560() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11918208;
struct NativeOpImplBase_thunk_FUN_10c55560_10c54790 : NativeOpImplRoot_10c55560 { void *f4; ~NativeOpImplBase_thunk_FUN_10c55560_10c54790();
__forceinline NativeOpImplBase_thunk_FUN_10c55560_10c54790() { v0 = (void *)&DAT_11918208; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c55560_10c54790::~NativeOpImplBase_thunk_FUN_10c55560_10c54790() { v0 = (void *)&DAT_11918208; g_lSCObjCount--; };
struct NativeOpMember14_10c54790 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c54790(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11918250; } };
struct NativeOpImpl_FUN_10c54790_vt {
__forceinline NativeOpImpl_FUN_10c54790_vt(void *self) { *(void **)self = (void *)&DAT_1191825c; *(void **)((char *)self + 8) = (void *)&DAT_119182b0; } };
struct NativeOpImpl_FUN_10c54790 : NativeOpImplBase_thunk_FUN_10c55560_10c54790, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c54790_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c54790 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c54790(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c55580 { void *v0;
~NativeOpImplRoot_10c55580() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11917eac;
struct NativeOpImplBase_thunk_FUN_10c55580_10c548f0 : NativeOpImplRoot_10c55580 { void *f4; ~NativeOpImplBase_thunk_FUN_10c55580_10c548f0();
__forceinline NativeOpImplBase_thunk_FUN_10c55580_10c548f0() { v0 = (void *)&DAT_11917eac; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c55580_10c548f0::~NativeOpImplBase_thunk_FUN_10c55580_10c548f0() { v0 = (void *)&DAT_11917eac; g_lSCObjCount--; };
struct NativeOpMember14_10c548f0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c548f0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118ba17c; } };
struct NativeOpImpl_FUN_10c548f0_vt {
__forceinline NativeOpImpl_FUN_10c548f0_vt(void *self) { *(void **)self = (void *)&DAT_11917eec; *(void **)((char *)self + 8) = (void *)&DAT_11917f34; } };
struct NativeOpImpl_FUN_10c548f0 : NativeOpImplBase_thunk_FUN_10c55580_10c548f0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c548f0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c548f0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c548f0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c555a0 { void *v0;
~NativeOpImplRoot_10c555a0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11918118;
struct NativeOpImplBase_thunk_FUN_10c555a0_10c54a50 : NativeOpImplRoot_10c555a0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c555a0_10c54a50();
__forceinline NativeOpImplBase_thunk_FUN_10c555a0_10c54a50() { v0 = (void *)&DAT_11918118; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c555a0_10c54a50::~NativeOpImplBase_thunk_FUN_10c555a0_10c54a50() { v0 = (void *)&DAT_11918118; g_lSCObjCount--; };
struct NativeOpMember14_10c54a50 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c54a50(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118ba188; } };
struct NativeOpImpl_FUN_10c54a50_vt {
__forceinline NativeOpImpl_FUN_10c54a50_vt(void *self) { *(void **)self = (void *)&DAT_11918158; *(void **)((char *)self + 8) = (void *)&DAT_119181a0; } };
struct NativeOpImpl_FUN_10c54a50 : NativeOpImplBase_thunk_FUN_10c555a0_10c54a50, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c54a50_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c54a50 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c54a50(void *param_2);
};
extern unsigned int DAT_11917f9c;
struct NativeOpImplBase_thunk_FUN_10c55540_10c54f40 : NativeOpImplRoot_10c55540 { void *f4; ~NativeOpImplBase_thunk_FUN_10c55540_10c54f40();
__forceinline NativeOpImplBase_thunk_FUN_10c55540_10c54f40() { v0 = (void *)&DAT_11917f9c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c55540_10c54f40::~NativeOpImplBase_thunk_FUN_10c55540_10c54f40() { v0 = (void *)&DAT_11917f9c; g_lSCObjCount--; };
struct NativeOpMember14_10c54f40 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c54f40(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11917fe4; } };
struct NativeOpImpl_FUN_10c54f40_vt {
__forceinline NativeOpImpl_FUN_10c54f40_vt(void *self) { *(void **)self = (void *)&DAT_11917ff0; *(void **)((char *)self + 8) = (void *)&DAT_11918044; } };
struct NativeOpImpl_FUN_10c54f40 : NativeOpImplBase_thunk_FUN_10c55540_10c54f40, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c54f40_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c54f40 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c54f40(void *param_2);
};
extern unsigned int DAT_11918208;
struct NativeOpImplBase_thunk_FUN_10c55560_10c550b0 : NativeOpImplRoot_10c55560 { void *f4; ~NativeOpImplBase_thunk_FUN_10c55560_10c550b0();
__forceinline NativeOpImplBase_thunk_FUN_10c55560_10c550b0() { v0 = (void *)&DAT_11918208; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c55560_10c550b0::~NativeOpImplBase_thunk_FUN_10c55560_10c550b0() { v0 = (void *)&DAT_11918208; g_lSCObjCount--; };
struct NativeOpMember14_10c550b0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c550b0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11918250; } };
struct NativeOpImpl_FUN_10c550b0_vt {
__forceinline NativeOpImpl_FUN_10c550b0_vt(void *self) { *(void **)self = (void *)&DAT_1191825c; *(void **)((char *)self + 8) = (void *)&DAT_119182b0; } };
struct NativeOpImpl_FUN_10c550b0 : NativeOpImplBase_thunk_FUN_10c55560_10c550b0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c550b0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c550b0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c550b0(void *param_2);
};
extern unsigned int DAT_11917eac;
struct NativeOpImplBase_thunk_FUN_10c55580_10c55220 : NativeOpImplRoot_10c55580 { void *f4; ~NativeOpImplBase_thunk_FUN_10c55580_10c55220();
__forceinline NativeOpImplBase_thunk_FUN_10c55580_10c55220() { v0 = (void *)&DAT_11917eac; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c55580_10c55220::~NativeOpImplBase_thunk_FUN_10c55580_10c55220() { v0 = (void *)&DAT_11917eac; g_lSCObjCount--; };
struct NativeOpMember14_10c55220 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c55220(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118ba17c; } };
struct NativeOpImpl_FUN_10c55220_vt {
__forceinline NativeOpImpl_FUN_10c55220_vt(void *self) { *(void **)self = (void *)&DAT_11917eec; *(void **)((char *)self + 8) = (void *)&DAT_11917f34; } };
struct NativeOpImpl_FUN_10c55220 : NativeOpImplBase_thunk_FUN_10c55580_10c55220, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c55220_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c55220 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c55220(void *param_2);
};
extern unsigned int DAT_11918118;
struct NativeOpImplBase_thunk_FUN_10c555a0_10c55390 : NativeOpImplRoot_10c555a0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c555a0_10c55390();
__forceinline NativeOpImplBase_thunk_FUN_10c555a0_10c55390() { v0 = (void *)&DAT_11918118; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c555a0_10c55390::~NativeOpImplBase_thunk_FUN_10c555a0_10c55390() { v0 = (void *)&DAT_11918118; g_lSCObjCount--; };
struct NativeOpMember14_10c55390 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c55390(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118ba188; } };
struct NativeOpImpl_FUN_10c55390_vt {
__forceinline NativeOpImpl_FUN_10c55390_vt(void *self) { *(void **)self = (void *)&DAT_11918158; *(void **)((char *)self + 8) = (void *)&DAT_119181a0; } };
struct NativeOpImpl_FUN_10c55390 : NativeOpImplBase_thunk_FUN_10c555a0_10c55390, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c55390_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c55390 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c55390(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10c596a0 { void *v0;
~NativeOpImplRoot_10c596a0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11918528;
struct NativeOpImplBase_thunk_FUN_10c596a0_10c59210 : NativeOpImplRoot_10c596a0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c596a0_10c59210();
__forceinline NativeOpImplBase_thunk_FUN_10c596a0_10c59210() { v0 = (void *)&DAT_11918528; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c596a0_10c59210::~NativeOpImplBase_thunk_FUN_10c596a0_10c59210() { v0 = (void *)&DAT_11918528; g_lSCObjCount--; };
struct NativeOpMember14_10c59210 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c59210(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191856c; } };
struct NativeOpImpl_FUN_10c59210_vt {
__forceinline NativeOpImpl_FUN_10c59210_vt(void *self) { *(void **)self = (void *)&DAT_11918578; *(void **)((char *)self + 8) = (void *)&DAT_119185c4; } };
struct NativeOpImpl_FUN_10c59210 : NativeOpImplBase_thunk_FUN_10c596a0_10c59210, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c59210_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c59210 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c59210(void *param_2);
};
extern unsigned int DAT_11918528;
struct NativeOpImplBase_thunk_FUN_10c596a0_10c59500 : NativeOpImplRoot_10c596a0 { void *f4; ~NativeOpImplBase_thunk_FUN_10c596a0_10c59500();
__forceinline NativeOpImplBase_thunk_FUN_10c596a0_10c59500() { v0 = (void *)&DAT_11918528; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10c596a0_10c59500::~NativeOpImplBase_thunk_FUN_10c596a0_10c59500() { v0 = (void *)&DAT_11918528; g_lSCObjCount--; };
struct NativeOpMember14_10c59500 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c59500(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191856c; } };
struct NativeOpImpl_FUN_10c59500_vt {
__forceinline NativeOpImpl_FUN_10c59500_vt(void *self) { *(void **)self = (void *)&DAT_11918578; *(void **)((char *)self + 8) = (void *)&DAT_119185c4; } };
struct NativeOpImpl_FUN_10c59500 : NativeOpImplBase_thunk_FUN_10c596a0_10c59500, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c59500_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c59500 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c59500(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10c803a0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10c803a0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10c803a0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10c803a0::~NativeOpImplBase_thunk_FUN_101b9b80_10c803a0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10c803a0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c803a0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191af84; } };
struct NativeOpImpl_FUN_10c803a0_vt {
__forceinline NativeOpImpl_FUN_10c803a0_vt(void *self) { *(void **)self = (void *)&DAT_1191af90; *(void **)((char *)self + 8) = (void *)&DAT_1191afd8; } };
struct NativeOpImpl_FUN_10c803a0 : NativeOpImplBase_thunk_FUN_101b9b80_10c803a0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c803a0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c803a0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c803a0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10c80500 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10c80500();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10c80500() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10c80500::~NativeOpImplBase_thunk_FUN_101b9b80_10c80500() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10c80500 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10c80500(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191b040; } };
struct NativeOpImpl_FUN_10c80500_vt {
__forceinline NativeOpImpl_FUN_10c80500_vt(void *self) { *(void **)self = (void *)&DAT_1191b04c; *(void **)((char *)self + 8) = (void *)&DAT_1191b094; } };
struct NativeOpImpl_FUN_10c80500 : NativeOpImplBase_thunk_FUN_101b9b80_10c80500, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10c80500_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10c80500 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10c80500(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10cc1280 { void *v0;
~NativeOpImplRoot_10cc1280() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1191ed54;
struct NativeOpImplBase_thunk_FUN_10cc1280_10cc0b70 : NativeOpImplRoot_10cc1280 { void *f4; ~NativeOpImplBase_thunk_FUN_10cc1280_10cc0b70();
__forceinline NativeOpImplBase_thunk_FUN_10cc1280_10cc0b70() { v0 = (void *)&DAT_1191ed54; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cc1280_10cc0b70::~NativeOpImplBase_thunk_FUN_10cc1280_10cc0b70() { v0 = (void *)&DAT_1191ed54; g_lSCObjCount--; };
struct NativeOpMember14_10cc0b70 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc0b70(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191edc8; } };
struct NativeOpImpl_FUN_10cc0b70_vt {
__forceinline NativeOpImpl_FUN_10cc0b70_vt(void *self) { *(void **)self = (void *)&DAT_1191edd4; *(void **)((char *)self + 8) = (void *)&DAT_1191ee50; } };
struct NativeOpImpl_FUN_10cc0b70 : NativeOpImplBase_thunk_FUN_10cc1280_10cc0b70, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc0b70_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc0b70 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc0b70(void *param_2);
};
extern unsigned int DAT_1191ed54;
struct NativeOpImplBase_thunk_FUN_10cc1280_10cc0ff0 : NativeOpImplRoot_10cc1280 { void *f4; ~NativeOpImplBase_thunk_FUN_10cc1280_10cc0ff0();
__forceinline NativeOpImplBase_thunk_FUN_10cc1280_10cc0ff0() { v0 = (void *)&DAT_1191ed54; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cc1280_10cc0ff0::~NativeOpImplBase_thunk_FUN_10cc1280_10cc0ff0() { v0 = (void *)&DAT_1191ed54; g_lSCObjCount--; };
struct NativeOpMember14_10cc0ff0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc0ff0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191edc8; } };
struct NativeOpImpl_FUN_10cc0ff0_vt {
__forceinline NativeOpImpl_FUN_10cc0ff0_vt(void *self) { *(void **)self = (void *)&DAT_1191edd4; *(void **)((char *)self + 8) = (void *)&DAT_1191ee50; } };
struct NativeOpImpl_FUN_10cc0ff0 : NativeOpImplBase_thunk_FUN_10cc1280_10cc0ff0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc0ff0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc0ff0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc0ff0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6100 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6100();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6100() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6100::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6100() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6100 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6100(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f534; } };
struct NativeOpImpl_FUN_10cc6100_vt {
__forceinline NativeOpImpl_FUN_10cc6100_vt(void *self) { *(void **)self = (void *)&DAT_1191f540; *(void **)((char *)self + 8) = (void *)&DAT_1191f588; } };
struct NativeOpImpl_FUN_10cc6100 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6100, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6100_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6100 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6100(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6260 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6260();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6260() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6260::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6260() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6260 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6260(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f188; } };
struct NativeOpImpl_FUN_10cc6260_vt {
__forceinline NativeOpImpl_FUN_10cc6260_vt(void *self) { *(void **)self = (void *)&DAT_1191f194; *(void **)((char *)self + 8) = (void *)&DAT_1191f1dc; } };
struct NativeOpImpl_FUN_10cc6260 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6260, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6260_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6260 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6260(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc63c0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc63c0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc63c0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc63c0::~NativeOpImplBase_thunk_FUN_101b9b80_10cc63c0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc63c0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc63c0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191ef54; } };
struct NativeOpImpl_FUN_10cc63c0_vt {
__forceinline NativeOpImpl_FUN_10cc63c0_vt(void *self) { *(void **)self = (void *)&DAT_1191ef60; *(void **)((char *)self + 8) = (void *)&DAT_1191efa8; } };
struct NativeOpImpl_FUN_10cc63c0 : NativeOpImplBase_thunk_FUN_101b9b80_10cc63c0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc63c0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc63c0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc63c0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6520 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6520();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6520() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6520::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6520() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6520 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6520(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f0cc; } };
struct NativeOpImpl_FUN_10cc6520_vt {
__forceinline NativeOpImpl_FUN_10cc6520_vt(void *self) { *(void **)self = (void *)&DAT_1191f0d8; *(void **)((char *)self + 8) = (void *)&DAT_1191f120; } };
struct NativeOpImpl_FUN_10cc6520 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6520, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6520_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6520 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6520(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6680 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6680();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6680() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6680::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6680() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6680 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6680(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f010; } };
struct NativeOpImpl_FUN_10cc6680_vt {
__forceinline NativeOpImpl_FUN_10cc6680_vt(void *self) { *(void **)self = (void *)&DAT_1191f01c; *(void **)((char *)self + 8) = (void *)&DAT_1191f064; } };
struct NativeOpImpl_FUN_10cc6680 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6680, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6680_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6680 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6680(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc67e0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc67e0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc67e0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc67e0::~NativeOpImplBase_thunk_FUN_101b9b80_10cc67e0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc67e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc67e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f244; } };
struct NativeOpImpl_FUN_10cc67e0_vt {
__forceinline NativeOpImpl_FUN_10cc67e0_vt(void *self) { *(void **)self = (void *)&DAT_1191f250; *(void **)((char *)self + 8) = (void *)&DAT_1191f298; } };
struct NativeOpImpl_FUN_10cc67e0 : NativeOpImplBase_thunk_FUN_101b9b80_10cc67e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc67e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc67e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc67e0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6940 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6940();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6940() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6940::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6940() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6940 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6940(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f3bc; } };
struct NativeOpImpl_FUN_10cc6940_vt {
__forceinline NativeOpImpl_FUN_10cc6940_vt(void *self) { *(void **)self = (void *)&DAT_1191f3c8; *(void **)((char *)self + 8) = (void *)&DAT_1191f410; } };
struct NativeOpImpl_FUN_10cc6940 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6940, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6940_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6940 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6940(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6aa0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6aa0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6aa0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6aa0::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6aa0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6aa0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6aa0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f478; } };
struct NativeOpImpl_FUN_10cc6aa0_vt {
__forceinline NativeOpImpl_FUN_10cc6aa0_vt(void *self) { *(void **)self = (void *)&DAT_1191f484; *(void **)((char *)self + 8) = (void *)&DAT_1191f4cc; } };
struct NativeOpImpl_FUN_10cc6aa0 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6aa0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6aa0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6aa0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6aa0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc6c00 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc6c00();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc6c00() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc6c00::~NativeOpImplBase_thunk_FUN_101b9b80_10cc6c00() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc6c00 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc6c00(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f300; } };
struct NativeOpImpl_FUN_10cc6c00_vt {
__forceinline NativeOpImpl_FUN_10cc6c00_vt(void *self) { *(void **)self = (void *)&DAT_1191f30c; *(void **)((char *)self + 8) = (void *)&DAT_1191f354; } };
struct NativeOpImpl_FUN_10cc6c00 : NativeOpImplBase_thunk_FUN_101b9b80_10cc6c00, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc6c00_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc6c00 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc6c00(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10cc88e0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10cc88e0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10cc88e0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10cc88e0::~NativeOpImplBase_thunk_FUN_101b9b80_10cc88e0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10cc88e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cc88e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191f534; } };
struct NativeOpImpl_FUN_10cc88e0_vt {
__forceinline NativeOpImpl_FUN_10cc88e0_vt(void *self) { *(void **)self = (void *)&DAT_1191f540; *(void **)((char *)self + 8) = (void *)&DAT_1191f588; } };
struct NativeOpImpl_FUN_10cc88e0 : NativeOpImplBase_thunk_FUN_101b9b80_10cc88e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cc88e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cc88e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cc88e0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10cdbb50 { void *v0;
~NativeOpImplRoot_10cdbb50() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11920b34;
struct NativeOpImplBase_thunk_FUN_10cdbb50_10cdaeb0 : NativeOpImplRoot_10cdbb50 { void *f4; ~NativeOpImplBase_thunk_FUN_10cdbb50_10cdaeb0();
__forceinline NativeOpImplBase_thunk_FUN_10cdbb50_10cdaeb0() { v0 = (void *)&DAT_11920b34; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cdbb50_10cdaeb0::~NativeOpImplBase_thunk_FUN_10cdbb50_10cdaeb0() { v0 = (void *)&DAT_11920b34; g_lSCObjCount--; };
struct NativeOpMember14_10cdaeb0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cdaeb0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11920b78; } };
struct NativeOpImpl_FUN_10cdaeb0_vt {
__forceinline NativeOpImpl_FUN_10cdaeb0_vt(void *self) { *(void **)self = (void *)&DAT_11920b84; *(void **)((char *)self + 8) = (void *)&DAT_11920bd0; } };
struct NativeOpImpl_FUN_10cdaeb0 : NativeOpImplBase_thunk_FUN_10cdbb50_10cdaeb0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cdaeb0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cdaeb0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cdaeb0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10cdbb70 { void *v0;
~NativeOpImplRoot_10cdbb70() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119209c4;
struct NativeOpImplBase_thunk_FUN_10cdbb70_10cdb010 : NativeOpImplRoot_10cdbb70 { void *f4; ~NativeOpImplBase_thunk_FUN_10cdbb70_10cdb010();
__forceinline NativeOpImplBase_thunk_FUN_10cdbb70_10cdb010() { v0 = (void *)&DAT_119209c4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cdbb70_10cdb010::~NativeOpImplBase_thunk_FUN_10cdbb70_10cdb010() { v0 = (void *)&DAT_119209c4; g_lSCObjCount--; };
struct NativeOpMember14_10cdb010 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cdb010(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11920a04; } };
struct NativeOpImpl_FUN_10cdb010_vt {
__forceinline NativeOpImpl_FUN_10cdb010_vt(void *self) { *(void **)self = (void *)&DAT_11920a10; *(void **)((char *)self + 8) = (void *)&DAT_11920a58; } };
struct NativeOpImpl_FUN_10cdb010 : NativeOpImplBase_thunk_FUN_10cdbb70_10cdb010, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cdb010_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cdb010 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cdb010(void *param_2);
};
extern unsigned int DAT_11920b34;
struct NativeOpImplBase_thunk_FUN_10cdbb50_10cdb820 : NativeOpImplRoot_10cdbb50 { void *f4; ~NativeOpImplBase_thunk_FUN_10cdbb50_10cdb820();
__forceinline NativeOpImplBase_thunk_FUN_10cdbb50_10cdb820() { v0 = (void *)&DAT_11920b34; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cdbb50_10cdb820::~NativeOpImplBase_thunk_FUN_10cdbb50_10cdb820() { v0 = (void *)&DAT_11920b34; g_lSCObjCount--; };
struct NativeOpMember14_10cdb820 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cdb820(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11920b78; } };
struct NativeOpImpl_FUN_10cdb820_vt {
__forceinline NativeOpImpl_FUN_10cdb820_vt(void *self) { *(void **)self = (void *)&DAT_11920b84; *(void **)((char *)self + 8) = (void *)&DAT_11920bd0; } };
struct NativeOpImpl_FUN_10cdb820 : NativeOpImplBase_thunk_FUN_10cdbb50_10cdb820, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cdb820_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cdb820 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cdb820(void *param_2);
};
extern unsigned int DAT_119209c4;
struct NativeOpImplBase_thunk_FUN_10cdbb70_10cdb990 : NativeOpImplRoot_10cdbb70 { void *f4; ~NativeOpImplBase_thunk_FUN_10cdbb70_10cdb990();
__forceinline NativeOpImplBase_thunk_FUN_10cdbb70_10cdb990() { v0 = (void *)&DAT_119209c4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cdbb70_10cdb990::~NativeOpImplBase_thunk_FUN_10cdbb70_10cdb990() { v0 = (void *)&DAT_119209c4; g_lSCObjCount--; };
struct NativeOpMember14_10cdb990 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cdb990(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11920a04; } };
struct NativeOpImpl_FUN_10cdb990_vt {
__forceinline NativeOpImpl_FUN_10cdb990_vt(void *self) { *(void **)self = (void *)&DAT_11920a10; *(void **)((char *)self + 8) = (void *)&DAT_11920a58; } };
struct NativeOpImpl_FUN_10cdb990 : NativeOpImplBase_thunk_FUN_10cdbb70_10cdb990, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cdb990_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cdb990 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cdb990(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10ce10b0 { void *v0;
~NativeOpImplRoot_10ce10b0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11921188;
struct NativeOpImplBase_thunk_FUN_10ce10b0_10ce0c30 : NativeOpImplRoot_10ce10b0 { void *f4; ~NativeOpImplBase_thunk_FUN_10ce10b0_10ce0c30();
__forceinline NativeOpImplBase_thunk_FUN_10ce10b0_10ce0c30() { v0 = (void *)&DAT_11921188; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10ce10b0_10ce0c30::~NativeOpImplBase_thunk_FUN_10ce10b0_10ce0c30() { v0 = (void *)&DAT_11921188; g_lSCObjCount--; };
struct NativeOpMember14_10ce0c30 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10ce0c30(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191c0dc; } };
struct NativeOpImpl_FUN_10ce0c30_vt {
__forceinline NativeOpImpl_FUN_10ce0c30_vt(void *self) { *(void **)self = (void *)&DAT_119211cc; *(void **)((char *)self + 8) = (void *)&DAT_11921218; } };
struct NativeOpImpl_FUN_10ce0c30 : NativeOpImplBase_thunk_FUN_10ce10b0_10ce0c30, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10ce0c30_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10ce0c30 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10ce0c30(void *param_2);
};
extern unsigned int DAT_11921188;
struct NativeOpImplBase_thunk_FUN_10ce10b0_10ce0f40 : NativeOpImplRoot_10ce10b0 { void *f4; ~NativeOpImplBase_thunk_FUN_10ce10b0_10ce0f40();
__forceinline NativeOpImplBase_thunk_FUN_10ce10b0_10ce0f40() { v0 = (void *)&DAT_11921188; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10ce10b0_10ce0f40::~NativeOpImplBase_thunk_FUN_10ce10b0_10ce0f40() { v0 = (void *)&DAT_11921188; g_lSCObjCount--; };
struct NativeOpMember14_10ce0f40 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10ce0f40(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1191c0dc; } };
struct NativeOpImpl_FUN_10ce0f40_vt {
__forceinline NativeOpImpl_FUN_10ce0f40_vt(void *self) { *(void **)self = (void *)&DAT_119211cc; *(void **)((char *)self + 8) = (void *)&DAT_11921218; } };
struct NativeOpImpl_FUN_10ce0f40 : NativeOpImplBase_thunk_FUN_10ce10b0_10ce0f40, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10ce0f40_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10ce0f40 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10ce0f40(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10cf58c0 { void *v0;
~NativeOpImplRoot_10cf58c0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119226fc;
struct NativeOpImplBase_thunk_FUN_10cf58c0_10cf54b0 : NativeOpImplRoot_10cf58c0 { void *f4; ~NativeOpImplBase_thunk_FUN_10cf58c0_10cf54b0();
__forceinline NativeOpImplBase_thunk_FUN_10cf58c0_10cf54b0() { v0 = (void *)&DAT_119226fc; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10cf58c0_10cf54b0::~NativeOpImplBase_thunk_FUN_10cf58c0_10cf54b0() { v0 = (void *)&DAT_119226fc; g_lSCObjCount--; };
struct NativeOpMember14_10cf54b0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10cf54b0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11922750; } };
struct NativeOpImpl_FUN_10cf54b0_vt {
__forceinline NativeOpImpl_FUN_10cf54b0_vt(void *self) { *(void **)self = (void *)&DAT_1192275c; *(void **)((char *)self + 8) = (void *)&DAT_119227b8; } };
struct NativeOpImpl_FUN_10cf54b0 : NativeOpImplBase_thunk_FUN_10cf58c0_10cf54b0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10cf54b0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10cf54b0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10cf54b0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10d7c4d0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10d7c4d0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10d7c4d0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10d7c4d0::~NativeOpImplBase_thunk_FUN_101b9b80_10d7c4d0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10d7c4d0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10d7c4d0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1192f214; } };
struct NativeOpImpl_FUN_10d7c4d0_vt {
__forceinline NativeOpImpl_FUN_10d7c4d0_vt(void *self) { *(void **)self = (void *)&DAT_1192f220; *(void **)((char *)self + 8) = (void *)&DAT_1192f268; } };
struct NativeOpImpl_FUN_10d7c4d0 : NativeOpImplBase_thunk_FUN_101b9b80_10d7c4d0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10d7c4d0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10d7c4d0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10d7c4d0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10d7c630 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10d7c630();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10d7c630() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10d7c630::~NativeOpImplBase_thunk_FUN_101b9b80_10d7c630() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10d7c630 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10d7c630(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1192f38c; } };
struct NativeOpImpl_FUN_10d7c630_vt {
__forceinline NativeOpImpl_FUN_10d7c630_vt(void *self) { *(void **)self = (void *)&DAT_1192f398; *(void **)((char *)self + 8) = (void *)&DAT_1192f3e0; } };
struct NativeOpImpl_FUN_10d7c630 : NativeOpImplBase_thunk_FUN_101b9b80_10d7c630, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10d7c630_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10d7c630 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10d7c630(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10d7c790 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10d7c790();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10d7c790() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10d7c790::~NativeOpImplBase_thunk_FUN_101b9b80_10d7c790() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10d7c790 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10d7c790(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1189e9f4; } };
struct NativeOpImpl_FUN_10d7c790_vt {
__forceinline NativeOpImpl_FUN_10d7c790_vt(void *self) { *(void **)self = (void *)&DAT_1192f164; *(void **)((char *)self + 8) = (void *)&DAT_1192f1ac; } };
struct NativeOpImpl_FUN_10d7c790 : NativeOpImplBase_thunk_FUN_101b9b80_10d7c790, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10d7c790_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10d7c790 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10d7c790(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10d7c8f0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10d7c8f0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10d7c8f0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10d7c8f0::~NativeOpImplBase_thunk_FUN_101b9b80_10d7c8f0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10d7c8f0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10d7c8f0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1192f2d0; } };
struct NativeOpImpl_FUN_10d7c8f0_vt {
__forceinline NativeOpImpl_FUN_10d7c8f0_vt(void *self) { *(void **)self = (void *)&DAT_1192f2dc; *(void **)((char *)self + 8) = (void *)&DAT_1192f324; } };
struct NativeOpImpl_FUN_10d7c8f0 : NativeOpImplBase_thunk_FUN_101b9b80_10d7c8f0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10d7c8f0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10d7c8f0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10d7c8f0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10d9b8c0 { void *v0;
~NativeOpImplRoot_10d9b8c0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11931990;
struct NativeOpImplBase_thunk_FUN_10d9b8c0_10d9ab50 : NativeOpImplRoot_10d9b8c0 { void *f4; ~NativeOpImplBase_thunk_FUN_10d9b8c0_10d9ab50();
__forceinline NativeOpImplBase_thunk_FUN_10d9b8c0_10d9ab50() { v0 = (void *)&DAT_11931990; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10d9b8c0_10d9ab50::~NativeOpImplBase_thunk_FUN_10d9b8c0_10d9ab50() { v0 = (void *)&DAT_11931990; g_lSCObjCount--; };
struct NativeOpMember14_10d9ab50 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10d9ab50(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11920e2c; } };
struct NativeOpImpl_FUN_10d9ab50_vt {
__forceinline NativeOpImpl_FUN_10d9ab50_vt(void *self) { *(void **)self = (void *)&DAT_119319d0; *(void **)((char *)self + 8) = (void *)&DAT_11931a18; } };
struct NativeOpImpl_FUN_10d9ab50 : NativeOpImplBase_thunk_FUN_10d9b8c0_10d9ab50, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10d9ab50_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10d9ab50 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10d9ab50(void *param_2);
};
extern unsigned int DAT_11931990;
struct NativeOpImplBase_thunk_FUN_10d9b8c0_10d9b0a0 : NativeOpImplRoot_10d9b8c0 { void *f4; ~NativeOpImplBase_thunk_FUN_10d9b8c0_10d9b0a0();
__forceinline NativeOpImplBase_thunk_FUN_10d9b8c0_10d9b0a0() { v0 = (void *)&DAT_11931990; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10d9b8c0_10d9b0a0::~NativeOpImplBase_thunk_FUN_10d9b8c0_10d9b0a0() { v0 = (void *)&DAT_11931990; g_lSCObjCount--; };
struct NativeOpMember14_10d9b0a0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10d9b0a0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11920e2c; } };
struct NativeOpImpl_FUN_10d9b0a0_vt {
__forceinline NativeOpImpl_FUN_10d9b0a0_vt(void *self) { *(void **)self = (void *)&DAT_119319d0; *(void **)((char *)self + 8) = (void *)&DAT_11931a18; } };
struct NativeOpImpl_FUN_10d9b0a0 : NativeOpImplBase_thunk_FUN_10d9b8c0_10d9b0a0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10d9b0a0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10d9b0a0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10d9b0a0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10de4fc0 { void *v0;
~NativeOpImplRoot_10de4fc0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11935f64;
struct NativeOpImplBase_thunk_FUN_10de4fc0_10de4720 : NativeOpImplRoot_10de4fc0 { void *f4; ~NativeOpImplBase_thunk_FUN_10de4fc0_10de4720();
__forceinline NativeOpImplBase_thunk_FUN_10de4fc0_10de4720() { v0 = (void *)&DAT_11935f64; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10de4fc0_10de4720::~NativeOpImplBase_thunk_FUN_10de4fc0_10de4720() { v0 = (void *)&DAT_11935f64; g_lSCObjCount--; };
struct NativeOpMember14_10de4720 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10de4720(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11935fb0; } };
struct NativeOpImpl_FUN_10de4720_vt {
__forceinline NativeOpImpl_FUN_10de4720_vt(void *self) { *(void **)self = (void *)&DAT_11935fbc; *(void **)((char *)self + 8) = (void *)&DAT_11936014; } };
struct NativeOpImpl_FUN_10de4720 : NativeOpImplBase_thunk_FUN_10de4fc0_10de4720, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10de4720_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10de4720 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10de4720(void *param_2);
};
extern unsigned int DAT_11935f64;
struct NativeOpImplBase_thunk_FUN_10de4fc0_10de4d40 : NativeOpImplRoot_10de4fc0 { void *f4; ~NativeOpImplBase_thunk_FUN_10de4fc0_10de4d40();
__forceinline NativeOpImplBase_thunk_FUN_10de4fc0_10de4d40() { v0 = (void *)&DAT_11935f64; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10de4fc0_10de4d40::~NativeOpImplBase_thunk_FUN_10de4fc0_10de4d40() { v0 = (void *)&DAT_11935f64; g_lSCObjCount--; };
struct NativeOpMember14_10de4d40 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10de4d40(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11935fb0; } };
struct NativeOpImpl_FUN_10de4d40_vt {
__forceinline NativeOpImpl_FUN_10de4d40_vt(void *self) { *(void **)self = (void *)&DAT_11935fbc; *(void **)((char *)self + 8) = (void *)&DAT_11936014; } };
struct NativeOpImpl_FUN_10de4d40 : NativeOpImplBase_thunk_FUN_10de4fc0_10de4d40, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10de4d40_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10de4d40 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10de4d40(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10e92ee0 { void *v0;
~NativeOpImplRoot_10e92ee0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1194685c;
struct NativeOpImplBase_thunk_FUN_10e92ee0_10e8b520 : NativeOpImplRoot_10e92ee0 { void *f4; ~NativeOpImplBase_thunk_FUN_10e92ee0_10e8b520();
__forceinline NativeOpImplBase_thunk_FUN_10e92ee0_10e8b520() { v0 = (void *)&DAT_1194685c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10e92ee0_10e8b520::~NativeOpImplBase_thunk_FUN_10e92ee0_10e8b520() { v0 = (void *)&DAT_1194685c; g_lSCObjCount--; };
struct NativeOpMember14_10e8b520 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10e8b520(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119468a0; } };
struct NativeOpImpl_FUN_10e8b520_vt {
__forceinline NativeOpImpl_FUN_10e8b520_vt(void *self) { *(void **)self = (void *)&DAT_119468ac; *(void **)((char *)self + 8) = (void *)&DAT_119468f8; } };
struct NativeOpImpl_FUN_10e8b520 : NativeOpImplBase_thunk_FUN_10e92ee0_10e8b520, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10e8b520_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10e8b520 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10e8b520(void *param_2);
};
extern unsigned int DAT_1194685c;
struct NativeOpImplBase_thunk_FUN_10e92ee0_10e8f200 : NativeOpImplRoot_10e92ee0 { void *f4; ~NativeOpImplBase_thunk_FUN_10e92ee0_10e8f200();
__forceinline NativeOpImplBase_thunk_FUN_10e92ee0_10e8f200() { v0 = (void *)&DAT_1194685c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10e92ee0_10e8f200::~NativeOpImplBase_thunk_FUN_10e92ee0_10e8f200() { v0 = (void *)&DAT_1194685c; g_lSCObjCount--; };
struct NativeOpMember14_10e8f200 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10e8f200(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119468a0; } };
struct NativeOpImpl_FUN_10e8f200_vt {
__forceinline NativeOpImpl_FUN_10e8f200_vt(void *self) { *(void **)self = (void *)&DAT_119468ac; *(void **)((char *)self + 8) = (void *)&DAT_119468f8; } };
struct NativeOpImpl_FUN_10e8f200 : NativeOpImplBase_thunk_FUN_10e92ee0_10e8f200, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10e8f200_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10e8f200 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10e8f200(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10ef1290 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10ef1290();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10ef1290() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10ef1290::~NativeOpImplBase_thunk_FUN_101b9b80_10ef1290() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10ef1290 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10ef1290(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194b768; } };
struct NativeOpImpl_FUN_10ef1290_vt {
__forceinline NativeOpImpl_FUN_10ef1290_vt(void *self) { *(void **)self = (void *)&DAT_1194b774; *(void **)((char *)self + 8) = (void *)&DAT_1194b7bc; } };
struct NativeOpImpl_FUN_10ef1290 : NativeOpImplBase_thunk_FUN_101b9b80_10ef1290, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10ef1290_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10ef1290 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10ef1290(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f0ef10 { void *v0;
~NativeOpImplRoot_10f0ef10() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1194cbec;
struct NativeOpImplBase_thunk_FUN_10f0ef10_10f0d720 : NativeOpImplRoot_10f0ef10 { void *f4; ~NativeOpImplBase_thunk_FUN_10f0ef10_10f0d720();
__forceinline NativeOpImplBase_thunk_FUN_10f0ef10_10f0d720() { v0 = (void *)&DAT_1194cbec; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f0ef10_10f0d720::~NativeOpImplBase_thunk_FUN_10f0ef10_10f0d720() { v0 = (void *)&DAT_1194cbec; g_lSCObjCount--; };
struct NativeOpMember14_10f0d720 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f0d720(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194ce1c; } };
struct NativeOpImpl_FUN_10f0d720_vt {
__forceinline NativeOpImpl_FUN_10f0d720_vt(void *self) { *(void **)self = (void *)&DAT_1194ce28; *(void **)((char *)self + 8) = (void *)&DAT_1194ce88; } };
struct NativeOpImpl_FUN_10f0d720 : NativeOpImplBase_thunk_FUN_10f0ef10_10f0d720, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f0d720_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f0d720 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f0d720(void *param_2);
};
extern unsigned int DAT_1194cbec;
struct NativeOpImplBase_thunk_FUN_10f0ef10_10f0d880 : NativeOpImplRoot_10f0ef10 { void *f4; ~NativeOpImplBase_thunk_FUN_10f0ef10_10f0d880();
__forceinline NativeOpImplBase_thunk_FUN_10f0ef10_10f0d880() { v0 = (void *)&DAT_1194cbec; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f0ef10_10f0d880::~NativeOpImplBase_thunk_FUN_10f0ef10_10f0d880() { v0 = (void *)&DAT_1194cbec; g_lSCObjCount--; };
struct NativeOpMember14_10f0d880 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f0d880(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194cc44; } };
struct NativeOpImpl_FUN_10f0d880_vt {
__forceinline NativeOpImpl_FUN_10f0d880_vt(void *self) { *(void **)self = (void *)&DAT_1194cc50; *(void **)((char *)self + 8) = (void *)&DAT_1194ccb0; } };
struct NativeOpImpl_FUN_10f0d880 : NativeOpImplBase_thunk_FUN_10f0ef10_10f0d880, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f0d880_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f0d880 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f0d880(void *param_2);
};
extern unsigned int DAT_1194cbec;
struct NativeOpImplBase_thunk_FUN_10f0ef10_10f0d9e0 : NativeOpImplRoot_10f0ef10 { void *f4; ~NativeOpImplBase_thunk_FUN_10f0ef10_10f0d9e0();
__forceinline NativeOpImplBase_thunk_FUN_10f0ef10_10f0d9e0() { v0 = (void *)&DAT_1194cbec; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f0ef10_10f0d9e0::~NativeOpImplBase_thunk_FUN_10f0ef10_10f0d9e0() { v0 = (void *)&DAT_1194cbec; g_lSCObjCount--; };
struct NativeOpMember14_10f0d9e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f0d9e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194cd30; } };
struct NativeOpImpl_FUN_10f0d9e0_vt {
__forceinline NativeOpImpl_FUN_10f0d9e0_vt(void *self) { *(void **)self = (void *)&DAT_1194cd3c; *(void **)((char *)self + 8) = (void *)&DAT_1194cd9c; } };
struct NativeOpImpl_FUN_10f0d9e0 : NativeOpImplBase_thunk_FUN_10f0ef10_10f0d9e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f0d9e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f0d9e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f0d9e0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f24730 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f24730();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f24730() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f24730::~NativeOpImplBase_thunk_FUN_101b9b80_10f24730() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f24730 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f24730(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194e610; } };
struct NativeOpImpl_FUN_10f24730_vt {
__forceinline NativeOpImpl_FUN_10f24730_vt(void *self) { *(void **)self = (void *)&DAT_1194e61c; *(void **)((char *)self + 8) = (void *)&DAT_1194e664; } };
struct NativeOpImpl_FUN_10f24730 : NativeOpImplBase_thunk_FUN_101b9b80_10f24730, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f24730_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f24730 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f24730(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f2f9b0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f2f9b0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f2f9b0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f2f9b0::~NativeOpImplBase_thunk_FUN_101b9b80_10f2f9b0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f2f9b0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f2f9b0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194f36c; } };
struct NativeOpImpl_FUN_10f2f9b0_vt {
__forceinline NativeOpImpl_FUN_10f2f9b0_vt(void *self) { *(void **)self = (void *)&DAT_1194f378; *(void **)((char *)self + 8) = (void *)&DAT_1194f3c0; } };
struct NativeOpImpl_FUN_10f2f9b0 : NativeOpImplBase_thunk_FUN_101b9b80_10f2f9b0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f2f9b0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f2f9b0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f2f9b0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f2fb10 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f2fb10();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f2fb10() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f2fb10::~NativeOpImplBase_thunk_FUN_101b9b80_10f2fb10() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f2fb10 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f2fb10(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194f2ac; } };
struct NativeOpImpl_FUN_10f2fb10_vt {
__forceinline NativeOpImpl_FUN_10f2fb10_vt(void *self) { *(void **)self = (void *)&DAT_1194f2b8; *(void **)((char *)self + 8) = (void *)&DAT_1194f300; } };
struct NativeOpImpl_FUN_10f2fb10 : NativeOpImplBase_thunk_FUN_101b9b80_10f2fb10, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f2fb10_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f2fb10 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f2fb10(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f2fc70 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f2fc70();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f2fc70() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f2fc70::~NativeOpImplBase_thunk_FUN_101b9b80_10f2fc70() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f2fc70 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f2fc70(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194f1ec; } };
struct NativeOpImpl_FUN_10f2fc70_vt {
__forceinline NativeOpImpl_FUN_10f2fc70_vt(void *self) { *(void **)self = (void *)&DAT_1194f1f8; *(void **)((char *)self + 8) = (void *)&DAT_1194f240; } };
struct NativeOpImpl_FUN_10f2fc70 : NativeOpImplBase_thunk_FUN_101b9b80_10f2fc70, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f2fc70_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f2fc70 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f2fc70(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f2fdd0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f2fdd0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f2fdd0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f2fdd0::~NativeOpImplBase_thunk_FUN_101b9b80_10f2fdd0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f2fdd0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f2fdd0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1194f12c; } };
struct NativeOpImpl_FUN_10f2fdd0_vt {
__forceinline NativeOpImpl_FUN_10f2fdd0_vt(void *self) { *(void **)self = (void *)&DAT_1194f138; *(void **)((char *)self + 8) = (void *)&DAT_1194f180; } };
struct NativeOpImpl_FUN_10f2fdd0 : NativeOpImplBase_thunk_FUN_101b9b80_10f2fdd0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f2fdd0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f2fdd0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f2fdd0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f57040 { void *v0;
~NativeOpImplRoot_10f57040() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11952040;
struct NativeOpImplBase_thunk_FUN_10f57040_10f55c60 : NativeOpImplRoot_10f57040 { void *f4; ~NativeOpImplBase_thunk_FUN_10f57040_10f55c60();
__forceinline NativeOpImplBase_thunk_FUN_10f57040_10f55c60() { v0 = (void *)&DAT_11952040; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f57040_10f55c60::~NativeOpImplBase_thunk_FUN_10f57040_10f55c60() { v0 = (void *)&DAT_11952040; g_lSCObjCount--; };
struct NativeOpMember14_10f55c60 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f55c60(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952084; } };
struct NativeOpImpl_FUN_10f55c60_vt {
__forceinline NativeOpImpl_FUN_10f55c60_vt(void *self) { *(void **)self = (void *)&DAT_11952090; *(void **)((char *)self + 8) = (void *)&DAT_119520dc; } };
struct NativeOpImpl_FUN_10f55c60 : NativeOpImplBase_thunk_FUN_10f57040_10f55c60, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f55c60_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f55c60 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f55c60(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f57060 { void *v0;
~NativeOpImplRoot_10f57060() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11951ed8;
struct NativeOpImplBase_thunk_FUN_10f57060_10f55dc0 : NativeOpImplRoot_10f57060 { void *f4; ~NativeOpImplBase_thunk_FUN_10f57060_10f55dc0();
__forceinline NativeOpImplBase_thunk_FUN_10f57060_10f55dc0() { v0 = (void *)&DAT_11951ed8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f57060_10f55dc0::~NativeOpImplBase_thunk_FUN_10f57060_10f55dc0() { v0 = (void *)&DAT_11951ed8; g_lSCObjCount--; };
struct NativeOpMember14_10f55dc0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f55dc0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11951f18; } };
struct NativeOpImpl_FUN_10f55dc0_vt {
__forceinline NativeOpImpl_FUN_10f55dc0_vt(void *self) { *(void **)self = (void *)&DAT_11951f24; *(void **)((char *)self + 8) = (void *)&DAT_11951f6c; } };
struct NativeOpImpl_FUN_10f55dc0 : NativeOpImplBase_thunk_FUN_10f57060_10f55dc0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f55dc0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f55dc0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f55dc0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f57080 { void *v0;
~NativeOpImplRoot_10f57080() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119521b0;
struct NativeOpImplBase_thunk_FUN_10f57080_10f55f20 : NativeOpImplRoot_10f57080 { void *f4; ~NativeOpImplBase_thunk_FUN_10f57080_10f55f20();
__forceinline NativeOpImplBase_thunk_FUN_10f57080_10f55f20() { v0 = (void *)&DAT_119521b0; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f57080_10f55f20::~NativeOpImplBase_thunk_FUN_10f57080_10f55f20() { v0 = (void *)&DAT_119521b0; g_lSCObjCount--; };
struct NativeOpMember14_10f55f20 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f55f20(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119521f0; } };
struct NativeOpImpl_FUN_10f55f20_vt {
__forceinline NativeOpImpl_FUN_10f55f20_vt(void *self) { *(void **)self = (void *)&DAT_119521fc; *(void **)((char *)self + 8) = (void *)&DAT_11952244; } };
struct NativeOpImpl_FUN_10f55f20 : NativeOpImplBase_thunk_FUN_10f57080_10f55f20, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f55f20_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f55f20 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f55f20(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f570a0 { void *v0;
~NativeOpImplRoot_10f570a0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1195232c;
struct NativeOpImplBase_thunk_FUN_10f570a0_10f56080 : NativeOpImplRoot_10f570a0 { void *f4; ~NativeOpImplBase_thunk_FUN_10f570a0_10f56080();
__forceinline NativeOpImplBase_thunk_FUN_10f570a0_10f56080() { v0 = (void *)&DAT_1195232c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f570a0_10f56080::~NativeOpImplBase_thunk_FUN_10f570a0_10f56080() { v0 = (void *)&DAT_1195232c; g_lSCObjCount--; };
struct NativeOpMember14_10f56080 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f56080(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952374; } };
struct NativeOpImpl_FUN_10f56080_vt {
__forceinline NativeOpImpl_FUN_10f56080_vt(void *self) { *(void **)self = (void *)&DAT_11952380; *(void **)((char *)self + 8) = (void *)&DAT_119523d4; } };
struct NativeOpImpl_FUN_10f56080 : NativeOpImplBase_thunk_FUN_10f570a0_10f56080, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f56080_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f56080 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f56080(void *param_2);
};
extern unsigned int DAT_11952040;
struct NativeOpImplBase_thunk_FUN_10f57040_10f56480 : NativeOpImplRoot_10f57040 { void *f4; ~NativeOpImplBase_thunk_FUN_10f57040_10f56480();
__forceinline NativeOpImplBase_thunk_FUN_10f57040_10f56480() { v0 = (void *)&DAT_11952040; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f57040_10f56480::~NativeOpImplBase_thunk_FUN_10f57040_10f56480() { v0 = (void *)&DAT_11952040; g_lSCObjCount--; };
struct NativeOpMember14_10f56480 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f56480(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952084; } };
struct NativeOpImpl_FUN_10f56480_vt {
__forceinline NativeOpImpl_FUN_10f56480_vt(void *self) { *(void **)self = (void *)&DAT_11952090; *(void **)((char *)self + 8) = (void *)&DAT_119520dc; } };
struct NativeOpImpl_FUN_10f56480 : NativeOpImplBase_thunk_FUN_10f57040_10f56480, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f56480_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f56480 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f56480(void *param_2);
};
extern unsigned int DAT_11951ed8;
struct NativeOpImplBase_thunk_FUN_10f57060_10f565f0 : NativeOpImplRoot_10f57060 { void *f4; ~NativeOpImplBase_thunk_FUN_10f57060_10f565f0();
__forceinline NativeOpImplBase_thunk_FUN_10f57060_10f565f0() { v0 = (void *)&DAT_11951ed8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f57060_10f565f0::~NativeOpImplBase_thunk_FUN_10f57060_10f565f0() { v0 = (void *)&DAT_11951ed8; g_lSCObjCount--; };
struct NativeOpMember14_10f565f0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f565f0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11951f18; } };
struct NativeOpImpl_FUN_10f565f0_vt {
__forceinline NativeOpImpl_FUN_10f565f0_vt(void *self) { *(void **)self = (void *)&DAT_11951f24; *(void **)((char *)self + 8) = (void *)&DAT_11951f6c; } };
struct NativeOpImpl_FUN_10f565f0 : NativeOpImplBase_thunk_FUN_10f57060_10f565f0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f565f0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f565f0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f565f0(void *param_2);
};
extern unsigned int DAT_119521b0;
struct NativeOpImplBase_thunk_FUN_10f57080_10f56760 : NativeOpImplRoot_10f57080 { void *f4; ~NativeOpImplBase_thunk_FUN_10f57080_10f56760();
__forceinline NativeOpImplBase_thunk_FUN_10f57080_10f56760() { v0 = (void *)&DAT_119521b0; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f57080_10f56760::~NativeOpImplBase_thunk_FUN_10f57080_10f56760() { v0 = (void *)&DAT_119521b0; g_lSCObjCount--; };
struct NativeOpMember14_10f56760 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f56760(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119521f0; } };
struct NativeOpImpl_FUN_10f56760_vt {
__forceinline NativeOpImpl_FUN_10f56760_vt(void *self) { *(void **)self = (void *)&DAT_119521fc; *(void **)((char *)self + 8) = (void *)&DAT_11952244; } };
struct NativeOpImpl_FUN_10f56760 : NativeOpImplBase_thunk_FUN_10f57080_10f56760, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f56760_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f56760 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f56760(void *param_2);
};
extern unsigned int DAT_1195232c;
struct NativeOpImplBase_thunk_FUN_10f570a0_10f568d0 : NativeOpImplRoot_10f570a0 { void *f4; ~NativeOpImplBase_thunk_FUN_10f570a0_10f568d0();
__forceinline NativeOpImplBase_thunk_FUN_10f570a0_10f568d0() { v0 = (void *)&DAT_1195232c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f570a0_10f568d0::~NativeOpImplBase_thunk_FUN_10f570a0_10f568d0() { v0 = (void *)&DAT_1195232c; g_lSCObjCount--; };
struct NativeOpMember14_10f568d0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f568d0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952374; } };
struct NativeOpImpl_FUN_10f568d0_vt {
__forceinline NativeOpImpl_FUN_10f568d0_vt(void *self) { *(void **)self = (void *)&DAT_11952380; *(void **)((char *)self + 8) = (void *)&DAT_119523d4; } };
struct NativeOpImpl_FUN_10f568d0 : NativeOpImplBase_thunk_FUN_10f570a0_10f568d0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f568d0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f568d0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f568d0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f65b20 { void *v0;
~NativeOpImplRoot_10f65b20() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_1195273c;
struct NativeOpImplBase_thunk_FUN_10f65b20_10f64e00 : NativeOpImplRoot_10f65b20 { void *f4; ~NativeOpImplBase_thunk_FUN_10f65b20_10f64e00();
__forceinline NativeOpImplBase_thunk_FUN_10f65b20_10f64e00() { v0 = (void *)&DAT_1195273c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f65b20_10f64e00::~NativeOpImplBase_thunk_FUN_10f65b20_10f64e00() { v0 = (void *)&DAT_1195273c; g_lSCObjCount--; };
struct NativeOpMember14_10f64e00 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f64e00(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952780; } };
struct NativeOpImpl_FUN_10f64e00_vt {
__forceinline NativeOpImpl_FUN_10f64e00_vt(void *self) { *(void **)self = (void *)&DAT_1195278c; *(void **)((char *)self + 8) = (void *)&DAT_119527d8; } };
struct NativeOpImpl_FUN_10f64e00 : NativeOpImplBase_thunk_FUN_10f65b20_10f64e00, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f64e00_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f64e00 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f64e00(void *param_2);
};
extern unsigned int DAT_1195273c;
struct NativeOpImplBase_thunk_FUN_10f65b20_10f65290 : NativeOpImplRoot_10f65b20 { void *f4; ~NativeOpImplBase_thunk_FUN_10f65b20_10f65290();
__forceinline NativeOpImplBase_thunk_FUN_10f65b20_10f65290() { v0 = (void *)&DAT_1195273c; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f65b20_10f65290::~NativeOpImplBase_thunk_FUN_10f65b20_10f65290() { v0 = (void *)&DAT_1195273c; g_lSCObjCount--; };
struct NativeOpMember14_10f65290 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f65290(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952780; } };
struct NativeOpImpl_FUN_10f65290_vt {
__forceinline NativeOpImpl_FUN_10f65290_vt(void *self) { *(void **)self = (void *)&DAT_1195278c; *(void **)((char *)self + 8) = (void *)&DAT_119527d8; } };
struct NativeOpImpl_FUN_10f65290 : NativeOpImplBase_thunk_FUN_10f65b20_10f65290, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f65290_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f65290 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f65290(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f6fb30 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f6fb30();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f6fb30() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f6fb30::~NativeOpImplBase_thunk_FUN_101b9b80_10f6fb30() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f6fb30 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f6fb30(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11952b10; } };
struct NativeOpImpl_FUN_10f6fb30_vt {
__forceinline NativeOpImpl_FUN_10f6fb30_vt(void *self) { *(void **)self = (void *)&DAT_11952b1c; *(void **)((char *)self + 8) = (void *)&DAT_11952b64; } };
struct NativeOpImpl_FUN_10f6fb30 : NativeOpImplBase_thunk_FUN_101b9b80_10f6fb30, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f6fb30_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f6fb30 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f6fb30(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_10f77a60 { void *v0;
~NativeOpImplRoot_10f77a60() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119534fc;
struct NativeOpImplBase_thunk_FUN_10f77a60_10f77460 : NativeOpImplRoot_10f77a60 { void *f4; ~NativeOpImplBase_thunk_FUN_10f77a60_10f77460();
__forceinline NativeOpImplBase_thunk_FUN_10f77a60_10f77460() { v0 = (void *)&DAT_119534fc; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_10f77a60_10f77460::~NativeOpImplBase_thunk_FUN_10f77a60_10f77460() { v0 = (void *)&DAT_119534fc; g_lSCObjCount--; };
struct NativeOpMember14_10f77460 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f77460(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11950a7c; } };
struct NativeOpImpl_FUN_10f77460_vt {
__forceinline NativeOpImpl_FUN_10f77460_vt(void *self) { *(void **)self = (void *)&DAT_11953540; *(void **)((char *)self + 8) = (void *)&DAT_1195358c; } };
struct NativeOpImpl_FUN_10f77460 : NativeOpImplBase_thunk_FUN_10f77a60_10f77460, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f77460_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f77460 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f77460(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f7c3e0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f7c3e0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f7c3e0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f7c3e0::~NativeOpImplBase_thunk_FUN_101b9b80_10f7c3e0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f7c3e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f7c3e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11953b28; } };
struct NativeOpImpl_FUN_10f7c3e0_vt {
__forceinline NativeOpImpl_FUN_10f7c3e0_vt(void *self) { *(void **)self = (void *)&DAT_11953b34; *(void **)((char *)self + 8) = (void *)&DAT_11953b7c; } };
struct NativeOpImpl_FUN_10f7c3e0 : NativeOpImplBase_thunk_FUN_101b9b80_10f7c3e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f7c3e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f7c3e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f7c3e0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f7c540 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f7c540();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f7c540() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f7c540::~NativeOpImplBase_thunk_FUN_101b9b80_10f7c540() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f7c540 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f7c540(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11953a6c; } };
struct NativeOpImpl_FUN_10f7c540_vt {
__forceinline NativeOpImpl_FUN_10f7c540_vt(void *self) { *(void **)self = (void *)&DAT_11953a78; *(void **)((char *)self + 8) = (void *)&DAT_11953ac0; } };
struct NativeOpImpl_FUN_10f7c540 : NativeOpImplBase_thunk_FUN_101b9b80_10f7c540, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f7c540_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f7c540 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f7c540(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f8a230 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f8a230();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f8a230() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f8a230::~NativeOpImplBase_thunk_FUN_101b9b80_10f8a230() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f8a230 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f8a230(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1195474c; } };
struct NativeOpImpl_FUN_10f8a230_vt {
__forceinline NativeOpImpl_FUN_10f8a230_vt(void *self) { *(void **)self = (void *)&DAT_11954758; *(void **)((char *)self + 8) = (void *)&DAT_119547a0; } };
struct NativeOpImpl_FUN_10f8a230 : NativeOpImplBase_thunk_FUN_101b9b80_10f8a230, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f8a230_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f8a230 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f8a230(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f8a390 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f8a390();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f8a390() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f8a390::~NativeOpImplBase_thunk_FUN_101b9b80_10f8a390() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f8a390 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f8a390(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1195480c; } };
struct NativeOpImpl_FUN_10f8a390_vt {
__forceinline NativeOpImpl_FUN_10f8a390_vt(void *self) { *(void **)self = (void *)&DAT_11954818; *(void **)((char *)self + 8) = (void *)&DAT_11954860; } };
struct NativeOpImpl_FUN_10f8a390 : NativeOpImplBase_thunk_FUN_101b9b80_10f8a390, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f8a390_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f8a390 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f8a390(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_10f8a4f0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10f8a4f0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10f8a4f0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_10f8a4f0::~NativeOpImplBase_thunk_FUN_101b9b80_10f8a4f0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_10f8a4f0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10f8a4f0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119548cc; } };
struct NativeOpImpl_FUN_10f8a4f0_vt {
__forceinline NativeOpImpl_FUN_10f8a4f0_vt(void *self) { *(void **)self = (void *)&DAT_119548d8; *(void **)((char *)self + 8) = (void *)&DAT_11954920; } };
struct NativeOpImpl_FUN_10f8a4f0 : NativeOpImplBase_thunk_FUN_101b9b80_10f8a4f0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10f8a4f0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10f8a4f0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_10f8a4f0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_11017c80 { void *v0;
~NativeOpImplRoot_11017c80() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11960650;
struct NativeOpImplBase_thunk_FUN_11017c80_11017960 : NativeOpImplRoot_11017c80 { void *f4; ~NativeOpImplBase_thunk_FUN_11017c80_11017960();
__forceinline NativeOpImplBase_thunk_FUN_11017c80_11017960() { v0 = (void *)&DAT_11960650; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11017c80_11017960::~NativeOpImplBase_thunk_FUN_11017c80_11017960() { v0 = (void *)&DAT_11960650; g_lSCObjCount--; };
struct NativeOpMember14_11017960 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_11017960(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119606a8; } };
struct NativeOpImpl_FUN_11017960_vt {
__forceinline NativeOpImpl_FUN_11017960_vt(void *self) { *(void **)self = (void *)&DAT_119606b4; *(void **)((char *)self + 8) = (void *)&DAT_11960714; } };
struct NativeOpImpl_FUN_11017960 : NativeOpImplBase_thunk_FUN_11017c80_11017960, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_11017960_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_11017960 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_11017960(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_11026c80 { void *v0;
~NativeOpImplRoot_11026c80() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11963cc8;
struct NativeOpImplBase_thunk_FUN_11026c80_11025ee0 : NativeOpImplRoot_11026c80 { void *f4; ~NativeOpImplBase_thunk_FUN_11026c80_11025ee0();
__forceinline NativeOpImplBase_thunk_FUN_11026c80_11025ee0() { v0 = (void *)&DAT_11963cc8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11026c80_11025ee0::~NativeOpImplBase_thunk_FUN_11026c80_11025ee0() { v0 = (void *)&DAT_11963cc8; g_lSCObjCount--; };
struct NativeOpMember14_11025ee0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_11025ee0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119639e0; } };
struct NativeOpImpl_FUN_11025ee0_vt {
__forceinline NativeOpImpl_FUN_11025ee0_vt(void *self) { *(void **)self = (void *)&DAT_11963d10; *(void **)((char *)self + 8) = (void *)&DAT_11963d64; } };
struct NativeOpImpl_FUN_11025ee0 : NativeOpImplBase_thunk_FUN_11026c80_11025ee0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_11025ee0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_11025ee0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_11025ee0(void *param_2);
};
extern unsigned int DAT_11963cc8;
struct NativeOpImplBase_thunk_FUN_11026c80_110267e0 : NativeOpImplRoot_11026c80 { void *f4; ~NativeOpImplBase_thunk_FUN_11026c80_110267e0();
__forceinline NativeOpImplBase_thunk_FUN_11026c80_110267e0() { v0 = (void *)&DAT_11963cc8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11026c80_110267e0::~NativeOpImplBase_thunk_FUN_11026c80_110267e0() { v0 = (void *)&DAT_11963cc8; g_lSCObjCount--; };
struct NativeOpMember14_110267e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_110267e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119639e0; } };
struct NativeOpImpl_FUN_110267e0_vt {
__forceinline NativeOpImpl_FUN_110267e0_vt(void *self) { *(void **)self = (void *)&DAT_11963d10; *(void **)((char *)self + 8) = (void *)&DAT_11963d64; } };
struct NativeOpImpl_FUN_110267e0 : NativeOpImplBase_thunk_FUN_11026c80_110267e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_110267e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_110267e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_110267e0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_1105f5e0 { void *v0;
~NativeOpImplRoot_1105f5e0() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119660b8;
struct NativeOpImplBase_thunk_FUN_1105f5e0_1105f250 : NativeOpImplRoot_1105f5e0 { void *f4; ~NativeOpImplBase_thunk_FUN_1105f5e0_1105f250();
__forceinline NativeOpImplBase_thunk_FUN_1105f5e0_1105f250() { v0 = (void *)&DAT_119660b8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_1105f5e0_1105f250::~NativeOpImplBase_thunk_FUN_1105f5e0_1105f250() { v0 = (void *)&DAT_119660b8; g_lSCObjCount--; };
struct NativeOpMember14_1105f250 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_1105f250(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11966100; } };
struct NativeOpImpl_FUN_1105f250_vt {
__forceinline NativeOpImpl_FUN_1105f250_vt(void *self) { *(void **)self = (void *)&DAT_1196610c; *(void **)((char *)self + 8) = (void *)&DAT_11966160; } };
struct NativeOpImpl_FUN_1105f250 : NativeOpImplBase_thunk_FUN_1105f5e0_1105f250, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_1105f250_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_1105f250 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_1105f250(void *param_2);
};
extern unsigned int DAT_119660b8;
struct NativeOpImplBase_thunk_FUN_1105f5e0_1105f460 : NativeOpImplRoot_1105f5e0 { void *f4; ~NativeOpImplBase_thunk_FUN_1105f5e0_1105f460();
__forceinline NativeOpImplBase_thunk_FUN_1105f5e0_1105f460() { v0 = (void *)&DAT_119660b8; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_1105f5e0_1105f460::~NativeOpImplBase_thunk_FUN_1105f5e0_1105f460() { v0 = (void *)&DAT_119660b8; g_lSCObjCount--; };
struct NativeOpMember14_1105f460 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_1105f460(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_11966100; } };
struct NativeOpImpl_FUN_1105f460_vt {
__forceinline NativeOpImpl_FUN_1105f460_vt(void *self) { *(void **)self = (void *)&DAT_1196610c; *(void **)((char *)self + 8) = (void *)&DAT_11966160; } };
struct NativeOpImpl_FUN_1105f460 : NativeOpImplBase_thunk_FUN_1105f5e0_1105f460, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_1105f460_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_1105f460 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_1105f460(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_11061900 { void *v0;
~NativeOpImplRoot_11061900() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11966268;
struct NativeOpImplBase_thunk_FUN_11061900_110615e0 : NativeOpImplRoot_11061900 { void *f4; ~NativeOpImplBase_thunk_FUN_11061900_110615e0();
__forceinline NativeOpImplBase_thunk_FUN_11061900_110615e0() { v0 = (void *)&DAT_11966268; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11061900_110615e0::~NativeOpImplBase_thunk_FUN_11061900_110615e0() { v0 = (void *)&DAT_11966268; g_lSCObjCount--; };
struct NativeOpMember14_110615e0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_110615e0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118af10c; } };
struct NativeOpImpl_FUN_110615e0_vt {
__forceinline NativeOpImpl_FUN_110615e0_vt(void *self) { *(void **)self = (void *)&DAT_119662b4; *(void **)((char *)self + 8) = (void *)&DAT_1196630c; } };
struct NativeOpImpl_FUN_110615e0 : NativeOpImplBase_thunk_FUN_11061900_110615e0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_110615e0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_110615e0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_110615e0(void *param_2);
};
extern unsigned int DAT_11966268;
struct NativeOpImplBase_thunk_FUN_11061900_11061790 : NativeOpImplRoot_11061900 { void *f4; ~NativeOpImplBase_thunk_FUN_11061900_11061790();
__forceinline NativeOpImplBase_thunk_FUN_11061900_11061790() { v0 = (void *)&DAT_11966268; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11061900_11061790::~NativeOpImplBase_thunk_FUN_11061900_11061790() { v0 = (void *)&DAT_11966268; g_lSCObjCount--; };
struct NativeOpMember14_11061790 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_11061790(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118af10c; } };
struct NativeOpImpl_FUN_11061790_vt {
__forceinline NativeOpImpl_FUN_11061790_vt(void *self) { *(void **)self = (void *)&DAT_119662b4; *(void **)((char *)self + 8) = (void *)&DAT_1196630c; } };
struct NativeOpImpl_FUN_11061790 : NativeOpImplBase_thunk_FUN_11061900_11061790, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_11061790_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_11061790 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_11061790(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_11062530 { void *v0;
~NativeOpImplRoot_11062530() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_119663e4;
struct NativeOpImplBase_thunk_FUN_11062530_110621c0 : NativeOpImplRoot_11062530 { void *f4; ~NativeOpImplBase_thunk_FUN_11062530_110621c0();
__forceinline NativeOpImplBase_thunk_FUN_11062530_110621c0() { v0 = (void *)&DAT_119663e4; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11062530_110621c0::~NativeOpImplBase_thunk_FUN_11062530_110621c0() { v0 = (void *)&DAT_119663e4; g_lSCObjCount--; };
struct NativeOpMember14_110621c0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_110621c0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_118821c0; } };
struct NativeOpImpl_FUN_110621c0_vt {
__forceinline NativeOpImpl_FUN_110621c0_vt(void *self) { *(void **)self = (void *)&DAT_11966428; *(void **)((char *)self + 8) = (void *)&DAT_11966474; } };
struct NativeOpImpl_FUN_110621c0 : NativeOpImplBase_thunk_FUN_11062530_110621c0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_110621c0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_110621c0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_110621c0(void *param_2);
};
extern unsigned int DAT_11882180;
struct NativeOpImplBase_thunk_FUN_101b9b80_110646c0 : NativeOpImplRoot_101b9b80 { void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_110646c0();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_110646c0() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_101b9b80_110646c0::~NativeOpImplBase_thunk_FUN_101b9b80_110646c0() { v0 = (void *)&DAT_11882180; g_lSCObjCount--; };
struct NativeOpMember14_110646c0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_110646c0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_1196651c; } };
struct NativeOpImpl_FUN_110646c0_vt {
__forceinline NativeOpImpl_FUN_110646c0_vt(void *self) { *(void **)self = (void *)&DAT_11966528; *(void **)((char *)self + 8) = (void *)&DAT_11966570; } };
struct NativeOpImpl_FUN_110646c0 : NativeOpImplBase_thunk_FUN_101b9b80_110646c0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_110646c0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_110646c0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_110646c0(void *param_2);
};
extern unsigned int DAT_1186d2f4;
struct NativeOpImplRoot_11067850 { void *v0;
~NativeOpImplRoot_11067850() { v0 = (void *)&DAT_1186d2f4; } };
extern unsigned int DAT_11966858;
struct NativeOpImplBase_thunk_FUN_11067850_11067520 : NativeOpImplRoot_11067850 { void *f4; ~NativeOpImplBase_thunk_FUN_11067850_11067520();
__forceinline NativeOpImplBase_thunk_FUN_11067850_11067520() { v0 = (void *)&DAT_11966858; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11067850_11067520::~NativeOpImplBase_thunk_FUN_11067850_11067520() { v0 = (void *)&DAT_11966858; g_lSCObjCount--; };
struct NativeOpMember14_11067520 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_11067520(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119668ac; } };
struct NativeOpImpl_FUN_11067520_vt {
__forceinline NativeOpImpl_FUN_11067520_vt(void *self) { *(void **)self = (void *)&DAT_119668b8; *(void **)((char *)self + 8) = (void *)&DAT_11966914; } };
struct NativeOpImpl_FUN_11067520 : NativeOpImplBase_thunk_FUN_11067850_11067520, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_11067520_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_11067520 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_11067520(void *param_2);
};
extern unsigned int DAT_11966858;
struct NativeOpImplBase_thunk_FUN_11067850_110676d0 : NativeOpImplRoot_11067850 { void *f4; ~NativeOpImplBase_thunk_FUN_11067850_110676d0();
__forceinline NativeOpImplBase_thunk_FUN_11067850_110676d0() { v0 = (void *)&DAT_11966858; f4 = 0; g_lSCObjCount++; } };
NativeOpImplBase_thunk_FUN_11067850_110676d0::~NativeOpImplBase_thunk_FUN_11067850_110676d0() { v0 = (void *)&DAT_11966858; g_lSCObjCount--; };
struct NativeOpMember14_110676d0 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_110676d0(void *param) : smart(param) { f8 = 0; vptr = (void *)&DAT_119668ac; } };
struct NativeOpImpl_FUN_110676d0_vt {
__forceinline NativeOpImpl_FUN_110676d0_vt(void *self) { *(void **)self = (void *)&DAT_119668b8; *(void **)((char *)self + 8) = (void *)&DAT_11966914; } };
struct NativeOpImpl_FUN_110676d0 : NativeOpImplBase_thunk_FUN_11067850_110676d0, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_110676d0_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_110676d0 m14;
void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;
NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;
NativeOpImpl_FUN_110676d0(void *param_2);
};


// Reference entry 10687e80; body size 278 bytes.
#line 1 "ENTRY_10687e80"
NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)
    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) {
}

// Reference entry 109f4aa0; body size 278 bytes.
#line 1 "ENTRY_109f4aa0"
NativeOpImpl_FUN_109f4aa0::NativeOpImpl_FUN_109f4aa0(void *param_2)
    : NativeOpImpl_FUN_109f4aa0_vt(this), m14(param_2) {
}

// Reference entry 109f4c00; body size 278 bytes.
#line 1 "ENTRY_109f4c00"
NativeOpImpl_FUN_109f4c00::NativeOpImpl_FUN_109f4c00(void *param_2)
    : NativeOpImpl_FUN_109f4c00_vt(this), m14(param_2) {
}

// Reference entry 109f4d60; body size 278 bytes.
#line 1 "ENTRY_109f4d60"
NativeOpImpl_FUN_109f4d60::NativeOpImpl_FUN_109f4d60(void *param_2)
    : NativeOpImpl_FUN_109f4d60_vt(this), m14(param_2) {
}

// Reference entry 109f4ec0; body size 278 bytes.
#line 1 "ENTRY_109f4ec0"
NativeOpImpl_FUN_109f4ec0::NativeOpImpl_FUN_109f4ec0(void *param_2)
    : NativeOpImpl_FUN_109f4ec0_vt(this), m14(param_2) {
}

// Reference entry 109f5470; body size 292 bytes.
#line 1 "ENTRY_109f5470"
NativeOpImpl_FUN_109f5470::NativeOpImpl_FUN_109f5470(void *param_2)
    : NativeOpImpl_FUN_109f5470_vt(this), m14(param_2) {
v0 = (void *)&DAT_118f1d34; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_118f1d7c;
}

// Reference entry 109f55e0; body size 292 bytes.
#line 1 "ENTRY_109f55e0"
NativeOpImpl_FUN_109f55e0::NativeOpImpl_FUN_109f55e0(void *param_2)
    : NativeOpImpl_FUN_109f55e0_vt(this), m14(param_2) {
v0 = (void *)&DAT_118f1a70; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_118f1ab8;
}

// Reference entry 109f5750; body size 292 bytes.
#line 1 "ENTRY_109f5750"
NativeOpImpl_FUN_109f5750::NativeOpImpl_FUN_109f5750(void *param_2)
    : NativeOpImpl_FUN_109f5750_vt(this), m14(param_2) {
v0 = (void *)&DAT_118f1ea4; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_118f1ef0;
}

// Reference entry 109f58c0; body size 292 bytes.
#line 1 "ENTRY_109f58c0"
NativeOpImpl_FUN_109f58c0::NativeOpImpl_FUN_109f58c0(void *param_2)
    : NativeOpImpl_FUN_109f58c0_vt(this), m14(param_2) {
v0 = (void *)&DAT_118f1bcc; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_118f1c14;
}

// Reference entry 10b6cd30; body size 278 bytes.
#line 1 "ENTRY_10b6cd30"
NativeOpImpl_FUN_10b6cd30::NativeOpImpl_FUN_10b6cd30(void *param_2)
    : NativeOpImpl_FUN_10b6cd30_vt(this), m14(param_2) {
}

// Reference entry 10b6d0a0; body size 292 bytes.
#line 1 "ENTRY_10b6d0a0"
NativeOpImpl_FUN_10b6d0a0::NativeOpImpl_FUN_10b6d0a0(void *param_2)
    : NativeOpImpl_FUN_10b6d0a0_vt(this), m14(param_2) {
v0 = (void *)&DAT_1190aa08; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1190aa50;
}

// Reference entry 10b7bf50; body size 278 bytes.
#line 1 "ENTRY_10b7bf50"
NativeOpImpl_FUN_10b7bf50::NativeOpImpl_FUN_10b7bf50(void *param_2)
    : NativeOpImpl_FUN_10b7bf50_vt(this), m14(param_2) {
}

// Reference entry 10b7c6a0; body size 292 bytes.
#line 1 "ENTRY_10b7c6a0"
NativeOpImpl_FUN_10b7c6a0::NativeOpImpl_FUN_10b7c6a0(void *param_2)
    : NativeOpImpl_FUN_10b7c6a0_vt(this), m14(param_2) {
v0 = (void *)&DAT_1190e244; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1190e298;
}

// Reference entry 10c4a3b0; body size 278 bytes.
#line 1 "ENTRY_10c4a3b0"
NativeOpImpl_FUN_10c4a3b0::NativeOpImpl_FUN_10c4a3b0(void *param_2)
    : NativeOpImpl_FUN_10c4a3b0_vt(this), m14(param_2) {
}

// Reference entry 10c4de80; body size 278 bytes.
#line 1 "ENTRY_10c4de80"
NativeOpImpl_FUN_10c4de80::NativeOpImpl_FUN_10c4de80(void *param_2)
    : NativeOpImpl_FUN_10c4de80_vt(this), m14(param_2) {
}

// Reference entry 10c4dfe0; body size 278 bytes.
#line 1 "ENTRY_10c4dfe0"
NativeOpImpl_FUN_10c4dfe0::NativeOpImpl_FUN_10c4dfe0(void *param_2)
    : NativeOpImpl_FUN_10c4dfe0_vt(this), m14(param_2) {
}

// Reference entry 10c4e140; body size 278 bytes.
#line 1 "ENTRY_10c4e140"
NativeOpImpl_FUN_10c4e140::NativeOpImpl_FUN_10c4e140(void *param_2)
    : NativeOpImpl_FUN_10c4e140_vt(this), m14(param_2) {
}

// Reference entry 10c4e2a0; body size 278 bytes.
#line 1 "ENTRY_10c4e2a0"
NativeOpImpl_FUN_10c4e2a0::NativeOpImpl_FUN_10c4e2a0(void *param_2)
    : NativeOpImpl_FUN_10c4e2a0_vt(this), m14(param_2) {
}

// Reference entry 10c4e400; body size 278 bytes.
#line 1 "ENTRY_10c4e400"
NativeOpImpl_FUN_10c4e400::NativeOpImpl_FUN_10c4e400(void *param_2)
    : NativeOpImpl_FUN_10c4e400_vt(this), m14(param_2) {
}

// Reference entry 10c4eb20; body size 292 bytes.
#line 1 "ENTRY_10c4eb20"
NativeOpImpl_FUN_10c4eb20::NativeOpImpl_FUN_10c4eb20(void *param_2)
    : NativeOpImpl_FUN_10c4eb20_vt(this), m14(param_2) {
v0 = (void *)&DAT_119175f4; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11917640;
}

// Reference entry 10c4ec90; body size 292 bytes.
#line 1 "ENTRY_10c4ec90"
NativeOpImpl_FUN_10c4ec90::NativeOpImpl_FUN_10c4ec90(void *param_2)
    : NativeOpImpl_FUN_10c4ec90_vt(this), m14(param_2) {
v0 = (void *)&DAT_119176fc; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11917748;
}

// Reference entry 10c4ee00; body size 292 bytes.
#line 1 "ENTRY_10c4ee00"
NativeOpImpl_FUN_10c4ee00::NativeOpImpl_FUN_10c4ee00(void *param_2)
    : NativeOpImpl_FUN_10c4ee00_vt(this), m14(param_2) {
v0 = (void *)&DAT_11917804; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11917850;
}

// Reference entry 10c4ef70; body size 292 bytes.
#line 1 "ENTRY_10c4ef70"
NativeOpImpl_FUN_10c4ef70::NativeOpImpl_FUN_10c4ef70(void *param_2)
    : NativeOpImpl_FUN_10c4ef70_vt(this), m14(param_2) {
v0 = (void *)&DAT_11917a70; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11917abc;
}

// Reference entry 10c4f0e0; body size 292 bytes.
#line 1 "ENTRY_10c4f0e0"
NativeOpImpl_FUN_10c4f0e0::NativeOpImpl_FUN_10c4f0e0(void *param_2)
    : NativeOpImpl_FUN_10c4f0e0_vt(this), m14(param_2) {
v0 = (void *)&DAT_1191796c; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_119179b4;
}

// Reference entry 10c54630; body size 278 bytes.
#line 1 "ENTRY_10c54630"
NativeOpImpl_FUN_10c54630::NativeOpImpl_FUN_10c54630(void *param_2)
    : NativeOpImpl_FUN_10c54630_vt(this), m14(param_2) {
}

// Reference entry 10c54790; body size 278 bytes.
#line 1 "ENTRY_10c54790"
NativeOpImpl_FUN_10c54790::NativeOpImpl_FUN_10c54790(void *param_2)
    : NativeOpImpl_FUN_10c54790_vt(this), m14(param_2) {
}

// Reference entry 10c548f0; body size 278 bytes.
#line 1 "ENTRY_10c548f0"
NativeOpImpl_FUN_10c548f0::NativeOpImpl_FUN_10c548f0(void *param_2)
    : NativeOpImpl_FUN_10c548f0_vt(this), m14(param_2) {
}

// Reference entry 10c54a50; body size 278 bytes.
#line 1 "ENTRY_10c54a50"
NativeOpImpl_FUN_10c54a50::NativeOpImpl_FUN_10c54a50(void *param_2)
    : NativeOpImpl_FUN_10c54a50_vt(this), m14(param_2) {
}

// Reference entry 10c54f40; body size 292 bytes.
#line 1 "ENTRY_10c54f40"
NativeOpImpl_FUN_10c54f40::NativeOpImpl_FUN_10c54f40(void *param_2)
    : NativeOpImpl_FUN_10c54f40_vt(this), m14(param_2) {
v0 = (void *)&DAT_11918054; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_119180a8;
}

// Reference entry 10c550b0; body size 292 bytes.
#line 1 "ENTRY_10c550b0"
NativeOpImpl_FUN_10c550b0::NativeOpImpl_FUN_10c550b0(void *param_2)
    : NativeOpImpl_FUN_10c550b0_vt(this), m14(param_2) {
v0 = (void *)&DAT_119182c0; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11918314;
}

// Reference entry 10c55220; body size 292 bytes.
#line 1 "ENTRY_10c55220"
NativeOpImpl_FUN_10c55220::NativeOpImpl_FUN_10c55220(void *param_2)
    : NativeOpImpl_FUN_10c55220_vt(this), m14(param_2) {
v0 = (void *)&DAT_11917f44; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11917f8c;
}

// Reference entry 10c55390; body size 292 bytes.
#line 1 "ENTRY_10c55390"
NativeOpImpl_FUN_10c55390::NativeOpImpl_FUN_10c55390(void *param_2)
    : NativeOpImpl_FUN_10c55390_vt(this), m14(param_2) {
v0 = (void *)&DAT_119181b0; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_119181f8;
}

// Reference entry 10c59210; body size 278 bytes.
#line 1 "ENTRY_10c59210"
NativeOpImpl_FUN_10c59210::NativeOpImpl_FUN_10c59210(void *param_2)
    : NativeOpImpl_FUN_10c59210_vt(this), m14(param_2) {
}

// Reference entry 10c59500; body size 292 bytes.
#line 1 "ENTRY_10c59500"
NativeOpImpl_FUN_10c59500::NativeOpImpl_FUN_10c59500(void *param_2)
    : NativeOpImpl_FUN_10c59500_vt(this), m14(param_2) {
v0 = (void *)&DAT_119185d4; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11918620;
}

// Reference entry 10c803a0; body size 278 bytes.
#line 1 "ENTRY_10c803a0"
NativeOpImpl_FUN_10c803a0::NativeOpImpl_FUN_10c803a0(void *param_2)
    : NativeOpImpl_FUN_10c803a0_vt(this), m14(param_2) {
}

// Reference entry 10c80500; body size 278 bytes.
#line 1 "ENTRY_10c80500"
NativeOpImpl_FUN_10c80500::NativeOpImpl_FUN_10c80500(void *param_2)
    : NativeOpImpl_FUN_10c80500_vt(this), m14(param_2) {
}

// Reference entry 10cc0b70; body size 278 bytes.
#line 1 "ENTRY_10cc0b70"
NativeOpImpl_FUN_10cc0b70::NativeOpImpl_FUN_10cc0b70(void *param_2)
    : NativeOpImpl_FUN_10cc0b70_vt(this), m14(param_2) {
}

// Reference entry 10cc0ff0; body size 292 bytes.
#line 1 "ENTRY_10cc0ff0"
NativeOpImpl_FUN_10cc0ff0::NativeOpImpl_FUN_10cc0ff0(void *param_2)
    : NativeOpImpl_FUN_10cc0ff0_vt(this), m14(param_2) {
v0 = (void *)&DAT_1191ee60; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1191eedc;
}

// Reference entry 10cc6100; body size 278 bytes.
#line 1 "ENTRY_10cc6100"
NativeOpImpl_FUN_10cc6100::NativeOpImpl_FUN_10cc6100(void *param_2)
    : NativeOpImpl_FUN_10cc6100_vt(this), m14(param_2) {
}

// Reference entry 10cc6260; body size 278 bytes.
#line 1 "ENTRY_10cc6260"
NativeOpImpl_FUN_10cc6260::NativeOpImpl_FUN_10cc6260(void *param_2)
    : NativeOpImpl_FUN_10cc6260_vt(this), m14(param_2) {
}

// Reference entry 10cc63c0; body size 278 bytes.
#line 1 "ENTRY_10cc63c0"
NativeOpImpl_FUN_10cc63c0::NativeOpImpl_FUN_10cc63c0(void *param_2)
    : NativeOpImpl_FUN_10cc63c0_vt(this), m14(param_2) {
}

// Reference entry 10cc6520; body size 278 bytes.
#line 1 "ENTRY_10cc6520"
NativeOpImpl_FUN_10cc6520::NativeOpImpl_FUN_10cc6520(void *param_2)
    : NativeOpImpl_FUN_10cc6520_vt(this), m14(param_2) {
}

// Reference entry 10cc6680; body size 278 bytes.
#line 1 "ENTRY_10cc6680"
NativeOpImpl_FUN_10cc6680::NativeOpImpl_FUN_10cc6680(void *param_2)
    : NativeOpImpl_FUN_10cc6680_vt(this), m14(param_2) {
}

// Reference entry 10cc67e0; body size 278 bytes.
#line 1 "ENTRY_10cc67e0"
NativeOpImpl_FUN_10cc67e0::NativeOpImpl_FUN_10cc67e0(void *param_2)
    : NativeOpImpl_FUN_10cc67e0_vt(this), m14(param_2) {
}

// Reference entry 10cc6940; body size 278 bytes.
#line 1 "ENTRY_10cc6940"
NativeOpImpl_FUN_10cc6940::NativeOpImpl_FUN_10cc6940(void *param_2)
    : NativeOpImpl_FUN_10cc6940_vt(this), m14(param_2) {
}

// Reference entry 10cc6aa0; body size 278 bytes.
#line 1 "ENTRY_10cc6aa0"
NativeOpImpl_FUN_10cc6aa0::NativeOpImpl_FUN_10cc6aa0(void *param_2)
    : NativeOpImpl_FUN_10cc6aa0_vt(this), m14(param_2) {
}

// Reference entry 10cc6c00; body size 278 bytes.
#line 1 "ENTRY_10cc6c00"
NativeOpImpl_FUN_10cc6c00::NativeOpImpl_FUN_10cc6c00(void *param_2)
    : NativeOpImpl_FUN_10cc6c00_vt(this), m14(param_2) {
}

// Reference entry 10cc88e0; body size 292 bytes.
#line 1 "ENTRY_10cc88e0"
NativeOpImpl_FUN_10cc88e0::NativeOpImpl_FUN_10cc88e0(void *param_2)
    : NativeOpImpl_FUN_10cc88e0_vt(this), m14(param_2) {
v0 = (void *)&DAT_1191f598; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1191f5e0;
}

// Reference entry 10cdaeb0; body size 278 bytes.
#line 1 "ENTRY_10cdaeb0"
NativeOpImpl_FUN_10cdaeb0::NativeOpImpl_FUN_10cdaeb0(void *param_2)
    : NativeOpImpl_FUN_10cdaeb0_vt(this), m14(param_2) {
}

// Reference entry 10cdb010; body size 278 bytes.
#line 1 "ENTRY_10cdb010"
NativeOpImpl_FUN_10cdb010::NativeOpImpl_FUN_10cdb010(void *param_2)
    : NativeOpImpl_FUN_10cdb010_vt(this), m14(param_2) {
}

// Reference entry 10cdb820; body size 292 bytes.
#line 1 "ENTRY_10cdb820"
NativeOpImpl_FUN_10cdb820::NativeOpImpl_FUN_10cdb820(void *param_2)
    : NativeOpImpl_FUN_10cdb820_vt(this), m14(param_2) {
v0 = (void *)&DAT_11920be0; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11920c2c;
}

// Reference entry 10cdb990; body size 292 bytes.
#line 1 "ENTRY_10cdb990"
NativeOpImpl_FUN_10cdb990::NativeOpImpl_FUN_10cdb990(void *param_2)
    : NativeOpImpl_FUN_10cdb990_vt(this), m14(param_2) {
v0 = (void *)&DAT_11920a68; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11920ab0;
}

// Reference entry 10ce0c30; body size 278 bytes.
#line 1 "ENTRY_10ce0c30"
NativeOpImpl_FUN_10ce0c30::NativeOpImpl_FUN_10ce0c30(void *param_2)
    : NativeOpImpl_FUN_10ce0c30_vt(this), m14(param_2) {
}

// Reference entry 10ce0f40; body size 292 bytes.
#line 1 "ENTRY_10ce0f40"
NativeOpImpl_FUN_10ce0f40::NativeOpImpl_FUN_10ce0f40(void *param_2)
    : NativeOpImpl_FUN_10ce0f40_vt(this), m14(param_2) {
v0 = (void *)&DAT_11921228; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1192127c;
}

// Reference entry 10cf54b0; body size 278 bytes.
#line 1 "ENTRY_10cf54b0"
NativeOpImpl_FUN_10cf54b0::NativeOpImpl_FUN_10cf54b0(void *param_2)
    : NativeOpImpl_FUN_10cf54b0_vt(this), m14(param_2) {
}

// Reference entry 10d7c4d0; body size 278 bytes.
#line 1 "ENTRY_10d7c4d0"
NativeOpImpl_FUN_10d7c4d0::NativeOpImpl_FUN_10d7c4d0(void *param_2)
    : NativeOpImpl_FUN_10d7c4d0_vt(this), m14(param_2) {
}

// Reference entry 10d7c630; body size 278 bytes.
#line 1 "ENTRY_10d7c630"
NativeOpImpl_FUN_10d7c630::NativeOpImpl_FUN_10d7c630(void *param_2)
    : NativeOpImpl_FUN_10d7c630_vt(this), m14(param_2) {
}

// Reference entry 10d7c790; body size 278 bytes.
#line 1 "ENTRY_10d7c790"
NativeOpImpl_FUN_10d7c790::NativeOpImpl_FUN_10d7c790(void *param_2)
    : NativeOpImpl_FUN_10d7c790_vt(this), m14(param_2) {
}

// Reference entry 10d7c8f0; body size 278 bytes.
#line 1 "ENTRY_10d7c8f0"
NativeOpImpl_FUN_10d7c8f0::NativeOpImpl_FUN_10d7c8f0(void *param_2)
    : NativeOpImpl_FUN_10d7c8f0_vt(this), m14(param_2) {
}

// Reference entry 10d9ab50; body size 278 bytes.
#line 1 "ENTRY_10d9ab50"
NativeOpImpl_FUN_10d9ab50::NativeOpImpl_FUN_10d9ab50(void *param_2)
    : NativeOpImpl_FUN_10d9ab50_vt(this), m14(param_2) {
}

// Reference entry 10d9b0a0; body size 292 bytes.
#line 1 "ENTRY_10d9b0a0"
NativeOpImpl_FUN_10d9b0a0::NativeOpImpl_FUN_10d9b0a0(void *param_2)
    : NativeOpImpl_FUN_10d9b0a0_vt(this), m14(param_2) {
v0 = (void *)&DAT_11931a28; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11931a70;
}

// Reference entry 10de4720; body size 278 bytes.
#line 1 "ENTRY_10de4720"
NativeOpImpl_FUN_10de4720::NativeOpImpl_FUN_10de4720(void *param_2)
    : NativeOpImpl_FUN_10de4720_vt(this), m14(param_2) {
}

// Reference entry 10de4d40; body size 292 bytes.
#line 1 "ENTRY_10de4d40"
NativeOpImpl_FUN_10de4d40::NativeOpImpl_FUN_10de4d40(void *param_2)
    : NativeOpImpl_FUN_10de4d40_vt(this), m14(param_2) {
v0 = (void *)&DAT_11936024; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1193607c;
}

// Reference entry 10e8b520; body size 278 bytes.
#line 1 "ENTRY_10e8b520"
NativeOpImpl_FUN_10e8b520::NativeOpImpl_FUN_10e8b520(void *param_2)
    : NativeOpImpl_FUN_10e8b520_vt(this), m14(param_2) {
}

// Reference entry 10e8f200; body size 292 bytes.
#line 1 "ENTRY_10e8f200"
NativeOpImpl_FUN_10e8f200::NativeOpImpl_FUN_10e8f200(void *param_2)
    : NativeOpImpl_FUN_10e8f200_vt(this), m14(param_2) {
v0 = (void *)&DAT_11946908; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11946954;
}

// Reference entry 10ef1290; body size 278 bytes.
#line 1 "ENTRY_10ef1290"
NativeOpImpl_FUN_10ef1290::NativeOpImpl_FUN_10ef1290(void *param_2)
    : NativeOpImpl_FUN_10ef1290_vt(this), m14(param_2) {
}

// Reference entry 10f0d720; body size 278 bytes.
#line 1 "ENTRY_10f0d720"
NativeOpImpl_FUN_10f0d720::NativeOpImpl_FUN_10f0d720(void *param_2)
    : NativeOpImpl_FUN_10f0d720_vt(this), m14(param_2) {
}

// Reference entry 10f0d880; body size 278 bytes.
#line 1 "ENTRY_10f0d880"
NativeOpImpl_FUN_10f0d880::NativeOpImpl_FUN_10f0d880(void *param_2)
    : NativeOpImpl_FUN_10f0d880_vt(this), m14(param_2) {
}

// Reference entry 10f0d9e0; body size 278 bytes.
#line 1 "ENTRY_10f0d9e0"
NativeOpImpl_FUN_10f0d9e0::NativeOpImpl_FUN_10f0d9e0(void *param_2)
    : NativeOpImpl_FUN_10f0d9e0_vt(this), m14(param_2) {
}

// Reference entry 10f24730; body size 278 bytes.
#line 1 "ENTRY_10f24730"
NativeOpImpl_FUN_10f24730::NativeOpImpl_FUN_10f24730(void *param_2)
    : NativeOpImpl_FUN_10f24730_vt(this), m14(param_2) {
}

// Reference entry 10f2f9b0; body size 278 bytes.
#line 1 "ENTRY_10f2f9b0"
NativeOpImpl_FUN_10f2f9b0::NativeOpImpl_FUN_10f2f9b0(void *param_2)
    : NativeOpImpl_FUN_10f2f9b0_vt(this), m14(param_2) {
}

// Reference entry 10f2fb10; body size 278 bytes.
#line 1 "ENTRY_10f2fb10"
NativeOpImpl_FUN_10f2fb10::NativeOpImpl_FUN_10f2fb10(void *param_2)
    : NativeOpImpl_FUN_10f2fb10_vt(this), m14(param_2) {
}

// Reference entry 10f2fc70; body size 278 bytes.
#line 1 "ENTRY_10f2fc70"
NativeOpImpl_FUN_10f2fc70::NativeOpImpl_FUN_10f2fc70(void *param_2)
    : NativeOpImpl_FUN_10f2fc70_vt(this), m14(param_2) {
}

// Reference entry 10f2fdd0; body size 278 bytes.
#line 1 "ENTRY_10f2fdd0"
NativeOpImpl_FUN_10f2fdd0::NativeOpImpl_FUN_10f2fdd0(void *param_2)
    : NativeOpImpl_FUN_10f2fdd0_vt(this), m14(param_2) {
}

// Reference entry 10f55c60; body size 278 bytes.
#line 1 "ENTRY_10f55c60"
NativeOpImpl_FUN_10f55c60::NativeOpImpl_FUN_10f55c60(void *param_2)
    : NativeOpImpl_FUN_10f55c60_vt(this), m14(param_2) {
}

// Reference entry 10f55dc0; body size 278 bytes.
#line 1 "ENTRY_10f55dc0"
NativeOpImpl_FUN_10f55dc0::NativeOpImpl_FUN_10f55dc0(void *param_2)
    : NativeOpImpl_FUN_10f55dc0_vt(this), m14(param_2) {
}

// Reference entry 10f55f20; body size 278 bytes.
#line 1 "ENTRY_10f55f20"
NativeOpImpl_FUN_10f55f20::NativeOpImpl_FUN_10f55f20(void *param_2)
    : NativeOpImpl_FUN_10f55f20_vt(this), m14(param_2) {
}

// Reference entry 10f56080; body size 278 bytes.
#line 1 "ENTRY_10f56080"
NativeOpImpl_FUN_10f56080::NativeOpImpl_FUN_10f56080(void *param_2)
    : NativeOpImpl_FUN_10f56080_vt(this), m14(param_2) {
}

// Reference entry 10f56480; body size 292 bytes.
#line 1 "ENTRY_10f56480"
NativeOpImpl_FUN_10f56480::NativeOpImpl_FUN_10f56480(void *param_2)
    : NativeOpImpl_FUN_10f56480_vt(this), m14(param_2) {
v0 = (void *)&DAT_119520ec; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11952138;
}

// Reference entry 10f565f0; body size 292 bytes.
#line 1 "ENTRY_10f565f0"
NativeOpImpl_FUN_10f565f0::NativeOpImpl_FUN_10f565f0(void *param_2)
    : NativeOpImpl_FUN_10f565f0_vt(this), m14(param_2) {
v0 = (void *)&DAT_11951f7c; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11951fc4;
}

// Reference entry 10f56760; body size 292 bytes.
#line 1 "ENTRY_10f56760"
NativeOpImpl_FUN_10f56760::NativeOpImpl_FUN_10f56760(void *param_2)
    : NativeOpImpl_FUN_10f56760_vt(this), m14(param_2) {
v0 = (void *)&DAT_11952254; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_1195229c;
}

// Reference entry 10f568d0; body size 292 bytes.
#line 1 "ENTRY_10f568d0"
NativeOpImpl_FUN_10f568d0::NativeOpImpl_FUN_10f568d0(void *param_2)
    : NativeOpImpl_FUN_10f568d0_vt(this), m14(param_2) {
v0 = (void *)&DAT_119523e4; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11952438;
}

// Reference entry 10f64e00; body size 278 bytes.
#line 1 "ENTRY_10f64e00"
NativeOpImpl_FUN_10f64e00::NativeOpImpl_FUN_10f64e00(void *param_2)
    : NativeOpImpl_FUN_10f64e00_vt(this), m14(param_2) {
}

// Reference entry 10f65290; body size 292 bytes.
#line 1 "ENTRY_10f65290"
NativeOpImpl_FUN_10f65290::NativeOpImpl_FUN_10f65290(void *param_2)
    : NativeOpImpl_FUN_10f65290_vt(this), m14(param_2) {
v0 = (void *)&DAT_119527e8; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11952834;
}

// Reference entry 10f6fb30; body size 278 bytes.
#line 1 "ENTRY_10f6fb30"
NativeOpImpl_FUN_10f6fb30::NativeOpImpl_FUN_10f6fb30(void *param_2)
    : NativeOpImpl_FUN_10f6fb30_vt(this), m14(param_2) {
}

// Reference entry 10f77460; body size 278 bytes.
#line 1 "ENTRY_10f77460"
NativeOpImpl_FUN_10f77460::NativeOpImpl_FUN_10f77460(void *param_2)
    : NativeOpImpl_FUN_10f77460_vt(this), m14(param_2) {
}

// Reference entry 10f7c3e0; body size 278 bytes.
#line 1 "ENTRY_10f7c3e0"
NativeOpImpl_FUN_10f7c3e0::NativeOpImpl_FUN_10f7c3e0(void *param_2)
    : NativeOpImpl_FUN_10f7c3e0_vt(this), m14(param_2) {
}

// Reference entry 10f7c540; body size 278 bytes.
#line 1 "ENTRY_10f7c540"
NativeOpImpl_FUN_10f7c540::NativeOpImpl_FUN_10f7c540(void *param_2)
    : NativeOpImpl_FUN_10f7c540_vt(this), m14(param_2) {
}

// Reference entry 10f8a230; body size 278 bytes.
#line 1 "ENTRY_10f8a230"
NativeOpImpl_FUN_10f8a230::NativeOpImpl_FUN_10f8a230(void *param_2)
    : NativeOpImpl_FUN_10f8a230_vt(this), m14(param_2) {
}

// Reference entry 10f8a390; body size 278 bytes.
#line 1 "ENTRY_10f8a390"
NativeOpImpl_FUN_10f8a390::NativeOpImpl_FUN_10f8a390(void *param_2)
    : NativeOpImpl_FUN_10f8a390_vt(this), m14(param_2) {
}

// Reference entry 10f8a4f0; body size 278 bytes.
#line 1 "ENTRY_10f8a4f0"
NativeOpImpl_FUN_10f8a4f0::NativeOpImpl_FUN_10f8a4f0(void *param_2)
    : NativeOpImpl_FUN_10f8a4f0_vt(this), m14(param_2) {
}

// Reference entry 11017960; body size 278 bytes.
#line 1 "ENTRY_11017960"
NativeOpImpl_FUN_11017960::NativeOpImpl_FUN_11017960(void *param_2)
    : NativeOpImpl_FUN_11017960_vt(this), m14(param_2) {
}

// Reference entry 11025ee0; body size 278 bytes.
#line 1 "ENTRY_11025ee0"
NativeOpImpl_FUN_11025ee0::NativeOpImpl_FUN_11025ee0(void *param_2)
    : NativeOpImpl_FUN_11025ee0_vt(this), m14(param_2) {
}

// Reference entry 110267e0; body size 292 bytes.
#line 1 "ENTRY_110267e0"
NativeOpImpl_FUN_110267e0::NativeOpImpl_FUN_110267e0(void *param_2)
    : NativeOpImpl_FUN_110267e0_vt(this), m14(param_2) {
v0 = (void *)&DAT_11963d74; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11963dc8;
}

// Reference entry 1105f250; body size 278 bytes.
#line 1 "ENTRY_1105f250"
NativeOpImpl_FUN_1105f250::NativeOpImpl_FUN_1105f250(void *param_2)
    : NativeOpImpl_FUN_1105f250_vt(this), m14(param_2) {
}

// Reference entry 1105f460; body size 292 bytes.
#line 1 "ENTRY_1105f460"
NativeOpImpl_FUN_1105f460::NativeOpImpl_FUN_1105f460(void *param_2)
    : NativeOpImpl_FUN_1105f460_vt(this), m14(param_2) {
v0 = (void *)&DAT_11966170; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_119661c4;
}

// Reference entry 110615e0; body size 278 bytes.
#line 1 "ENTRY_110615e0"
NativeOpImpl_FUN_110615e0::NativeOpImpl_FUN_110615e0(void *param_2)
    : NativeOpImpl_FUN_110615e0_vt(this), m14(param_2) {
}

// Reference entry 11061790; body size 292 bytes.
#line 1 "ENTRY_11061790"
NativeOpImpl_FUN_11061790::NativeOpImpl_FUN_11061790(void *param_2)
    : NativeOpImpl_FUN_11061790_vt(this), m14(param_2) {
v0 = (void *)&DAT_1196631c; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11966374;
}

// Reference entry 110621c0; body size 278 bytes.
#line 1 "ENTRY_110621c0"
NativeOpImpl_FUN_110621c0::NativeOpImpl_FUN_110621c0(void *param_2)
    : NativeOpImpl_FUN_110621c0_vt(this), m14(param_2) {
}

// Reference entry 110646c0; body size 278 bytes.
#line 1 "ENTRY_110646c0"
NativeOpImpl_FUN_110646c0::NativeOpImpl_FUN_110646c0(void *param_2)
    : NativeOpImpl_FUN_110646c0_vt(this), m14(param_2) {
}

// Reference entry 11067520; body size 278 bytes.
#line 1 "ENTRY_11067520"
NativeOpImpl_FUN_11067520::NativeOpImpl_FUN_11067520(void *param_2)
    : NativeOpImpl_FUN_11067520_vt(this), m14(param_2) {
}

// Reference entry 110676d0; body size 292 bytes.
#line 1 "ENTRY_110676d0"
NativeOpImpl_FUN_110676d0::NativeOpImpl_FUN_110676d0(void *param_2)
    : NativeOpImpl_FUN_110676d0_vt(this), m14(param_2) {
v0 = (void *)&DAT_11966924; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_11966980;
}
