void __cdecl thunk_FUN_1123fce0(void *);
struct __declspec(dllexport) NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep; NativeOpRefMember_thunk_FUN_101ba1b0(void *p); ~NativeOpRefMember_thunk_FUN_101ba1b0(); };
NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep = p; }
NativeOpRefMember_thunk_FUN_101ba1b0::~NativeOpRefMember_thunk_FUN_101ba1b0() { if (rep != 0) thunk_FUN_1123fce0(rep); }
