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
extern char FUN_10016450(...);
extern char FUN_1006f9dd(...);
extern char FUN_10091f7e(...);
extern char FUN_10092807(...);
extern int FUN_11134b90(...);
extern int FUN_11134d70(...);
extern int FUN_11136a00(...);
extern int FUN_11137010(...);
extern int FUN_11137360(...);
extern int FUN_11138070(...);
extern int free(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern undefined4 thunk_FUN_101c82e0(...);
extern int thunk_FUN_10bfa4b0(...);
extern int thunk_FUN_110724f0(...);
extern int thunk_FUN_110757c0(...);
extern int thunk_FUN_110c59b0(...);
extern char thunk_FUN_110d3140(...);
extern char thunk_FUN_110d3ba0(...);
extern char thunk_FUN_110d3c60(...);
extern char thunk_FUN_110d5410(...);
extern char thunk_FUN_110d5780(...);
extern char thunk_FUN_110d5a80(...);
extern char thunk_FUN_110d8930(...);
extern char thunk_FUN_110d8c80(...);
extern char thunk_FUN_110d8d20(...);
extern int thunk_FUN_110d9290(...);
extern int thunk_FUN_110d9820(...);
extern undefined4 thunk_FUN_110d9b30(...);
extern char thunk_FUN_111a0940(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern char thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_113cfb70(...);
extern char thunk_FUN_11457320(...);
// Reference entry 11134b90; body size 382 bytes.
namespace recovered_11134b90 {
#line 1 "ENTRY_11134b90"

undefined4 __thiscall FUN_11134b90(int param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;


  iVar2 = param_2;
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (((((param_2 == 0) ||
        (cVar3 = thunk_FUN_110d5780(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot), cVar3 == '\0')) ||
       (*(char *)(iVar2 + 0x520) == '\0')) ||
      ((*(int *)(iVar2 + 0x1c) == 0 || (cVar3 = FUN_10091f7e(), cVar3 == '\0')))) ||
     (cVar3 = thunk_FUN_110d5410(), cVar3 != '\0')) {
    ((void)0);
    return 0;
  }
  if ((*(char *)(param_1 + 0x24) == '\0') && (cVar3 = thunk_FUN_110d3140(), cVar3 != '\0')) {
    ((void)0);
    return 0;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (cVar3 = FUN_1006f9dd(), cVar3 != '\0')) {
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x1c) == 0) {
      ((void)0);
      return 0;
    }
    cVar3 = thunk_FUN_11457320();
    if (cVar3 == '\0') {
      ((void)0);
      return 0;
    }
    iVar5 = *(int *)(param_1 + 4);
    puVar4 = (undefined4 *)thunk_FUN_110d9290(&param_2);
    ((void)0);
    puVar7 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)*puVar4;
    }
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x1c) + 4))(puVar7,1);
    ((void)0);
    thunk_FUN_101ba300();
    if (iVar5 == 0) {
      ((void)0);
      return 0;
    }
    cVar3 = thunk_FUN_110d3c60();
    puVar7 = *(undefined1 **)(iVar5 + 0x5c);
    puVar1 = *(undefined1 **)(iVar2 + 0x5c);
    if (cVar3 == '\0') {
      puVar6 = &DAT_1186d2ee;
      if (puVar7 != (undefined1 *)0x0) {
        puVar6 = puVar7;
      }
      puVar7 = &DAT_1186d2ee;
      if (puVar1 != (undefined1 *)0x0) {
        puVar7 = puVar1;
      }
      if (puVar6 == puVar7) {
        ((void)0);
        return 0;
      }
      cVar3 = thunk_FUN_110d3c60();
    }
    else {
      puVar6 = &DAT_1186d2ee;
      if (puVar7 != (undefined1 *)0x0) {
        puVar6 = puVar7;
      }
      puVar7 = &DAT_1186d2ee;
      if (puVar1 != (undefined1 *)0x0) {
        puVar7 = puVar1;
      }
      if (puVar6 == puVar7) {
        ((void)0);
        return 0;
      }
      cVar3 = thunk_FUN_110d3ba0();
    }
    if (cVar3 == '\0') {
      ((void)0);
      return 0;
    }
    ((void)0);
    return 1;
  }
  ((void)0);
  return 1;
}


}

// Reference entry 11134d70; body size 580 bytes.
namespace recovered_11134d70 {
#line 1 "ENTRY_11134d70"

undefined4 __thiscall FUN_11134d70(int param_1,uint param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *_Memory;
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined4 *local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  bVar9 = false;
  local_18 = (undefined4 *)0x0;
  if (param_2 == 0) {
    return 0;
  }
  ((void)0);
  cVar2 = thunk_FUN_110d5780(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (cVar2 == '\0') {
    ((void)0);
    return 0;
  }
  if (*(char *)(param_2 + 0x520) == '\0') {
    ((void)0);
    return 0;
  }
  if ((*(char *)(param_1 + 0x25) == '\0') && (cVar2 = thunk_FUN_110d3140(), cVar2 != '\0')) {
    ((void)0);
    return 0;
  }
  cVar2 = thunk_FUN_110d8c80();
  if (cVar2 == '\0') {
    ((void)0);
    return 0;
  }
  if ((*(int *)(param_2 + 0x1c) != 0) && (cVar2 = FUN_10091f7e(), cVar2 != '\0')) {
    ((void)0);
    return 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 0x20) + 0x5c);
    puVar7 = &DAT_1186d2ee;
    if (puVar6 != (undefined1 *)0x0) {
      puVar7 = puVar6;
    }
    puVar6 = &DAT_1186d2ee;
    if (*(undefined1 **)(param_2 + 0x5c) != (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(param_2 + 0x5c);
    }
    if (puVar7 == puVar6) {
      ((void)0);
      return 0;
    }
  }
  cVar2 = thunk_FUN_110d3140();
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)thunk_FUN_110d9820(&local_18);
    bVar9 = true;
    bVar1 = true;
    puVar6 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*puVar3;
    }
    puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x20) + 0x5c);
    puVar8 = &DAT_1186d2ee;
    if (puVar7 != (undefined1 *)0x0) {
      puVar8 = puVar7;
    }
    if (puVar8 == puVar6) goto LAB_11134e67;
  }
  bVar1 = false;
LAB_11134e67:
  puVar3 = local_18;
  if (bVar9) {
    ((void)0);
    if (((local_18 != (undefined4 *)0x0) && (_Memory = local_18 + -4, (int)local_18[-4] < 0xffff))
       && (iVar4 = thunk_FUN_1123fcd0(_Memory), iVar4 == 0)) {
      puVar3[-2] = 0;
      puVar3[-3] = 0;
      thunk_FUN_113cfb70(puVar3,puVar3[-1]);
      free(_Memory);
    }
    ((void)0);
  }
  if (!bVar1) {
    if ((*(char *)(param_1 + 0x26) == '\0') && (cVar2 = thunk_FUN_110d8d20(), cVar2 != '\0')) {
      ((void)0);
      return 1;
    }
    cVar2 = thunk_FUN_110d8930();
    if ((((cVar2 == '\0') || (*(int *)(param_1 + 0x20) == 0)) ||
        (cVar2 = thunk_FUN_110d8930(), cVar2 != '\0')) &&
       (((cVar2 = FUN_10016450(), cVar2 != '\0' || (*(int *)(param_1 + 0x20) == 0)) ||
        (cVar2 = FUN_10092807(), cVar2 != '\0')))) {
      iVar4 = *(int *)(param_1 + 0x28);
      param_2 = 0;
      if ((*(int *)(param_1 + 0x2c) - iVar4) / 0xc != 0) {
        local_14 = 0;
        do {
          if (1 < (uint)(*(int *)(local_14 + 4 + iVar4) - *(int *)(local_14 + iVar4) >> 2)) {
            uVar5 = thunk_FUN_110d9b30();
            cVar2 = thunk_FUN_110d5a80(uVar5);
            if (cVar2 != '\0') {
              ((void)0);
              return 1;
            }
          }
          local_14 = local_14 + 0xc;
          iVar4 = *(int *)(param_1 + 0x28);
          param_2 = param_2 + 1;
        } while (param_2 < (uint)((*(int *)(param_1 + 0x2c) - iVar4) / 0xc));
      }
    }
  }
  ((void)0);
  return 0;
}


}

// Reference entry 11136a00; body size 171 bytes.
namespace recovered_11136a00 {
#line 1 "ENTRY_11136a00"

undefined1 * __thiscall FUN_11136a00(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_20 [8];
  int local_18;
  char local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = param_1 + 0x30;
  local_14 = thunk_FUN_112a7f50(local_18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  puVar3 = &DAT_1186d2ee;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  uVar1 = thunk_FUN_101c82e0(puVar3);
  iVar2 = thunk_FUN_10bfa4b0(local_20,param_2,uVar1);
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == *(int *)(param_1 + 8)) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = &DAT_1186d2ee;
    if (*(undefined1 **)(iVar2 + 0xc) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(iVar2 + 0xc);
    }
  }
  if (local_14 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  ((void)0);
  return puVar3;
}


}

// Reference entry 11137010; body size 161 bytes.
namespace recovered_11137010 {
#line 1 "ENTRY_11137010"

bool __thiscall FUN_11137010(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  char local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = param_1 + 0x30;
  cVar1 = thunk_FUN_112a7f50(local_18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  local_14 = cVar1;
  thunk_FUN_110724f0(local_24,param_2);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar2 == '\0') {
      iVar3 = *(int *)(param_1 + 0x24);
      iVar4 = local_1c;
      goto LAB_11137087;
    }
  }
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = iVar3;
LAB_11137087:
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(local_18);
  }
  ((void)0);
  return iVar4 != iVar3;
}


}

// Reference entry 11137360; body size 130 bytes.
namespace recovered_11137360 {
#line 1 "ENTRY_11137360"

void __thiscall FUN_11137360(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined1 local_20 [8];
  int local_18;
  char local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  param_1 = param_1 + 0x30;
  local_18 = param_1;
  cVar1 = thunk_FUN_112a7f50(param_1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  local_14 = cVar1;
  thunk_FUN_110c59b0(local_20,param_2);
  thunk_FUN_101ba530(param_3);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1);
  }
  ((void)0);
  return;
}


}

// Reference entry 11138070; body size 193 bytes.
namespace recovered_11138070 {
#line 1 "ENTRY_11138070"

void __thiscall FUN_11138070(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_18 [4];
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(param_2 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  }
  cVar2 = thunk_FUN_110d3140();
  if ((cVar2 == '\0') || (*(char *)((int)param_2 + 0x51e) == '\0')) {
    bVar1 = false;
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x6c) * 4;
  }
  else {
    iVar3 = *(int *)(param_1 + 100);
    bVar1 = true;
  }
  thunk_FUN_110757c0(local_18,iVar3,&local_14);
  if (!bVar1) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  ((void)0);
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(param_2 + 1);
    if (iVar3 == 0) {
      (**(code **)*param_2)(1);
    }
  }
  ((void)0);
  return;
}


}
