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

extern undefined4 DAT_11884fb0;
extern undefined4 DAT_11884fc0;
extern undefined4 DAT_11884fc8;
extern undefined4 DAT_118939bc;
extern undefined4 DAT_119c30ac;
extern undefined4 DAT_12126b84;
extern int FUN_1120d7b0(...);
extern int FUN_1120d9d0(...);
extern int FUN_1120dc50(...);
extern int FUN_1120e0c0(...);
extern int FUN_1120e550(...);
extern int FUN_1120e850(...);
extern int FUN_1120ead0(...);
extern int FUN_1120ed20(...);
extern int FUN_1120f090(...);
extern int FUN_1120f300(...);
extern int FUN_1120f520(...);
extern int FUN_1120f760(...);
extern int FUN_1120f9b0(...);
extern int FUN_1120fc60(...);
extern int FUN_11210040(...);
extern int FUN_112103e0(...);
extern int FUN_11210660(...);
extern int FUN_11210910(...);
extern int FUN_11210bc0(...);
extern int FUN_11210e40(...);
extern int FUN_11211060(...);
extern int FUN_112112b0(...);
extern int FUN_112114d0(...);
extern int FUN_11211720(...);
extern int FUN_11211940(...);
extern int FUN_11211b60(...);
extern int FUN_11211dd0(...);
extern int FUN_11212080(...);
extern int FUN_11212330(...);
extern int FUN_11212690(...);
extern int FUN_11212a10(...);
extern int FUN_11212cc0(...);
extern int FUN_11212f40(...);
extern int FUN_112131c0(...);
extern int FUN_11213400(...);
extern int FUN_11213680(...);
extern int FUN_112138d0(...);
extern int FUN_11213b20(...);
extern int FUN_11213e00(...);
extern int FUN_11214620(...);
extern int FUN_112149e0(...);
extern int FUN_11214ca0(...);
extern int FUN_11214ed0(...);
extern int FUN_11215190(...);
extern int FUN_112153c0(...);
extern int FUN_11215680(...);
extern int FUN_112158a0(...);
extern int FUN_11215ad0(...);
extern int FUN_11215d00(...);
extern int FUN_11215f20(...);
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
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124f480(...);
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
// Reference entry 1120d7b0; body size 432 bytes.
namespace recovered_1120d7b0 {
#line 1 "ENTRY_1120d7b0"

void __thiscall FUN_1120d7b0(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","BackupQueue",
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

// Reference entry 1120d9d0; body size 504 bytes.
namespace recovered_1120d9d0 {
#line 1 "ENTRY_1120d9d0"

void __thiscall
FUN_1120d9d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "BecomeCoordinatorOfStandaloneGroup",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  if (param_4 != 0) {
    thunk_FUN_1124ff50("DelegatedGroupCoordinatorID");
    thunk_FUN_112503c0(param_3,param_4);
  }
  if (param_6 != 0) {
    thunk_FUN_1124ff50("NewGroupID");
    thunk_FUN_112503c0(param_5,param_6);
  }
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

// Reference entry 1120dc50; body size 903 bytes.
namespace recovered_1120dc50 {
#line 1 "ENTRY_1120dc50"

void __thiscall
FUN_1120dc50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
                     "BecomeGroupCoordinator",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("CurrentCoordinator",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("CurrentGroupID",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  piVar4 = (int *)thunk_FUN_11250000("OtherMembers",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("TransportSettings",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  piVar4 = (int *)thunk_FUN_11250000("CurrentURI",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  piVar4 = (int *)thunk_FUN_11250000("CurrentURIMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_8);
  piVar4 = (int *)thunk_FUN_11250000("SleepTimerState",0);
  (**(code **)(*piVar4 + 0xc))(param_9);
  piVar4 = (int *)thunk_FUN_11250000("AlarmState",0);
  (**(code **)(*piVar4 + 0xc))(param_10);
  piVar4 = (int *)thunk_FUN_11250000("StreamRestartState",0);
  (**(code **)(*piVar4 + 0xc))(param_11);
  thunk_FUN_11250000("SharedQueueTrackList",0);
  thunk_FUN_1124f480(param_12);
  thunk_FUN_11250000("PrivateQueueTrackList",0);
  thunk_FUN_1124f480(param_13);
  thunk_FUN_11250000("CurrentVLIState",0);
  thunk_FUN_1124f480(param_14);
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

// Reference entry 1120e0c0; body size 931 bytes.
namespace recovered_1120e0c0 {
#line 1 "ENTRY_1120e0c0"

void __thiscall
FUN_1120e0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)

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
                     "BecomeGroupCoordinatorAndSource",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  piVar4 = (int *)thunk_FUN_11250000("CurrentCoordinator",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("CurrentGroupID",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  piVar4 = (int *)thunk_FUN_11250000("OtherMembers",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("CurrentURI",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  piVar4 = (int *)thunk_FUN_11250000("CurrentURIMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  piVar4 = (int *)thunk_FUN_11250000("SleepTimerState",0);
  (**(code **)(*piVar4 + 0xc))(param_8);
  piVar4 = (int *)thunk_FUN_11250000("AlarmState",0);
  (**(code **)(*piVar4 + 0xc))(param_9);
  piVar4 = (int *)thunk_FUN_11250000("StreamRestartState",0);
  (**(code **)(*piVar4 + 0xc))(param_10);
  thunk_FUN_11250000("CurrentAVTTrackList",0);
  thunk_FUN_1124f480(param_11);
  thunk_FUN_11250000("SharedQueueTrackList",0);
  thunk_FUN_1124f480(param_12);
  thunk_FUN_11250000("PrivateQueueTrackList",0);
  thunk_FUN_1124f480(param_13);
  thunk_FUN_11250000("CurrentSourceState",0);
  thunk_FUN_1124f480(param_14);
  thunk_FUN_11250000("ResumePlayback",0);
  thunk_FUN_1124f3c0(param_15);
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

// Reference entry 1120e550; body size 611 bytes.
namespace recovered_1120e550 {
#line 1 "ENTRY_1120e550"

void __thiscall
FUN_1120e550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

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
                     "ChangeCoordinator",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("CurrentCoordinator",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("NewCoordinator",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  piVar4 = (int *)thunk_FUN_11250000("NewTransportSettings",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("CurrentAVTransportURI",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  thunk_FUN_11250000("RestartSink",0);
  thunk_FUN_1124f3c0(param_7);
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

// Reference entry 1120e850; body size 503 bytes.
namespace recovered_1120e850 {
#line 1 "ENTRY_1120e850"

void __thiscall FUN_1120e850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                     "ChangeTransportSettings",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("NewTransportSettings",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("CurrentAVTransportURI",0);
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

// Reference entry 1120ead0; body size 463 bytes.
namespace recovered_1120ead0 {
#line 1 "ENTRY_1120ead0"

void __thiscall FUN_1120ead0(int param_1,undefined4 param_2,undefined4 param_3)

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
                     "ConfigureSleepTimer",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("NewSleepTimerDuration",0);
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

// Reference entry 1120ed20; body size 698 bytes.
namespace recovered_1120ed20 {
#line 1 "ENTRY_1120ed20"

void __thiscall
FUN_1120ed20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","CreateSavedQueue"
                     ,param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("Title",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURI",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  piVar4 = (int *)thunk_FUN_11250000("EnqueuedURIMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  thunk_FUN_1124ff50("NumTracksAdded");
  thunk_FUN_112504b0(param_6);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(param_7);
  thunk_FUN_1124ff50("AssignedObjectID");
  thunk_FUN_112503c0(param_8,param_9);
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

// Reference entry 1120f090; body size 491 bytes.
namespace recovered_1120f090 {
#line 1 "ENTRY_1120f090"

void __thiscall FUN_1120f090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                     "DelegateGroupCoordinationTo",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("NewCoordinator",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_11250000("RejoinGroup",0);
  thunk_FUN_1124f3c0(param_4);
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

// Reference entry 1120f300; body size 432 bytes.
namespace recovered_1120f300 {
#line 1 "ENTRY_1120f300"

void __thiscall FUN_1120f300(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "EndDirectControlSession",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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

// Reference entry 1120f520; body size 461 bytes.
namespace recovered_1120f520 {
#line 1 "ENTRY_1120f520"

void __thiscall FUN_1120f520(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","GetCrossfadeMode"
                     ,param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("CrossfadeMode");
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

// Reference entry 1120f760; body size 464 bytes.
namespace recovered_1120f760 {
#line 1 "ENTRY_1120f760"

void __thiscall FUN_1120f760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "GetCurrentTransportActions",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("Actions");
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

// Reference entry 1120f9b0; body size 546 bytes.
namespace recovered_1120f9b0 {
#line 1 "ENTRY_1120f9b0"

void __thiscall
FUN_1120f9b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "GetDeviceCapabilities",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("PlayMedia");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_1124ff50("RecMedia");
  thunk_FUN_112503c0(param_5,param_6);
  thunk_FUN_1124ff50("RecQualityModes");
  thunk_FUN_112503c0(param_7,param_8);
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

// Reference entry 1120fc60; body size 789 bytes.
namespace recovered_1120fc60 {
#line 1 "ENTRY_1120fc60"

void __thiscall
FUN_1120fc60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","GetMediaInfo",
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
  thunk_FUN_1124ff50("NrTracks");
  thunk_FUN_112504b0(param_3);
  thunk_FUN_1124ff50("MediaDuration");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("CurrentURI");
  thunk_FUN_112503c0(param_6,param_7);
  thunk_FUN_1124ff50("CurrentURIMetaData");
  thunk_FUN_112503c0(param_8,param_9);
  thunk_FUN_1124ff50("NextURI");
  thunk_FUN_112503c0(param_10,param_11);
  thunk_FUN_1124ff50("NextURIMetaData");
  thunk_FUN_112503c0(param_12,param_13);
  thunk_FUN_1124ff50("PlayMedium");
  thunk_FUN_112503c0(param_14,param_15);
  thunk_FUN_1124ff50("RecordMedium");
  thunk_FUN_112503c0(param_16,param_17);
  thunk_FUN_1124ff50("WriteStatus");
  thunk_FUN_112503c0(param_18,param_19);
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

// Reference entry 11210040; body size 742 bytes.
namespace recovered_11210040 {
#line 1 "ENTRY_11210040"

void __thiscall
FUN_11210040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","GetPositionInfo",
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
  thunk_FUN_1124ff50("Track");
  thunk_FUN_112504b0(param_3);
  thunk_FUN_1124ff50("TrackDuration");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("TrackMetaData");
  thunk_FUN_112503c0(param_6,param_7);
  thunk_FUN_1124ff50("TrackURI");
  thunk_FUN_112503c0(param_8,param_9);
  thunk_FUN_1124ff50("RelTime");
  thunk_FUN_112503c0(param_10,param_11);
  thunk_FUN_1124ff50("AbsTime");
  thunk_FUN_112503c0(param_12,param_13);
  thunk_FUN_1124ff50("RelCount");
  thunk_FUN_11250470(param_14);
  thunk_FUN_1124ff50("AbsCount");
  thunk_FUN_11250470(param_15);
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

// Reference entry 112103e0; body size 502 bytes.
namespace recovered_112103e0 {
#line 1 "ENTRY_112103e0"

void __thiscall
FUN_112103e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "GetRemainingSleepTimerDuration",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("RemainingSleepTimerDuration");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_1124ff50("CurrentSleepTimerGeneration");
  thunk_FUN_112504b0(param_5);
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

// Reference entry 11210660; body size 543 bytes.
namespace recovered_11210660 {
#line 1 "ENTRY_11210660"

void __thiscall
FUN_11210660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "GetRunningAlarmProperties",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("AlarmID");
  thunk_FUN_112504b0(param_3);
  thunk_FUN_1124ff50("GroupID");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("LoggedStartTime");
  thunk_FUN_112503c0(param_6,param_7);
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

// Reference entry 11210910; body size 546 bytes.
namespace recovered_11210910 {
#line 1 "ENTRY_11210910"

void __thiscall
FUN_11210910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","GetTransportInfo"
                     ,param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("CurrentTransportState");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_1124ff50("CurrentTransportStatus");
  thunk_FUN_112503c0(param_5,param_6);
  thunk_FUN_1124ff50("CurrentSpeed");
  thunk_FUN_112503c0(param_7,param_8);
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

// Reference entry 11210bc0; body size 505 bytes.
namespace recovered_11210bc0 {
#line 1 "ENTRY_11210bc0"

void __thiscall
FUN_11210bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "GetTransportSettings",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_1124ff50("PlayMode");
  thunk_FUN_112503c0(param_3,param_4);
  thunk_FUN_1124ff50("RecQualityMode");
  thunk_FUN_112503c0(param_5,param_6);
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

// Reference entry 11210e40; body size 432 bytes.
namespace recovered_11210e40 {
#line 1 "ENTRY_11210e40"

void __thiscall FUN_11210e40(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_11884fc8,
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

// Reference entry 11211060; body size 463 bytes.
namespace recovered_11211060 {
#line 1 "ENTRY_11211060"

void __thiscall FUN_11211060(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","NotifyDeletedURI"
                     ,param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("DeletedURI",0);
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

// Reference entry 112112b0; body size 432 bytes.
namespace recovered_112112b0 {
#line 1 "ENTRY_112112b0"

void __thiscall FUN_112112b0(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","Pause",
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

// Reference entry 112114d0; body size 463 bytes.
namespace recovered_112114d0 {
#line 1 "ENTRY_112114d0"

void __thiscall FUN_112114d0(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_11884fb0,
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
  piVar4 = (int *)thunk_FUN_11250000("Speed",0);
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

// Reference entry 11211720; body size 432 bytes.
namespace recovered_11211720 {
#line 1 "ENTRY_11211720"

void __thiscall FUN_11211720(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","Previous",
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

// Reference entry 11211940; body size 432 bytes.
namespace recovered_11211940 {
#line 1 "ENTRY_11211940"

void __thiscall FUN_11211940(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "RemoveAllTracksFromQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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

// Reference entry 11211b60; body size 491 bytes.
namespace recovered_11211b60 {
#line 1 "ENTRY_11211b60"

void __thiscall FUN_11211b60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                     "RemoveTrackFromQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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

// Reference entry 11211dd0; body size 545 bytes.
namespace recovered_11211dd0 {
#line 1 "ENTRY_11211dd0"

void __thiscall
FUN_11211dd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "RemoveTrackRangeFromQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_11250000("StartingIndex",0);
  thunk_FUN_1124f350(param_4);
  thunk_FUN_11250000("NumberOfTracks",0);
  thunk_FUN_1124f350(param_5);
  thunk_FUN_1124ff50("NewUpdateID");
  thunk_FUN_112504b0(param_6);
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

// Reference entry 11212080; body size 544 bytes.
namespace recovered_11212080 {
#line 1 "ENTRY_11212080"

void __thiscall
FUN_11212080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "ReorderTracksInQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_11250000("StartingIndex",0);
  thunk_FUN_1124f350(param_3);
  thunk_FUN_11250000("NumberOfTracks",0);
  thunk_FUN_1124f350(param_4);
  thunk_FUN_11250000("InsertBefore",0);
  thunk_FUN_1124f350(param_5);
  thunk_FUN_11250000("UpdateID",0);
  thunk_FUN_1124f350(param_6);
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

// Reference entry 11212330; body size 685 bytes.
namespace recovered_11212330 {
#line 1 "ENTRY_11212330"

void __thiscall
FUN_11212330(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",
                     "ReorderTracksInSavedQueue",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("TrackList",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("NewPositionList",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  thunk_FUN_1124ff50("QueueLengthChange");
  thunk_FUN_11250470(param_7);
  thunk_FUN_1124ff50("NewQueueLength");
  thunk_FUN_112504b0(param_8);
  thunk_FUN_1124ff50("NewUpdateID");
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

// Reference entry 11212690; body size 707 bytes.
namespace recovered_11212690 {
#line 1 "ENTRY_11212690"

void __thiscall
FUN_11212690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","RunAlarm",
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
  thunk_FUN_11250000("AlarmID",0);
  thunk_FUN_1124f350(param_3);
  piVar4 = (int *)thunk_FUN_11250000("LoggedStartTime",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  piVar4 = (int *)thunk_FUN_11250000("Duration",0);
  (**(code **)(*piVar4 + 0xc))(param_5);
  piVar4 = (int *)thunk_FUN_11250000("ProgramURI",0);
  (**(code **)(*piVar4 + 0xc))(param_6);
  piVar4 = (int *)thunk_FUN_11250000("ProgramMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  piVar4 = (int *)thunk_FUN_11250000("PlayMode",0);
  (**(code **)(*piVar4 + 0xc))(param_8);
  thunk_FUN_11250000("Volume",0);
  thunk_FUN_1124f2e0(param_9);
  thunk_FUN_11250000("IncludeLinkedZones",0);
  thunk_FUN_1124f3c0(param_10);
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

// Reference entry 11212a10; body size 544 bytes.
namespace recovered_11212a10 {
#line 1 "ENTRY_11212a10"

void __thiscall
FUN_11212a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","SaveQueue",
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
  piVar4 = (int *)thunk_FUN_11250000("Title",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("ObjectID",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_1124ff50("AssignedObjectID");
  thunk_FUN_112503c0(param_5,param_6);
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

// Reference entry 11212cc0; body size 503 bytes.
namespace recovered_11212cc0 {
#line 1 "ENTRY_11212cc0"

void __thiscall FUN_11212cc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_11884fc0,
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
  piVar4 = (int *)thunk_FUN_11250000(&DAT_119c30ac,0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("Target",0);
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

// Reference entry 11212f40; body size 503 bytes.
namespace recovered_11212f40 {
#line 1 "ENTRY_11212f40"

void __thiscall FUN_11212f40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                     "SetAVTransportURI",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("CurrentURI",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("CurrentURIMetaData",0);
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

// Reference entry 112131c0; body size 460 bytes.
namespace recovered_112131c0 {
#line 1 "ENTRY_112131c0"

void __thiscall FUN_112131c0(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","SetCrossfadeMode"
                     ,param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  thunk_FUN_11250000("CrossfadeMode",0);
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

// Reference entry 11213400; body size 503 bytes.
namespace recovered_11213400 {
#line 1 "ENTRY_11213400"

void __thiscall FUN_11213400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                     "SetNextAVTransportURI",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("NextURI",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("NextURIMetaData",0);
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

// Reference entry 11213680; body size 463 bytes.
namespace recovered_11213680 {
#line 1 "ENTRY_11213680"

void __thiscall FUN_11213680(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","SetPlayMode",
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
  piVar4 = (int *)thunk_FUN_11250000("NewPlayMode",0);
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

// Reference entry 112138d0; body size 463 bytes.
namespace recovered_112138d0 {
#line 1 "ENTRY_112138d0"

void __thiscall FUN_112138d0(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","SnoozeAlarm",
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
  piVar4 = (int *)thunk_FUN_11250000("Duration",0);
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

// Reference entry 11213b20; body size 587 bytes.
namespace recovered_11213b20 {
#line 1 "ENTRY_11213b20"

void __thiscall
FUN_11213b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1","StartAutoplay",
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
  piVar4 = (int *)thunk_FUN_11250000("ProgramURI",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("ProgramMetaData",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_11250000("Volume",0);
  thunk_FUN_1124f2e0(param_5);
  thunk_FUN_11250000("IncludeLinkedZones",0);
  thunk_FUN_1124f3c0(param_6);
  thunk_FUN_11250000("ResetVolumeAfter",0);
  thunk_FUN_1124f3c0(param_7);
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

// Reference entry 11213e00; body size 432 bytes.
namespace recovered_11213e00 {
#line 1 "ENTRY_11213e00"

void __thiscall FUN_11213e00(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_118939bc,
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

// Reference entry 11214620; body size 765 bytes.
namespace recovered_11214620 {
#line 1 "ENTRY_11214620"

void __thiscall
FUN_11214620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"Browse",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  piVar4 = (int *)thunk_FUN_11250000("BrowseFlag",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  piVar4 = (int *)thunk_FUN_11250000("Filter",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_11250000("StartingIndex",0);
  thunk_FUN_1124f350(param_5);
  thunk_FUN_11250000("RequestedCount",0);
  thunk_FUN_1124f350(param_6);
  piVar4 = (int *)thunk_FUN_11250000("SortCriteria",0);
  (**(code **)(*piVar4 + 0xc))(param_7);
  thunk_FUN_1124ff50("Result");
  thunk_FUN_11250530(param_8);
  thunk_FUN_1124ff50("NumberReturned");
  thunk_FUN_112504b0(param_9);
  thunk_FUN_1124ff50("TotalMatches");
  thunk_FUN_112504b0(param_10);
  thunk_FUN_1124ff50("UpdateID");
  thunk_FUN_112504b0(param_11);
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

// Reference entry 112149e0; body size 559 bytes.
namespace recovered_112149e0 {
#line 1 "ENTRY_112149e0"

void __thiscall
FUN_112149e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"CreateObject",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  piVar4 = (int *)thunk_FUN_11250000("ContainerID",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  piVar4 = (int *)thunk_FUN_11250000("Elements",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_1124ff50("ObjectID");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("Result");
  thunk_FUN_112503c0(param_6,param_7);
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

// Reference entry 11214ca0; body size 437 bytes.
namespace recovered_11214ca0 {
#line 1 "ENTRY_11214ca0"

void __thiscall FUN_11214ca0(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"DestroyObject",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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

// Reference entry 11214ed0; body size 553 bytes.
namespace recovered_11214ed0 {
#line 1 "ENTRY_11214ed0"

void __thiscall
FUN_11214ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"FindPrefix",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  piVar4 = (int *)thunk_FUN_11250000("Prefix",0);
  (**(code **)(*piVar4 + 0xc))(param_3);
  thunk_FUN_1124ff50("StartingIndex");
  thunk_FUN_112504b0(param_4);
  thunk_FUN_1124ff50("UpdateID");
  thunk_FUN_112504b0(param_5);
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

// Reference entry 11215190; body size 438 bytes.
namespace recovered_11215190 {
#line 1 "ENTRY_11215190"

void __thiscall FUN_11215190(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetAlbumArtistDisplayOption",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("AlbumArtistDisplayOption");
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

// Reference entry 112153c0; body size 554 bytes.
namespace recovered_112153c0 {
#line 1 "ENTRY_112153c0"

void __thiscall
FUN_112153c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetAllPrefixLocations",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("TotalPrefixes");
  thunk_FUN_112504b0(param_3);
  thunk_FUN_1124ff50("PrefixAndIndexCSV");
  thunk_FUN_112503c0(param_4,param_5);
  thunk_FUN_1124ff50("UpdateID");
  thunk_FUN_112504b0(param_6);
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

// Reference entry 11215680; body size 435 bytes.
namespace recovered_11215680 {
#line 1 "ENTRY_11215680"

void __thiscall FUN_11215680(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetBrowseable",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("IsBrowseable");
  thunk_FUN_112505b0(param_2);
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

// Reference entry 112158a0; body size 438 bytes.
namespace recovered_112158a0 {
#line 1 "ENTRY_112158a0"

void __thiscall FUN_112158a0(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetLastIndexChange",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("LastIndexChange");
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

// Reference entry 11215ad0; body size 438 bytes.
namespace recovered_11215ad0 {
#line 1 "ENTRY_11215ad0"

void __thiscall FUN_11215ad0(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetSearchCapabilities",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("SearchCaps");
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

// Reference entry 11215d00; body size 435 bytes.
namespace recovered_11215d00 {
#line 1 "ENTRY_11215d00"

void __thiscall FUN_11215d00(int param_1,undefined4 param_2)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetShareIndexInProgress",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("IsIndexing");
  thunk_FUN_112505b0(param_2);
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

// Reference entry 11215f20; body size 438 bytes.
namespace recovered_11215f20 {
#line 1 "ENTRY_11215f20"

void __thiscall FUN_11215f20(int param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_111c32e0(iVar2 + param_1,param_1 + 0x684,"GetSortCapabilities",param_1 + 0x18c,
                     *(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650),0,0);
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
  thunk_FUN_1124ff50("SortCaps");
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
