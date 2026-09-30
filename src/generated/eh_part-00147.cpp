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
extern int FUN_11178dc0(...);
extern int FUN_11179ee0(...);
extern int FUN_11179f90(...);
extern int FUN_1117a040(...);
extern int FUN_1117a3f0(...);
extern int FUN_1117a7f0(...);
extern int FUN_1117bb30(...);
extern int FUN_1117bd10(...);
extern int FUN_1117c0e0(...);
extern int FUN_1117c230(...);
extern int FUN_1117c380(...);
extern int FUN_1117c4d0(...);
extern int FUN_1117c5e0(...);
extern int FUN_1117ca20(...);
extern int FUN_1117d330(...);
extern int FUN_1117d3d0(...);
extern int FUN_1117d470(...);
extern int FUN_1117d530(...);
extern int FUN_1117d5d0(...);
extern int FUN_1117eaf0(...);
extern int FUN_1117ece0(...);
extern int FUN_1117ef30(...);
extern int FUN_1117fbf0(...);
extern int FUN_1117fcb0(...);
extern int FUN_1117fd70(...);
extern int FUN_11180050(...);
extern int FUN_111800f0(...);
extern int FUN_11180190(...);
extern int FUN_11180420(...);
extern int FUN_111805d0(...);
extern int FUN_11180680(...);
extern int FUN_11180fe0(...);
extern int FUN_11181110(...);
extern int FUN_11181240(...);
extern int FUN_11181370(...);
extern int FUN_11181460(...);
extern int FUN_11181b30(...);
extern int FUN_11181bf0(...);
extern int FUN_11181cb0(...);
extern int FUN_11181f10(...);
extern int FUN_11181fe0(...);
extern int FUN_111820a0(...);
extern int FUN_111844d0(...);
extern int FUN_11184c90(...);
extern int FUN_11185220(...);
extern int FUN_111854d0(...);
extern int FUN_11185ea0(...);
extern int FUN_11186140(...);
extern int FUN_111865f0(...);
extern int FUN_111868f0(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int free(...);
extern int memcpy(...);
extern undefined4* operator_new(...);
extern undefined4 thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_102a2fd0(...);
extern int thunk_FUN_1050fff0(...);
extern int thunk_FUN_110b5610(...);
extern int thunk_FUN_110b56c0(...);
extern int thunk_FUN_11179010(...);
extern int thunk_FUN_11179c30(...);
extern int thunk_FUN_11179ca0(...);
extern int thunk_FUN_11179d10(...);
extern int thunk_FUN_11179d80(...);
extern int thunk_FUN_11179de0(...);
extern int thunk_FUN_1117b9b0(...);
extern int thunk_FUN_1117c770(...);
extern undefined4 thunk_FUN_1117eaf0(...);
extern int thunk_FUN_1117ece0(...);
extern int thunk_FUN_1117ef30(...);
extern int thunk_FUN_1117f820(...);
extern int thunk_FUN_11180320(...);
extern int thunk_FUN_111803a0(...);
extern int thunk_FUN_11180fe0(...);
extern int thunk_FUN_11182fc0(...);
extern int thunk_FUN_11183250(...);
extern int thunk_FUN_111834e0(...);
extern int thunk_FUN_11183770(...);
extern int thunk_FUN_11183a00(...);
extern int thunk_FUN_111844d0(...);
extern int thunk_FUN_11184c40(...);
extern int thunk_FUN_111886c0(...);
extern char thunk_FUN_1118a2c0(...);
extern char thunk_FUN_1118abb0(...);
extern int thunk_FUN_1118c710(...);
extern char thunk_FUN_111a0940(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 11178dc0; body size 427 bytes.
namespace recovered_11178dc0 {
#line 1 "ENTRY_11178dc0"

int __thiscall FUN_11178dc0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
  iVar3 = (param_1[1] - iVar1) / 0x14;
  if (iVar3 == 0xccccccc) {

    thunk_FUN_11184c40();
  }
  uVar7 = (param_1[2] - iVar1) / 0x14;
  if (0xccccccc - (uVar7 >> 1) < uVar7) {
    uVar7 = 0xccccccc;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < iVar3 + 1U) {
      uVar7 = iVar3 + 1U;
    }
  }
  iVar4 = thunk_FUN_111886c0(uVar7);
  ((void)0);
  iVar1 = iVar4 + ((param_2 - iVar1) / 0x14) * 0x14;
  thunk_FUN_1117f820(param_3);
  if (param_2 == param_1[1]) {
    thunk_FUN_1117c770(*param_1,param_1[1],iVar4,param_1);
  }
  else {
    thunk_FUN_111844d0(*param_1,param_2,iVar4);
    thunk_FUN_111844d0(param_2,param_1[1],iVar1 + 0x14);
  }
  if (*param_1 != 0) {
    thunk_FUN_102a2fd0(*param_1,param_1[1],param_1);
    iVar2 = *param_1;
    uVar5 = ((param_1[2] - iVar2) / 0x14) * 0x14;
    iVar6 = iVar2;
    if (0xfff < uVar5) {
      iVar6 = *(int *)(iVar2 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar2 - iVar6) - 4U) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar6,uVar5);
  }
  *param_1 = iVar4;
  param_1[1] = iVar4 + (iVar3 + 1) * 0x14;
  param_1[2] = iVar4 + uVar7 * 0x14;
  ((void)0);
  return iVar1;
}


}

// Reference entry 11179ee0; body size 132 bytes.
namespace recovered_11179ee0 {
#line 1 "ENTRY_11179ee0"

void FUN_11179ee0(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_2 + 0x10);
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
  thunk_FUN_1148a50e(param_2,0x18);
  ((void)0);
  return;
}


}

// Reference entry 11179f90; body size 132 bytes.
namespace recovered_11179f90 {
#line 1 "ENTRY_11179f90"

void FUN_11179f90(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_2 + 0x10);
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
  thunk_FUN_1148a50e(param_2,0x18);
  ((void)0);
  return;
}


}

// Reference entry 1117a040; body size 132 bytes.
namespace recovered_1117a040 {
#line 1 "ENTRY_1117a040"

void FUN_1117a040(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_2 + 0x10);
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
  thunk_FUN_1148a50e(param_2,0x18);
  ((void)0);
  return;
}


}

// Reference entry 1117a3f0; body size 557 bytes.
namespace recovered_1117a3f0 {
#line 1 "ENTRY_1117a3f0"

int * FUN_1117a3f0(int *param_1,int *param_2,code *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;


  ((void)0);
  ((void)0);
  uVar5 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((param_1 != param_2) && (piVar8 = param_1 + 2, piVar8 != param_2)) {
    piVar7 = param_1 + 3;
    do {
      local_1c = 0;
      local_20 = *piVar8;
      ((void)0);
      local_14 = piVar8;
      if (((piVar7 != &local_1c) && (local_1c = *piVar7, local_1c != 0)) &&
         (*(int *)(local_1c + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(local_1c + -0x10),uVar5);
      }
      ((void)0);
      cVar4 = (*param_3)(&local_20,param_1);
      piVar3 = piVar7;
      if (cVar4 == '\0') {
        cVar4 = (*param_3)(&local_20,piVar7 + -3);
        piVar3 = piVar7 + -3;
        while (piVar2 = piVar3, cVar4 != '\0') {
          *piVar8 = *piVar2;
          thunk_FUN_101ba530(piVar2 + 1);
          cVar4 = (*param_3)(&local_20,piVar2 + -2);
          piVar3 = piVar2 + -2;
          piVar8 = piVar2;
        }
        local_18 = piVar8 + 1;
        *piVar8 = local_20;
        if (&local_1c != local_18) {
          iVar1 = *local_18;
          if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
             (iVar6 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar6 == 0)) {
            *(undefined4 *)(iVar1 + -8) = 0;
            *(undefined4 *)(iVar1 + -0xc) = 0;
            thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
            free((void *)(iVar1 + -0x10));
          }
          *local_18 = local_1c;
          goto LAB_1117a58d;
        }
      }
      else {
        while (piVar8 != param_1) {
          piVar3[-1] = piVar3[-3];
          thunk_FUN_101ba530(piVar3 + -2);
          piVar8 = piVar3 + -3;
          piVar3 = piVar3 + -2;
        }
        *param_1 = local_20;
        if (&local_1c != param_1 + 1) {
          iVar1 = param_1[1];
          if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
             (iVar6 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar6 == 0)) {
            *(undefined4 *)(iVar1 + -8) = 0;
            *(undefined4 *)(iVar1 + -0xc) = 0;
            thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
            free((void *)(iVar1 + -0x10));
          }
          param_1[1] = local_1c;
LAB_1117a58d:
          if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
            thunk_FUN_1123fce0(local_1c + -0x10);
          }
        }
      }
      iVar1 = local_1c;
      ((void)0);
      if (((local_1c != 0) &&
          (_Memory = (void *)(local_1c + -0x10), *(int *)(local_1c + -0x10) < 0xffff)) &&
         (iVar6 = thunk_FUN_1123fcd0(_Memory), iVar6 == 0)) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free(_Memory);
      }
      piVar8 = local_14 + 2;
      piVar7 = piVar7 + 2;
    } while (piVar8 != param_2);
  }
  ((void)0);
  return param_2;
}


}

// Reference entry 1117a7f0; body size 583 bytes.
namespace recovered_1117a7f0 {
#line 1 "ENTRY_1117a7f0"

void FUN_1117a7f0(int param_1,int param_2,code *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;


  iVar2 = param_1;
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  uVar5 = param_2 - param_1 >> 3;
  local_14 = param_2 - param_1 >> 4;
  if (0 < local_14) {
    local_1c = uVar5 - 1;
    local_24 = (int *)(param_1 + 4 + local_14 * 8);
    local_18 = local_1c >> 1;
    do {
      local_14 = local_14 + -1;
      piVar7 = local_24 + -2;
      local_28 = 0;
      local_2c = local_24[-3];
      ((void)0);
      local_24 = piVar7;
      if (((piVar7 != &local_28) && (local_28 = *piVar7, local_28 != 0)) &&
         (*(int *)(local_28 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0(local_28 + -0x10,uVar4);
      }
      ((void)0);
      iVar8 = local_14;
      param_1 = local_14;
      if (local_14 < local_18) {
        do {
          param_1 = iVar8 * 2 + 2;
          iVar6 = iVar2 + param_1 * 8;
          cVar3 = (*param_3)(iVar6,iVar6 + -8);
          if (cVar3 != '\0') {
            param_1 = iVar8 * 2 + 1;
          }
          *(undefined4 *)(iVar2 + iVar8 * 8) = *(undefined4 *)(iVar2 + param_1 * 8);
          thunk_FUN_101ba530(iVar2 + 4 + param_1 * 8);
          iVar8 = param_1;
        } while (param_1 < local_18);
      }
      if ((param_1 == local_18) && ((uVar5 & 1) == 0)) {
        *(undefined4 *)(iVar2 + param_1 * 8) = *(undefined4 *)(iVar2 + -8 + uVar5 * 8);
        thunk_FUN_101ba530(uVar5 * 8 + -4 + iVar2);
        param_1 = local_1c;
      }
      if (local_14 < param_1) {
        do {
          iVar8 = param_1 + -1 >> 1;
          puVar1 = (undefined4 *)(iVar2 + iVar8 * 8);
          cVar3 = (*param_3)(puVar1,&local_2c);
          if (cVar3 == '\0') break;
          *(undefined4 *)(iVar2 + param_1 * 8) = *puVar1;
          thunk_FUN_101ba530(puVar1 + 1);
          param_1 = iVar8;
        } while (local_14 < iVar8);
      }
      *(int *)(iVar2 + param_1 * 8) = local_2c;
      local_20 = (int *)(iVar2 + 4 + param_1 * 8);
      if (&local_28 != local_20) {
        iVar8 = *local_20;
        if (((iVar8 != 0) && (*(int *)(iVar8 + -0x10) < 0xffff)) &&
           (iVar6 = thunk_FUN_1123fcd0((void *)(iVar8 + -0x10)), iVar6 == 0)) {
          *(undefined4 *)(iVar8 + -8) = 0;
          *(undefined4 *)(iVar8 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
          free((void *)(iVar8 + -0x10));
        }
        *local_20 = local_28;
        if ((local_28 != 0) && (*(int *)(local_28 + -0x10) < 0xffff)) {
          thunk_FUN_1123fce0(local_28 + -0x10);
        }
      }
      iVar8 = local_28;
      ((void)0);
      if (((local_28 != 0) &&
          (_Memory = (void *)(local_28 + -0x10), *(int *)(local_28 + -0x10) < 0xffff)) &&
         (iVar6 = thunk_FUN_1123fcd0(_Memory), iVar6 == 0)) {
        *(undefined4 *)(iVar8 + -8) = 0;
        *(undefined4 *)(iVar8 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
        free(_Memory);
      }
    } while (0 < local_14);
  }
  ((void)0);
  return;
}


}

// Reference entry 1117bb30; body size 250 bytes.
namespace recovered_1117bb30 {
#line 1 "ENTRY_1117bb30"

void FUN_1117bb30(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    puVar3 = (undefined4 *)(param_2 + -8);
    local_14 = 0;
    local_18 = *puVar3;
    ((void)0);
    if ((int *)(param_2 + -4) != &local_14) {
      local_14 = *(int *)(param_2 + -4);
      if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(local_14 + -0x10),DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      }
    }
    *puVar3 = *param_1;
    ((void)0);
    thunk_FUN_101ba530(param_1 + 1);
    thunk_FUN_1117b9b0(param_1,0,(int)puVar3 - (int)param_1 >> 3,&local_18,param_3);
    iVar1 = local_14;
    ((void)0);
    if ((local_14 != 0) &&
       (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)) {
      iVar2 = thunk_FUN_1123fcd0(_Memory);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free(_Memory);
      }
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1117bd10; body size 314 bytes.
namespace recovered_1117bd10 {
#line 1 "ENTRY_1117bd10"

void FUN_1117bd10(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (0xf < (int)(param_2 - (int)param_1 & 0xfffffff8U)) {
    piVar4 = (int *)(param_2 + -4);
    local_14 = 4 - (int)param_1;
    do {
      local_18 = 0;
      local_1c = piVar4[-1];
      ((void)0);
      if (((piVar4 != &local_18) && (local_18 = *piVar4, local_18 != 0)) &&
         (*(int *)(local_18 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(local_18 + -0x10),uVar2);
      }
      piVar4[-1] = *param_1;
      ((void)0);
      thunk_FUN_101ba530(param_1 + 1);
      thunk_FUN_1117b9b0(param_1,0,(-4 - (int)param_1) + (int)piVar4 >> 3,&local_1c,param_3);
      iVar1 = local_18;
      ((void)0);
      if (((local_18 != 0) &&
          (_Memory = (void *)(local_18 + -0x10), *(int *)(local_18 + -0x10) < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0(_Memory), iVar3 == 0)) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free(_Memory);
      }
      piVar4 = piVar4 + -2;
    } while (0xf < (int)(local_14 + (int)piVar4 & 0xfffffff8U));
  }
  ((void)0);
  return;
}


}

// Reference entry 1117c0e0; body size 268 bytes.
namespace recovered_1117c0e0 {
#line 1 "ENTRY_1117c0e0"

int * __thiscall FUN_1117c0e0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179c30(&local_24,param_3);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar2 == '\0') {
      *param_2 = local_1c;
      *(undefined1 *)(param_2 + 1) = 0;
      ((void)0);
      return param_2;
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = *param_1;
    ((void)0);
    local_14 = (undefined4 *)0x0;
    local_18 = param_1;
    puVar4 = operator_new(0x18);
    iVar5 = *param_3;
    ((void)0);
    puVar4[4] = iVar5;
    local_14 = puVar4;
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = 0;
    *puVar4 = uVar1;
    puVar4[1] = uVar1;
    puVar4[2] = uVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = thunk_FUN_11182fc0(local_24,local_20,puVar4);
    *param_2 = iVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    ((void)0);
    return param_2;
  }

  thunk_FUN_101d7220(uVar3);
}


}

// Reference entry 1117c230; body size 268 bytes.
namespace recovered_1117c230 {
#line 1 "ENTRY_1117c230"

int * __thiscall FUN_1117c230(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179ca0(&local_24,param_3);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar2 == '\0') {
      *param_2 = local_1c;
      *(undefined1 *)(param_2 + 1) = 0;
      ((void)0);
      return param_2;
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = *param_1;
    ((void)0);
    local_14 = (undefined4 *)0x0;
    local_18 = param_1;
    puVar4 = operator_new(0x18);
    iVar5 = *param_3;
    ((void)0);
    puVar4[4] = iVar5;
    local_14 = puVar4;
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = 0;
    *puVar4 = uVar1;
    puVar4[1] = uVar1;
    puVar4[2] = uVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = thunk_FUN_11183250(local_24,local_20,puVar4);
    *param_2 = iVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    ((void)0);
    return param_2;
  }

  thunk_FUN_101d7220(uVar3);
}


}

// Reference entry 1117c380; body size 268 bytes.
namespace recovered_1117c380 {
#line 1 "ENTRY_1117c380"

int * __thiscall FUN_1117c380(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179d10(&local_24,param_3);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar2 == '\0') {
      *param_2 = local_1c;
      *(undefined1 *)(param_2 + 1) = 0;
      ((void)0);
      return param_2;
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = *param_1;
    ((void)0);
    local_14 = (undefined4 *)0x0;
    local_18 = param_1;
    puVar4 = operator_new(0x18);
    iVar5 = *param_3;
    ((void)0);
    puVar4[4] = iVar5;
    local_14 = puVar4;
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = 0;
    *puVar4 = uVar1;
    puVar4[1] = uVar1;
    puVar4[2] = uVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = thunk_FUN_111834e0(local_24,local_20,puVar4);
    *param_2 = iVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    ((void)0);
    return param_2;
  }

  thunk_FUN_101d7220(uVar3);
}


}

// Reference entry 1117c4d0; body size 214 bytes.
namespace recovered_1117c4d0 {
#line 1 "ENTRY_1117c4d0"

int * __thiscall FUN_1117c4d0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179d80(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = local_1c;
    *(undefined1 *)(param_2 + 1) = 0;
    ((void)0);
    return param_2;
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = *param_1;
    ((void)0);
    local_14 = 0;
    local_18 = param_1;
    puVar3 = operator_new(0x18);
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    *puVar3 = uVar1;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = thunk_FUN_11183770(local_24,local_20,puVar3);
    *param_2 = iVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    ((void)0);
    return param_2;
  }

  thunk_FUN_101d7220(uVar2);
}


}

// Reference entry 1117c5e0; body size 230 bytes.
namespace recovered_1117c5e0 {
#line 1 "ENTRY_1117c5e0"

int * __thiscall FUN_1117c5e0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179de0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = local_1c;
    *(undefined1 *)(param_2 + 1) = 0;
    ((void)0);
    return param_2;
  }
  if (param_1[1] != 0x71c71c7) {
    uVar1 = *param_1;
    ((void)0);
    local_14 = (undefined4 *)0x0;
    local_18 = param_1;
    puVar3 = operator_new(0x24);
    ((void)0);
    puVar3[4] = *param_3;
    local_14 = puVar3;
    thunk_FUN_110b56c0();
    *puVar3 = uVar1;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = thunk_FUN_11183a00(local_24,local_20,puVar3);
    *param_2 = iVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    ((void)0);
    return param_2;
  }

  thunk_FUN_101d7220(uVar2);
}


}

// Reference entry 1117ca20; body size 202 bytes.
namespace recovered_1117ca20 {
#line 1 "ENTRY_1117ca20"

undefined4 *
FUN_1117ca20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;


  ((void)0);
  ((void)0);
  uVar6 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  if (param_1 != param_2) {
    puVar7 = param_1 + 3;
    do {
      *param_3 = puVar7[-3];
      iVar2 = puVar7[-2];
      param_3[1] = iVar2;
      if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar6);
      }
      uVar3 = puVar7[-1];
      uVar4 = puVar7[1];
      uVar5 = *puVar7;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[-1] = 0;
      param_3[2] = uVar3;
      param_3[3] = uVar5;
      param_3[4] = uVar4;
      param_3 = param_3 + 5;
      puVar1 = puVar7 + 2;
      puVar7 = puVar7 + 5;
    } while (puVar1 != param_2);
  }
  thunk_FUN_102a2fd0(param_3,param_3,param_4);
  ((void)0);
  return param_3;
}


}

// Reference entry 1117d330; body size 118 bytes.
namespace recovered_1117d330 {
#line 1 "ENTRY_1117d330"

void FUN_1117d330(undefined4 param_1,int *param_2)

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

// Reference entry 1117d3d0; body size 118 bytes.
namespace recovered_1117d3d0 {
#line 1 "ENTRY_1117d3d0"

void FUN_1117d3d0(undefined4 param_1,int *param_2)

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

// Reference entry 1117d470; body size 118 bytes.
namespace recovered_1117d470 {
#line 1 "ENTRY_1117d470"

void FUN_1117d470(undefined4 param_1,int *param_2)

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

// Reference entry 1117d530; body size 118 bytes.
namespace recovered_1117d530 {
#line 1 "ENTRY_1117d530"

void FUN_1117d530(undefined4 param_1,int *param_2)

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

// Reference entry 1117d5d0; body size 119 bytes.
namespace recovered_1117d5d0 {
#line 1 "ENTRY_1117d5d0"

void FUN_1117d5d0(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_2 + 4);
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
  ((void)0);
  return;
}


}

// Reference entry 1117eaf0; body size 237 bytes.
namespace recovered_1117eaf0 {
#line 1 "ENTRY_1117eaf0"

int * __thiscall FUN_1117eaf0(int *param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  *param_1 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(param_2 + -0x10,uVar1);
  }
  param_1[1] = 0xff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  ((void)0);
  if ((param_2 != 0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(param_2 + -0x10));
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + -8) = 0;
      *(undefined4 *)(param_2 + -0xc) = 0;
      thunk_FUN_113cfb70(param_2,*(undefined4 *)(param_2 + -4));
      free((void *)(param_2 + -0x10));
    }
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 1117ece0; body size 173 bytes.
namespace recovered_1117ece0 {
#line 1 "ENTRY_1117ece0"

int * __thiscall FUN_1117ece0(int *param_1,int param_2,undefined1 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  *param_1 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(param_2 + -0x10,uVar1);
  }
  *(undefined1 *)(param_1 + 1) = param_3;
  ((void)0);
  if ((param_2 != 0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(param_2 + -0x10));
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + -8) = 0;
      *(undefined4 *)(param_2 + -0xc) = 0;
      thunk_FUN_113cfb70(param_2,*(undefined4 *)(param_2 + -4));
      free((void *)(param_2 + -0x10));
    }
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 1117ef30; body size 280 bytes.
namespace recovered_1117ef30 {
#line 1 "ENTRY_1117ef30"

int * __thiscall FUN_1117ef30(int *param_1,int param_2,int param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  *param_1 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(param_2 + -0x10,uVar1);
  }
  ((void)0);
  param_1[1] = param_3;
  if ((param_3 != 0) && (*(int *)(param_3 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(param_3 + -0x10,uVar1);
  }
  ((void)0);
  if (((param_2 != 0) && (*(int *)(param_2 + -0x10) < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0((void *)(param_2 + -0x10)), iVar2 == 0)) {
    *(undefined4 *)(param_2 + -8) = 0;
    *(undefined4 *)(param_2 + -0xc) = 0;
    thunk_FUN_113cfb70(param_2,*(undefined4 *)(param_2 + -4));
    free((void *)(param_2 + -0x10));
  }
  ((void)0);
  if (((param_3 != 0) && (*(int *)(param_3 + -0x10) < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0((void *)(param_3 + -0x10)), iVar2 == 0)) {
    *(undefined4 *)(param_3 + -8) = 0;
    *(undefined4 *)(param_3 + -0xc) = 0;
    thunk_FUN_113cfb70(param_3,*(undefined4 *)(param_3 + -4));
    free((void *)(param_3 + -0x10));
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 1117fbf0; body size 145 bytes.
namespace recovered_1117fbf0 {
#line 1 "ENTRY_1117fbf0"

void __fastcall FUN_1117fbf0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
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
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  ((void)0);
  return;
}


}

// Reference entry 1117fcb0; body size 145 bytes.
namespace recovered_1117fcb0 {
#line 1 "ENTRY_1117fcb0"

void __fastcall FUN_1117fcb0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
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
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  ((void)0);
  return;
}


}

// Reference entry 1117fd70; body size 145 bytes.
namespace recovered_1117fd70 {
#line 1 "ENTRY_1117fd70"

void __fastcall FUN_1117fd70(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
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
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  ((void)0);
  return;
}


}

// Reference entry 11180050; body size 115 bytes.
namespace recovered_11180050 {
#line 1 "ENTRY_11180050"

void __fastcall FUN_11180050(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  ((void)0);
  return;
}


}

// Reference entry 111800f0; body size 115 bytes.
namespace recovered_111800f0 {
#line 1 "ENTRY_111800f0"

void __fastcall FUN_111800f0(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  ((void)0);
  return;
}


}

// Reference entry 11180190; body size 115 bytes.
namespace recovered_11180190 {
#line 1 "ENTRY_11180190"

void __fastcall FUN_11180190(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  ((void)0);
  return;
}


}

// Reference entry 11180420; body size 340 bytes.
namespace recovered_11180420 {
#line 1 "ENTRY_11180420"

void __fastcall FUN_11180420(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  thunk_FUN_10207220(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  thunk_FUN_111803a0();
  thunk_FUN_10207220();
  thunk_FUN_111803a0();
  iVar1 = param_1[3];
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
  iVar1 = param_1[2];
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
  iVar1 = param_1[1];
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
  iVar1 = *param_1;
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

// Reference entry 111805d0; body size 133 bytes.
namespace recovered_111805d0 {
#line 1 "ENTRY_111805d0"

void __fastcall FUN_111805d0(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  thunk_FUN_11180320(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  thunk_FUN_11180320();
  iVar1 = *param_1;
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

// Reference entry 11180680; body size 116 bytes.
namespace recovered_11180680 {
#line 1 "ENTRY_11180680"

void __fastcall FUN_11180680(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_1 + 4);
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
  ((void)0);
  return;
}


}

// Reference entry 11180fe0; body size 233 bytes.
namespace recovered_11180fe0 {
#line 1 "ENTRY_11180fe0"

int __thiscall FUN_11180fe0(undefined4 *param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179c30(&local_24,param_2);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar3 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar3 == '\0') goto LAB_111810ad;
  }
  if (param_1[1] == 0xaaaaaaa) {

    thunk_FUN_101d7220(uVar4);
  }
  uVar1 = *param_1;
  ((void)0);
  local_14 = (undefined4 *)0x0;
  local_18 = param_1;
  puVar5 = operator_new(0x18);
  iVar2 = *param_2;
  ((void)0);
  puVar5[4] = iVar2;
  local_14 = puVar5;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  puVar5[5] = 0;
  *puVar5 = uVar1;
  puVar5[1] = uVar1;
  puVar5[2] = uVar1;
  *(undefined2 *)(puVar5 + 3) = 0;
  local_1c = thunk_FUN_11182fc0(local_24,local_20,puVar5);
LAB_111810ad:
  ((void)0);
  return local_1c + 0x14;
}


}

// Reference entry 11181110; body size 233 bytes.
namespace recovered_11181110 {
#line 1 "ENTRY_11181110"

int __thiscall FUN_11181110(undefined4 *param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179ca0(&local_24,param_2);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar3 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar3 == '\0') goto LAB_111811dd;
  }
  if (param_1[1] == 0xaaaaaaa) {

    thunk_FUN_101d7220(uVar4);
  }
  uVar1 = *param_1;
  ((void)0);
  local_14 = (undefined4 *)0x0;
  local_18 = param_1;
  puVar5 = operator_new(0x18);
  iVar2 = *param_2;
  ((void)0);
  puVar5[4] = iVar2;
  local_14 = puVar5;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  puVar5[5] = 0;
  *puVar5 = uVar1;
  puVar5[1] = uVar1;
  puVar5[2] = uVar1;
  *(undefined2 *)(puVar5 + 3) = 0;
  local_1c = thunk_FUN_11183250(local_24,local_20,puVar5);
LAB_111811dd:
  ((void)0);
  return local_1c + 0x14;
}


}

// Reference entry 11181240; body size 233 bytes.
namespace recovered_11181240 {
#line 1 "ENTRY_11181240"

int __thiscall FUN_11181240(undefined4 *param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179d10(&local_24,param_2);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar3 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar3 == '\0') goto LAB_1118130d;
  }
  if (param_1[1] == 0xaaaaaaa) {

    thunk_FUN_101d7220(uVar4);
  }
  uVar1 = *param_1;
  ((void)0);
  local_14 = (undefined4 *)0x0;
  local_18 = param_1;
  puVar5 = operator_new(0x18);
  iVar2 = *param_2;
  ((void)0);
  puVar5[4] = iVar2;
  local_14 = puVar5;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  puVar5[5] = 0;
  *puVar5 = uVar1;
  puVar5[1] = uVar1;
  puVar5[2] = uVar1;
  *(undefined2 *)(puVar5 + 3) = 0;
  local_1c = thunk_FUN_111834e0(local_24,local_20,puVar5);
LAB_1118130d:
  ((void)0);
  return local_1c + 0x14;
}


}

// Reference entry 11181370; body size 181 bytes.
namespace recovered_11181370 {
#line 1 "ENTRY_11181370"

int __thiscall FUN_11181370(undefined4 *param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179d80(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {

      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = *param_1;
    ((void)0);
    local_14 = 0;
    local_18 = param_1;
    puVar3 = operator_new(0x18);
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = uVar1;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = thunk_FUN_11183770(local_24,local_20,puVar3);
  }
  ((void)0);
  return local_1c + 0x14;
}


}

// Reference entry 11181460; body size 195 bytes.
namespace recovered_11181460 {
#line 1 "ENTRY_11181460"

int __thiscall FUN_11181460(undefined4 *param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_11179de0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x71c71c7) {

      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = *param_1;
    ((void)0);
    local_14 = (undefined4 *)0x0;
    local_18 = param_1;
    puVar3 = operator_new(0x24);
    ((void)0);
    puVar3[4] = *param_2;
    local_14 = puVar3;
    thunk_FUN_110b56c0();
    *puVar3 = uVar1;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = thunk_FUN_11183a00(local_24,local_20,puVar3);
  }
  ((void)0);
  return local_1c + 0x14;
}


}

// Reference entry 11181b30; body size 140 bytes.
namespace recovered_11181b30 {
#line 1 "ENTRY_11181b30"

int * __thiscall FUN_11181b30(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 11181bf0; body size 140 bytes.
namespace recovered_11181bf0 {
#line 1 "ENTRY_11181bf0"

int * __thiscall FUN_11181bf0(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 11181cb0; body size 140 bytes.
namespace recovered_11181cb0 {
#line 1 "ENTRY_11181cb0"

int * __thiscall FUN_11181cb0(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 11181f10; body size 156 bytes.
namespace recovered_11181f10 {
#line 1 "ENTRY_11181f10"

int * __thiscall FUN_11181f10(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  thunk_FUN_11180320(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  thunk_FUN_11180320();
  iVar1 = *param_1;
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 11181fe0; body size 140 bytes.
namespace recovered_11181fe0 {
#line 1 "ENTRY_11181fe0"

int * __thiscall FUN_11181fe0(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 111820a0; body size 141 bytes.
namespace recovered_111820a0 {
#line 1 "ENTRY_111820a0"

int __thiscall FUN_111820a0(int param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_1 + 4);
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 111844d0; body size 204 bytes.
namespace recovered_111844d0 {
#line 1 "ENTRY_111844d0"

undefined4 * __thiscall
FUN_111844d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;


  ((void)0);
  ((void)0);
  uVar6 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  if (param_2 != param_3) {
    puVar7 = param_2 + 3;
    do {
      *param_4 = puVar7[-3];
      iVar2 = puVar7[-2];
      param_4[1] = iVar2;
      if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar6);
      }
      uVar3 = puVar7[-1];
      uVar4 = puVar7[1];
      uVar5 = *puVar7;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[-1] = 0;
      param_4[2] = uVar3;
      param_4[3] = uVar5;
      param_4[4] = uVar4;
      param_4 = param_4 + 5;
      puVar1 = puVar7 + 2;
      puVar7 = puVar7 + 5;
    } while (puVar1 != param_3);
  }
  thunk_FUN_102a2fd0(param_4,param_4,param_1);
  ((void)0);
  return param_4;
}


}

// Reference entry 11184c90; body size 413 bytes.
namespace recovered_11184c90 {
#line 1 "ENTRY_11184c90"

void FUN_11184c90(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  undefined4 local_18;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    sVar7 = (int)pcVar6 - (int)(param_1 + 1);
    puVar2 = (undefined4 *)thunk_FUN_1148b586(sVar7 + 0x11);
    *puVar2 = 1;
    puVar2[3] = sVar7;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(puVar2 + 4,param_1,sVar7);
    *(undefined1 *)((int)(puVar2 + 4) + sVar7) = 0;
  }
  cVar1 = thunk_FUN_1118a2c0();
  if (cVar1 == '\0') {
    pvVar3 = operator_new(0x2c);
    ((void)0);
    if (pvVar3 == (void *)0x0) {
      local_18 = 0;
    }
    else {
      thunk_FUN_101b9a40();
      local_18 = thunk_FUN_1117eaf0();
    }
    ((void)0);
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      param_1 = (char *)0x0;
    }
    else {
      pcVar6 = param_1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      sVar7 = (int)pcVar6 - (int)(param_1 + 1);
      puVar4 = (undefined4 *)thunk_FUN_1148b586();
      puVar2 = puVar4 + 4;
      *puVar4 = 1;
      puVar4[3] = sVar7;
      puVar4[2] = 0;
      puVar4[1] = 0;
      memcpy(puVar2,param_1,sVar7);
      *(undefined1 *)((int)puVar2 + sVar7) = 0;
      param_1 = (char *)puVar2;
    }
    ((void)0);
    puVar2 = (undefined4 *)thunk_FUN_11180fe0();
    *puVar2 = local_18;
    ((void)0);
    if (((param_1 != (char *)0x0) && (*(int *)((int)param_1 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(), iVar5 == 0)) {
      *(undefined4 *)((int)param_1 + -8) = 0;
      *(undefined4 *)((int)param_1 + -0xc) = 0;
      thunk_FUN_113cfb70();
      free((undefined4 *)((int)param_1 + -0x10));
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 11185220; body size 300 bytes.
namespace recovered_11185220 {
#line 1 "ENTRY_11185220"

void __thiscall FUN_11185220(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  size_t _Size;
  int local_1c;
  undefined1 local_18;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar5 - (int)(param_2 + 1);
    puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
    *puVar3 = 1;
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar3 + 4,param_2,_Size);
    *(undefined1 *)((int)(puVar3 + 4) + _Size) = 0;
  }
  thunk_FUN_1117ece0();
  ((void)0);
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == *(int **)(param_1 + 0x1c)) {
    thunk_FUN_11179010();
  }
  else {
    *piVar2 = local_1c;
    if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0();
    }
    *(undefined1 *)(piVar2 + 1) = local_18;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }
  ((void)0);
  if (((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(), iVar4 == 0)) {
    *(undefined4 *)(local_1c + -8) = 0;
    *(undefined4 *)(local_1c + -0xc) = 0;
    thunk_FUN_113cfb70();
    free((void *)(local_1c + -0x10));
  }
  ((void)0);
  return;
}


}

// Reference entry 111854d0; body size 342 bytes.
namespace recovered_111854d0 {
#line 1 "ENTRY_111854d0"

void __thiscall FUN_111854d0(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  char cVar2;
  char *_Src;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t _Size;
  undefined1 local_1c [4];
  int local_18;
  int local_14;


  _Src = param_3;
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = *(int *)(*(int *)(param_1 + 8) + -4);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    param_3 = (char *)0x0;
  }
  else {
    pcVar6 = param_3;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar6 - (int)(param_3 + 1);
    puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    puVar1 = puVar3 + 4;
    *puVar3 = 1;
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_3 = (char *)puVar1;
  }
  iVar5 = local_14;
  ((void)0);
  thunk_FUN_110b5610(param_2,&param_3);
  puVar1 = (undefined4 *)param_3;
  ((void)0);
  if (((param_3 != (char *)0x0) &&
      (puVar3 = (undefined4 *)((int)param_3 + -0x10), *(int *)((int)param_3 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(puVar3), iVar4 == 0)) {
    puVar1[-2] = 0;
    puVar1[-3] = 0;
    thunk_FUN_113cfb70(puVar1,puVar1[-1]);
    free(puVar3);
  }
  ((void)0);
  if ((*(int *)(iVar5 + 0x10) == 4) || (*(int *)(iVar5 + 0x10) == 6)) {
    thunk_FUN_1118c710(local_1c);
  }
  ((void)0);
  if (((local_18 != 0) && (*(int *)(local_18 + -0x10) < 0xffff)) &&
     (iVar5 = thunk_FUN_1123fcd0((void *)(local_18 + -0x10)), iVar5 == 0)) {
    *(undefined4 *)(local_18 + -8) = 0;
    *(undefined4 *)(local_18 + -0xc) = 0;
    thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
    free((void *)(local_18 + -0x10));
  }
  ((void)0);
  return;
}


}

// Reference entry 11185ea0; body size 300 bytes.
namespace recovered_11185ea0 {
#line 1 "ENTRY_11185ea0"

void __thiscall FUN_11185ea0(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  size_t _Size;
  int local_1c;
  undefined1 local_18;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar5 - (int)(param_2 + 1);
    puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
    *puVar3 = 1;
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar3 + 4,param_2,_Size);
    *(undefined1 *)((int)(puVar3 + 4) + _Size) = 0;
  }
  thunk_FUN_1117ece0();
  ((void)0);
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 == *(int **)(param_1 + 0x28)) {
    thunk_FUN_11179010();
  }
  else {
    *piVar2 = local_1c;
    if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0();
    }
    *(undefined1 *)(piVar2 + 1) = local_18;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
  }
  ((void)0);
  if (((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(), iVar4 == 0)) {
    *(undefined4 *)(local_1c + -8) = 0;
    *(undefined4 *)(local_1c + -0xc) = 0;
    thunk_FUN_113cfb70();
    free((void *)(local_1c + -0x10));
  }
  ((void)0);
  return;
}


}

// Reference entry 11186140; body size 107 bytes.
namespace recovered_11186140 {
#line 1 "ENTRY_11186140"

void __thiscall FUN_11186140(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + -4);
  if (*(int *)(iVar1 + 0x10) == 2) {
    pvVar2 = operator_new(4);
    ((void)0);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = thunk_FUN_101b9a40(param_3);
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
  }
  ((void)0);
  return;
}


}

// Reference entry 111865f0; body size 607 bytes.
namespace recovered_111865f0 {
#line 1 "ENTRY_111865f0"

void FUN_111865f0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    sVar7 = (int)pcVar6 - (int)(param_1 + 1);
    puVar2 = (undefined4 *)thunk_FUN_1148b586(sVar7 + 0x11);
    *puVar2 = 1;
    puVar2[3] = sVar7;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(puVar2 + 4,param_1,sVar7);
    *(undefined1 *)((int)(puVar2 + 4) + sVar7) = 0;
  }
  cVar1 = thunk_FUN_1118abb0();
  if (cVar1 != '\0') {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      sVar7 = (int)pcVar6 - (int)(param_2 + 1);
      puVar3 = (undefined4 *)thunk_FUN_1148b586();
      puVar2 = puVar3 + 4;
      *puVar3 = 1;
      puVar3[3] = sVar7;
      puVar3[2] = 0;
      puVar3[1] = 0;
      memcpy(puVar2,param_2,sVar7);
      *(undefined1 *)((int)puVar2 + sVar7) = 0;
    }
    ((void)0);
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pcVar6 = param_3;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      sVar7 = (int)pcVar6 - (int)(param_3 + 1);
      puVar4 = (undefined4 *)thunk_FUN_1148b586();
      puVar3 = puVar4 + 4;
      *puVar4 = 1;
      puVar4[3] = sVar7;
      puVar4[2] = 0;
      puVar4[1] = 0;
      memcpy(puVar3,param_3,sVar7);
      *(undefined1 *)((int)puVar3 + sVar7) = 0;
    }
    ((void)0);
    if ((puVar3 != (undefined4 *)0x0) && ((int)puVar3[-4] < 0xffff)) {
      thunk_FUN_1123fce0();
    }
    ((void)0);
    if ((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) {
      thunk_FUN_1123fce0(puVar2 + -4);
    }
    ((void)0);
    thunk_FUN_1117ef30();
    ((void)0);
    thunk_FUN_101ba530();
    thunk_FUN_101ba530();
    thunk_FUN_1050fff0();
    ((void)0);
    if (((puVar3 != (undefined4 *)0x0) && ((int)puVar3[-4] < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(), iVar5 == 0)) {
      puVar3[-2] = 0;
      puVar3[-3] = 0;
      thunk_FUN_113cfb70();
      free(puVar3 + -4);
    }
    ((void)0);
    if (((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(), iVar5 == 0)) {
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      thunk_FUN_113cfb70();
      free(puVar2 + -4);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 111868f0; body size 607 bytes.
namespace recovered_111868f0 {
#line 1 "ENTRY_111868f0"

void FUN_111868f0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    sVar7 = (int)pcVar6 - (int)(param_1 + 1);
    puVar2 = (undefined4 *)thunk_FUN_1148b586(sVar7 + 0x11);
    *puVar2 = 1;
    puVar2[3] = sVar7;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(puVar2 + 4,param_1,sVar7);
    *(undefined1 *)((int)(puVar2 + 4) + sVar7) = 0;
  }
  cVar1 = thunk_FUN_1118abb0();
  if (cVar1 != '\0') {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      sVar7 = (int)pcVar6 - (int)(param_2 + 1);
      puVar3 = (undefined4 *)thunk_FUN_1148b586();
      puVar2 = puVar3 + 4;
      *puVar3 = 1;
      puVar3[3] = sVar7;
      puVar3[2] = 0;
      puVar3[1] = 0;
      memcpy(puVar2,param_2,sVar7);
      *(undefined1 *)((int)puVar2 + sVar7) = 0;
    }
    ((void)0);
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pcVar6 = param_3;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      sVar7 = (int)pcVar6 - (int)(param_3 + 1);
      puVar4 = (undefined4 *)thunk_FUN_1148b586();
      puVar3 = puVar4 + 4;
      *puVar4 = 1;
      puVar4[3] = sVar7;
      puVar4[2] = 0;
      puVar4[1] = 0;
      memcpy(puVar3,param_3,sVar7);
      *(undefined1 *)((int)puVar3 + sVar7) = 0;
    }
    ((void)0);
    if ((puVar3 != (undefined4 *)0x0) && ((int)puVar3[-4] < 0xffff)) {
      thunk_FUN_1123fce0();
    }
    ((void)0);
    if ((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) {
      thunk_FUN_1123fce0(puVar2 + -4);
    }
    ((void)0);
    thunk_FUN_1117ef30();
    ((void)0);
    thunk_FUN_101ba530();
    thunk_FUN_101ba530();
    thunk_FUN_1050fff0();
    ((void)0);
    if (((puVar3 != (undefined4 *)0x0) && ((int)puVar3[-4] < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(), iVar5 == 0)) {
      puVar3[-2] = 0;
      puVar3[-3] = 0;
      thunk_FUN_113cfb70();
      free(puVar3 + -4);
    }
    ((void)0);
    if (((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(), iVar5 == 0)) {
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      thunk_FUN_113cfb70();
      free(puVar2 + -4);
    }
  }
  ((void)0);
  return;
}


}
