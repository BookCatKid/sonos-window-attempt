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
extern int FUN_110d9580(...);
extern int FUN_110d98e0(...);
extern int FUN_110d9ca0(...);
extern int free(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba300(...);
extern undefined4 thunk_FUN_110d9820(...);
extern int thunk_FUN_11138290(...);
extern char thunk_FUN_111a06b0(...);
extern int thunk_FUN_1123fcd0(...);
extern undefined4 thunk_FUN_1127c100(...);
extern undefined4 thunk_FUN_1127c5f0(...);
extern int thunk_FUN_1127c6d0(...);
extern char thunk_FUN_1127caf0(...);
extern char thunk_FUN_1127cb00(...);
extern int thunk_FUN_113cfb70(...);
// Reference entry 110d9580; body size 332 bytes.
namespace recovered_110d9580 {
#line 1 "ENTRY_110d9580"

undefined4 * __thiscall FUN_110d9580(undefined1 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *_Memory;
  undefined1 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (param_1[0xa70] == '\0') goto LAB_110d96af;
  local_14 = param_1;
  thunk_FUN_110d9820(&local_14);
  puVar1 = local_14;
  ((void)0);
  puVar6 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar6 = local_14;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(puVar6,1,uVar3);
  if (iVar4 == 0) {
    puVar6 = &DAT_1186d2ee;
    if (puVar1 != (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 8))(puVar6);
    if (iVar4 != 0) goto LAB_110d95f5;
  }
  else {
LAB_110d95f5:
    cVar2 = thunk_FUN_1127caf0();
    if (cVar2 != '\0') {
      if (param_3 == 0) {
        uVar5 = thunk_FUN_1127c100();
        thunk_FUN_101b9a40(uVar5);
        thunk_FUN_101ba300();
        ((void)0);
        return param_2;
      }
      if (param_3 == 1) {
        uVar5 = thunk_FUN_1127c5f0();
        thunk_FUN_101b9a40(uVar5);
        thunk_FUN_101ba300();
        ((void)0);
        return param_2;
      }
    }
  }
  ((void)0);
  if ((puVar1 != (undefined1 *)0x0) && (_Memory = (int *)(puVar1 + -0x10), *_Memory < 0xffff)) {
    iVar4 = thunk_FUN_1123fcd0(_Memory);
    if (iVar4 == 0) {
      *(undefined4 *)(puVar1 + -8) = 0;
      *(undefined4 *)(puVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(puVar1,*(undefined4 *)(puVar1 + -4));
      free(_Memory);
    }
  }
LAB_110d96af:
  *param_2 = 0;
  ((void)0);
  return param_2;
}


}

// Reference entry 110d98e0; body size 474 bytes.
namespace recovered_110d98e0 {
#line 1 "ENTRY_110d98e0"

undefined4 * __thiscall FUN_110d98e0(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  void *pvVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_20;
  int local_1c;
  undefined4 local_18;
  char local_12;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(char *)(param_1 + 0xa70) != '\0') {
    cVar2 = thunk_FUN_1127caf0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (((cVar2 != '\0') && (1 < *(uint *)(param_1 + 0x568))) &&
       (cVar2 = thunk_FUN_1127cb00(), cVar2 != '\0')) {
      pcVar3 = (char *)thunk_FUN_1127c6d0(2);
LAB_110d994e:
      thunk_FUN_101b9a40(pcVar3);
      ((void)0);
      return param_2;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(param_1 + 0x4fa);
    if (iVar4 != 0) {
      local_11 = '\0';
      piVar5 = (int *)thunk_FUN_11138290();
      uVar9 = 0;
      uVar8 = piVar5[1] - *piVar5 >> 2;
      if (uVar8 != 0) {
        do {
          local_18 = *(undefined4 *)(*piVar5 + uVar9 * 4);
          uVar6 = thunk_FUN_110d9820(&local_20);
          ((void)0);
          thunk_FUN_110d9820(&local_1c);
          ((void)0);
          local_12 = thunk_FUN_111a06b0(uVar6);
          iVar4 = local_1c;
          ((void)0);
          if (((local_1c != 0) &&
              (pvVar1 = (void *)(local_1c + -0x10), *(int *)(local_1c + -0x10) < 0xffff)) &&
             (iVar7 = thunk_FUN_1123fcd0(pvVar1), iVar7 == 0)) {
            *(undefined4 *)(iVar4 + -8) = 0;
            *(undefined4 *)(iVar4 + -0xc) = 0;
            thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
            free(pvVar1);
          }
          iVar4 = local_20;
          ((void)0);
          if (((local_20 != 0) &&
              (pvVar1 = (void *)(local_20 + -0x10), *(int *)(local_20 + -0x10) < 0xffff)) &&
             (iVar7 = thunk_FUN_1123fcd0(pvVar1), iVar7 == 0)) {
            *(undefined4 *)(iVar4 + -8) = 0;
            *(undefined4 *)(iVar4 + -0xc) = 0;
            thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
            free(pvVar1);
          }
          ((void)0);
          if ((local_12 != '\0') && (pcVar3 = (char *)thunk_FUN_1127c6d0(1), *pcVar3 != '\0')) {
            if (local_11 != '\0') goto LAB_110d994e;
            local_11 = '\x01';
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
    }
  }
  *param_2 = 0;
  ((void)0);
  return param_2;
}


}

// Reference entry 110d9ca0; body size 88 bytes.
namespace recovered_110d9ca0 {
#line 1 "ENTRY_110d9ca0"

void __fastcall FUN_110d9ca0(int *param_1)

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
