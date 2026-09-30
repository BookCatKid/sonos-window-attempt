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
extern int FUN_11123fb0(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int _time64(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_1111e210(...);
extern int thunk_FUN_1111f4b0(...);
extern uint thunk_FUN_111a1470(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1148a50e(...);
// Reference entry 11123fb0; body size 597 bytes.
namespace recovered_11123fb0 {
#line 1 "ENTRY_11123fb0"

void __thiscall FUN_11123fb0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 **ppuVar13;
  __time64_t _Var14;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (cVar7 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot),
     cVar7 == '\0')) {
    iVar8 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar8 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  if (param_2 == iVar8) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    local_18 = param_3;
    if ((short)param_3 == 0) {
      piVar10 = *(int **)(param_1 + 0x20);
      piVar11 = (int *)*piVar10;
      if ((int *)*piVar10 != piVar10) {
        do {
          piVar1 = (int *)*piVar11;
          if ((char)piVar11[9] != '\0') {
            uVar9 = thunk_FUN_111a1470();
            piVar10 = (int *)(*(int *)(param_1 + 0x28) +
                             (*(uint *)(param_1 + 0x34) & (uVar9 ^ piVar11[2])) * 8);
            if ((int *)piVar10[1] == piVar11) {
              if ((int *)*piVar10 == piVar11) {
                iVar8 = *(int *)(param_1 + 0x20);
                *piVar10 = iVar8;
                piVar10[1] = iVar8;
              }
              else {
                piVar10[1] = piVar11[1];
              }
            }
            else if ((int *)*piVar10 == piVar11) {
              *piVar10 = *piVar11;
            }
            iVar8 = *piVar11;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
            *(int *)piVar11[1] = iVar8;
            *(int *)(iVar8 + 4) = piVar11[1];
            thunk_FUN_1111f4b0();
            thunk_FUN_1148a50e(piVar11,0x28);
            piVar10 = *(int **)(param_1 + 0x20);
          }
          piVar11 = piVar1;
        } while (piVar1 != piVar10);
      }
      iVar8 = 0;
      if (*(char *)(*(int *)(param_1 + 8) + 0xc0c8) == '\0') {
        iVar8 = *(int *)(param_1 + 8) + 0xc09c;
      }
      if ((iVar8 != 0) && (piVar10 = (int *)**(int **)(iVar8 + 4), piVar10 != *(int **)(iVar8 + 4)))
      {
        do {
          *(undefined1 *)(piVar10 + 9) = 1;
          piVar11 = (int *)thunk_FUN_1111e210(local_20,piVar10 + 2);
          iVar2 = *piVar11;
          thunk_FUN_101ba530(piVar10 + 4);
          iVar3 = piVar10[6];
          *(int *)(iVar2 + 0x1c) = piVar10[7];
          *(int *)(iVar2 + 0x18) = iVar3;
          *(int *)(iVar2 + 0x20) = piVar10[8];
          *(char *)(iVar2 + 0x24) = (char)piVar10[9];
          piVar10 = (int *)*piVar10;
          param_1 = local_14;
        } while (piVar10 != (int *)*(int *)(iVar8 + 4));
      }
      _Var14 = _time64((__time64_t *)0x0);
      *(__time64_t *)(param_1 + 0x40) = _Var14;
    }
    piVar10 = *(int **)(param_1 + 8);
    if (piVar10 != (int *)0x0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        (**(code **)(*piVar10 + 0x10))();
        piVar10 = *(int **)(param_1 + 8);
      }
      if (((piVar10 != (int *)0x0) && (iVar8 = thunk_FUN_1123fcd0(piVar10 + 1), iVar8 == 0)) &&
         (piVar10 != (int *)0x0)) {
        (**(code **)*piVar10)(1);
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    uVar6 = local_18;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    ppuVar13 = (undefined4 **)(param_1 + 0x10);
    ((void)0);
    puVar12 = local_2c;
    puVar4 = local_28;
    if (&local_2c != ppuVar13) {
      local_2c = *ppuVar13;
      local_28 = *(undefined4 **)(param_1 + 0x14);
      *ppuVar13 = (undefined4 *)0x0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      local_24 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      puVar12 = local_2c;
      puVar4 = local_28;
    }
    for (; puVar5 = local_28, puVar12 != local_28; puVar12 = puVar12 + 1) {
      local_28 = puVar4;
      (**(code **)(*(int *)*puVar12 + 4))(0,uVar6);
      puVar4 = local_28;
      local_28 = puVar5;
    }
    if (local_2c != (undefined4 *)0x0) {
      uVar9 = local_24 - (int)local_2c & 0xfffffffc;
      puVar12 = local_2c;
      if (0xfff < uVar9) {
        puVar12 = (undefined4 *)local_2c[-1];
        uVar9 = uVar9 + 0x23;
        if (0x1f < (uint)((int)local_2c + (-4 - (int)puVar12))) {
          local_28 = puVar4;

          _invalid_parameter_noinfo_noreturn();
        }
      }
      local_28 = puVar4;
      thunk_FUN_1148a50e(puVar12,uVar9);
    }
  }
  ((void)0);
  return;
}


}
