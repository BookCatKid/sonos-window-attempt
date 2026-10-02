// Constructor-scope hypothesis variants for entry 10687e80.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
extern unsigned int DAT_1186d2f4;
extern unsigned int DAT_1188206c;
extern unsigned int DAT_1188207c;
extern unsigned int DAT_118820e4;
extern unsigned int DAT_11882120;
extern unsigned int DAT_11882180;
extern unsigned int DAT_1188eb3c;
extern unsigned int DAT_118c62f8;
extern unsigned int DAT_118c6304;
extern unsigned int DAT_118c634c;
#pragma warning(disable: 4355)
extern unsigned int g_lSCObjCount;
void __cdecl thunk_FUN_1123fce0(void *);
int __cdecl thunk_FUN_1123fcd0(void *);
struct NativeOpMember8V_thunk_FUN_11240650 { void *vptr; NativeOpMember8V_thunk_FUN_11240650(); ~NativeOpMember8V_thunk_FUN_11240650() {} };
extern unsigned int DAT_1188eb3c;
struct NativeOpMember8VD_thunk_FUN_11240850 : NativeOpMember8V_thunk_FUN_11240650 { ~NativeOpMember8VD_thunk_FUN_11240850(); };
struct NativeOpMember8_thunk_FUN_101ba0c0 : NativeOpMember8VD_thunk_FUN_11240850 { ~NativeOpMember8_thunk_FUN_101ba0c0() { *(void *volatile *)&vptr = (void *)&DAT_1188206c; } __forceinline NativeOpMember8_thunk_FUN_101ba0c0() { *(void *volatile *)&vptr = (void *)&DAT_1188206c; } };
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

// Reference entry 10687e80; body size 278 bytes.
#line 1 "ENTRY_10687e80"
NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)
    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) {
}
