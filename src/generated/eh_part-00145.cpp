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
extern undefined4 DAT_118a1c40;
extern undefined4 DAT_11921034;
extern undefined4 DAT_119e1f4c;
extern undefined4 DAT_119e1f50;
extern undefined4 DAT_119e1f52;
extern undefined4 DAT_119e1f53;
extern undefined4 DAT_119e1f54;
extern undefined4 DAT_119e1f55;
extern undefined4 DAT_119e1f56;
extern undefined4 DAT_119e1f58;
extern undefined4 DAT_119e1f59;
extern undefined4 DAT_119e1f5a;
extern undefined4 DAT_119e1f5b;
extern undefined4 DAT_12126b84;
extern int FUN_10065348(...);
extern int FUN_1115d160(...);
extern int FUN_1115d440(...);
extern int FUN_1115d8b0(...);
extern int FUN_1115e040(...);
extern int FUN_1115e430(...);
extern int FUN_1115f5d0(...);
extern int FUN_1115f7c0(...);
extern int FUN_1115fa40(...);
extern int FUN_11161230(...);
extern int FUN_11162350(...);
extern int FUN_11162620(...);
extern int FUN_11163ed0(...);
extern int FUN_111650c0(...);
extern int FUN_11165220(...);
extern int FUN_11165420(...);
extern int FUN_11165a50(...);
extern int FUN_11165d70(...);
extern int FUN_11167430(...);
extern int FUN_11167ae0(...);
extern int FUN_11167dc0(...);
extern int FUN_11169d70(...);
extern int FUN_11169e70(...);
extern int FUN_1116a270(...);
extern int FUN_1116a310(...);
extern int FUN_1116afa0(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern double floor(...);
extern int free(...);
extern int memcpy(...);
extern int memset(...);
extern int* operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba300(...);
extern uint thunk_FUN_101c82e0(...);
extern int thunk_FUN_1107e1f0(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110cdcd0(...);
extern undefined4 thunk_FUN_110da9a0(...);
extern undefined4 thunk_FUN_110dc330(...);
extern undefined4 thunk_FUN_110e8f20(...);
extern int thunk_FUN_11127900(...);
extern int thunk_FUN_11127c40(...);
extern int thunk_FUN_11127d60(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a590(...);
extern uint thunk_FUN_111382a0(...);
extern int thunk_FUN_11138590(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_1113f0e0(...);
extern char thunk_FUN_1113f860(...);
extern int thunk_FUN_11140c20(...);
extern int thunk_FUN_1114d8c0(...);
extern int thunk_FUN_1115cfe0(...);
extern int thunk_FUN_1115d160(...);
extern int thunk_FUN_1115d440(...);
extern int thunk_FUN_1115dd80(...);
extern int thunk_FUN_1115e6e0(...);
extern int thunk_FUN_1115e8e0(...);
extern int thunk_FUN_1115ea80(...);
extern int thunk_FUN_1115eb60(...);
extern int thunk_FUN_1115eb70(...);
extern int thunk_FUN_1115ed60(...);
extern int thunk_FUN_1115f5d0(...);
extern int thunk_FUN_11160050(...);
extern int thunk_FUN_11160980(...);
extern char thunk_FUN_111611f0(...);
extern int thunk_FUN_11161e50(...);
extern int thunk_FUN_11161ed0(...);
extern int thunk_FUN_111680e0(...);
extern char thunk_FUN_111a06b0(...);
extern undefined4 thunk_FUN_111a2bd0(...);
extern undefined4 thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4540(...);
extern char thunk_FUN_111a5f10(...);
extern undefined4 thunk_FUN_111a7100(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11254d80(...);
extern int thunk_FUN_11255550(...);
extern int thunk_FUN_11262ca0(...);
extern int thunk_FUN_112630e0(...);
extern char thunk_FUN_11263580(...);
extern undefined4 thunk_FUN_11281350(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 1115d160; body size 296 bytes.
namespace recovered_1115d160 {
#line 1 "ENTRY_1115d160"

int * __thiscall FUN_1115d160(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar3 = *param_1;
  iVar4 = param_1[1] - iVar3 >> 2;
  if (iVar4 != 0x3fffffff) {
    uVar1 = iVar4 + 1;
    uVar5 = param_1[2] - iVar3 >> 2;
    if (0x3fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = 0x3fffffff;
    }
    else {
      uVar5 = (uVar5 >> 1) + uVar5;
      if (uVar5 < uVar1) {
        uVar5 = uVar1;
      }
    }
    iVar4 = thunk_FUN_1115eb70(uVar5);
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
      thunk_FUN_1115ea80(*param_1,param_1[1],iVar4);
    }
    else {
      thunk_FUN_1115e8e0(*param_1,param_2,iVar4);
      thunk_FUN_1115e8e0(param_2,param_1[1],piVar2 + 1);
    }
    thunk_FUN_1115e6e0(iVar4,uVar1,uVar5);
    ((void)0);
    return piVar2;
  }

  thunk_FUN_1115eb60();
}


}

// Reference entry 1115d440; body size 237 bytes.
namespace recovered_1115d440 {
#line 1 "ENTRY_1115d440"

void __thiscall FUN_1115d440(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (0x3fffffff < param_2) {

    thunk_FUN_1115eb60();
  }
  iVar2 = param_1[1] - *param_1 >> 2;
  uVar3 = param_1[2] - *param_1 >> 2;
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x3fffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_2) {
      uVar3 = param_2;
    }
  }
  iVar1 = thunk_FUN_1115eb70(uVar3);
  ((void)0);
  puVar5 = (undefined4 *)(iVar1 + iVar2 * 4);
  iVar2 = param_2 - iVar2;
  iVar4 = iVar2;
  puVar6 = puVar5;
  if (iVar2 != 0) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar5 + iVar2;
  }
  thunk_FUN_1115cfe0(puVar5,puVar5,param_1);
  thunk_FUN_1115ea80(*param_1,param_1[1],iVar1);
  thunk_FUN_1115e6e0(iVar1,param_2,uVar3);
  ((void)0);
  return;
}


}

// Reference entry 1115d8b0; body size 91 bytes.
namespace recovered_1115d8b0 {
#line 1 "ENTRY_1115d8b0"

void FUN_1115d8b0(undefined4 param_1,int *param_2)

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

// Reference entry 1115e040; body size 88 bytes.
namespace recovered_1115e040 {
#line 1 "ENTRY_1115e040"

void __fastcall FUN_1115e040(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_1;
  ((void)0);
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

// Reference entry 1115e430; body size 113 bytes.
namespace recovered_1115e430 {
#line 1 "ENTRY_1115e430"

int * __thiscall FUN_1115e430(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_1;
  ((void)0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 1115f5d0; body size 389 bytes.
namespace recovered_1115f5d0 {
#line 1 "ENTRY_1115f5d0"

void __thiscall FUN_1115f5d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  thunk_FUN_1145c250(param_1 + 0x1c,param_2,0x19,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  *(int *)(param_1 + 0x18) = param_3;
  iVar2 = (**(code **)(*(int *)(*(int *)(param_3 + 0x3c) + 0x1c) + 4))(param_1 + 0x1c,1);
  if (iVar2 != 0) {
    iVar2 = thunk_FUN_110cdcd0();
    if (iVar2 != 0) {
      thunk_FUN_110cdcd0();
      thunk_FUN_1113f0e0(param_1,0);
      local_50[0] = 0;
      ((void)0);
      cVar1 = thunk_FUN_1113f860(0,"Volume/Master",0,local_50);
      if (cVar1 != '\0') {
        uVar3 = thunk_FUN_111a2df0();
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x4c) = uVar3;
        *(undefined4 *)(param_1 + 0x50) = uVar3;
      }
      local_40[0] = 0;
      ((void)0);
      cVar1 = thunk_FUN_1113f860(0,"Mute/Master",0,local_40);
      if (cVar1 != '\0') {
        uVar3 = thunk_FUN_111a2bd0();
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
        *(undefined4 *)(param_1 + 0x70) = uVar3;
      }
      local_30[0] = 0;
      ((void)0);
      cVar1 = thunk_FUN_1113f860(0,"OutputFixed",0,local_30);
      if (cVar1 != '\0') {
        uVar3 = thunk_FUN_111a2bd0();
        *(undefined4 *)(param_1 + 0x40) = uVar3;
      }
      local_20[0] = 0;
      ((void)0);
      cVar1 = thunk_FUN_1113f860(0,"HeadphoneConnected",0,local_20);
      if (cVar1 != '\0') {
        uVar3 = thunk_FUN_111a2bd0();
        *(undefined4 *)(param_1 + 0x44) = uVar3;
      }
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
      thunk_FUN_111a36f0();
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1115f7c0; body size 507 bytes.
namespace recovered_1115f7c0 {
#line 1 "ENTRY_1115f7c0"

void __fastcall FUN_1115f7c0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint local_1c;
  int local_18;
  undefined1 local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1c) + 0xc))
                    (param_1 + 0x17,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (iVar4 != 0) {
    thunk_FUN_1115ed60();
    uVar5 = thunk_FUN_111382a0(0);
    if (uVar5 < 2) {
      iVar4 = thunk_FUN_11138590(0,0);
      if ((*(int *)(iVar4 + 0x1c) != 0) &&
         (cVar3 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x1c) + 0x378) + 4))(), cVar3 == '\0')) {
        ((void)0);
        return;
      }
    }
    puVar11 = *(undefined4 **)(param_1 + 0x4c);
    piVar1 = (int *)(param_1 + 0x48);
    uVar8 = (int)puVar11 - *piVar1 >> 2;
    if (uVar5 < uVar8) {
      iVar4 = *piVar1 + uVar5 * 4;
      thunk_FUN_1115cfe0(iVar4,puVar11,piVar1);
      *(int *)(param_1 + 0x4c) = iVar4;
    }
    else if (uVar8 < uVar5) {
      if ((uint)(*(int *)(param_1 + 0x50) - *piVar1 >> 2) < uVar5) {
        thunk_FUN_1115d440(uVar5,&local_11);
      }
      else {
        iVar4 = uVar5 - uVar8;
        puVar10 = puVar11;
        if (iVar4 != 0) {
          puVar10 = puVar11 + iVar4;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
        }
        thunk_FUN_1115cfe0(puVar10,puVar10,piVar1);
        *(undefined4 **)(param_1 + 0x4c) = puVar10;
      }
    }
    local_1c = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = thunk_FUN_11138590(local_1c,0);
        pvVar6 = operator_new(0x80);
        ((void)0);
        if (pvVar6 == (void *)0x0) {
          local_18 = 0;
        }
        else {
          local_18 = thunk_FUN_1115dd80();
        }
        ((void)0);
        piVar2 = (int *)(*piVar1 + local_1c * 4);
        puVar11 = (undefined4 *)*piVar2;
        if ((puVar11 != (undefined4 *)0x0) && (iVar7 = thunk_FUN_1123fcd0(puVar11 + 1), iVar7 == 0))
        {
          (**(code **)*puVar11)(1);
        }
        *piVar2 = local_18;
        puVar9 = &DAT_1186d2ee;
        if (*(undefined1 **)(iVar4 + 0x5c) != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)(iVar4 + 0x5c);
        }
        thunk_FUN_1115f5d0(puVar9,param_1);
        local_1c = local_1c + 1;
      } while (local_1c < uVar5);
    }
    thunk_FUN_11161ed0();
    thunk_FUN_11161e50();
    uVar5 = 0;
    uVar8 = *(int *)(param_1 + 0x4c) - *piVar1 >> 2;
    if (uVar8 != 0) {
      do {
        iVar4 = *(int *)(*piVar1 + uVar5 * 4);
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
      } while (uVar5 < uVar8);
    }
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined1 *)(param_1 + 0x14) = 0;
    thunk_FUN_1107e1f0(param_1);
  }
  ((void)0);
  return;
}


}

// Reference entry 1115fa40; body size 880 bytes.
namespace recovered_1115fa40 {
#line 1 "ENTRY_1115fa40"

undefined4 __fastcall FUN_1115fa40(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int *piVar2;
  undefined4 **ppuVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_11 = '\0';
  local_18 = param_1;
  local_20 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1c) + 0xc))
                       (param_1 + 0x17,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (local_20 == 0) {
    thunk_FUN_1115ed60();
  }
  else {
    piVar1 = (int *)(param_1 + 0x48);
    iVar5 = *(int *)(param_1 + 0x4c) - *piVar1 >> 2;
    iVar7 = param_1;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      iVar6 = thunk_FUN_11138b60(*(int *)(*piVar1 + iVar5 * 4) + 0x1c);
      if ((iVar6 == 0) || (iVar7 = local_18, *(char *)(iVar6 + 0x51e) != '\0')) {
        iVar7 = *(int *)(*piVar1 + iVar5 * 4);
        if ((*(char *)(iVar7 + 0x1c) != '\0') &&
           ((iVar6 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 0x18) + 0x3c) + 0x1c) + 4))
                               (iVar7 + 0x1c,1), iVar6 != 0 &&
            (iVar6 = thunk_FUN_110cdcd0(), iVar6 != 0)))) {
          uVar15 = 1;
          thunk_FUN_110cdcd0(iVar7,1);
          thunk_FUN_11140c20(iVar7,uVar15);
        }
        piVar13 = (int *)(*piVar1 + iVar5 * 4);
        piVar10 = *(int **)(local_18 + 0x4c);
        piVar14 = piVar13 + 1;
        local_1c = piVar10;
        if (piVar14 != piVar10) {
          do {
            if (piVar13 != piVar14) {
              puVar9 = (undefined4 *)*piVar13;
              if ((puVar9 != (undefined4 *)0x0) &&
                 (iVar7 = thunk_FUN_1123fcd0(puVar9 + 1), piVar10 = local_1c, iVar7 == 0)) {
                (**(code **)*puVar9)(1);
                piVar10 = local_1c;
              }
              iVar7 = *piVar14;
              *piVar13 = iVar7;
              if (iVar7 != 0) {
                thunk_FUN_1123fce0(iVar7 + 4);
                piVar10 = local_1c;
              }
            }
            piVar2 = piVar14 + 1;
            piVar13 = piVar14;
            piVar14 = piVar2;
          } while (piVar2 != piVar10);
          piVar10 = *(int **)(local_18 + 0x4c);
        }
        puVar9 = (undefined4 *)piVar10[-1];
        ((void)0);
        if ((puVar9 != (undefined4 *)0x0) && (iVar7 = thunk_FUN_1123fcd0(puVar9 + 1), iVar7 == 0)) {
          (**(code **)*puVar9)(1);
        }
        ((void)0);
        local_11 = '\x01';
        *(int *)(local_18 + 0x4c) = *(int *)(local_18 + 0x4c) + -4;
        iVar7 = local_18;
      }
    }
    uVar8 = thunk_FUN_111382a0(0);
    if (uVar8 != 0) {
      iVar5 = thunk_FUN_11138590(0,0);
      if (((*(int *)(iVar5 + 0x1c) == 0) ||
          (cVar4 = (**(code **)(*(int *)(*(int *)(iVar5 + 0x1c) + 0x378) + 4))(), cVar4 != '\0')) &&
         (uVar12 = 0, uVar8 != 0)) {
        do {
          iVar5 = thunk_FUN_11138590(uVar12,0);
          puVar11 = &DAT_1186d2ee;
          if (*(undefined1 **)(iVar5 + 0x5c) != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)(iVar5 + 0x5c);
          }
          iVar6 = thunk_FUN_11160050(puVar11);
          if (((iVar6 == 0) && (*(char *)(iVar5 + 0x51e) == '\0')) &&
             (iVar6 = thunk_FUN_110cdcd0(), iVar6 != 0)) {
            local_24 = (undefined4 *)0x0;
            ((void)0);
            local_1c = operator_new(0x80);
            ((void)0);
            if (local_1c == (int *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar9 = (undefined4 *)thunk_FUN_1115dd80();
            }
            ((void)0);
            puVar11 = &DAT_1186d2ee;
            if (*(undefined1 **)(iVar5 + 0x5c) != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)(iVar5 + 0x5c);
            }
            local_24 = puVar9;
            thunk_FUN_1115f5d0(puVar11,local_18);
            ppuVar3 = *(undefined4 ***)(param_1 + 0x4c);
            if (ppuVar3 == *(undefined4 ***)(param_1 + 0x50)) {
              thunk_FUN_1115d160(ppuVar3,&local_24);
            }
            else {
              *ppuVar3 = (undefined4 *)0x0;
              if ((ppuVar3 != &local_24) && (*ppuVar3 = puVar9, puVar9 != (undefined4 *)0x0)) {
                thunk_FUN_1123fce0(puVar9 + 1);
              }
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 4;
            }
            local_11 = '\x01';
            ((void)0);
            if ((puVar9 != (undefined4 *)0x0) &&
               (iVar5 = thunk_FUN_1123fcd0(puVar9 + 1), iVar5 == 0)) {
              (**(code **)*puVar9)(1);
            }
            ((void)0);
            iVar7 = local_18;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar8);
      }
    }
    if (local_11 != '\0') {
      thunk_FUN_11161ed0();
      thunk_FUN_11161e50();
      uVar8 = 0;
      uVar12 = *(int *)(iVar7 + 0x4c) - *(int *)(local_18 + 0x48) >> 2;
      if (uVar12 != 0) {
        do {
          iVar5 = *(int *)(*(int *)(local_18 + 0x48) + uVar8 * 4);
          uVar8 = uVar8 + 1;
          *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar5 + 0x38);
        } while (uVar8 < uVar12);
      }
      *(undefined4 *)(local_18 + 0x9c) = *(undefined4 *)(local_18 + 0x8c);
      uVar15 = thunk_FUN_111a7100("onZoneGroupChanged",0,0);
      ((void)0);
      return uVar15;
    }
  }
  ((void)0);
  return 0;
}


}

// Reference entry 11161230; body size 939 bytes.
namespace recovered_11161230 {
#line 1 "ENTRY_11161230"

char __thiscall FUN_11161230(int param_1,char *param_2,uint param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  void *_Dst;
  double dVar11;
  void *local_38;
  int local_24;
  int local_18;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  piVar8 = *(int **)(param_1 + 0x48);
  uVar9 = *(int *)(param_1 + 0x4c) - (int)piVar8 >> 2;
  local_11 = '\0';
  if (uVar9 == 1) {
    iVar2 = *piVar8;
    if (((iVar2 == 0) || (*(int *)(iVar2 + 0x18) == 0)) || (param_3 == *(int *)(iVar2 + 0x38))) {
      return '\0';
    }
    ((void)0);
    if (*(int *)(iVar2 + 0x50) == *(int *)(iVar2 + 0x38)) {
      thunk_FUN_11160980();
    }
    *(uint *)(iVar2 + 0x38) = param_3;
    local_11 = '\x01';
  }
  else {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      uVar6 = 0;
      ((void)0);
      if (uVar9 != 0) {
LAB_111612d7:
        iVar2 = *piVar8;
        if ((((*(int *)(iVar2 + 0x38) == -1) || (0 < *(int *)(iVar2 + 0x40))) ||
            (0 < *(int *)(iVar2 + 0x44))) || (*(uint *)(iVar2 + 0x48) < 0x65)) goto LAB_111612f1;
        thunk_FUN_112af4e0("groupvol",2,"volume snapshot out-of-date",
                           DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
        uVar6 = 0;
        uVar10 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2;
        if (uVar10 != 0) {
          do {
            iVar2 = *(int *)(*(int *)(param_1 + 0x48) + uVar6 * 4);
            uVar6 = uVar6 + 1;
            *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x38);
          } while (uVar6 < uVar10);
        }
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x8c);
      }
LAB_1116133d:
      iVar2 = *(int *)(param_1 + 0x9c);
      iVar4 = 0;
      if (*(int *)(param_1 + 0x8c) != -1) {
        iVar4 = *(int *)(param_1 + 0x8c);
      }
      if (iVar4 < (int)param_3) {
        bVar1 = (int)param_3 < iVar2;
      }
      else {
        bVar1 = iVar2 < (int)param_3;
      }
      _Dst = (void *)0x0;
      local_18 = 0;
      local_38 = (void *)0x0;
      if (uVar9 != 0) {
        if (0x3fffffff < uVar9) {

          thunk_FUN_101a9bd0();
        }
        uVar6 = uVar9 * 4;
        if (uVar6 < 0x1000) {
          if (uVar6 == 0) {
            _Dst = (void *)0x0;
          }
          else {
            _Dst = operator_new(uVar6);
          }
        }
        else {
          if (uVar6 + 0x23 <= uVar6) {

            thunk_FUN_1012a2a0();
          }
          pvVar3 = operator_new(uVar6 + 0x23);
          if (pvVar3 == (void *)0x0) goto LAB_1116159d;
          _Dst = (void *)((int)pvVar3 + 0x23U & 0xffffffe0);
          *(void **)((int)_Dst - 4) = pvVar3;
        }
        local_38 = (void *)(uVar9 * 4 + (int)_Dst);
        memset(_Dst,0,uVar9 * 4);
      }
      ((void)0);
      uVar6 = 0;
      local_24 = 0;
      iVar7 = 0;
      if (uVar9 != 0) {
        do {
          iVar7 = *(int *)(*(int *)(param_1 + 0x48) + uVar6 * 4);
          if (((*(int *)(iVar7 + 0x38) != -1) && (*(int *)(iVar7 + 0x40) < 1)) &&
             (*(int *)(iVar7 + 0x44) < 1)) {
            iVar5 = *(int *)(iVar7 + 0x48);
            local_24 = local_24 + 1;
            piVar8 = (int *)((int)_Dst + uVar6 * 4);
            if (bVar1) {
              iVar7 = *(int *)(iVar7 + 0x38) - iVar5;
            }
            else {
              iVar7 = 100 - iVar5;
              if ((int)param_3 <= iVar4) {
                iVar7 = iVar5;
              }
            }
            *piVar8 = iVar7;
            local_18 = local_18 + *piVar8;
          }
          uVar6 = uVar6 + 1;
          iVar7 = local_24;
        } while (uVar6 < uVar9);
      }
      if (param_3 == 0) {
        iVar4 = -local_18;
      }
      else {
        iVar4 = local_18;
        if (param_3 != 100) {
          iVar4 = (param_3 - iVar2) * iVar7;
        }
      }
      *(undefined1 *)(param_1 + 0x14) = 1;
      param_3 = 0;
      if (uVar9 != 0) {
        do {
          iVar2 = *(int *)(*(int *)(param_1 + 0x48) + param_3 * 4);
          if (((*(int *)(iVar2 + 0x38) != -1) && (*(int *)(iVar2 + 0x40) < 1)) &&
             (*(int *)(iVar2 + 0x44) < 1)) {
            if (local_18 == 0) {
              dVar11 = 0.0;
            }
            else {
              dVar11 = (double)*(int *)((int)_Dst + param_3 * 4) / (double)local_18;
            }
            dVar11 = floor((double)iVar4 * dVar11 + DAT_118a1c40);
            iVar5 = (int)dVar11 + *(int *)(iVar2 + 0x48);
            iVar7 = 0;
            if (-1 < iVar5) {
              iVar7 = iVar5;
            }
            if (100 < iVar7) {
              iVar7 = 100;
            }
            if ((*(int *)(iVar2 + 0x18) != 0) && (iVar7 != *(int *)(iVar2 + 0x38))) {
              if (*(int *)(iVar2 + 0x50) == *(int *)(iVar2 + 0x38)) {
                thunk_FUN_11160980();
              }
              *(int *)(iVar2 + 0x38) = iVar7;
              local_11 = '\x01';
            }
          }
          param_3 = param_3 + 1;
        } while (param_3 < uVar9);
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      if (_Dst != (void *)0x0) {
        uVar9 = (int)local_38 - (int)_Dst & 0xfffffffc;
        pvVar3 = _Dst;
        if (0xfff < uVar9) {
          pvVar3 = *(void **)((int)_Dst + -4);
          uVar9 = uVar9 + 0x23;
          if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar3))) {
LAB_1116159d:

            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pvVar3,uVar9);
      }
    }
    else {
      ((void)0);
      iVar2 = thunk_FUN_11160050();
      if (iVar2 == 0) {
        ((void)0);
        return '\0';
      }
      local_11 = thunk_FUN_111611f0();
    }
    if (local_11 == '\0') {
      ((void)0);
      return '\0';
    }
  }
  thunk_FUN_11161ed0();
  ((void)0);
  return local_11;
LAB_111612f1:
  uVar6 = uVar6 + 1;
  piVar8 = piVar8 + 1;
  if (uVar9 <= uVar6) goto LAB_1116133d;
  goto LAB_111612d7;
}


}

// Reference entry 11162350; body size 566 bytes.
namespace recovered_11162350 {
#line 1 "ENTRY_11162350"

undefined4 __fastcall FUN_11162350(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 **ppuVar1;
  char cVar2;
  int iVar3;
  char *_Src;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  size_t _Size;
  undefined4 *puVar7;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  int local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = param_1;
  iVar3 = thunk_FUN_111a2ec0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (iVar3 != 0) {
    local_28[0] = 0;
    ((void)0);
    cVar2 = thunk_FUN_111a5f10("VoiceUpdateID",local_28);
    if ((cVar2 != '\0') && (iVar3 = thunk_FUN_111a3630(), iVar3 == 2)) {
      _Src = (char *)thunk_FUN_111a32a0();
      if ((_Src == (char *)0x0) || (*_Src == '\0')) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar6 = _Src;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        _Size = (int)pcVar6 - (int)(_Src + 1);
        puVar4 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
        puVar7 = puVar4 + 4;
        *puVar4 = 1;
        puVar4[3] = _Size;
        puVar4[2] = 0;
        puVar4[1] = 0;
        memcpy(puVar7,_Src,_Size);
        *(undefined1 *)((int)puVar7 + _Size) = 0;
        param_1 = local_18;
        local_14 = puVar7;
      }
      ppuVar1 = (undefined4 **)(param_1 + 0x38);
      ((void)0);
      if ((*(int *)(param_1 + 0x38) != 0) &&
         (piVar5 = (int *)(*(int *)(param_1 + 0x38) + -0x10), *piVar5 < 0xffff)) {
        thunk_FUN_1123fce0(piVar5);
      }
      ((void)0);
      cVar2 = thunk_FUN_111a06b0(&local_14);
      if (cVar2 == '\0') {
        if (&local_14 != ppuVar1) {
          puVar7 = *ppuVar1;
          if (((puVar7 != (undefined4 *)0x0) && ((int)puVar7[-4] < 0xffff)) &&
             (iVar3 = thunk_FUN_1123fcd0(puVar7 + -4), iVar3 == 0)) {
            puVar7[-2] = 0;
            puVar7[-3] = 0;
            thunk_FUN_113cfb70(puVar7,puVar7[-1]);
            free(puVar7 + -4);
          }
          *ppuVar1 = local_14;
          if ((local_14 != (undefined4 *)0x0) && ((int)local_14[-4] < 0xffff)) {
            thunk_FUN_1123fce0(local_14 + -4);
          }
        }
        local_38[0] = 0;
        ((void)0);
        cVar2 = thunk_FUN_111a5f10(&DAT_11921034,local_38);
        if (cVar2 == '\0') {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = local_38;
        }
        thunk_FUN_111a7100("OnVoiceUpdate",cVar2 != '\0',puVar7);
        ((void)0);
        thunk_FUN_111a36f0();
      }
      thunk_FUN_101ba300();
      puVar7 = local_14;
      ((void)0);
      if (((local_14 != (undefined4 *)0x0) && (puVar4 = local_14 + -4, (int)local_14[-4] < 0xffff))
         && (iVar3 = thunk_FUN_1123fcd0(puVar4), iVar3 == 0)) {
        puVar7[-2] = 0;
        puVar7[-3] = 0;
        thunk_FUN_113cfb70(puVar7,puVar7[-1]);
        free(puVar4);
      }
    }
    ((void)0);
    thunk_FUN_111a36f0();
  }
  ((void)0);
  return 0;
}


}

// Reference entry 11162620; body size 141 bytes.
namespace recovered_11162620 {
#line 1 "ENTRY_11162620"

void __thiscall FUN_11162620(undefined4 *param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  FUN_10065348(param_2,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (param_1[0xc] == 0) {
    ((void)0);
    thunk_FUN_1123fce0(param_1 + 1);
    ((void)0);
    thunk_FUN_11140c20(param_1,1);
    ((void)0);
    iVar1 = thunk_FUN_1123fcd0(param_1 + 1);
    if (iVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 11163ed0; body size 239 bytes.
namespace recovered_11163ed0 {
#line 1 "ENTRY_11163ed0"

undefined4 __thiscall
FUN_11163ed0(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 ghidra_cookie_frame_slot;
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar2 = thunk_FUN_1109f7f0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  *param_2 = 0;
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0xc34c) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0xc34c);
  }
  thunk_FUN_1145c250(param_3,puVar3,0x19);
  thunk_FUN_1109f100(param_4,0x21);
  pcVar1 = *(char **)(iVar2 + 0xfc);
  if (pcVar1 == (char *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pcVar1;
    if (*(int *)(pcVar1 + -0x10) < 0xffff) {
      thunk_FUN_1123fce0(pcVar1 + -0x10);
    }
  }
  ((void)0);
  if (((pcVar1 != (char *)0x0) && (*(int *)(pcVar1 + -0x10) < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0(pcVar1 + -0x10), iVar2 == 0)) {
    pcVar1[-0xffffffff00000008] = '\0';
    pcVar1[-0xffffffff00000007] = '\0';
    pcVar1[-0xffffffff00000006] = '\0';
    pcVar1[-0xffffffff00000005] = '\0';
    pcVar1[-0xffffffff0000000c] = '\0';
    pcVar1[-0xffffffff0000000b] = '\0';
    pcVar1[-0xffffffff0000000a] = '\0';
    pcVar1[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar1,*(undefined4 *)(pcVar1 + -4));
    free(pcVar1 + -0x10);
  }
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    thunk_FUN_1145c250(param_5,pcVar4,0x11);
  }
  ((void)0);
  return 1;
}


}

// Reference entry 111650c0; body size 277 bytes.
namespace recovered_111650c0 {
#line 1 "ENTRY_111650c0"

void FUN_111650c0(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined2 local_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined2 uStack_e;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;

  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_14;
  uVar3 = 0;
  uVar2 = 0;
  while( true ) {
    local_c = 0;
    uStack_b = 0;
    uStack_a = 0;
    uStack_9 = 0;
    local_14 = 0;
    uStack_12 = 0;
    uStack_11 = 0;
    uStack_10 = 0;
    uStack_f = 0;
    uStack_e = 0;
    ((void)0);
    if (uVar3 < DAT_119e1f4c) {
      if (param_2 == '\0') {
        uStack_12 = 0;
        uStack_11 = 0;
        uStack_10 = 0;
        uStack_f = 0;
        uStack_e = 0;
        local_c = 0;
        uStack_b = 0;
        uStack_a = 0;
        uStack_9 = 0;
        ((void)0);
      }
      else {
        uStack_12 = (&DAT_119e1f52)[uVar2];
        uStack_11 = (&DAT_119e1f53)[uVar2];
        uStack_10 = (&DAT_119e1f54)[uVar2];
        uStack_f = (&DAT_119e1f55)[uVar2];
        uStack_e = *(undefined2 *)((int)&DAT_119e1f56 + uVar2);
        local_c = (&DAT_119e1f58)[uVar2];
        uStack_b = (&DAT_119e1f59)[uVar2];
        uStack_a = (&DAT_119e1f5a)[uVar2];
        uStack_9 = (&DAT_119e1f5b)[uVar2];
        ((void)0);
      }
      local_14 = *(undefined2 *)((int)&DAT_119e1f50 + uVar2);
    }
    cVar1 = thunk_FUN_11263580(param_1);
    if (cVar1 != '\0') break;
    uVar2 = uVar2 + 0xe;
    uVar3 = uVar3 + 1;
    if (0x419 < uVar2) {
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11165220; body size 118 bytes.
namespace recovered_11165220 {
#line 1 "ENTRY_11165220"

void FUN_11165220(undefined2 *param_1,undefined4 param_2,char param_3)

{
  undefined8 local_14;
  undefined4 local_c;

  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_14;
  if (param_3 != '\0') {
    thunk_FUN_112630e0(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  local_c = 0;
  local_14 = 0;
  ((void)0);
  thunk_FUN_112630e0(param_2);
  thunk_FUN_11262ca0();
  *param_1 = (undefined2)local_14;
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11165420; body size 168 bytes.
namespace recovered_11165420 {
#line 1 "ENTRY_11165420"

undefined4 * __thiscall
FUN_11165420(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = *param_4;
  param_1[2] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  ((void)0);
  iVar1 = *param_5;
  param_1[3] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = 0;
  ((void)0);
  return param_1;
}


}

// Reference entry 11165a50; body size 219 bytes.
namespace recovered_11165a50 {
#line 1 "ENTRY_11165a50"

undefined4 * __thiscall FUN_11165a50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = param_2[3];
  ((void)0);
  param_1[3] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = 0;
  ((void)0);
  if (param_2[7] != 0) {
    pvVar3 = operator_new(0x454);
    ((void)0);
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_11281350(param_2[7]);
    }
    param_1[7] = uVar4;
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 11165d70; body size 196 bytes.
namespace recovered_11165d70 {
#line 1 "ENTRY_11165d70"

void __fastcall FUN_11165d70(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 11167430; body size 261 bytes.
namespace recovered_11167430 {
#line 1 "ENTRY_11167430"

void __fastcall FUN_11167430(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_18;
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar4 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar4 + 1;
  if (iVar4 == 0) {
    piVar1 = (int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = thunk_FUN_11128910(uVar3);
      uVar5 = thunk_FUN_11128910(*(undefined4 *)(iVar4 + 0x7b0));
      local_14 = (int *)thunk_FUN_11127d60(&local_18,uVar5);
      ((void)0);
      if (piVar1 != local_14) {
        puVar2 = (undefined4 *)*piVar1;
        if (puVar2 != (undefined4 *)0x0) {
          iVar4 = thunk_FUN_1123fcd0(puVar2 + 1);
          if (iVar4 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        iVar4 = *local_14;
        *piVar1 = iVar4;
        if (iVar4 != 0) {
          thunk_FUN_1123fce0(iVar4 + 4);
        }
      }
      ((void)0);
      if (local_18 != (undefined4 *)0x0) {
        iVar4 = thunk_FUN_1123fcd0(local_18 + 1);
        if ((iVar4 == 0) && (local_18 != (undefined4 *)0x0)) {
          (**(code **)*local_18)(1);
        }
      }
      iVar4 = *piVar1;
      ((void)0);
      thunk_FUN_11128910(iVar4);
      thunk_FUN_11127900(iVar4);
    }
    thunk_FUN_1112a590(param_1);
  }
  ((void)0);
  return;
}


}

// Reference entry 11167ae0; body size 552 bytes.
namespace recovered_11167ae0 {
#line 1 "ENTRY_11167ae0"

int __fastcall FUN_11167ae0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  bool bVar9;
  void *local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  piVar1 = (int *)(param_1 + 0x41c);
  local_18 = 0;
  if (*piVar1 != 0) goto LAB_11167cf4;
  uVar3 = *(uint *)(param_1 + 0x424);
  if (((uVar3 & 0x7f) - 1 & 0xfffffffe) == 10) {
    puVar5 = &DAT_1186d2ee;
    if (*(char *)(param_1 + 0x4a9) == '1') {
      puVar5 = (undefined1 *)(param_1 + 0x4aa);
    }
    iVar6 = thunk_FUN_11254d80(puVar5);
    uVar2 = *(undefined1 *)(iVar6 + 1);
    thunk_FUN_11255550();
    local_20 = operator_new(0x144);
    ((void)0);
    bVar9 = local_20 == (void *)0x0;
    if (bVar9) {
      local_14 = 0;
    }
    else {
      thunk_FUN_101b9a40(param_1 + 0x18);
      ((void)0);
      local_18 = 1;
      local_14 = thunk_FUN_1114d8c0(*(undefined4 *)(param_1 + 0xc),&local_1c,param_1 + 0x428,uVar2,
                                    param_1 + 0x52a);
    }
    puVar4 = (undefined4 *)*piVar1;
    ((void)0);
    if ((puVar4 != (undefined4 *)0x0) && (iVar6 = thunk_FUN_1123fcd0(puVar4 + 1), iVar6 == 0)) {
      (**(code **)*puVar4)(1);
    }
    *piVar1 = local_14;
    if (bVar9) goto LAB_11167cf4;
  }
  else {
    if (((uVar3 & 0x7f) - 1 & 0xfffffffe) != 6) goto LAB_11167cf4;
    if ((uVar3 & 0xffffff00) == 0xfe00) {
      pvVar7 = operator_new(200);
      ((void)0);
      bVar9 = pvVar7 == (void *)0x0;
      if (bVar9) {
        uVar8 = 0;
      }
      else {
        thunk_FUN_101b9a40(param_1 + 0x18);
        ((void)0);
        local_18 = 2;
        uVar8 = thunk_FUN_110e8f20(*(undefined4 *)(param_1 + 0xc),&local_1c);
      }
      ((void)0);
      thunk_FUN_11127c40(uVar8);
    }
    else {
      iVar6 = thunk_FUN_111680e0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      if (iVar6 == 0) goto LAB_11167cf4;
      local_1c = operator_new(0x1998);
      ((void)0);
      bVar9 = local_1c == (void *)0x0;
      if (bVar9) {
        uVar8 = 0;
      }
      else {
        thunk_FUN_101b9a40(param_1 + 0x18);
        ((void)0);
        local_18 = 4;
        uVar8 = thunk_FUN_110dc330(*(undefined4 *)(param_1 + 0xc),&local_20,param_1 + 0x420,iVar6);
      }
      ((void)0);
      thunk_FUN_11127c40(uVar8);
    }
    if (bVar9) goto LAB_11167cf4;
  }
  thunk_FUN_101ba300();
LAB_11167cf4:
  ((void)0);
  return *piVar1;
}


}

// Reference entry 11167dc0; body size 637 bytes.
namespace recovered_11167dc0 {
#line 1 "ENTRY_11167dc0"

undefined4 __thiscall FUN_11167dc0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  uVar2 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  iVar3 = thunk_FUN_113b9ec0(uVar2,"libraryIdPfx");
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x4c))();
    if (iVar3 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x4c))();
      puVar1 = param_3;
      thunk_FUN_111a36f0();
      *puVar1 = 3;
      puVar1[2] = uVar2;
      ((void)0);
      return 1;
    }
  }
  else {
    iVar3 = thunk_FUN_113b9ec0(uVar2,"acctType");
    puVar1 = param_3;
    if (iVar3 == 0) {
      iVar3 = param_1[0x109];
      thunk_FUN_111a36f0();
      *puVar1 = 4;
      *(double *)(puVar1 + 2) = (double)iVar3;
      ((void)0);
      return 1;
    }
    iVar3 = thunk_FUN_113b9ec0(uVar2,"acctId");
    if (iVar3 == 0) {
      thunk_FUN_101b9a40(param_1 + 0x10a);
      ((void)0);
      thunk_FUN_111a4540(&param_2);
      thunk_FUN_101ba300();
      ((void)0);
      return 1;
    }
    iVar3 = thunk_FUN_113b9ec0(uVar2,"acctTitle");
    if (iVar3 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x30))();
      thunk_FUN_101b9a40(uVar2);
      ((void)0);
      thunk_FUN_111a4540(&param_2);
      thunk_FUN_101ba300();
      ((void)0);
      return 1;
    }
    iVar3 = thunk_FUN_113b9ec0(uVar2,"acctPassword");
    if (iVar3 == 0) {
      thunk_FUN_101b9a40((int)param_1 + 0x52a);
      ((void)0);
      thunk_FUN_111a4540(&param_2);
      thunk_FUN_101ba300();
      ((void)0);
      return 1;
    }
    iVar3 = thunk_FUN_113b9ec0(uVar2,"trialDaysLeft");
    puVar1 = param_3;
    if (iVar3 == 0) {
      iVar3 = param_1[0x1c5];
      thunk_FUN_111a36f0();
      *puVar1 = 4;
      *(double *)(puVar1 + 2) = (double)iVar3;
      ((void)0);
      return 1;
    }
    iVar3 = thunk_FUN_113b9ec0(uVar2,"titleForAlarmUI");
    if (iVar3 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x60))();
      thunk_FUN_101b9a40(uVar2);
      ((void)0);
      thunk_FUN_111a4540(&local_14);
      thunk_FUN_101ba300();
      ((void)0);
      return 1;
    }
  }
  uVar2 = thunk_FUN_110da9a0(param_2,param_3);
  ((void)0);
  return uVar2;
}


}

// Reference entry 11169d70; body size 168 bytes.
namespace recovered_11169d70 {
#line 1 "ENTRY_11169d70"

void FUN_11169d70(undefined4 param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;


  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    iVar2 = puVar3[2];
    ((void)0);
    if (((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar4), iVar5 == 0)) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
    ((void)0);
    thunk_FUN_1148a50e(puVar3,0x10);
    puVar3 = puVar1;
  }
  ((void)0);
  return;
}


}

// Reference entry 11169e70; body size 132 bytes.
namespace recovered_11169e70 {
#line 1 "ENTRY_11169e70"

void FUN_11169e70(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_2 + 8);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_1148a50e(param_2,0x10);
  ((void)0);
  return;
}


}

// Reference entry 1116a270; body size 118 bytes.
namespace recovered_1116a270 {
#line 1 "ENTRY_1116a270"

void FUN_1116a270(undefined4 param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1116a310; body size 242 bytes.
namespace recovered_1116a310 {
#line 1 "ENTRY_1116a310"

void __thiscall FUN_1116a310(int param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  puVar7 = &DAT_1186d2ee;
  if ((undefined1 *)param_3[2] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)param_3[2];
  }
  uVar5 = thunk_FUN_101c82e0(puVar7,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  uVar5 = *(uint *)(param_1 + 0x18) & uVar5;
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + uVar5 * 8);
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
  if ((int *)piVar1[1] == param_3) {
    if (piVar2 == param_3) {
      iVar3 = *(int *)(param_1 + 4);
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
    }
    else {
      piVar1[1] = param_3[1];
    }
  }
  else if (piVar2 == param_3) {
    *piVar1 = *param_3;
  }
  iVar3 = *param_3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_3[1] = iVar3;
  *(int *)(iVar3 + 4) = param_3[1];
  iVar4 = param_3[2];
  ((void)0);
  if (((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) &&
     (iVar6 = thunk_FUN_1123fcd0((void *)(iVar4 + -0x10)), iVar6 == 0)) {
    *(undefined4 *)(iVar4 + -8) = 0;
    *(undefined4 *)(iVar4 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
    free((void *)(iVar4 + -0x10));
  }
  thunk_FUN_1148a50e(param_3,0x10);
  *param_2 = iVar3;
  ((void)0);
  return;
}


}

// Reference entry 1116afa0; body size 145 bytes.
namespace recovered_1116afa0 {
#line 1 "ENTRY_1116afa0"

void __fastcall FUN_1116afa0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
    ((void)0);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free((void *)(iVar1 + -0x10));
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  ((void)0);
  return;
}


}
