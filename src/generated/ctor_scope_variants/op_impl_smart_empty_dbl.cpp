// Constructor-scope hypothesis variants for entry 10687e80.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
extern unsigned int DAT_1188206c;
extern unsigned int DAT_1188207c;
extern unsigned int DAT_118820e4;
extern unsigned int DAT_11882120;
extern unsigned int DAT_11882180;
extern unsigned int DAT_118c62f8;
extern unsigned int DAT_118c6304;
extern unsigned int DAT_118c634c;
#pragma warning(disable: 4355)
extern unsigned int g_lSCObjCount;
void __cdecl thunk_FUN_1123fce0(void *);
struct NativeOpMember8V_thunk_FUN_11240650 { void *vptr; NativeOpMember8V_thunk_FUN_11240650(); ~NativeOpMember8V_thunk_FUN_11240650(); };
struct NativeOpMember8_thunk_FUN_101ba0c0 : NativeOpMember8V_thunk_FUN_11240650 { ~NativeOpMember8_thunk_FUN_101ba0c0(); __forceinline NativeOpMember8_thunk_FUN_101ba0c0() { *(void *volatile *)&vptr = (void *)&DAT_1188206c; } };
struct NativeOpMemberC_thunk_FUN_101b9eb0 { void *rep; void *next; ~NativeOpMemberC_thunk_FUN_101b9eb0(); __forceinline NativeOpMemberC_thunk_FUN_101b9eb0() { rep = 0; next = 0; } };
struct NativeOpSmart14_thunk_FUN_101ba1b0 { void *p; ~NativeOpSmart14_thunk_FUN_101ba1b0();
    NativeOpSmart14_thunk_FUN_101ba1b0() {} };
struct NativeOpMember14V { void *vptr;
    __forceinline NativeOpMember14V() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpS30 { void *vptr; void *f4;
    __forceinline NativeOpS30() { vptr = (void *)&DAT_118820e4; f4 = 0; g_lSCObjCount++; } };
struct NativeOpM30 : NativeOpS30 {
    __forceinline NativeOpM30() { vptr = (void *)&DAT_11882120; } };
union NativeOpF38 { double d; struct { unsigned int lo; unsigned int hi; } w; };
struct NativeOpImplBase_thunk_FUN_101b9b80_10687e80 { void *v0; void *f4; ~NativeOpImplBase_thunk_FUN_101b9b80_10687e80();
__forceinline NativeOpImplBase_thunk_FUN_101b9b80_10687e80() { v0 = (void *)&DAT_11882180; f4 = 0; g_lSCObjCount++; } };

struct NativeOpMember14_10687e80 : NativeOpMember14V { NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;
    __forceinline NativeOpMember14_10687e80(void *param) { smart.p = param; if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0; vptr = (void *)&DAT_118c62f8; } };

struct NativeOpImpl_FUN_10687e80_vt {
__forceinline NativeOpImpl_FUN_10687e80_vt(void *self) { *(void **)self = (void *)&DAT_118c6304; *(void **)((char *)self + 8) = (void *)&DAT_118c634c; } };

struct NativeOpImpl_FUN_10687e80 : NativeOpImplBase_thunk_FUN_101b9b80_10687e80, NativeOpMember8_thunk_FUN_101ba0c0, NativeOpImpl_FUN_10687e80_vt {
NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_10687e80 m14;
void *f20; unsigned short f24; void *f28; void *f2c;
NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;
NativeOpImpl_FUN_10687e80(void *param_2);
};

// Reference entry 10687e80; body size 278 bytes.
#line 1 "ENTRY_10687e80"
NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)
    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) {
f24 = 1000;
f20 = 0; f28 = 0; f2c = 0;
f38.d = 0.0; f38.w.hi = 0;
f40 = 0; f44 = 0;
}
