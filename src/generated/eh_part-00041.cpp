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
extern int FUN_110d2750(...);
extern int FUN_110d2c00(...);
extern int FUN_110d2d80(...);
extern int FUN_110d3170(...);
extern int FUN_110d3420(...);
extern int FUN_110d34e0(...);
extern int free(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_110d9580(...);
extern char thunk_FUN_111a06b0(...);
extern char thunk_FUN_111a0e70(...);
extern int thunk_FUN_111a10b0(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern undefined4 thunk_FUN_111a3310(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_1122c300(...);
extern int thunk_FUN_1123fcd0(...);
extern char thunk_FUN_1127caf0(...);
extern int thunk_FUN_113cfb70(...);
// Reference entry 110d2750; body size 161 bytes.
namespace recovered_110d2750 {
#line 1 "ENTRY_110d2750"

void FUN_110d2750(void)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  uVar2 = thunk_FUN_111a3310(&local_14);
  ((void)0);
  thunk_FUN_101ba530(uVar2);
  ((void)0);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10),uVar1);
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 110d2c00; body size 296 bytes.
namespace recovered_110d2c00 {
#line 1 "ENTRY_110d2c00"

void __thiscall
FUN_110d2c00(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,int param_6)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  int local_18;
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  piVar1 = *(int **)(param_1 + 0x1c);
  local_28[0] = 0;
  local_38[0] = 0;
  ((void)0);
  local_18 = param_1;
  local_14 = piVar1;
  piVar4 = (int *)(**(code **)(*param_4 + 0xc))(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  cVar3 = (**(code **)(*piVar4 + 4))();
  while (cVar3 != '\0') {
    (**(code **)(*piVar4 + 8))(local_28);
    (**(code **)(*param_4 + 4))(local_28,local_38);
    iVar2 = *piVar1;
    uVar5 = thunk_FUN_111a32a0();
    uVar5 = thunk_FUN_111a32a0(uVar5);
    (**(code **)(iVar2 + 4))(uVar5);
    cVar3 = (**(code **)(*piVar4 + 4))();
    piVar1 = local_14;
    param_1 = local_18;
  }
  (**(code **)*piVar4)(1);
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  puVar6 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_1 + 0x5c);
  }
  thunk_FUN_1122c300(param_2,puVar6,param_3);
  if (0 < param_6) {
    do {
      (**(code **)(**(int **)(param_1 + 0x1c) + 8))(param_5);
      param_5 = param_5 + 0x90;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  ((void)0);
  return;
}


}

// Reference entry 110d2d80; body size 201 bytes.
namespace recovered_110d2d80 {
#line 1 "ENTRY_110d2d80"

undefined4 * __thiscall FUN_110d2d80(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;


  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_2 = 0;
  ((void)0);
  cVar3 = thunk_FUN_111a0e70("RINCON_");
  if ((cVar3 != '\0') && (pcVar1 = *(char **)(param_1 + 0x5c), pcVar1 != (char *)0x0)) {
    uVar6 = *(uint *)(pcVar1 + -0xc);
    if (uVar6 == 0) {
      pcVar5 = pcVar1;
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      uVar6 = (int)pcVar5 - (int)(pcVar1 + 1);
      *(uint *)(pcVar1 + -0xc) = uVar6;
    }
    if (0x12 < uVar6) {
      puVar2 = *(undefined1 **)(param_1 + 0x5c);
      puVar7 = &DAT_1186d2ee;
      if (puVar2 != (undefined1 *)0x0) {
        puVar7 = puVar2;
      }
      thunk_FUN_111a10b0(param_2,"%.2s:%.2s:%.2s:%.2s:%.2s:%.2s",puVar7 + 7,puVar7 + 9,puVar7 + 0xb,
                         puVar7 + 0xd,puVar7 + 0xf,puVar7 + 0x11,uVar4);
    }
  }
  ((void)0);
  return param_2;
}


}

// Reference entry 110d3170; body size 330 bytes.
namespace recovered_110d3170 {
#line 1 "ENTRY_110d3170"

undefined1 __fastcall FUN_110d3170(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = 0;
  local_18 = 0;
  cVar1 = thunk_FUN_1127caf0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if ((cVar1 == '\0') || (*(uint *)(param_1 + 0x568) < 2)) {
LAB_110d3206:
    local_11 = 0;
  }
  else {
    thunk_FUN_110d9580(&local_20,0);
    ((void)0);
    uVar3 = 1;
    local_18 = 1;
    cVar1 = thunk_FUN_111a06b0(param_1 + 0x5c);
    if (cVar1 == '\0') {
      thunk_FUN_110d9580(&local_1c,1);
      ((void)0);
      uVar3 = 3;
      local_18 = 3;
      cVar1 = thunk_FUN_111a06b0(param_1 + 0x5c);
      if (cVar1 == '\0') goto LAB_110d3206;
    }
    local_11 = 1;
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = uVar3 & 0xfffffffd;
    ((void)0);
    local_18 = uVar3;
    if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
      iVar2 = thunk_FUN_1123fcd0((void *)(local_1c + -0x10));
      if (iVar2 == 0) {
        *(undefined4 *)(local_1c + -8) = 0;
        *(undefined4 *)(local_1c + -0xc) = 0;
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
        free((void *)(local_1c + -0x10));
      }
    }
  }
  if ((uVar3 & 1) != 0) {
    ((void)0);
    if ((local_20 != 0) && (*(int *)(local_20 + -0x10) < 0xffff)) {
      iVar2 = thunk_FUN_1123fcd0((void *)(local_20 + -0x10));
      if (iVar2 == 0) {
        *(undefined4 *)(local_20 + -8) = 0;
        *(undefined4 *)(local_20 + -0xc) = 0;
        thunk_FUN_113cfb70(local_20,*(undefined4 *)(local_20 + -4));
        free((void *)(local_20 + -0x10));
      }
    }
  }
  ((void)0);
  return local_11;
}


}

// Reference entry 110d3420; body size 148 bytes.
namespace recovered_110d3420 {
#line 1 "ENTRY_110d3420"

undefined1 FUN_110d3420(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110d9580(&local_14,0);
  if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(local_14 + -0x10,uVar2);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(local_14 + -4);
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(local_14 + -0x10);
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 110d34e0; body size 148 bytes.
namespace recovered_110d34e0 {
#line 1 "ENTRY_110d34e0"

undefined1 FUN_110d34e0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110d9580(&local_14,1);
  if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(local_14 + -0x10,uVar2);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(local_14 + -4);
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(local_14 + -0x10);
    }
  }
  ((void)0);
  return uVar4;
}


}
