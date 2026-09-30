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
extern undefined4 DAT_1188a03c;
extern undefined4 DAT_119ce064;
extern undefined4 DAT_12126b84;
extern undefined4* DAT_122e8a94;
extern int FUN_1116b090(...);
extern int FUN_1116b700(...);
extern int FUN_1116c320(...);
extern int FUN_1116c450(...);
extern int FUN_1116d7a0(...);
extern int FUN_1116e350(...);
extern int FUN_111705c0(...);
extern int FUN_111706c0(...);
extern int FUN_11170e80(...);
extern int FUN_111724f0(...);
extern int FUN_11172680(...);
extern int FUN_111727a0(...);
extern int FUN_11172d70(...);
extern int FUN_11174dd0(...);
extern int FUN_111758e0(...);
extern int FUN_111766c0(...);
extern int FUN_11176810(...);
extern int FUN_11176d60(...);
extern int FUN_11176f00(...);
extern int FUN_11177150(...);
extern int FUN_11177530(...);
extern int FUN_111775c0(...);
extern int FUN_11178700(...);
extern int FUN_11178870(...);
extern int FUN_111789c0(...);
extern int free(...);
extern int memcpy(...);
extern undefined4* operator_new(...);
extern undefined4 thunk_FUN_101c3fc0(...);
extern uint thunk_FUN_101c82e0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11093740(...);
extern int thunk_FUN_11093bd0(...);
extern undefined4 thunk_FUN_110b02f0(...);
extern undefined4 thunk_FUN_110b0460(...);
extern int thunk_FUN_110b23e0(...);
extern int thunk_FUN_110b3220(...);
extern int thunk_FUN_110b3340(...);
extern int thunk_FUN_110b5240(...);
extern int thunk_FUN_1116cb30(...);
extern int thunk_FUN_1116cf20(...);
extern int thunk_FUN_1116d100(...);
extern int thunk_FUN_111704f0(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern char thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a72b0(...);
extern int thunk_FUN_111a72e0(...);
extern undefined4 thunk_FUN_111c06e0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 1116b090; body size 115 bytes.
namespace recovered_1116b090 {
#line 1 "ENTRY_1116b090"

void __fastcall FUN_1116b090(int *param_1)

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

// Reference entry 1116b700; body size 140 bytes.
namespace recovered_1116b700 {
#line 1 "ENTRY_1116b700"

int * __thiscall FUN_1116b700(int *param_1,byte param_2)

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

// Reference entry 1116c320; body size 228 bytes.
namespace recovered_1116c320 {
#line 1 "ENTRY_1116c320"

int __thiscall FUN_1116c320(int param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  puVar6 = &DAT_1186d2ee;
  if ((undefined1 *)param_2[2] != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)param_2[2];
  }
  uVar4 = thunk_FUN_101c82e0(puVar6,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar4) * 8);
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == param_2) {
      iVar2 = *(int *)(param_1 + 4);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = *param_2;
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  iVar3 = param_2[2];
  ((void)0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + -0x10) < 0xffff)) {
    iVar5 = thunk_FUN_1123fcd0((void *)(iVar3 + -0x10));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar3 + -8) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
      free((void *)(iVar3 + -0x10));
    }
  }
  thunk_FUN_1148a50e(param_2,0x10);
  ((void)0);
  return iVar2;
}


}

// Reference entry 1116c450; body size 156 bytes.
namespace recovered_1116c450 {
#line 1 "ENTRY_1116c450"

int __thiscall FUN_1116c450(int param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  iVar2 = param_2[2];
  ((void)0);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar3);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }
  thunk_FUN_1148a50e(param_2,0x10);
  ((void)0);
  return iVar1;
}


}

// Reference entry 1116d7a0; body size 682 bytes.
namespace recovered_1116d7a0 {
#line 1 "ENTRY_1116d7a0"

undefined4 FUN_1116d7a0(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  piVar4 = param_1 + 1;
  if (*param_1 == 0) {
    thunk_FUN_112af4e0("household",1,"reporting ZP at location %.256s as unresponsive",piVar4,
                       DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    iVar2 = thunk_FUN_11093bd0(piVar4);
    if (iVar2 == 0) {
      thunk_FUN_112af4e0("household",1,"couldn\'t find ZP in local data model");
      thunk_FUN_112af4e0("household",1,"reporting MediaServer at location %.256s as unresponsive",
                         piVar4);
      local_14 = (char *)thunk_FUN_11093740(piVar4);
      if (local_14 == (char *)0x0) goto LAB_1116d834;
      pcVar5 = local_14 + 0x18;
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
        pcVar5 = (char *)0x0;
      }
      else {
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        sVar6 = (int)pcVar5 - (int)(local_14 + 0x19);
        puVar3 = (undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11);
        pcVar5 = (char *)(puVar3 + 4);
        *puVar3 = 1;
        puVar3[3] = sVar6;
        puVar3[2] = 0;
        puVar3[1] = 0;
        memcpy(pcVar5,local_14 + 0x18,sVar6);
        pcVar5[sVar6] = '\0';
      }
      ((void)0);
      local_14 = pcVar5;
      thunk_FUN_1116cf20(&local_14);
      ((void)0);
    }
    else {
      local_14 = *(char **)(iVar2 + 0x5c);
      if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = local_14;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        sVar6 = (int)pcVar5 - (int)(local_14 + 1);
        puVar3 = (undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11);
        pcVar5 = (char *)(puVar3 + 4);
        *puVar3 = 1;
        puVar3[3] = sVar6;
        puVar3[2] = 0;
        puVar3[1] = 0;
        memcpy(pcVar5,local_14,sVar6);
        pcVar5[sVar6] = '\0';
      }
      ((void)0);
      local_14 = pcVar5;
      thunk_FUN_1116cf20(&local_14);
      ((void)0);
    }
  }
  else {
    thunk_FUN_112af4e0("household",1,"reporting MediaServer %.256s as unresponsive",piVar4,
                       DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    local_14 = (char *)thunk_FUN_110935f0(piVar4,0);
    if (local_14 == (char *)0x0) {
LAB_1116d834:
      thunk_FUN_112af4e0("household",1,"couldn\'t find MS in local data model");
      goto LAB_1116da24;
    }
    pcVar5 = local_14 + 0x18;
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
      pcVar5 = (char *)0x0;
    }
    else {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      sVar6 = (int)pcVar5 - (int)(local_14 + 0x19);
      puVar3 = (undefined4 *)thunk_FUN_1148b586(sVar6 + 0x11);
      pcVar5 = (char *)(puVar3 + 4);
      *puVar3 = 1;
      puVar3[3] = sVar6;
      puVar3[2] = 0;
      puVar3[1] = 0;
      memcpy(pcVar5,local_14 + 0x18,sVar6);
      pcVar5[sVar6] = '\0';
    }
    ((void)0);
    local_14 = pcVar5;
    thunk_FUN_1116cf20(&local_14);
    ((void)0);
  }
  if (((pcVar5 != (char *)0x0) && (piVar4 = (int *)(pcVar5 + -0x10), *piVar4 < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0(piVar4), iVar2 == 0)) {
    pcVar5[-0xffffffff00000008] = '\0';
    pcVar5[-0xffffffff00000007] = '\0';
    pcVar5[-0xffffffff00000006] = '\0';
    pcVar5[-0xffffffff00000005] = '\0';
    pcVar5[-0xffffffff0000000c] = '\0';
    pcVar5[-0xffffffff0000000b] = '\0';
    pcVar5[-0xffffffff0000000a] = '\0';
    pcVar5[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar5,*(undefined4 *)(pcVar5 + -4));
    free(piVar4);
  }
LAB_1116da24:
  thunk_FUN_1148a50e(param_1,0x408);
  ((void)0);
  return 0;
}


}

// Reference entry 1116e350; body size 237 bytes.
namespace recovered_1116e350 {
#line 1 "ENTRY_1116e350"

void __fastcall FUN_1116e350(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  pbVar8 = &DAT_1186d2ee;
  if (*(byte **)(param_1 + 0x20) != (byte *)0x0) {
    pbVar8 = *(byte **)(param_1 + 0x20);
  }
  pbVar3 = &DAT_1186d2ee;
  if (*(byte **)(param_1 + 0x1c) != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x1c);
  }
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1116e3b0:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_1116e3b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1116e3b0;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1116e3b5:
  if (uVar4 == 0) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    iVar5 = thunk_FUN_1116cb30(uVar2);
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x28) + 0x1c))();
  }
  if (iVar5 != 0) {
    thunk_FUN_1116d100(iVar5);
    ((void)0);
    return;
  }
  pvVar6 = operator_new(0x6c);
  ((void)0);
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_111c06e0(0);
  }
  ((void)0);
  thunk_FUN_102207b0(uVar7,param_1 + 8,0);
  ((void)0);
  return;
}


}

// Reference entry 111705c0; body size 168 bytes.
namespace recovered_111705c0 {
#line 1 "ENTRY_111705c0"

void FUN_111705c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;


  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    iVar2 = puVar3[2];
    ((void)0);
    if (((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar4), iVar5 == 0)) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
    ((void)0);
    thunk_FUN_1148a50e(puVar3,0x10);
    puVar3 = puVar1;
  }
  ((void)0);
  return;
}


}

// Reference entry 111706c0; body size 132 bytes.
namespace recovered_111706c0 {
#line 1 "ENTRY_111706c0"

void FUN_111706c0(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_2 + 8);
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
  thunk_FUN_1148a50e(param_2,0x10);
  ((void)0);
  return;
}


}

// Reference entry 11170e80; body size 118 bytes.
namespace recovered_11170e80 {
#line 1 "ENTRY_11170e80"

void FUN_11170e80(undefined4 param_1,int *param_2)

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

// Reference entry 111724f0; body size 88 bytes.
namespace recovered_111724f0 {
#line 1 "ENTRY_111724f0"

void __fastcall FUN_111724f0(int *param_1)

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

// Reference entry 11172680; body size 145 bytes.
namespace recovered_11172680 {
#line 1 "ENTRY_11172680"

void __fastcall FUN_11172680(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
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
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  ((void)0);
  return;
}


}

// Reference entry 111727a0; body size 115 bytes.
namespace recovered_111727a0 {
#line 1 "ENTRY_111727a0"

void __fastcall FUN_111727a0(int *param_1)

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

// Reference entry 11172d70; body size 140 bytes.
namespace recovered_11172d70 {
#line 1 "ENTRY_11172d70"

int * __thiscall FUN_11172d70(int *param_1,byte param_2)

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

// Reference entry 11174dd0; body size 615 bytes.
namespace recovered_11174dd0 {
#line 1 "ENTRY_11174dd0"

undefined4 __thiscall FUN_11174dd0(int param_1,byte *param_2,char *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  char cVar2;
  char *_Src;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  size_t _Size;
  bool bVar17;
  undefined1 local_1c [4];
  int local_18;
  int local_14;


  _Src = param_3;
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  local_14 = *(int *)(param_1 + 0x18);
  uVar13 = 0;
  iVar10 = *(int *)(param_1 + 0x1c) - local_14;
  iVar15 = iVar10 >> 0x1f;
  iVar10 = iVar10 / 0x24 + iVar15;
  uVar12 = iVar10 - iVar15;
  if (iVar10 != iVar15) {
    iVar15 = 0;
    do {
      pbVar11 = *(byte **)(iVar15 + local_14);
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_11174e50:
          uVar5 = -(uint)bVar17 | 1;
          goto LAB_11174e55;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_11174e50;
        pbVar11 = pbVar11 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_11174e55:
      local_18 = local_14;
      if (uVar5 == 0) goto LAB_11174e83;
      uVar13 = uVar13 + 1;
      iVar15 = iVar15 + 0x24;
    } while (uVar13 < uVar12);
  }
  if (uVar13 == uVar12) {
    return 0;
  }
LAB_11174e83:
  local_14 = local_14 + uVar13 * 0x24;
  ((void)0);
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    param_2 = (byte *)0x0;
  }
  else {
    pcVar16 = param_3;
    do {
      cVar2 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar16 - (int)(param_3 + 1);
    puVar6 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,uVar3);
    puVar9 = puVar6 + 4;
    *puVar6 = 1;
    puVar6[3] = _Size;
    puVar6[2] = 0;
    puVar6[1] = 0;
    memcpy(puVar9,_Src,_Size);
    *(undefined1 *)((int)puVar9 + _Size) = 0;
    param_2 = (byte *)puVar9;
  }
  iVar10 = local_14;
  param_3 = *(char **)(local_14 + 8);
  ((void)0);
  uVar7 = thunk_FUN_101c3fc0(&param_2);
  iVar15 = thunk_FUN_111704f0(local_1c,&param_2,uVar7);
  puVar9 = (undefined4 *)param_2;
  iVar15 = *(int *)(iVar15 + 4);
  if (iVar15 == 0) {
    iVar15 = *(int *)(iVar10 + 8);
  }
  ((void)0);
  iVar14 = iVar10;
  if (((param_2 != (byte *)0x0) &&
      (puVar6 = (undefined4 *)((int)param_2 + -0x10), iVar14 = local_14,
      *(int *)((int)param_2 + -0x10) < 0xffff)) &&
     (iVar8 = thunk_FUN_1123fcd0(puVar6), iVar14 = local_14, iVar8 == 0)) {
    puVar9[-2] = 0;
    puVar9[-3] = 0;
    thunk_FUN_113cfb70(puVar9,puVar9[-1]);
    free(puVar6);
    iVar14 = local_14;
  }
  ((void)0);
  if ((char *)iVar15 == param_3) {
    puVar9 = (undefined4 *)thunk_FUN_1148b586(0x12,uVar3);
    *puVar9 = 1;
    puVar9[3] = 1;
    puVar9[2] = 0;
    puVar9[1] = 0;
    param_2 = (byte *)(puVar9 + 4);
    *(undefined2 *)param_2 = 0x2a;
    param_3 = *(char **)(iVar14 + 8);
    ((void)0);
    uVar7 = thunk_FUN_101c3fc0(&param_2);
    iVar15 = thunk_FUN_111704f0(local_1c,&param_2,uVar7);
    puVar9 = (undefined4 *)param_2;
    iVar15 = *(int *)(iVar15 + 4);
    if (iVar15 == 0) {
      iVar15 = *(int *)(iVar10 + 8);
    }
    ((void)0);
    if (((param_2 != (byte *)0x0) &&
        (puVar6 = (undefined4 *)((int)param_2 + -0x10), *(int *)((int)param_2 + -0x10) < 0xffff)) &&
       (iVar10 = thunk_FUN_1123fcd0(puVar6), iVar10 == 0)) {
      puVar9[-2] = 0;
      puVar9[-3] = 0;
      thunk_FUN_113cfb70(puVar9,puVar9[-1]);
      free(puVar6);
    }
    if ((char *)iVar15 == param_3) {
      ((void)0);
      return 0;
    }
  }
  ((void)0);
  return 1;
}


}

// Reference entry 111758e0; body size 235 bytes.
namespace recovered_111758e0 {
#line 1 "ENTRY_111758e0"

void FUN_111758e0(undefined4 *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 local_44 [4];
  undefined4 *local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 local_28 [20];
  uint local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_34 = param_1;
  *param_1 = 0;
  ((void)0);
  local_2c = 1;
  local_14 = uVar2;
  iVar3 = thunk_FUN_111a72b0(local_30);
  local_44[0] = 0;
  ((void)0);
  while (iVar3 != 0) {
    cVar1 = thunk_FUN_111a5f10(&DAT_1188a03c,local_44);
    if (cVar1 == '\0') {
      thunk_FUN_1145c720(local_28,0x14,&DAT_119ce064,iVar3,uVar2);
      puVar4 = local_28;
    }
    else {
      puVar4 = (undefined1 *)thunk_FUN_111a32a0();
    }
    thunk_FUN_111a0cc0(puVar4);
    iVar3 = thunk_FUN_111a72e0(local_30);
  }
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 111766c0; body size 198 bytes.
namespace recovered_111766c0 {
#line 1 "ENTRY_111766c0"

undefined4 __thiscall FUN_111766c0(int param_1,uint param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;
  undefined4 uVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x14) <= param_2) &&
       (param_2 < *(int *)(iVar1 + 0x18) + *(uint *)(iVar1 + 0x14))) goto LAB_1117674f;
    iVar2 = **(int **)(param_1 + 4);
    thunk_FUN_112a7f50(iVar2 + 0x1c,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    ((void)0);
    thunk_FUN_110b5240(iVar1);
    ((void)0);
    thunk_FUN_112a8010(iVar2 + 0x1c);
  }
  uVar3 = thunk_FUN_110b3220(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
LAB_1117674f:
  if (*(int *)(param_1 + 0x18) == 0) {
    ((void)0);
    return 0;
  }
  uVar3 = thunk_FUN_110b02f0(param_2);
  ((void)0);
  return uVar3;
}


}

// Reference entry 11176810; body size 118 bytes.
namespace recovered_11176810 {
#line 1 "ENTRY_11176810"

undefined4 * FUN_11176810(void)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar2 = DAT_122e8a94;
  if (DAT_122e8a94 == (undefined4 *)0x0) {
    puVar2 = operator_new(8);
    ((void)0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar3 = thunk_FUN_110b0460(1,uVar1);
      *puVar2 = uVar3;
      puVar2[1] = 0;
    }
  }
  ((void)0);
  DAT_122e8a94 = puVar2;
  return puVar2;
}


}

// Reference entry 11176d60; body size 326 bytes.
namespace recovered_11176d60 {
#line 1 "ENTRY_11176d60"

undefined4 __thiscall FUN_11176d60(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar3 = *(int *)(param_1 + 0x18);
  uVar5 = 0;
  local_1c = 0;
  if (iVar3 != 0) {
    iVar4 = **(int **)(param_1 + 4);
    thunk_FUN_112a7f50(iVar4 + 0x1c,uVar2);
    ((void)0);
    thunk_FUN_110b5240(iVar3);
    ((void)0);
    thunk_FUN_112a8010(iVar4 + 0x1c);
  }
  iVar3 = thunk_FUN_110b3220(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    local_1c = param_2;
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    iVar3 = **(int **)(param_1 + 4);
    thunk_FUN_112a7f50(iVar3 + 0x68,uVar2);
    ((void)0);
    iVar4 = thunk_FUN_110b3340(uVar5,uVar1);
    if (iVar4 != 0) {
      thunk_FUN_110b23e0(iVar4);
    }
    ((void)0);
    thunk_FUN_112a8010(iVar3 + 0x68);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0x18);
      iVar3 = **(int **)(param_1 + 4);
      thunk_FUN_112a7f50(iVar3 + 0x68);
      ((void)0);
      thunk_FUN_110b5240(iVar4);
      thunk_FUN_112a8010(iVar3 + 0x68);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = local_1c;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  ((void)0);
  return uVar5;
}


}

// Reference entry 11176f00; body size 346 bytes.
namespace recovered_11176f00 {
#line 1 "ENTRY_11176f00"

undefined4 __thiscall
FUN_11176f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar5 = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  if (iVar2 != 0) {
    iVar3 = **(int **)(param_1 + 4);
    thunk_FUN_112a7f50(iVar3 + 0x1c,uVar1);
    ((void)0);
    thunk_FUN_110b5240(iVar2);
    ((void)0);
    thunk_FUN_112a8010(iVar3 + 0x1c);
    param_4 = *(undefined4 *)(param_1 + 0xc);
    param_3 = *(undefined4 *)(param_1 + 8);
  }
  iVar2 = thunk_FUN_110b3220(param_3,param_4,param_2);
  *(int *)(param_1 + 0x18) = iVar2;
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 8);
    iVar2 = **(int **)(param_1 + 4);
    thunk_FUN_112a7f50(iVar2 + 0x68,uVar1);
    ((void)0);
    iVar3 = thunk_FUN_110b3340(uVar4,uVar5);
    if (iVar3 != 0) {
      thunk_FUN_110b23e0(iVar3);
    }
    ((void)0);
    thunk_FUN_112a8010(iVar2 + 0x68);
    uVar4 = param_2;
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar3 + 0x18);
      iVar2 = **(int **)(param_1 + 4);
      thunk_FUN_112a7f50(iVar2 + 0x68);
      ((void)0);
      thunk_FUN_110b5240(iVar3);
      thunk_FUN_112a8010(iVar2 + 0x68);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  ((void)0);
  return uVar5;
}


}

// Reference entry 11177150; body size 128 bytes.
namespace recovered_11177150 {
#line 1 "ENTRY_11177150"

int __thiscall FUN_11177150(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
  thunk_FUN_112a7f50(iVar1 + 0x68,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  iVar2 = thunk_FUN_110b3340(param_2,param_3);
  if (iVar2 != 0) {
    thunk_FUN_110b23e0(iVar2);
  }
  thunk_FUN_112a8010(iVar1 + 0x68);
  ((void)0);
  return iVar2;
}


}

// Reference entry 11177530; body size 105 bytes.
namespace recovered_11177530 {
#line 1 "ENTRY_11177530"

void __thiscall FUN_11177530(int *param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1 + 0x4c;
  thunk_FUN_112a7f50(*param_1 + 0x68,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot,iVar1);
  ((void)0);
  thunk_FUN_110b5240(param_2);
  thunk_FUN_112a8010(iVar1 + 0x1c);
  ((void)0);
  return;
}


}

// Reference entry 111775c0; body size 102 bytes.
namespace recovered_111775c0 {
#line 1 "ENTRY_111775c0"

void __thiscall FUN_111775c0(int *param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *param_1;
  thunk_FUN_112a7f50(iVar1 + 0x1c,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot,iVar1);
  ((void)0);
  thunk_FUN_110b5240(param_2);
  thunk_FUN_112a8010(iVar1 + 0x1c);
  ((void)0);
  return;
}


}

// Reference entry 11178700; body size 127 bytes.
namespace recovered_11178700 {
#line 1 "ENTRY_11178700"

void __thiscall FUN_11178700(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar1[1] = 0;
  ((void)0);
  *puVar1 = *param_2;
  if (param_2 + 1 != puVar1 + 1) {
    iVar2 = param_2[1];
    puVar1[1] = iVar2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  ((void)0);
  return;
}


}

// Reference entry 11178870; body size 127 bytes.
namespace recovered_11178870 {
#line 1 "ENTRY_11178870"

void __thiscall FUN_11178870(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar1[1] = 0;
  ((void)0);
  *puVar1 = *param_2;
  if (param_2 + 1 != puVar1 + 1) {
    iVar2 = param_2[1];
    puVar1[1] = iVar2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  ((void)0);
  return;
}


}

// Reference entry 111789c0; body size 127 bytes.
namespace recovered_111789c0 {
#line 1 "ENTRY_111789c0"

void __thiscall FUN_111789c0(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar1[1] = 0;
  ((void)0);
  *puVar1 = *param_2;
  if (param_2 + 1 != puVar1 + 1) {
    iVar2 = param_2[1];
    puVar1[1] = iVar2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  ((void)0);
  return;
}


}
