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
extern int FUN_1003d5d7(...);
extern int FUN_1111f790(...);
extern int FUN_1111f950(...);
extern int FUN_1111f9f0(...);
extern int FUN_111200a0(...);
extern int FUN_111220a0(...);
extern int FUN_11122f80(...);
extern int free(...);
extern int memcpy(...);
extern int thunk_FUN_1111f330(...);
extern int thunk_FUN_11121910(...);
extern int thunk_FUN_11122ca0(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145d560(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 1111f790; body size 218 bytes.
namespace recovered_1111f790 {
#line 1 "ENTRY_1111f790"

void __fastcall FUN_1111f790(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;
  int iVar3;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar1 = *(int *)(param_1 + 0xc0c4);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = *(int *)(param_1 + 0xc0bc);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_1111f330();
  FUN_1003d5d7();
  thunk_FUN_111fc270();
  ((void)0);
  return;
}


}

// Reference entry 1111f950; body size 115 bytes.
namespace recovered_1111f950 {
#line 1 "ENTRY_1111f950"

void __fastcall FUN_1111f950(int *param_1)

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

// Reference entry 1111f9f0; body size 116 bytes.
namespace recovered_1111f9f0 {
#line 1 "ENTRY_1111f9f0"

void __fastcall FUN_1111f9f0(int param_1)

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

// Reference entry 111200a0; body size 242 bytes.
namespace recovered_111200a0 {
#line 1 "ENTRY_111200a0"

int __thiscall FUN_111200a0(int param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;
  int iVar3;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar1 = *(int *)(param_1 + 0xc0c4);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = *(int *)(param_1 + 0xc0bc);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_1111f330();
  FUN_1003d5d7();
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0d0);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 111220a0; body size 109 bytes.
namespace recovered_111220a0 {
#line 1 "ENTRY_111220a0"

undefined4 *
FUN_111220a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_1 = 0;
  ((void)0);
  thunk_FUN_111a10b0(param_1,"x-sonos-logo:%u:%08x:%s",param_2,*param_4,param_3,uVar1);
  ((void)0);
  return param_1;
}


}

// Reference entry 11122f80; body size 555 bytes.
namespace recovered_11122f80 {
#line 1 "ENTRY_11122f80"

void FUN_11122f80(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char *_Memory;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  char *local_48 [6];
  int local_30;
  undefined4 local_24;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = param_3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    sVar6 = (int)pcVar5 - (int)(param_3 + 1);
    puVar3 = (undefined4 *)thunk_FUN_1148b586();
    pcVar5 = (char *)(puVar3 + 4);
    *puVar3 = 1;
    puVar3[3] = sVar6;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(pcVar5,param_3,sVar6);
    pcVar5[sVar6] = '\0';
  }
  ((void)0);
  local_48[0] = pcVar5;
  local_48[0] = (char *)thunk_FUN_11122ca0(param_2);
  ((void)0);
  if (((pcVar5 != (char *)0x0) && (*(int *)(pcVar5 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(), iVar4 == 0)) {
    pcVar5[-0xffffffff00000008] = '\0';
    pcVar5[-0xffffffff00000007] = '\0';
    pcVar5[-0xffffffff00000006] = '\0';
    pcVar5[-0xffffffff00000005] = '\0';
    pcVar5[-0xffffffff0000000c] = '\0';
    pcVar5[-0xffffffff0000000b] = '\0';
    pcVar5[-0xffffffff0000000a] = '\0';
    pcVar5[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar5);
    free(pcVar5 + -0x10);
  }
  ((void)0);
  uVar2 = 0;
  if (local_48[0] != (char *)0x0) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      pcVar5 = param_3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      sVar6 = (int)pcVar5 - (int)(param_3 + 1);
      puVar3 = (undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11);
      *puVar3 = 1;
      puVar3[3] = sVar6;
      puVar3[2] = 0;
      puVar3[1] = 0;
      memcpy(puVar3 + 4,param_3,sVar6);
      *(undefined1 *)((int)(puVar3 + 4) + sVar6) = 0;
    }
    thunk_FUN_11121910(local_48,param_2);
    if (((local_48[0] != (char *)0x0) && (*local_48[0] != '\0')) &&
       ((iVar4 = thunk_FUN_1145d560(local_48[0]), iVar4 == 0 && (0 < local_30)))) {
      uVar2 = local_24;
    }
    pcVar5 = local_48[0];
    ((void)0);
    if (((local_48[0] != (char *)0x0) &&
        (_Memory = local_48[0] + -0x10, *(int *)(local_48[0] + -0x10) < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0(), iVar4 == 0)) {
      pcVar5[-0xffffffff00000008] = '\0';
      pcVar5[-0xffffffff00000007] = '\0';
      pcVar5[-0xffffffff00000006] = '\0';
      pcVar5[-0xffffffff00000005] = '\0';
      pcVar5[-0xffffffff0000000c] = '\0';
      pcVar5[-0xffffffff0000000b] = '\0';
      pcVar5[-0xffffffff0000000a] = '\0';
      pcVar5[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(pcVar5);
      free(_Memory);
    }
  }
  ((void)0);
  *param_1 = 0;
  thunk_FUN_111a10b0(param_1,"x-sonos-logo:%u:%08x:%s",param_2,uVar2);
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
