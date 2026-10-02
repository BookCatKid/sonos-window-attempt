inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
unsigned int DAT_1188207c = 0;
unsigned int DAT_118c62f8 = 0;
void __cdecl thunk_FUN_1123fce0(void *);
int __cdecl thunk_FUN_1123fcd0(void *);
struct __declspec(dllexport) NativeOpRefBase_FUN_10687d70 { void *vptr;
__forceinline NativeOpRefBase_FUN_10687d70() { vptr = (void *)&DAT_1188207c; } };
struct __declspec(dllexport) NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;
NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep = p; }
~NativeOpRefMember_thunk_FUN_101ba1b0(); };
struct __declspec(dllexport) NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {
NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10687d70(void *param_2); };

// Reference entry 10687d70; body size 114 bytes.
#line 1 "ENTRY_10687d70"
NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)
    : m4(param_2) {
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118c62f8;
}

void (__cdecl * volatile ltcg_opaque)(void) = 0;
extern "C" {
int __cdecl __CxxFrameHandler3(void *, void *, void *, void *) { return 0; }
void __fastcall __security_check_cookie(unsigned int) { }
unsigned int __security_cookie = 0x12345678;
}
void __cdecl __std_terminate() { for (;;) { } }

// ltcg link stubs
void __cdecl thunk_FUN_1123fce0(void *) { ltcg_opaque(); return 0; }
int __cdecl thunk_FUN_1123fcd0(void *) { ltcg_opaque(); return 0; }
NativeOpRefMember_thunk_FUN_101ba1b0::~NativeOpRefMember_thunk_FUN_101ba1b0() { ltcg_opaque(); }
