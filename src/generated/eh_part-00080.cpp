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
extern uint __fastcall FUN_111144b0(int param_1, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_111191d0(...);
extern int thunk_FUN_11119580(...);
extern int thunk_FUN_11119830(...);
extern int thunk_FUN_11119940(...);
extern uint thunk_FUN_1111cb60(...);
extern int thunk_FUN_1111cd70(...);
extern int thunk_FUN_1111cf00(...);
extern char thunk_FUN_1115c580(...);
extern char thunk_FUN_1115c730(...);
extern int thunk_FUN_111a2df0(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern char thunk_FUN_111a5f10(...);
extern uint thunk_FUN_111a7100(...);
extern int thunk_FUN_112630e0(...);
extern int thunk_FUN_1145c250(...);
// Reference entry 111144b0; body size 830 bytes.
namespace recovered_111144b0 {
#line 1 "ENTRY_111144b0"

uint __fastcall FUN_111144b0(int param_1, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  undefined4 local_34 [2];
  double local_2c;
  undefined4 local_24 [4];
  byte *local_14;


  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  uVar10 = 0;
  local_24[0] = 0;
  ((void)0);
  *(undefined4 *)(param_1 + 0x174) = 0;
  cVar3 = thunk_FUN_111a5f10("TimeServer",local_24);
  if (cVar3 != '\0') {
    local_14 = (byte *)thunk_FUN_111a32a0(uVar4);
    pbVar9 = (byte *)(param_1 + 0xa0);
    pbVar5 = local_14;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_11114530:
        uVar6 = -(uint)bVar11 | 1;
        goto LAB_11114535;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_11114530;
      pbVar5 = pbVar5 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_11114535:
    if (uVar6 != 0) {
      thunk_FUN_1145c250(param_1 + 0xa0,local_14,0x81);
      uVar10 = thunk_FUN_111a7100("OnTimeServerChanged",1,local_24);
    }
  }
  cVar3 = thunk_FUN_111a5f10("TimeZone",local_24);
  if (cVar3 != '\0') {
    uVar7 = thunk_FUN_111a32a0(uVar4);
    thunk_FUN_112630e0(uVar7);
    if (*(char *)(param_1 + 0x170) == '\0') {
      thunk_FUN_11119830();
      uVar4 = thunk_FUN_111a7100("OnTimeZoneChanged",1,local_24);
      uVar10 = uVar10 | uVar4;
    }
    else {
      thunk_FUN_1111cf00();
    }
  }
  cVar3 = thunk_FUN_111a5f10("TimeGeneration",local_24);
  if (cVar3 != '\0') {
    iVar8 = thunk_FUN_111a2df0();
    if (iVar8 != *(int *)(param_1 + 0x148)) {
      *(int *)(param_1 + 0x148) = iVar8;
      if (*(char *)(param_1 + 0x170) == '\0') {
        thunk_FUN_11119830();
      }
      else {
        thunk_FUN_11119940();
      }
    }
    uVar4 = thunk_FUN_111a7100("OnTimeGenerationChanged",1,local_24);
    uVar10 = uVar10 | uVar4;
  }
  cVar3 = thunk_FUN_111a5f10("TimeFormat",local_24);
  if (cVar3 != '\0') {
    uVar7 = thunk_FUN_111a32a0();
    cVar3 = thunk_FUN_1115c730(uVar7);
    if (cVar3 != *(char *)(param_1 + 0x14c)) {
      *(char *)(param_1 + 0x14c) = cVar3;
      uVar4 = thunk_FUN_111a7100("OnTimeFormatChanged",1,local_24);
      uVar10 = uVar10 | uVar4;
    }
  }
  cVar3 = thunk_FUN_111a5f10("DateFormat",local_24);
  if (cVar3 != '\0') {
    uVar7 = thunk_FUN_111a32a0();
    cVar3 = thunk_FUN_1115c580(uVar7);
    if (cVar3 != *(char *)(param_1 + 0x14d)) {
      *(char *)(param_1 + 0x14d) = cVar3;
      uVar4 = thunk_FUN_111a7100("OnDateFormatChanged",1,local_24);
      uVar10 = uVar10 | uVar4;
    }
  }
  cVar3 = thunk_FUN_111a5f10("DailyIndexRefreshTime",local_24);
  if (cVar3 != '\0') {
    uVar4 = thunk_FUN_111a7100("OnIndexRefreshTimeChanged",1,local_24);
    uVar10 = uVar10 | uVar4;
  }
  cVar3 = thunk_FUN_111a5f10("AlarmListVersion",local_24);
  if (cVar3 != '\0') {
    pbVar5 = (byte *)thunk_FUN_111a32a0();
    pbVar9 = (byte *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x89) == '\0') {
      thunk_FUN_1106a8d0(pbVar9,pbVar5,0x24);
    }
    else {
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_11114726:
          uVar4 = -(uint)bVar11 | 1;
          goto LAB_1111472b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_11114726;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_1111472b:
      if (uVar4 != 0) {
        if (*(char *)(param_1 + 0x170) == '\0') {
          thunk_FUN_111191d0();
          uVar4 = thunk_FUN_111a7100("OnAlarmsChanged",0,0);
          uVar10 = uVar10 | uVar4;
        }
        else {
          thunk_FUN_11119580();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x170) == '\0') {
    uVar4 = thunk_FUN_1111cb60(1);
    uVar10 = uVar10 | uVar4;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x50);
    thunk_FUN_1111cd70();
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != iVar8) {
      local_34[0] = 0;
      ((void)0);
      thunk_FUN_111a36f0();
      local_2c = (double)iVar2;
      local_34[0] = 4;
      uVar4 = thunk_FUN_111a7100("onTimeStatusChanged",1,local_34);
      uVar10 = uVar10 | uVar4;
      ((void)0);
      thunk_FUN_111a36f0();
    }
  }
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return uVar10;
}


}
