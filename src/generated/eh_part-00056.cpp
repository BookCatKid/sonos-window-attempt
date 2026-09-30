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
extern byte DAT_1187b728;
extern undefined4 DAT_12126b84;
extern int FUN_110df5e0(...);
extern int FUN_110dfb20(...);
extern int FUN_110e01e0(...);
extern int free(...);
extern int memcpy(...);
extern int thunk_FUN_11068e40(...);
extern char thunk_FUN_110b8ef0(...);
extern char thunk_FUN_110b9070(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_1113eda0(...);
extern char thunk_FUN_111a0720(...);
extern int thunk_FUN_111a1220(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 110df5e0; body size 787 bytes.
namespace recovered_110df5e0 {
#line 1 "ENTRY_110df5e0"

int * __thiscall FUN_110df5e0(int *param_1,int *param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_28 [4];
  int local_24;
  int *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_2 = 0;
  ((void)0);
  local_14 = 1;
  thunk_FUN_1113ecc0(local_28,"AVTransportURIMetaData");
  thunk_FUN_1113eda0(&local_1c,"upnp:class");
  local_14 = 3;
  ((void)0);
  thunk_FUN_1113eda0(&local_18,"AVTransportURI");
  local_14 = 7;
  ((void)0);
  cVar1 = thunk_FUN_111a0720("object.item.audioItem.audioBroadcast");
  if (cVar1 == '\0') {
LAB_110df749:
    thunk_FUN_1113eda0(&param_3,"CurrentTrackURI");
    local_14 = 0xf;
    ((void)0);
    local_20 = (int *)(**(code **)(*param_1 + 100))(&local_24,&param_3);
    ((void)0);
    if (local_20 != param_2) {
      iVar5 = *param_2;
      if (((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0((void *)(iVar5 + -0x10)), iVar3 == 0)) {
        *(undefined4 *)(iVar5 + -8) = 0;
        *(undefined4 *)(iVar5 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar5,*(undefined4 *)(iVar5 + -4));
        free((void *)(iVar5 + -0x10));
      }
      iVar5 = *local_20;
      *param_2 = iVar5;
      if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
      }
    }
    ((void)0);
    if (((local_24 != 0) && (*(int *)(local_24 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0((void *)(local_24 + -0x10)), iVar5 == 0)) {
      *(undefined4 *)(local_24 + -8) = 0;
      *(undefined4 *)(local_24 + -0xc) = 0;
      thunk_FUN_113cfb70(local_24,*(undefined4 *)(local_24 + -4));
      free((void *)(local_24 + -0x10));
    }
    ((void)0);
    piVar4 = param_3;
  }
  else {
    puVar6 = &DAT_1186d2ee;
    if (local_18 != (undefined1 *)0x0) {
      puVar6 = local_18;
    }
    cVar1 = thunk_FUN_110b9070(puVar6,0,uVar2);
    if (cVar1 == '\0') {
      puVar6 = &DAT_1186d2ee;
      if (local_18 != (undefined1 *)0x0) {
        puVar6 = local_18;
      }
      cVar1 = thunk_FUN_110b8ef0(puVar6);
      if (cVar1 == '\0') goto LAB_110df749;
    }
    param_3 = (int *)(**(code **)(*param_1 + 100))(&local_20,&local_18);
    ((void)0);
    if (param_3 != param_2) {
      iVar5 = *param_2;
      if (((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0((void *)(iVar5 + -0x10)), iVar3 == 0)) {
        *(undefined4 *)(iVar5 + -8) = 0;
        *(undefined4 *)(iVar5 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar5,*(undefined4 *)(iVar5 + -4));
        free((void *)(iVar5 + -0x10));
      }
      iVar5 = *param_3;
      *param_2 = iVar5;
      if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
      }
    }
    ((void)0);
    piVar4 = local_20;
  }
  if (((piVar4 != (int *)0x0) && (piVar4[-4] < 0xffff)) &&
     (iVar5 = thunk_FUN_1123fcd0(piVar4 + -4), iVar5 == 0)) {
    piVar4[-2] = 0;
    piVar4[-3] = 0;
    thunk_FUN_113cfb70(piVar4,piVar4[-1]);
    free(piVar4 + -4);
  }
  ((void)0);
  if (((local_18 != (undefined1 *)0x0) && (*(int *)(local_18 + -0x10) < 0xffff)) &&
     (iVar5 = thunk_FUN_1123fcd0(local_18 + -0x10), iVar5 == 0)) {
    *(undefined4 *)(local_18 + -8) = 0;
    *(undefined4 *)(local_18 + -0xc) = 0;
    thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
    free(local_18 + -0x10);
  }
  ((void)0);
  if (((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) &&
     (iVar5 = thunk_FUN_1123fcd0((void *)(local_1c + -0x10)), iVar5 == 0)) {
    *(undefined4 *)(local_1c + -8) = 0;
    *(undefined4 *)(local_1c + -0xc) = 0;
    thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
    free((void *)(local_1c + -0x10));
  }
  ((void)0);
  return param_2;
}


}

// Reference entry 110dfb20; body size 175 bytes.
namespace recovered_110dfb20 {
#line 1 "ENTRY_110dfb20"

void __thiscall
FUN_110dfb20(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;
  int local_18;
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = 0;
  ((void)0);
  local_14 = param_1;
  if (&local_18 != param_4) {
    iVar1 = *param_4;
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot),
       iVar2 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    *param_4 = 0;
  }
  ((void)0);
  (**(code **)(*local_14 + 0x80))(param_2,param_3,param_5);
  ((void)0);
  return;
}


}

// Reference entry 110e01e0; body size 443 bytes.
namespace recovered_110e01e0 {
#line 1 "ENTRY_110e01e0"

void __thiscall FUN_110e01e0(int param_1,byte *param_2,char *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int *_Memory;
  char *pcVar9;
  char *pcVar10;
  size_t _Size;
  bool bVar11;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  pbVar3 = &DAT_1187b728;
  do {
    bVar1 = *pbVar3;
    bVar11 = bVar1 < *param_2;
    if (bVar1 != *param_2) {
LAB_110e0233:
      uVar4 = -(uint)bVar11 | 1;
      goto LAB_110e0238;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) goto LAB_110e0233;
    pbVar3 = pbVar3 + 2;
    param_2 = param_2 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_110e0238:
  if (uVar4 == 0) {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      param_2 = (byte *)0x0;
    }
    else {
      pcVar10 = param_3;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      _Size = (int)pcVar10 - (int)(param_3 + 1);
      puVar5 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      param_2 = (byte *)(puVar5 + 4);
      *puVar5 = 1;
      puVar5[3] = _Size;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(param_2,param_3,_Size);
      *(undefined1 *)((int)param_2 + _Size) = 0;
    }
    ppuVar8 = (undefined4 **)(param_1 + 4);
    ((void)0);
    local_14 = (undefined4 *)param_2;
    if (&local_14 != ppuVar8) {
      puVar5 = *ppuVar8;
      if (((puVar5 != (undefined4 *)0x0) && ((int)puVar5[-4] < 0xffff)) &&
         (iVar6 = thunk_FUN_1123fcd0(puVar5 + -4), iVar6 == 0)) {
        puVar5[-2] = 0;
        puVar5[-3] = 0;
        thunk_FUN_113cfb70(puVar5,puVar5[-1]);
        free(puVar5 + -4);
      }
      *ppuVar8 = (undefined4 *)param_2;
      if ((param_2 != (byte *)0x0) && (*(int *)((int)param_2 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((undefined4 *)((int)param_2 + -0x10));
      }
    }
    ((void)0);
    if (((param_2 != (byte *)0x0) && (_Memory = (int *)((int)param_2 + -0x10), *_Memory < 0xffff))
       && (iVar6 = thunk_FUN_1123fcd0(_Memory), iVar6 == 0)) {
      *(undefined4 *)((int)param_2 + -8) = 0;
      *(undefined4 *)((int)param_2 + -0xc) = 0;
      thunk_FUN_113cfb70(param_2,*(undefined4 *)((int)param_2 + -4));
      free(_Memory);
    }
    pcVar10 = (char *)*ppuVar8;
    ((void)0);
    if (pcVar10 == (char *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(pcVar10 + -0xc);
      if (iVar6 == 0) {
        pcVar9 = pcVar10;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar6 = (int)pcVar9 - (int)(pcVar10 + 1);
        *(int *)(pcVar10 + -0xc) = iVar6;
      }
    }
    iVar7 = thunk_FUN_111a1220(0);
    thunk_FUN_11068e40(iVar7,iVar6 + iVar7);
  }
  ((void)0);
  return;
}


}
