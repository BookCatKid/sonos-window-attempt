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

extern undefined4 DAT_1189ea64;
extern undefined4 DAT_12126b84;
extern int* DAT_122f55e4;
extern int FUN_11200910(...);
extern int FUN_11205ac0(...);
extern int FUN_11205d40(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern ulong strtoul(...);
extern int thunk_FUN_111c32e0(...);
extern int thunk_FUN_111c5fc0(...);
extern int thunk_FUN_111c66d0(...);
extern int thunk_FUN_11204570(...);
extern int thunk_FUN_112045a0(...);
extern int thunk_FUN_11204720(...);
extern char thunk_FUN_11245310(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f0e0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_11250000(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 11200910; body size 282 bytes.
namespace recovered_11200910 {
#line 1 "ENTRY_11200910"

void FUN_11200910(undefined4 param_1,undefined4 param_2,ulong *param_3,char param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  bool bVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  char *local_288;
  ulong local_284 [148];
  char local_34 [32];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  uVar4 = 0;
  bVar1 = true;
  *param_3 = 0;
  cVar3 = thunk_FUN_11245310(param_2,&DAT_1189ea64,local_34,0x20,local_14);
  if (cVar3 == '\0') {
    bVar1 = false;
  }
  else {
    uVar4 = strtoul(local_34,&local_288,10);
    if (local_288 == local_34) goto LAB_11200a0e;
  }
  piVar2 = DAT_122f55e4;
  if (DAT_122f55e4 != (int *)0x0) {
    thunk_FUN_11255220();
    ((void)0);
    cVar3 = (**(code **)(*piVar2 + 4))(param_1,uVar4,local_284);
    if (cVar3 == '\0') {
      thunk_FUN_11255560();
    }
    else if (((bVar1) && (local_284[0] != uVar4)) && (param_4 == '\0')) {
      thunk_FUN_11255560();
    }
    else {
      *param_3 = local_284[0];
      thunk_FUN_11255560();
    }
  }
LAB_11200a0e:
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11205ac0; body size 503 bytes.
namespace recovered_11205ac0 {
#line 1 "ENTRY_11205ac0"

void __thiscall FUN_11205ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
                     "BeginSoftwareUpdate",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("UpdateURL",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_11250000("Flags",0);
  thunk_FUN_1124f350(param_3);
  piVar4 = (int *)thunk_FUN_11250000("ExtraOptions",0);
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

// Reference entry 11205d40; body size 544 bytes.
namespace recovered_11205d40 {
#line 1 "ENTRY_11205d40"

void __thiscall
FUN_11205d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  thunk_FUN_111c32e0(iVar2 + param_1,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                     "CheckForUpdate",param_1 + 0x18c,*(undefined4 *)(param_1 + 0x64c),
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
  piVar4 = (int *)thunk_FUN_11250000("UpdateType",0);
  (**(code **)(*piVar4 + 0xc))(param_2);
  thunk_FUN_11250000("CachedOnly",0);
  thunk_FUN_1124f3c0(param_3);
  piVar4 = (int *)thunk_FUN_11250000("Version",0);
  (**(code **)(*piVar4 + 0xc))(param_4);
  thunk_FUN_1124ff50("UpdateItem");
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
