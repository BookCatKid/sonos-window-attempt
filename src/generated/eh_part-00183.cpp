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

extern undefined4 DAT_11910258;
extern undefined4 DAT_12126b84;
extern int FUN_112092c0(...);
extern int FUN_112094e0(...);
extern int FUN_11209710(...);
extern int FUN_11209970(...);
extern int FUN_11209bd0(...);
extern int FUN_11209e90(...);
extern int FUN_1120a0c0(...);
extern int FUN_1120a310(...);
extern int FUN_1120a590(...);
extern int FUN_1120a7e0(...);
extern int FUN_1120aa30(...);
extern int FUN_1120ac50(...);
extern int FUN_1120aeb0(...);
extern int FUN_1120b110(...);
extern int FUN_1120b330(...);
extern int FUN_1120b570(...);
extern int FUN_1120bb90(...);
extern int FUN_1120bdf0(...);
extern int FUN_1120c040(...);
extern int FUN_1120c2a0(...);
extern int FUN_1120c4e0(...);
extern int FUN_1120c770(...);
extern int FUN_1120ccb0(...);
extern int FUN_1120d0e0(...);
extern int FUN_1120d430(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int thunk_FUN_111c32e0(...);
extern int thunk_FUN_111c5fc0(...);
extern int thunk_FUN_111c66d0(...);
extern int thunk_FUN_11204570(...);
extern int thunk_FUN_112045a0(...);
extern int thunk_FUN_11204720(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f0e0(...);
extern int thunk_FUN_1124f2e0(...);
extern int thunk_FUN_1124f320(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_11250000(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11250470(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_11250530(...);
extern int thunk_FUN_112505b0(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 112092c0; body size 432 bytes.
namespace recovered_112092c0 {
#line 1 "ENTRY_112092c0"

void __thiscall FUN_112092c0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","DestroyAlarm",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000(&DAT_11910258,0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 112094e0; body size 436 bytes.
namespace recovered_112094e0 {
#line 1 "ENTRY_112094e0"

void __thiscall FUN_112094e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1",
                     "GetDailyIndexRefreshTime",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentDailyIndexRefreshTime");
  thunk_FUN_112503c0(param_2,param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11209710; body size 477 bytes.
namespace recovered_11209710 {
#line 1 "ENTRY_11209710"

void __thiscall
FUN_11209710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","GetFormat",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentTimeFormat");
  thunk_FUN_112503c0(param_2,param_3);
  thunk_FUN_1124ff50("CurrentDateFormat");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11209970; body size 476 bytes.
namespace recovered_11209970 {
#line 1 "ENTRY_11209970"

void __thiscall FUN_11209970(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1",
                     "GetHouseholdTimeAtStamp",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("TimeStamp",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_1124ff50("HouseholdUTCTime");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11209bd0; body size 556 bytes.
namespace recovered_11209bd0 {
#line 1 "ENTRY_11209bd0"

void __thiscall
FUN_11209bd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","GetTimeNow",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentUTCTime");
  thunk_FUN_112503c0(param_2,param_3);
  thunk_FUN_1124ff50("CurrentLocalTime");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("CurrentTimeZone");
  thunk_FUN_112503c0(param_6,param_7);
  thunk_FUN_1124ff50("CurrentTimeGeneration");
  thunk_FUN_112504b0(param_8);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11209e90; body size 436 bytes.
namespace recovered_11209e90 {
#line 1 "ENTRY_11209e90"

void __thiscall FUN_11209e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","GetTimeServer",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentTimeServer");
  thunk_FUN_112503c0(param_2,param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120a0c0; body size 471 bytes.
namespace recovered_1120a0c0 {
#line 1 "ENTRY_1120a0c0"

void __thiscall FUN_1120a0c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","GetTimeZone",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("Index");
  thunk_FUN_11250470(param_2);
  thunk_FUN_1124ff50("AutoAdjustDst");
  thunk_FUN_112505b0(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120a310; body size 512 bytes.
namespace recovered_1120a310 {
#line 1 "ENTRY_1120a310"

void __thiscall
FUN_1120a310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1",
                     "GetTimeZoneAndRule",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("Index");
  thunk_FUN_11250470(param_2);
  thunk_FUN_1124ff50("AutoAdjustDst");
  thunk_FUN_112505b0(param_3);
  thunk_FUN_1124ff50("CurrentTimeZone");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120a590; body size 464 bytes.
namespace recovered_1120a590 {
#line 1 "ENTRY_1120a590"

void __thiscall FUN_1120a590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","GetTimeZoneRule",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000("Index",0);
  thunk_FUN_1124f320(param_2);
  thunk_FUN_1124ff50("TimeZone");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120a7e0; body size 474 bytes.
namespace recovered_1120a7e0 {
#line 1 "ENTRY_1120a7e0"

void __thiscall FUN_1120a7e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","ListAlarms",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentAlarmList");
  thunk_FUN_11250530(param_2);
  thunk_FUN_1124ff50("CurrentAlarmListVersion");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120aa30; body size 435 bytes.
namespace recovered_1120aa30 {
#line 1 "ENTRY_1120aa30"

void __thiscall FUN_1120aa30(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1",
                     "SetDailyIndexRefreshTime",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("DesiredDailyIndexRefreshTime",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120ac50; body size 475 bytes.
namespace recovered_1120ac50 {
#line 1 "ENTRY_1120ac50"

void __thiscall FUN_1120ac50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","SetFormat",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("DesiredTimeFormat",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("DesiredDateFormat",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120aeb0; body size 475 bytes.
namespace recovered_1120aeb0 {
#line 1 "ENTRY_1120aeb0"

void __thiscall FUN_1120aeb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","SetTimeNow",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("DesiredTime",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("TimeZoneForDesiredTime",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120b110; body size 435 bytes.
namespace recovered_1120b110 {
#line 1 "ENTRY_1120b110"

void __thiscall FUN_1120b110(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","SetTimeServer",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("DesiredTimeServer",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120b330; body size 460 bytes.
namespace recovered_1120b330 {
#line 1 "ENTRY_1120b330"

void __thiscall FUN_1120b330(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","SetTimeZone",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000("Index",0);
  thunk_FUN_1124f320(param_2);
  thunk_FUN_11250000("AutoAdjustDst",0);
  thunk_FUN_1124f3c0(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120b570; body size 787 bytes.
namespace recovered_1120b570 {
#line 1 "ENTRY_1120b570"

void __thiscall
FUN_1120b570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","UpdateAlarm",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000(&DAT_11910258,0);
  thunk_FUN_1124f350(param_2);
  piVar4 = (int *)thunk_FUN_11250000("StartLocalTime",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("Duration",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  piVar4 = (int *)thunk_FUN_11250000("Recurrence",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  thunk_FUN_11250000("Enabled",0);
  thunk_FUN_1124f3c0(param_6);
  piVar4 = (int *)thunk_FUN_11250000("RoomUUID",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  piVar4 = (int *)thunk_FUN_11250000("ProgramURI",0);
  (**(code **)(*piVar4 + 0xc))(param_8);
  piVar4 = (int *)thunk_FUN_11250000("ProgramMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_9);
  piVar4 = (int *)thunk_FUN_11250000("PlayMode",0);
  (**(code **)(*piVar4 + 0xc))(param_10);
  thunk_FUN_11250000("Volume",0);
  thunk_FUN_1124f2e0(param_11);
  thunk_FUN_11250000("IncludeLinkedZones",0);
  thunk_FUN_1124f3c0(param_12);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120bb90; body size 477 bytes.
namespace recovered_1120bb90 {
#line 1 "ENTRY_1120bb90"

void __thiscall
FUN_1120bb90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AudioIn:1",
                     "GetAudioInputAttributes",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentName");
  thunk_FUN_112503c0(param_2,param_3);
  thunk_FUN_1124ff50("CurrentIcon");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120bdf0; body size 471 bytes.
namespace recovered_1120bdf0 {
#line 1 "ENTRY_1120bdf0"

void __thiscall FUN_1120bdf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AudioIn:1","GetLineInLevel",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_1124ff50("CurrentLeftLineInLevel");
  thunk_FUN_11250470(param_2);
  thunk_FUN_1124ff50("CurrentRightLineInLevel");
  thunk_FUN_11250470(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120c040; body size 475 bytes.
namespace recovered_1120c040 {
#line 1 "ENTRY_1120c040"

void __thiscall FUN_1120c040(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AudioIn:1",
                     "SetAudioInputAttributes",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("DesiredName",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("DesiredIcon",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120c2a0; body size 460 bytes.
namespace recovered_1120c2a0 {
#line 1 "ENTRY_1120c2a0"

void __thiscall FUN_1120c2a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AudioIn:1","SetLineInLevel",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000("DesiredLeftLineInLevel",0);
  thunk_FUN_1124f320(param_2);
  thunk_FUN_11250000("DesiredRightLineInLevel",0);
  thunk_FUN_1124f320(param_3);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar4 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar4);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120c4e0; body size 516 bytes.
namespace recovered_1120c4e0 {
#line 1 "ENTRY_1120c4e0"

void __thiscall
FUN_1120c4e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AudioIn:1",
                     "StartTransmissionToGroup",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("ObjectID",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("CoordinatorID",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_1124ff50("CurrentTransportSettings");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120c770; body size 435 bytes.
namespace recovered_1120c770 {
#line 1 "ENTRY_1120c770"

void __thiscall FUN_1120c770(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AudioIn:1",
                     "StopTransmissionToGroup",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  piVar4 = (int *)thunk_FUN_11250000("CoordinatorID",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120ccb0; body size 847 bytes.
namespace recovered_1120ccb0 {
#line 1 "ENTRY_1120ccb0"

void __thiscall
FUN_1120ccb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "AddMultipleURIsToQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_11250000("UpdateID",0);
  thunk_FUN_1124f350(param_3);
  thunk_FUN_11250000("NumberOfURIs",0);
  thunk_FUN_1124f350(param_4);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURIs",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURIsMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  piVar4 = (int *)thunk_FUN_11250000("ContainerURI",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  piVar4 = (int *)thunk_FUN_11250000("ContainerMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_8);
  thunk_FUN_11250000("DesiredFirstTrackNumberEnqueued",0);
  thunk_FUN_1124f350(param_9);
  thunk_FUN_11250000("EnqueueAsNext",0);
  thunk_FUN_1124f3c0(param_10);
  thunk_FUN_1124ff50("FirstTrackNumberEnqueued");
  thunk_FUN_112504b0(param_11);
  thunk_FUN_1124ff50("NumTracksAdded");
  thunk_FUN_112504b0(param_12);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(param_13);
  thunk_FUN_1124ff50("NewUpdateID");
  thunk_FUN_112504b0(param_14);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120d0e0; body size 673 bytes.
namespace recovered_1120d0e0 {
#line 1 "ENTRY_1120d0e0"

void __thiscall
FUN_1120d0e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","AddURIToQueue",
                     param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURI",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURIMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_11250000("DesiredFirstTrackNumberEnqueued",0);
  thunk_FUN_1124f350(param_5);
  thunk_FUN_11250000("EnqueueAsNext",0);
  thunk_FUN_1124f3c0(param_6);
  thunk_FUN_1124ff50("FirstTrackNumberEnqueued");
  thunk_FUN_112504b0(param_7);
  thunk_FUN_1124ff50("NumTracksAdded");
  thunk_FUN_112504b0(param_8);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(param_9);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1120d430; body size 713 bytes.
namespace recovered_1120d430 {
#line 1 "ENTRY_1120d430"

void __thiscall
FUN_1120d430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_c358 [42248];
  undefined1 local_1e50 [7708];
  undefined4 local_34;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(char *)(param_1 + 0x338) == '\0') || (*(char *)(param_1 + 0xcc) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0xcc;
  if (!bVar1) {
    iVar2 = 0xc;
  }
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "AddURIToSavedQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
                     *(undefined4 *)(param_1 + 0x650),0,0);
  ((void)0);
  thunk_FUN_11204720(local_2c);
  ((void)0);
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  thunk_FUN_111c66d0(ppppuVar3);
  thunk_FUN_11204570(local_1e50);
  thunk_FUN_112045a0(local_c358);
  thunk_FUN_11250000("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar4 = (int *)thunk_FUN_11250000("ObjectID",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_11250000("UpdateID",0);
  thunk_FUN_1124f350(param_4);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURI",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURIMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  thunk_FUN_11250000("AddAtIndex",0);
  thunk_FUN_1124f350(param_7);
  thunk_FUN_1124ff50("NumTracksAdded");
  thunk_FUN_112504b0(param_8);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(param_9);
  thunk_FUN_1124ff50("NewUpdateID");
  thunk_FUN_112504b0(param_10);
  thunk_FUN_111c5fc0();
  *(undefined4 *)(param_1 + 0x66c) = local_34;
  if (0xf < local_18) {
    uVar5 = local_18 + 1;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      uVar5 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar3,uVar5);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
