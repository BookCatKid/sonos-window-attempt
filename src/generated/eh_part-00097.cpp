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
extern int FUN_111261b0(...);
extern int FUN_111266f0(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int thunk_FUN_11126050(...);
extern int thunk_FUN_11126490(...);
extern int thunk_FUN_111277e0(...);
extern int thunk_FUN_111278f0(...);
extern int thunk_FUN_11127a50(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1148a50e(...);
// Reference entry 111261b0; body size 367 bytes.
namespace recovered_111261b0 {
#line 1 "ENTRY_111261b0"

int * __thiscall FUN_111261b0(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar3 = *param_1;
  iVar4 = param_1[1] - iVar3 >> 2;
  if (iVar4 == 0x3fffffff) {

    thunk_FUN_111278f0();
  }
  uVar1 = iVar4 + 1;
  uVar6 = param_1[2] - iVar3 >> 2;
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
    uVar6 = 0x3fffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    if (uVar6 < uVar1) {
      uVar6 = uVar1;
    }
  }
  iVar4 = thunk_FUN_11127a50(uVar6);
  ((void)0);
  piVar2 = (int *)(iVar4 + (param_2 - iVar3 >> 2) * 4);
  *piVar2 = 0;
  if (piVar2 != param_3) {
    iVar3 = *param_3;
    *piVar2 = iVar3;
    if (iVar3 != 0) {
      thunk_FUN_1123fce0(iVar3 + 4);
    }
  }
  if (param_2 == param_1[1]) {
    thunk_FUN_11126490(*param_1,param_1[1],iVar4,param_1);
  }
  else {
    thunk_FUN_111277e0(*param_1,param_2,iVar4);
    thunk_FUN_111277e0(param_2,param_1[1],piVar2 + 1);
  }
  if (*param_1 != 0) {
    thunk_FUN_11126050(*param_1,param_1[1],param_1);
    iVar3 = *param_1;
    uVar7 = param_1[2] - iVar3 & 0xfffffffc;
    iVar5 = iVar3;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar7 = uVar7 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
  }
  *param_1 = iVar4;
  param_1[1] = iVar4 + uVar1 * 4;
  param_1[2] = iVar4 + uVar6 * 4;
  ((void)0);
  return piVar2;
}


}

// Reference entry 111266f0; body size 91 bytes.
namespace recovered_111266f0 {
#line 1 "ENTRY_111266f0"

void FUN_111266f0(undefined4 param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ((void)0);
  return;
}


}
