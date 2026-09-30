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
extern int FUN_111e93e0(...);
extern ulong strtoul(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111e93e0; body size 94 bytes.
namespace recovered_111e93e0 {
#line 1 "ENTRY_111e93e0"

void __fastcall FUN_111e93e0(uint *param_1)

{
  ulong uVar1;
  undefined4 local_10;
  undefined4 local_c;

  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_10;
  ((void)0);
  local_10 = *(undefined4 *)((int)param_1 + 9);
  local_c = *(undefined4 *)((int)param_1 + 0xd);
  uVar1 = strtoul((char *)&local_10,(char **)0x0,0x10);
  *param_1 = uVar1 & 0xffff;
  param_1[1] = uVar1 >> 0x10 & 0xff;
  *(byte *)(param_1 + 2) = (byte)(uVar1 >> 0x1c) & 1;
  thunk_FUN_1148ac28();
  return;
}


}
