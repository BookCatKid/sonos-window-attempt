void __cdecl thunk_FUN_1123fce0(void *);
struct NativeOpRepSub { void *p; ~NativeOpRepSub(); };
struct __declspec(dllexport) NativeOpSmart14_thunk_FUN_101ba1b0 { NativeOpRepSub rep; NativeOpSmart14_thunk_FUN_101ba1b0(void *value); ~NativeOpSmart14_thunk_FUN_101ba1b0(); };
NativeOpSmart14_thunk_FUN_101ba1b0::NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { rep.p = value; if (value != 0) thunk_FUN_1123fce0((char *)value + 4); }
NativeOpSmart14_thunk_FUN_101ba1b0::~NativeOpSmart14_thunk_FUN_101ba1b0() { if (rep.p != 0) thunk_FUN_1123fce0(rep.p); }
