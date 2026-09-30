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
extern int FUN_111382d0(...);
extern int FUN_11138710(...);
extern int FUN_11138840(...);
extern int free(...);
extern int memcpy(...);
extern undefined4 thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_1037eae0(...);
extern char thunk_FUN_110d55a0(...);
extern char thunk_FUN_111a1030(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4540(...);
extern undefined4 thunk_FUN_111a5fc0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 111382d0; body size 485 bytes.
namespace recovered_111382d0 {
#line 1 "ENTRY_111382d0"

undefined4 __thiscall FUN_111382d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char *_Src;
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  size_t _Size;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  iVar5 = thunk_FUN_113b9ec0(uVar4,"GroupID");
  if (iVar5 == 0) {
    _Src = (char *)(param_1 + 0x20);
    if ((_Src == (char *)0x0) || (*_Src == '\0')) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      pcVar7 = _Src;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      _Size = (int)pcVar7 - (param_1 + 0x21);
      puVar6 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
      puVar1 = puVar6 + 4;
      *puVar6 = 1;
      puVar6[3] = _Size;
      puVar6[2] = 0;
      puVar6[1] = 0;
      memcpy(puVar1,_Src,_Size);
      *(undefined1 *)((int)puVar1 + _Size) = 0;
      param_2 = puVar1;
    }
    ((void)0);
    thunk_FUN_111a4540(&param_2);
    puVar1 = param_2;
    ((void)0);
    if ((param_2 != (undefined4 *)0x0) && (puVar6 = param_2 + -4, (int)param_2[-4] < 0xffff)) {
      iVar5 = thunk_FUN_1123fcd0(puVar6);
      if (iVar5 == 0) {
        puVar1[-2] = 0;
        puVar1[-3] = 0;
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    ((void)0);
    return 1;
  }
  iVar5 = thunk_FUN_113b9ec0(uVar4,"IsCompatible");
  puVar1 = param_3;
  if (iVar5 == 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    thunk_FUN_111a36f0();
    *puVar1 = 5;
    puVar1[2] = (uint)bVar3;
  }
  else {
    iVar5 = thunk_FUN_113b9ec0(uVar4,"PrimaryUDN");
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_101b9a40(param_1 + 0x44);
      ((void)0);
      thunk_FUN_111a4540(uVar4);
      thunk_FUN_101ba300();
      ((void)0);
      return 1;
    }
    iVar5 = thunk_FUN_113b9ec0(uVar4,"numZonePlayers");
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x6c);
      thunk_FUN_111a36f0();
      *puVar1 = 4;
      *(double *)(puVar1 + 2) = (double)iVar5;
      ((void)0);
      return 1;
    }
  }
  uVar4 = thunk_FUN_111a5fc0(param_2,puVar1);
  ((void)0);
  return uVar4;
}


}

// Reference entry 11138710; body size 234 bytes.
namespace recovered_11138710 {
#line 1 "ENTRY_11138710"

undefined1 __fastcall FUN_11138710(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char *_Src;
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  size_t _Size;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  _Src = (char *)(param_1 + 0x20);
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    pcVar5 = _Src;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar5 - (param_1 + 0x21);
    puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    local_14 = puVar3 + 4;
    *puVar3 = 1;
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(local_14,_Src,_Size);
    *(undefined1 *)((int)local_14 + _Size) = 0;
  }
  ((void)0);
  uVar2 = thunk_FUN_111a1030(":orphan");
  ((void)0);
  if ((local_14 != (undefined4 *)0x0) && ((int)local_14[-4] < 0xffff)) {
    iVar4 = thunk_FUN_1123fcd0(local_14 + -4);
    if (iVar4 == 0) {
      local_14[-2] = 0;
      local_14[-3] = 0;
      thunk_FUN_113cfb70(local_14,local_14[-1]);
      free(local_14 + -4);
    }
  }
  ((void)0);
  return uVar2;
}


}

// Reference entry 11138840; body size 331 bytes.
namespace recovered_11138840 {
#line 1 "ENTRY_11138840"

undefined4 __fastcall FUN_11138840(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char *_Src;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  size_t _Size;
  undefined4 *local_18;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  _Src = (char *)(param_1 + 0x20);
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    pcVar4 = _Src;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar4 - (param_1 + 0x21);
    puVar2 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    local_18 = puVar2 + 4;
    *puVar2 = 1;
    puVar2[3] = _Size;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(local_18,_Src,_Size);
    *(undefined1 *)((int)local_18 + _Size) = 0;
  }
  ((void)0);
  cVar1 = thunk_FUN_111a1030(":orphan");
  ((void)0);
  if ((local_18 != (undefined4 *)0x0) && ((int)local_18[-4] < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(local_18 + -4);
    if (iVar3 == 0) {
      local_18[-2] = 0;
      local_18[-3] = 0;
      thunk_FUN_113cfb70(local_18,local_18[-1]);
      free(local_18 + -4);
    }
  }
  ((void)0);
  if (cVar1 != '\0') {
    iVar3 = thunk_FUN_1037eae0();
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0xa70) != '\0')) {
      cVar1 = thunk_FUN_110d55a0();
      if (cVar1 == '\0') {
        ((void)0);
        return 1;
      }
    }
    ((void)0);
    return 0;
  }
  ((void)0);
  return 0;
}


}
