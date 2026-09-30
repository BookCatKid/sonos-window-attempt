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

extern undefined1 DAT_1186d2ee;
extern undefined4 DAT_12126b84;
extern int FUN_110dd2f0(...);
extern int FUN_110df0a0(...);
extern char thunk_FUN_110e0a50(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_11175b40(...);
extern int thunk_FUN_11175c30(...);
extern undefined4 thunk_FUN_11176d60(...);
// Reference entry 110dd2f0; body size 132 bytes.
namespace recovered_110dd2f0 {
#line 1 "ENTRY_110dd2f0"

undefined4 * FUN_110dd2f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;


  ((void)0);
  ((void)0);
  ((void)0);
  *param_1 = 0;
  ((void)0);
  if ((param_4 == '\0') || (cVar1 = thunk_FUN_110e0a50(param_2,param_3,param_1,1), cVar1 == '\0')) {
    thunk_FUN_110e0a50(param_2,param_3,param_1,0);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 110df0a0; body size 120 bytes.
namespace recovered_110df0a0 {
#line 1 "ENTRY_110df0a0"

undefined4 __fastcall FUN_110df0a0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = thunk_FUN_11128910(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x18);
  }
  thunk_FUN_11175b40(*(undefined4 *)(iVar1 + 0x14),puVar3,"search");
  ((void)0);
  uVar2 = thunk_FUN_11176d60(0);
  thunk_FUN_11175c30();
  ((void)0);
  return uVar2;
}


}
