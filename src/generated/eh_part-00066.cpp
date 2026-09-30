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
extern int FUN_110ecf10(...);
extern int FUN_110ee210(...);
extern int FUN_110ee490(...);
extern int FUN_110f03c0(...);
extern int FUN_110f0510(...);
extern int FUN_110f0790(...);
extern int FUN_110f1830(...);
extern int FUN_110f19f0(...);
extern int FUN_110f1aa0(...);
extern int FUN_110f1b50(...);
extern int FUN_110f1c00(...);
extern int FUN_110f1cb0(...);
extern int free(...);
extern undefined4* operator_new(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_110c20d0(...);
extern int thunk_FUN_110c2c60(...);
extern undefined4 thunk_FUN_110dc440(...);
extern int thunk_FUN_110ee070(...);
extern int thunk_FUN_110ee120(...);
extern int thunk_FUN_110f0eb0(...);
extern int thunk_FUN_110f3a70(...);
extern char thunk_FUN_111a0940(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern char thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
// Reference entry 110ecf10; body size 163 bytes.
namespace recovered_110ecf10 {
#line 1 "ENTRY_110ecf10"

void __fastcall FUN_110ecf10(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = 0xfe;
  thunk_FUN_110c2c60(0xfe,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  iVar1 = thunk_FUN_110c20d0(uVar3);
  if ((*(int *)(param_1 + 0xc4) == 0) && (iVar1 != 0)) {
    pvVar2 = operator_new(0x1998);
    ((void)0);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = thunk_FUN_110dc440(*(undefined4 *)(param_1 + 0xc),param_1 + 0x18,&DAT_1186d2ee,
                                 &DAT_1186d2ee,&DAT_1186d2ee,0,0,iVar1,0,1);
    }
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
  }
  ((void)0);
  return;
}


}

// Reference entry 110ee210; body size 268 bytes.
namespace recovered_110ee210 {
#line 1 "ENTRY_110ee210"

int * __thiscall FUN_110ee210(undefined4 *param_1,int *param_2,int *param_3)

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
  thunk_FUN_110ee120(&local_24,param_3);
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
    iVar5 = thunk_FUN_110f0eb0(local_24,local_20,puVar4);
    *param_2 = iVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    ((void)0);
    return param_2;
  }

  thunk_FUN_101d7220(uVar3);
}


}

// Reference entry 110ee490; body size 89 bytes.
namespace recovered_110ee490 {
#line 1 "ENTRY_110ee490"

int * __thiscall FUN_110ee490(int *param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  *param_1 = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 110f03c0; body size 88 bytes.
namespace recovered_110f03c0 {
#line 1 "ENTRY_110f03c0"

void __fastcall FUN_110f03c0(int *param_1)

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

// Reference entry 110f0510; body size 282 bytes.
namespace recovered_110f0510 {
#line 1 "ENTRY_110f0510"

void __fastcall FUN_110f0510(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;
  int iVar3;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar1 = *(int *)(param_1 + 0x1c);
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
  iVar1 = *(int *)(param_1 + 0x18);
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
  iVar1 = *(int *)(param_1 + 0x14);
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
  thunk_FUN_110ee070((undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0xc),0x18);
  thunk_FUN_10207220();
  ((void)0);
  return;
}


}

// Reference entry 110f0790; body size 233 bytes.
namespace recovered_110f0790 {
#line 1 "ENTRY_110f0790"

int __thiscall FUN_110f0790(undefined4 *param_1,int *param_2)

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
  thunk_FUN_110ee120(&local_24,param_2);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar3 = thunk_FUN_111a0940(local_1c + 0x10);
    if (cVar3 == '\0') goto LAB_110f085d;
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
  local_1c = thunk_FUN_110f0eb0(local_24,local_20,puVar5);
LAB_110f085d:
  ((void)0);
  return local_1c + 0x14;
}


}

// Reference entry 110f1830; body size 131 bytes.
namespace recovered_110f1830 {
#line 1 "ENTRY_110f1830"

bool __thiscall FUN_110f1830(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110f3a70(0,param_2,0,0,0,0,0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return -1 < iVar2;
}


}

// Reference entry 110f19f0; body size 131 bytes.
namespace recovered_110f19f0 {
#line 1 "ENTRY_110f19f0"

bool __thiscall FUN_110f19f0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110f3a70(0,0,param_2,0,0,0,0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return -1 < iVar2;
}


}

// Reference entry 110f1aa0; body size 131 bytes.
namespace recovered_110f1aa0 {
#line 1 "ENTRY_110f1aa0"

bool __thiscall FUN_110f1aa0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110f3a70(0,0,0,param_2,0,0,0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return -1 < iVar2;
}


}

// Reference entry 110f1b50; body size 131 bytes.
namespace recovered_110f1b50 {
#line 1 "ENTRY_110f1b50"

bool __thiscall FUN_110f1b50(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110f3a70(0,0,0,0,0,param_2,0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return -1 < iVar2;
}


}

// Reference entry 110f1c00; body size 131 bytes.
namespace recovered_110f1c00 {
#line 1 "ENTRY_110f1c00"

bool __thiscall FUN_110f1c00(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110f3a70(param_2,0,0,0,0,0,0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return -1 < iVar2;
}


}

// Reference entry 110f1cb0; body size 131 bytes.
namespace recovered_110f1cb0 {
#line 1 "ENTRY_110f1cb0"

bool __thiscall FUN_110f1cb0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110f3a70(0,0,0,0,param_2,0,0);
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return -1 < iVar2;
}


}
