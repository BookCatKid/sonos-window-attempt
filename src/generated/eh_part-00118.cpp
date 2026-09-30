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
extern int FUN_11133a40(...);
extern int FUN_11134010(...);
extern int FUN_11134160(...);
extern int FUN_111344f0(...);
extern int free(...);
extern int thunk_FUN_11071d50(...);
extern int thunk_FUN_11074230(...);
extern uint thunk_FUN_11081a80(...);
extern uint thunk_FUN_11081b20(...);
extern int thunk_FUN_11081b80(...);
extern int thunk_FUN_11082e60(...);
extern int thunk_FUN_110ceea0(...);
extern int thunk_FUN_110d0500(...);
extern char thunk_FUN_110d3720(...);
extern char thunk_FUN_110d89d0(...);
extern int thunk_FUN_110d9580(...);
extern int thunk_FUN_110d9b30(...);
extern int thunk_FUN_1111d190(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_113cfb70(...);
// Reference entry 11133a40; body size 528 bytes.
namespace recovered_11133a40 {
#line 1 "ENTRY_11133a40"

void __fastcall FUN_11133a40(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_1c;
  uint local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((char)param_1[7] == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar5 = thunk_FUN_11081b20(param_1[2]);
    local_18 = 0;
    if (uVar5 != 0) {
      do {
        puVar6 = (undefined4 *)thunk_FUN_11082e60(local_18,param_1[2]);
        cVar3 = (**(code **)(*param_1 + 0xc))(puVar6,uVar4);
        if (cVar3 != '\0') {
          ((void)0);
          puVar1 = puVar6 + 1;
          local_14 = puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            thunk_FUN_1123fce0(puVar1);
          }
          ppuVar2 = (undefined4 **)param_1[5];
          ((void)0);
          if (ppuVar2 == (undefined4 **)param_1[6]) {
            thunk_FUN_11071d50(ppuVar2,&local_14);
          }
          else {
            *ppuVar2 = (undefined4 *)0x0;
            if ((ppuVar2 != &local_14) && (*ppuVar2 = puVar6, puVar6 != (undefined4 *)0x0)) {
              thunk_FUN_1123fce0(puVar1);
            }
            param_1[5] = param_1[5] + 4;
          }
          ((void)0);
          if ((puVar6 != (undefined4 *)0x0) && (iVar7 = thunk_FUN_1123fcd0(puVar1), iVar7 == 0)) {
            (**(code **)*puVar6)(1);
          }
          ((void)0);
        }
        local_18 = local_18 + 1;
      } while (local_18 < uVar5);
    }
    if ((char)param_1[3] != '\0') {
      uVar4 = thunk_FUN_11081a80();
      local_18 = 0;
      if (uVar4 != 0) {
        do {
          puVar6 = (undefined4 *)thunk_FUN_11081b80(local_18);
          cVar3 = (**(code **)(*param_1 + 0xc))(puVar6);
          if (cVar3 != '\0') {
            ((void)0);
            puVar1 = puVar6 + 1;
            local_1c = puVar6;
            if (puVar6 != (undefined4 *)0x0) {
              thunk_FUN_1123fce0(puVar1);
            }
            ppuVar2 = (undefined4 **)param_1[5];
            ((void)0);
            if (ppuVar2 == (undefined4 **)param_1[6]) {
              thunk_FUN_11071d50(ppuVar2,&local_1c);
            }
            else {
              *ppuVar2 = (undefined4 *)0x0;
              if ((ppuVar2 != &local_1c) && (*ppuVar2 = puVar6, puVar6 != (undefined4 *)0x0)) {
                thunk_FUN_1123fce0(puVar1);
              }
              param_1[5] = param_1[5] + 4;
            }
            ((void)0);
            if ((puVar6 != (undefined4 *)0x0) && (iVar7 = thunk_FUN_1123fcd0(puVar1), iVar7 == 0)) {
              (**(code **)*puVar6)(1);
            }
            ((void)0);
          }
          local_18 = local_18 + 1;
        } while (local_18 < uVar4);
      }
    }
    uVar8 = (**(code **)(*param_1 + 0x10))();
    thunk_FUN_11074230(param_1[4],param_1[5],param_1[5] - param_1[4] >> 2,uVar8);
  }
  ((void)0);
  return;
}


}

// Reference entry 11134010; body size 262 bytes.
namespace recovered_11134010 {
#line 1 "ENTRY_11134010"

bool FUN_11134010(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar2 = (undefined4 *)thunk_FUN_110ceea0(&local_14);
  ((void)0);
  puVar3 = (undefined4 *)thunk_FUN_110ceea0(&param_2);
  ((void)0);
  puVar7 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)*puVar2;
  }
  puVar8 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)*puVar3;
  }
  iVar4 = thunk_FUN_1111d190(puVar8,puVar7,uVar1);
  iVar6 = param_2;
  ((void)0);
  if ((param_2 != 0) && (_Memory = (void *)(param_2 + -0x10), *(int *)(param_2 + -0x10) < 0xffff)) {
    iVar5 = thunk_FUN_1123fcd0(_Memory);
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar6 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10));
    if (iVar6 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ((void)0);
  return iVar4 < 0;
}


}

// Reference entry 11134160; body size 262 bytes.
namespace recovered_11134160 {
#line 1 "ENTRY_11134160"

bool FUN_11134160(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar2 = (undefined4 *)thunk_FUN_110d0500(&local_14);
  ((void)0);
  puVar3 = (undefined4 *)thunk_FUN_110d0500(&param_2);
  ((void)0);
  puVar7 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)*puVar2;
  }
  puVar8 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)*puVar3;
  }
  iVar4 = thunk_FUN_1111d190(puVar8,puVar7,uVar1);
  iVar6 = param_2;
  ((void)0);
  if ((param_2 != 0) && (_Memory = (void *)(param_2 + -0x10), *(int *)(param_2 + -0x10) < 0xffff)) {
    iVar5 = thunk_FUN_1123fcd0(_Memory);
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar6 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10));
    if (iVar6 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ((void)0);
  return iVar4 < 0;
}


}

// Reference entry 111344f0; body size 449 bytes.
namespace recovered_111344f0 {
#line 1 "ENTRY_111344f0"

undefined1 __thiscall FUN_111344f0(int param_1,char *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char *_Memory;
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar3 = thunk_FUN_110d89d0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (cVar3 == '\0') {
    ((void)0);
    return 0;
  }
  cVar3 = thunk_FUN_110d3720();
  if (cVar3 == '\0') {
    ((void)0);
    return 1;
  }
  thunk_FUN_110d9580(&param_2,0);
  ((void)0);
  thunk_FUN_110d9580(&local_14,1);
  ((void)0);
  if ((((param_2 == (char *)0x0) || (*param_2 == '\0')) || (local_14 == (char *)0x0)) ||
     (pcVar6 = local_14, *local_14 == '\0')) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      pcVar6 = "";
      if (local_14 != (char *)0x0) {
        pcVar6 = local_14;
      }
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4))(pcVar6,1);
    }
    else {
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4))(param_2,1);
    }
    pcVar6 = local_14;
    if (iVar4 != 0) {
      puVar7 = &DAT_1186d2ee;
      if (*(undefined1 **)(iVar4 + 0x5c) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(iVar4 + 0x5c);
      }
      puVar1 = *(undefined1 **)(*(int *)(param_1 + 0x20) + 0x5c);
      puVar9 = &DAT_1186d2ee;
      if (puVar1 != (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if (puVar7 != puVar9) {
        iVar4 = thunk_FUN_110d9b30();
        iVar5 = thunk_FUN_110d9b30();
        pcVar6 = local_14;
        if (iVar5 == iVar4) {
          uVar8 = 1;
          goto LAB_11134607;
        }
      }
    }
  }
  uVar8 = 0;
LAB_11134607:
  ((void)0);
  if (((pcVar6 != (char *)0x0) && (*(int *)(pcVar6 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(pcVar6 + -0x10), iVar4 == 0)) {
    pcVar6[-0xffffffff00000008] = '\0';
    pcVar6[-0xffffffff00000007] = '\0';
    pcVar6[-0xffffffff00000006] = '\0';
    pcVar6[-0xffffffff00000005] = '\0';
    pcVar6[-0xffffffff0000000c] = '\0';
    pcVar6[-0xffffffff0000000b] = '\0';
    pcVar6[-0xffffffff0000000a] = '\0';
    pcVar6[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar6,*(undefined4 *)(pcVar6 + -4));
    free(pcVar6 + -0x10);
  }
  pcVar6 = param_2;
  ((void)0);
  if (((param_2 != (char *)0x0) && (_Memory = param_2 + -0x10, *(int *)(param_2 + -0x10) < 0xffff))
     && (iVar4 = thunk_FUN_1123fcd0(_Memory), iVar4 == 0)) {
    uVar2 = *(undefined4 *)(pcVar6 + -4);
    pcVar6[-0xffffffff00000008] = '\0';
    pcVar6[-0xffffffff00000007] = '\0';
    pcVar6[-0xffffffff00000006] = '\0';
    pcVar6[-0xffffffff00000005] = '\0';
    pcVar6[-0xffffffff0000000c] = '\0';
    pcVar6[-0xffffffff0000000b] = '\0';
    pcVar6[-0xffffffff0000000a] = '\0';
    pcVar6[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar6,uVar2);
    free(_Memory);
  }
  ((void)0);
  return uVar8;
}


}
