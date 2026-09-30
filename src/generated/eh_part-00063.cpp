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
extern undefined DAT_118823e4;
extern byte DAT_1188752c;
extern byte DAT_1189c7f8;
extern byte DAT_119352e0;
extern byte DAT_1195e30c;
extern undefined4 DAT_12126b84;
extern int FUN_110e5a00(...);
extern int FUN_110e5f00(...);
extern int FUN_110e5fe0(...);
extern int FUN_110e8660(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int free(...);
extern int memcpy(...);
extern int strncmp(...);
extern char* strstr(...);
extern int thunk_FUN_102a5110(...);
extern int thunk_FUN_102a5810(...);
extern int thunk_FUN_102a9bb0(...);
extern int thunk_FUN_102ad7c0(...);
extern int thunk_FUN_102adcb0(...);
extern int thunk_FUN_102ae180(...);
extern char thunk_FUN_1106f2b0(...);
extern int thunk_FUN_1107b6c0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern char thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110e44a0(...);
extern int thunk_FUN_110e5090(...);
extern char thunk_FUN_111a0720(...);
extern char thunk_FUN_111a0e70(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 110e5a00; body size 777 bytes.
namespace recovered_110e5a00 {
#line 1 "ENTRY_110e5a00"

undefined4 __thiscall FUN_110e5a00(int param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  size_t _Size;
  bool bVar14;
  char cStack00000007;
  int local_1c;
  undefined4 *local_18;
  char local_12;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  pcVar4 = "";
  if (*(char **)(param_1 + 0xc) != (char *)0x0) {
    pcVar4 = *(char **)(param_1 + 0xc);
  }
  pcVar4 = strstr(pcVar4,".sonos-favorite");
  pbVar12 = &DAT_1186d2ee;
  if (*(byte **)(param_1 + 0x10) != (byte *)0x0) {
    pbVar12 = *(byte **)(param_1 + 0x10);
  }
  if (((pcVar4 == (char *)0x0) || (iVar5 = strncmp(pcVar4,".sonos-favorite",0xf), iVar5 != 0)) ||
     ((cVar3 = pcVar4[0xf], cVar3 != '.' && ((cVar3 != '#' && (cVar3 != '\0')))))) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
  }
  cVar3 = thunk_FUN_111a0e70(&DAT_118823e4);
  if (((cVar3 != '\0') && (cVar3 = thunk_FUN_111a0720("RINCON_AssociatedZPUDN"), cVar3 != '\0')) &&
     (param_2 != '\0')) {
    ((void)0);
    return 0;
  }
  if (pbVar12 == (byte *)0x0) {
LAB_110e5aef:
    cStack00000007 = '\0';
    if (pbVar12 != (byte *)0x0) goto LAB_110e5afb;
LAB_110e5b8f:
    local_12 = '\0';
  }
  else {
    pbVar6 = &DAT_1189c7f8;
    pbVar11 = pbVar12;
    do {
      bVar2 = *pbVar6;
      bVar14 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_110e5ae0:
        uVar7 = -(uint)bVar14 | 1;
        goto LAB_110e5ae5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar14 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_110e5ae0;
      pbVar6 = pbVar6 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    uVar7 = 0;
LAB_110e5ae5:
    if (uVar7 != 0) goto LAB_110e5aef;
    cStack00000007 = '\x01';
LAB_110e5afb:
    pbVar6 = &DAT_1188752c;
    pbVar11 = pbVar12;
    do {
      bVar2 = *pbVar6;
      bVar14 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_110e5b22:
        uVar7 = -(uint)bVar14 | 1;
        goto LAB_110e5b27;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar14 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_110e5b22;
      pbVar6 = pbVar6 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    uVar7 = 0;
LAB_110e5b27:
    if (uVar7 != 0) {
      pbVar6 = &DAT_1195e30c;
      pbVar11 = pbVar12;
      do {
        bVar2 = *pbVar6;
        bVar14 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_110e5b52:
          uVar7 = -(uint)bVar14 | 1;
          goto LAB_110e5b57;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar14 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_110e5b52;
        pbVar6 = pbVar6 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      uVar7 = 0;
LAB_110e5b57:
      if (uVar7 != 0) {
        pbVar11 = &DAT_119352e0;
        do {
          bVar2 = *pbVar11;
          bVar14 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_110e5b80:
            uVar7 = -(uint)bVar14 | 1;
            goto LAB_110e5b85;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar11[1];
          bVar14 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_110e5b80;
          pbVar11 = pbVar11 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        uVar7 = 0;
LAB_110e5b85:
        if (uVar7 != 0) goto LAB_110e5b8f;
      }
    }
    local_12 = '\x01';
  }
  piVar8 = (int *)thunk_FUN_110828b0();
  if (piVar8 == (int *)0x0) {
    local_1c = 0;
  }
  else {
    puVar9 = &DAT_1186d2ee;
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_1 + 0x14);
    }
    local_1c = thunk_FUN_11093530(puVar9,0);
  }
  pcVar4 = *(char **)(param_1 + 0xc);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    pcVar13 = pcVar4;
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    _Size = (int)pcVar13 - (int)(pcVar4 + 1);
    puVar10 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
    puVar1 = puVar10 + 4;
    *puVar10 = 1;
    puVar10[3] = _Size;
    puVar10[2] = 0;
    puVar10[1] = 0;
    memcpy(puVar1,pcVar4,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    local_18 = puVar1;
  }
  ((void)0);
  cVar3 = thunk_FUN_110a5ba0(&local_18,"object.item.audioItem.linein");
  puVar1 = local_18;
  ((void)0);
  if (((local_18 != (undefined4 *)0x0) && (puVar10 = local_18 + -4, (int)local_18[-4] < 0xffff)) &&
     (iVar5 = thunk_FUN_1123fcd0(puVar10), iVar5 == 0)) {
    puVar1[-2] = 0;
    puVar1[-3] = 0;
    thunk_FUN_113cfb70(puVar1,puVar1[-1]);
    free(puVar10);
  }
  ((void)0);
  if ((((*(byte *)(param_1 + 0x72) & 1) == 0) || (piVar8 == (int *)0x0)) ||
     (uVar7 = (**(code **)(*piVar8 + 0x24))(), (uVar7 & 1) == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (((local_11 == '\0') && (cStack00000007 == '\0')) &&
     ((((local_12 == '\0' && ((local_1c != 0 || (cVar3 != '\0')))) &&
       (*(char **)(param_1 + 0x10) != (char *)0x0)) &&
      ((((**(char **)(param_1 + 0x10) != '\0' && (cVar3 = thunk_FUN_1106f2b0(), cVar3 == '\0')) &&
        (!bVar14)) && (param_3 == '\0')))))) {
    ((void)0);
    return 1;
  }
  ((void)0);
  return 0;
}


}

// Reference entry 110e5f00; body size 171 bytes.
namespace recovered_110e5f00 {
#line 1 "ENTRY_110e5f00"

undefined4 __thiscall FUN_110e5f00(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  int iVar2;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  thunk_FUN_1107b6c0(&local_14,param_1 + 0x60,*(undefined4 *)(param_1 + 0x20),1,
                     DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  thunk_FUN_110e44a0(param_2,param_1 + 0x50,&local_14);
  iVar1 = local_14;
  ((void)0);
  if ((local_14 != 0) && (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)
     ) {
    iVar2 = thunk_FUN_1123fcd0(_Memory);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  return param_2;
}


}

// Reference entry 110e5fe0; body size 182 bytes.
namespace recovered_110e5fe0 {
#line 1 "ENTRY_110e5fe0"

undefined4 __thiscall FUN_110e5fe0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  int iVar2;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  thunk_FUN_1107b6c0(&local_14,param_1 + 0x60,*(undefined4 *)(param_1 + 0x20),1,
                     DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  thunk_FUN_110e5090(param_2,param_1 + 0x4c,param_1 + 0xec,param_1 + 0x50,&local_14);
  iVar1 = local_14;
  ((void)0);
  if ((local_14 != 0) && (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)
     ) {
    iVar2 = thunk_FUN_1123fcd0(_Memory);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  return param_2;
}


}

// Reference entry 110e8660; body size 444 bytes.
namespace recovered_110e8660 {
#line 1 "ENTRY_110e8660"

int __thiscall FUN_110e8660(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar2 = *param_1;
  iVar3 = (param_1[1] - iVar2) / 0xc;
  if (iVar3 == 0x15555555) {

    thunk_FUN_102adcb0();
  }
  uVar1 = iVar3 + 1;
  uVar5 = (param_1[2] - iVar2) / 0xc;
  if (0x15555555 - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x15555555;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
  }
  iVar3 = thunk_FUN_102ae180(uVar5);
  ((void)0);
  iVar2 = iVar3 + ((param_2 - iVar2) / 0xc) * 0xc;
  thunk_FUN_102a5810(param_1,iVar2,param_3);
  if (param_2 == param_1[1]) {
    thunk_FUN_102a5110(*param_1,param_1[1],iVar3,param_1);
  }
  else {
    thunk_FUN_102ad7c0(*param_1,param_2,iVar3);
    thunk_FUN_102ad7c0(param_2,param_1[1],iVar2 + 0xc);
  }
  iVar6 = *param_1;
  if (iVar6 != 0) {
    iVar7 = param_1[1];
    if (iVar6 != iVar7) {
      do {
        thunk_FUN_102a9bb0();
        iVar6 = iVar6 + 0xc;
      } while (iVar6 != iVar7);
      iVar6 = *param_1;
    }
    uVar4 = ((param_1[2] - iVar6) / 0xc) * 0xc;
    iVar7 = iVar6;
    if (0xfff < uVar4) {
      iVar7 = *(int *)(iVar6 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar6 - iVar7) - 4U) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar4);
  }
  *param_1 = iVar3;
  param_1[1] = iVar3 + uVar1 * 0xc;
  param_1[2] = iVar3 + uVar5 * 0xc;
  ((void)0);
  return iVar2;
}


}
