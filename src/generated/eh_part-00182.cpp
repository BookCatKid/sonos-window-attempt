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

extern undefined4 DAT_1194cfd4;
extern undefined4 DAT_12126b84;
extern int FUN_11206000(...);
extern int FUN_112062c0(...);
extern int FUN_112064f0(...);
extern int FUN_11206780(...);
extern int FUN_11206980(...);
extern int FUN_11206be0(...);
extern int FUN_11208ed0(...);
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
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_11250000(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 11206000; body size 559 bytes.
namespace recovered_11206000 {
#line 1 "ENTRY_11206000"

void __thiscall
FUN_11206000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "GetZoneGroupAttributes",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("CurrentZoneGroupName");
  thunk_FUN_112503c0(param_2,param_3);
  thunk_FUN_1124ff50("CurrentZoneGroupID");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("CurrentZonePlayerUUIDsInGroup");
  thunk_FUN_112503c0(param_6,param_7);
  thunk_FUN_1124ff50("CurrentMuseHouseholdId");
  thunk_FUN_112503c0(param_8,param_9);
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

// Reference entry 112062c0; body size 436 bytes.
namespace recovered_112062c0 {
#line 1 "ENTRY_112062c0"

void __thiscall FUN_112062c0(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "GetZoneGroupState",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("ZoneGroupState");
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

// Reference entry 112064f0; body size 515 bytes.
namespace recovered_112064f0 {
#line 1 "ENTRY_112064f0"

void __thiscall FUN_112064f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "RegisterMobileDevice",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("MobileDeviceName",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("MobileDeviceUDN",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("MobileIPAndPort",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
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

// Reference entry 11206780; body size 402 bytes.
namespace recovered_11206780 {
#line 1 "ENTRY_11206780"

void __fastcall FUN_11206780(int param_1)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "ReportAlarmStartedRunning",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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

// Reference entry 11206980; body size 475 bytes.
namespace recovered_11206980 {
#line 1 "ENTRY_11206980"

void __thiscall FUN_11206980(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "ReportUnresponsiveDevice",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("DeviceUUID",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("DesiredAction",0);
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

// Reference entry 11206be0; body size 501 bytes.
namespace recovered_11206be0 {
#line 1 "ENTRY_11206be0"

void __thiscall FUN_11206be0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "SubmitDiagnostics",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("DiagnosticID");
  thunk_FUN_112504b0(param_2);
  thunk_FUN_11250000("IncludeControllers",0);
  thunk_FUN_1124f3c0(param_3);
  piVar4 = (int *)thunk_FUN_11250000(&DAT_1194cfd4,0);
  (**(code **)(*piVar4 + 0xc))(param_4);
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

// Reference entry 11208ed0; body size 797 bytes.
namespace recovered_11208ed0 {
#line 1 "ENTRY_11208ed0"

void __thiscall
FUN_11208ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AlarmClock:1","CreateAlarm",
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
  piVar4 = (int *)thunk_FUN_11250000("StartLocalTime",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("Duration",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("Recurrence",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_11250000("Enabled",0);
  thunk_FUN_1124f3c0(param_5);
  piVar4 = (int *)thunk_FUN_11250000("RoomUUID",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  piVar4 = (int *)thunk_FUN_11250000("ProgramURI",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  piVar4 = (int *)thunk_FUN_11250000("ProgramMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_8);
  piVar4 = (int *)thunk_FUN_11250000("PlayMode",0);
  (**(code **)(*piVar4 + 0xc))(param_9);
  thunk_FUN_11250000("Volume",0);
  thunk_FUN_1124f2e0(param_10);
  thunk_FUN_11250000("IncludeLinkedZones",0);
  thunk_FUN_1124f3c0(param_11);
  thunk_FUN_1124ff50("AssignedID");
  thunk_FUN_112504b0(param_12);
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
