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

extern undefined4 DAT_12126b84;
extern int* DAT_122f55e4;
extern int FUN_111e3060(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_11255f20(...);
extern char thunk_FUN_112578f0(...);
extern char thunk_FUN_112580d0(...);
extern int thunk_FUN_11258440(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111e3060; body size 192 bytes.
namespace recovered_111e3060 {
#line 1 "ENTRY_111e3060"

void FUN_111e3060(int param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  thunk_FUN_11255220(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  if (((param_1 == 0) || (cVar1 = thunk_FUN_112580d0(param_1), cVar1 == '\0')) ||
     (cVar1 = thunk_FUN_112578f0(), cVar1 == '\0')) {
    cVar1 = (**(code **)(*DAT_122f55e4 + 4))(param_2 << 8 | 7,0,0);
    if (cVar1 != '\0') {
      thunk_FUN_11258440();
    }
  }
  else {
    thunk_FUN_11255f20(param_1);
  }
  thunk_FUN_11255560();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
