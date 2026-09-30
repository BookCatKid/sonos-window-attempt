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
extern char FUN_1009a598(...);
extern int FUN_110d7b40(...);
extern int FUN_110d8240(...);
extern int FUN_110d8360(...);
extern int FUN_110d84b0(...);
extern int FUN_110d8670(...);
extern int FUN_110d8a70(...);
extern int free(...);
extern int memcpy(...);
extern int thunk_FUN_110cc7f0(...);
extern char thunk_FUN_111a0720(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_113cfb70(...);
extern undefined1 thunk_FUN_11456f80(...);
extern char thunk_FUN_11458060(...);
extern int thunk_FUN_11458e90(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 110d7b40; body size 353 bytes.
namespace recovered_110d7b40 {
#line 1 "ENTRY_110d7b40"

void __thiscall FUN_110d7b40(int param_1,char *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *_Memory;
  char *pcVar5;
  size_t _Size;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(char *)(param_1 + 0xa71) != '\0') {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = (char *)0x0;
    }
    else {
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _Size = (int)pcVar5 - (int)(param_2 + 1);
      puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      puVar2 = puVar3 + 4;
      *puVar3 = 1;
      puVar3[3] = _Size;
      puVar3[2] = 0;
      puVar3[1] = 0;
      memcpy(puVar2,param_2,_Size);
      *(undefined1 *)((int)puVar2 + _Size) = 0;
      param_2 = (char *)puVar2;
    }
    ((void)0);
    local_14 = (undefined4 *)param_2;
    if (&local_14 != (undefined4 **)(param_1 + 0xa78)) {
      puVar2 = *(undefined4 **)(param_1 + 0xa78);
      if (((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) &&
         (iVar4 = thunk_FUN_1123fcd0(puVar2 + -4), iVar4 == 0)) {
        puVar2[-2] = 0;
        puVar2[-3] = 0;
        thunk_FUN_113cfb70(puVar2,puVar2[-1]);
        free(puVar2 + -4);
      }
      *(char **)(param_1 + 0xa78) = param_2;
      if ((param_2 != (char *)0x0) && (*(int *)((int)param_2 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((undefined4 *)((int)param_2 + -0x10));
      }
    }
    ((void)0);
    if (((param_2 != (char *)0x0) && (_Memory = (int *)((int)param_2 + -0x10), *_Memory < 0xffff))
       && (iVar4 = thunk_FUN_1123fcd0(_Memory), iVar4 == 0)) {
      *(undefined4 *)((int)param_2 + -8) = 0;
      *(undefined4 *)((int)param_2 + -0xc) = 0;
      thunk_FUN_113cfb70(param_2,*(undefined4 *)((int)param_2 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 110d8240; body size 219 bytes.
namespace recovered_110d8240 {
#line 1 "ENTRY_110d8240"

void __thiscall FUN_110d8240(int param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_34 [4];
  undefined4 local_24 [4];
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  piVar1 = *(int **)(param_1 + 0x1c);
  local_24[0] = 0;
  local_34[0] = 0;
  ((void)0);
  local_14 = piVar1;
  piVar4 = (int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  cVar3 = (**(code **)(*piVar4 + 4))();
  while (cVar3 != '\0') {
    (**(code **)(*piVar4 + 8))(local_24);
    (**(code **)(*param_2 + 4))(local_24,local_34);
    iVar2 = *piVar1;
    uVar5 = thunk_FUN_111a32a0();
    uVar5 = thunk_FUN_111a32a0(uVar5);
    (**(code **)(iVar2 + 4))(uVar5);
    cVar3 = (**(code **)(*piVar4 + 4))();
    piVar1 = local_14;
  }
  (**(code **)*piVar4)(1);
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return;
}


}

// Reference entry 110d8360; body size 217 bytes.
namespace recovered_110d8360 {
#line 1 "ENTRY_110d8360"

void FUN_110d8360(int *param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_30 [4];
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  local_20[0] = 0;
  local_30[0] = 0;
  ((void)0);
  piVar3 = (int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  cVar2 = (**(code **)(*piVar3 + 4))();
  while (cVar2 != '\0') {
    (**(code **)(*piVar3 + 8))(local_20);
    (**(code **)(*param_2 + 4))(local_20,local_30);
    iVar1 = *param_1;
    uVar4 = thunk_FUN_111a32a0();
    uVar4 = thunk_FUN_111a32a0(uVar4);
    (**(code **)(iVar1 + 4))(uVar4);
    cVar2 = (**(code **)(*piVar3 + 4))();
  }
  (**(code **)*piVar3)(1);
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return;
}


}

// Reference entry 110d84b0; body size 353 bytes.
namespace recovered_110d84b0 {
#line 1 "ENTRY_110d84b0"

void __thiscall FUN_110d84b0(int param_1,char *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *_Memory;
  char *pcVar5;
  size_t _Size;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(char *)(param_1 + 0xa71) != '\0') {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = (char *)0x0;
    }
    else {
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _Size = (int)pcVar5 - (int)(param_2 + 1);
      puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      puVar2 = puVar3 + 4;
      *puVar3 = 1;
      puVar3[3] = _Size;
      puVar3[2] = 0;
      puVar3[1] = 0;
      memcpy(puVar2,param_2,_Size);
      *(undefined1 *)((int)puVar2 + _Size) = 0;
      param_2 = (char *)puVar2;
    }
    ((void)0);
    local_14 = (undefined4 *)param_2;
    if (&local_14 != (undefined4 **)(param_1 + 0xa74)) {
      puVar2 = *(undefined4 **)(param_1 + 0xa74);
      if (((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) &&
         (iVar4 = thunk_FUN_1123fcd0(puVar2 + -4), iVar4 == 0)) {
        puVar2[-2] = 0;
        puVar2[-3] = 0;
        thunk_FUN_113cfb70(puVar2,puVar2[-1]);
        free(puVar2 + -4);
      }
      *(char **)(param_1 + 0xa74) = param_2;
      if ((param_2 != (char *)0x0) && (*(int *)((int)param_2 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((undefined4 *)((int)param_2 + -0x10));
      }
    }
    ((void)0);
    if (((param_2 != (char *)0x0) && (_Memory = (int *)((int)param_2 + -0x10), *_Memory < 0xffff))
       && (iVar4 = thunk_FUN_1123fcd0(_Memory), iVar4 == 0)) {
      *(undefined4 *)((int)param_2 + -8) = 0;
      *(undefined4 *)((int)param_2 + -0xc) = 0;
      thunk_FUN_113cfb70(param_2,*(undefined4 *)((int)param_2 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 110d8670; body size 331 bytes.
namespace recovered_110d8670 {
#line 1 "ENTRY_110d8670"

void __thiscall FUN_110d8670(int param_1,char *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *_Memory;
  char *pcVar5;
  size_t _Size;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = (char *)0x0;
  }
  else {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar5 - (int)(param_2 + 1);
    puVar3 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    puVar2 = puVar3 + 4;
    *puVar3 = 1;
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar2,param_2,_Size);
    *(undefined1 *)((int)puVar2 + _Size) = 0;
    param_2 = (char *)puVar2;
  }
  ((void)0);
  local_14 = (undefined4 *)param_2;
  if (&local_14 != (undefined4 **)(param_1 + 0x78)) {
    puVar2 = *(undefined4 **)(param_1 + 0x78);
    if (((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0(puVar2 + -4), iVar4 == 0)) {
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      thunk_FUN_113cfb70(puVar2,puVar2[-1]);
      free(puVar2 + -4);
    }
    *(char **)(param_1 + 0x78) = param_2;
    if ((param_2 != (char *)0x0) && (*(int *)((int)param_2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((undefined4 *)((int)param_2 + -0x10));
    }
  }
  ((void)0);
  if (((param_2 != (char *)0x0) && (_Memory = (int *)((int)param_2 + -0x10), *_Memory < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(_Memory), iVar4 == 0)) {
    *(undefined4 *)((int)param_2 + -8) = 0;
    *(undefined4 *)((int)param_2 + -0xc) = 0;
    thunk_FUN_113cfb70(param_2,*(undefined4 *)((int)param_2 + -4));
    free(_Memory);
  }
  ((void)0);
  return;
}


}

// Reference entry 110d8a70; body size 360 bytes.
namespace recovered_110d8a70 {
#line 1 "ENTRY_110d8a70"

undefined1 __fastcall FUN_110d8a70(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x378) + 8))
                        (DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot), cVar1 == '\0')) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar3 = thunk_FUN_11458e90();
    }
    cVar1 = thunk_FUN_11458060(uVar3);
    if (cVar1 == '\0') goto LAB_110d8af3;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    ((void)0);
    return 0;
  }
  iVar4 = thunk_FUN_11458e90();
  if (iVar4 != 0x3b) {
    ((void)0);
    return 0;
  }
LAB_110d8af3:
  if ((*(int *)(param_1 + 0x1c) != 0) && (cVar1 = FUN_1009a598(), cVar1 != '\0')) {
    thunk_FUN_110cc7f0(&local_14,0);
    ((void)0);
    cVar1 = thunk_FUN_111a0720("InWall");
    if ((cVar1 == '\0') && (cVar1 = thunk_FUN_111a0720("InCeiling"), cVar1 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    iVar4 = local_14;
    ((void)0);
    if (((local_14 != 0) &&
        (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(_Memory), iVar5 == 0)) {
      *(undefined4 *)(iVar4 + -8) = 0;
      *(undefined4 *)(iVar4 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
      free(_Memory);
    }
    ((void)0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    ((void)0);
    return 0;
  }
  uVar2 = thunk_FUN_11456f80();
  ((void)0);
  return uVar2;
}


}
