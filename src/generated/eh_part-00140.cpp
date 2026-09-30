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
extern int FUN_10070892(...);
extern int FUN_11158620(...);
extern int thunk_FUN_1113f0e0(...);
extern int thunk_FUN_111a36f0(...);
extern undefined1 thunk_FUN_111a5f10(...);
// Reference entry 11158620; body size 138 bytes.
namespace recovered_11158620 {
#line 1 "ENTRY_11158620"

undefined1 __thiscall FUN_11158620(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
    thunk_FUN_1113f0e0(param_1,0);
  }
  local_20[0] = 0;
  ((void)0);
  uVar1 = thunk_FUN_111a5f10("CachedState",local_20);
  FUN_10070892(param_2,uVar2);
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return uVar1;
}


}
