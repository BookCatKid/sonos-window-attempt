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

extern undefined4 DAT_1187b440;
extern undefined4 DAT_11880fd8;
extern undefined4 DAT_1191f604;
extern undefined4 DAT_11921034;
extern undefined4 DAT_12126b84;
extern int FUN_1114ea70(...);
extern int FUN_1114ec20(...);
extern int FUN_11150360(...);
extern int FUN_11150860(...);
extern int FUN_11150d50(...);
extern int FUN_11151510(...);
extern int free(...);
extern int memcpy(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_110f69f0(...);
extern int thunk_FUN_1114e340(...);
extern int thunk_FUN_11194190(...);
extern int thunk_FUN_11194cd0(...);
extern undefined4 thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4540(...);
extern int thunk_FUN_111a5f10(...);
extern undefined4 thunk_FUN_111a5fc0(...);
extern int thunk_FUN_111a6a30(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 1114ea70; body size 341 bytes.
namespace recovered_1114ea70 {
#line 1 "ENTRY_1114ea70"

void __thiscall
FUN_1114ea70(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  size_t _Size;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar6 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  piVar2 = *(int **)((int)param_4 + 4);
  iVar8 = *piVar2;
  pcVar3 = (char *)piVar2[6];
  iVar4 = piVar2[1];
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 4) = param_2;
    thunk_FUN_101ba530(param_3);
    *(undefined4 *)(param_1 + 0xc) = param_5;
    *(undefined1 *)(param_1 + 0x10) = 1;
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      _Size = (int)pcVar9 - (int)(pcVar3 + 1);
      puVar7 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,uVar6);
      pcVar9 = (char *)(puVar7 + 4);
      *puVar7 = 1;
      puVar7[3] = _Size;
      puVar7[2] = 0;
      puVar7[1] = 0;
      memcpy(pcVar9,pcVar3,_Size);
      pcVar9[_Size] = '\0';
    }
    ((void)0);
    param_4 = pcVar9;
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      thunk_FUN_1114e340(iVar4,iVar8 == 1);
      ((void)0);
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 0;
      (**(code **)(**(int **)(param_1 + 4) + 4))(&param_4,0);
      ((void)0);
    }
    pcVar3 = param_4;
    if ((param_4 != (char *)0x0) && (pcVar9 = param_4 + -0x10, *(int *)(param_4 + -0x10) < 0xffff))
    {
      iVar8 = thunk_FUN_1123fcd0(pcVar9);
      if (iVar8 == 0) {
        uVar5 = *(undefined4 *)(pcVar3 + -4);
        pcVar3[-0xffffffff00000008] = '\0';
        pcVar3[-0xffffffff00000007] = '\0';
        pcVar3[-0xffffffff00000006] = '\0';
        pcVar3[-0xffffffff00000005] = '\0';
        pcVar3[-0xffffffff0000000c] = '\0';
        pcVar3[-0xffffffff0000000b] = '\0';
        pcVar3[-0xffffffff0000000a] = '\0';
        pcVar3[-0xffffffff00000009] = '\0';
        thunk_FUN_113cfb70(pcVar3,uVar5);
        free(pcVar9);
      }
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1114ec20; body size 303 bytes.
namespace recovered_1114ec20 {
#line 1 "ENTRY_1114ec20"

void __thiscall
FUN_1114ec20(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            char *param_6,undefined4 param_7)

{
  undefined4 ghidra_cookie_frame_slot;
  char *_Memory;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t _Size;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(char **)(param_1 + 4) = param_2;
    thunk_FUN_101ba530(param_3);
    *(undefined4 *)(param_1 + 0xc) = param_7;
    *(undefined1 *)(param_1 + 0x10) = 1;
    if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = param_6;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      _Size = (int)pcVar6 - (int)(param_6 + 1);
      puVar4 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,uVar3);
      pcVar6 = (char *)(puVar4 + 4);
      *puVar4 = 1;
      puVar4[3] = _Size;
      puVar4[2] = 0;
      puVar4[1] = 0;
      memcpy(pcVar6,param_6,_Size);
      pcVar6[_Size] = '\0';
    }
    ((void)0);
    param_2 = pcVar6;
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      thunk_FUN_1114e340(param_4,param_5);
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 0;
      (**(code **)(**(int **)(param_1 + 4) + 4))(&param_2,0);
    }
    pcVar6 = param_2;
    ((void)0);
    if ((param_2 != (char *)0x0) && (_Memory = param_2 + -0x10, *(int *)(param_2 + -0x10) < 0xffff))
    {
      iVar5 = thunk_FUN_1123fcd0(_Memory);
      if (iVar5 == 0) {
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
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 11150360; body size 193 bytes.
namespace recovered_11150360 {
#line 1 "ENTRY_11150360"

void __fastcall FUN_11150360(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  thunk_FUN_11194190(*(undefined4 *)(param_1 + -8),0);
  ((void)0);
  sVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 4))
                    (local_30,1,*(undefined4 *)(param_1 + 0x14),&DAT_11880fd8,0,0,&local_14,
                     &local_18,&local_1c,uVar2);
  if (sVar1 == 0) {
    iVar3 = thunk_FUN_11194cd0();
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 != 0) {
      thunk_FUN_111a6a30("NumberReturned",local_14);
      thunk_FUN_111a6a30("TotalMatches",local_18);
      thunk_FUN_111a6a30("UpdateID",local_1c);
    }
  }
  thunk_FUN_110f69f0();
  ((void)0);
  return;
}


}

// Reference entry 11150860; body size 358 bytes.
namespace recovered_11150860 {
#line 1 "ENTRY_11150860"

undefined4 __thiscall FUN_11150860(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  iVar4 = thunk_FUN_113b9ec0(uVar3,"upnpResult");
  puVar2 = param_3;
  if (iVar4 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x42a);
    thunk_FUN_111a36f0();
    *puVar2 = 4;
    *(double *)(puVar2 + 2) = (double)uVar1;
    ((void)0);
    return 1;
  }
  iVar4 = thunk_FUN_113b9ec0(uVar3,&DAT_1191f604);
  if (iVar4 == 0) {
    thunk_FUN_111a4540(*(int *)(param_1 + 0x20) + 0x18);
    ((void)0);
    return 1;
  }
  iVar4 = thunk_FUN_113b9ec0(uVar3,"action");
  puVar2 = param_3;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    thunk_FUN_111a36f0();
    *puVar2 = 4;
    *(double *)(puVar2 + 2) = (double)iVar4;
    ((void)0);
    return 1;
  }
  iVar4 = thunk_FUN_113b9ec0(uVar3,&DAT_1187b440);
  if (iVar4 == 0) {
    thunk_FUN_101b9a40(param_1 + 0x28);
    ((void)0);
    thunk_FUN_111a4540(&param_2);
    thunk_FUN_101ba300();
    ((void)0);
    return 1;
  }
  uVar3 = thunk_FUN_111a5fc0(param_2,param_3);
  ((void)0);
  return uVar3;
}


}

// Reference entry 11150d50; body size 153 bytes.
namespace recovered_11150d50 {
#line 1 "ENTRY_11150d50"

undefined4 __fastcall FUN_11150d50(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  local_20[0] = 0;
  ((void)0);
  iVar1 = thunk_FUN_111a2ec0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  uVar2 = 0;
  if (iVar1 != 0) {
    thunk_FUN_111a5f10(&DAT_11921034,local_20);
    thunk_FUN_111a32a0();
    uVar2 = (**(code **)(*param_1 + 0xc0))(iVar1);
  }
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return uVar2;
}


}

// Reference entry 11151510; body size 281 bytes.
namespace recovered_11151510 {
#line 1 "ENTRY_11151510"

undefined4 __thiscall FUN_11151510(int *param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *_Src;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  size_t _Size;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  uVar4 = thunk_FUN_111a2df0();
  _Src = (char *)(**(code **)(*param_1 + 0x4c))(uVar3,uVar4);
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    pcVar7 = _Src;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar7 - (int)(_Src + 1);
    puVar5 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
    puVar1 = puVar5 + 4;
    *puVar5 = 1;
    puVar5[3] = _Size;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_2 = puVar1;
  }
  ((void)0);
  thunk_FUN_111a4540(&param_2);
  puVar1 = param_2;
  ((void)0);
  if ((param_2 != (undefined4 *)0x0) && (puVar5 = param_2 + -4, (int)param_2[-4] < 0xffff)) {
    iVar6 = thunk_FUN_1123fcd0(puVar5);
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  ((void)0);
  return 0;
}


}
