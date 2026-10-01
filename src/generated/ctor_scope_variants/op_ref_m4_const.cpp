inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
extern unsigned int DAT_1188207c;
extern unsigned int DAT_118c62f8;
void __cdecl thunk_FUN_1123fce0(void *);
struct NativeOpRefBase_FUN_10687d70 { void *vptr;
__forceinline NativeOpRefBase_FUN_10687d70() { vptr = (void *)&DAT_1188207c; } };
struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;
NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep = p; }
~NativeOpRefMember_thunk_FUN_101ba1b0(); };
struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {
const NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;
NativeOpRefCtor_FUN_10687d70(void *param_2); };

// Reference entry 10687d70; body size 114 bytes.
#line 1 "ENTRY_10687d70"
NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)
    : m4(param_2) {
if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);
f8 = 0;
vptr = (void *)&DAT_118c62f8;
}
