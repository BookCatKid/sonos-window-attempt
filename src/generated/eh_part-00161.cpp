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
extern int FUN_111e3550(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_111c7b30(...);
extern short thunk_FUN_111e9fd0(...);
extern char thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111e3550; body size 529 bytes.
namespace recovered_111e3550 {
#line 1 "ENTRY_111e3550"

void __thiscall
FUN_111e3550(int param_1,undefined4 param_2,char *param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 ghidra_cookie_frame_slot;
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 ****ppppuVar11;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  char local_4c;
  int local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_30 = *(int *)(param_1 + 0x30);
  local_44 = param_2;
  local_3c = param_5;
  local_50 = local_30 + 8;
  local_38 = param_7;
  local_40 = param_3;
  local_34 = param_8;
  local_48 = param_1;
  local_4c = thunk_FUN_112a7f50(local_50,local_14);
  ((void)0);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  pcVar8 = param_3;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  thunk_FUN_1012d130(param_3,(int)pcVar8 - (int)(param_3 + 1));
  local_54 = local_30 + 0x1848;
  uVar10 = 0x811c9dc5;
  ppppuVar11 = local_2c;
  if (0xf < local_18) {
    ppppuVar11 = (undefined4 ****)local_2c[0];
  }
  uVar9 = 0;
  if (local_1c != 0) {
    do {
      pbVar1 = (byte *)(uVar9 + (int)ppppuVar11);
      uVar9 = uVar9 + 1;
      uVar10 = (*pbVar1 ^ uVar10) * 0x1000193;
    } while (uVar9 < local_1c);
  }
  iVar7 = thunk_FUN_111c7b30(local_58,local_2c,uVar10);
  iVar7 = *(int *)(iVar7 + 4);
  if (iVar7 == 0) {
    iVar7 = *(int *)(local_30 + 0x184c);
  }
  if (0xf < local_18) {
    uVar10 = local_18 + 1;
    ppppuVar11 = (undefined4 ****)local_2c[0];
    if (0xfff < uVar10) {
      ppppuVar11 = (undefined4 ****)local_2c[0][-1];
      uVar10 = local_18 + 0x24;
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar11))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar11,uVar10);
  }
  if (iVar7 == *(int *)(local_30 + 0x184c)) {
    thunk_FUN_112b0270("sonoscp_crypto",5,"multi-key decrypt params not found in lookup dict");
    ((void)0);
    if (local_4c != '\0') {
      thunk_FUN_112a8010(local_30 + 8);
    }
    sVar6 = thunk_FUN_111e9fd0(local_44,local_40,param_4,local_3c,param_6,local_38,local_34);
    if ((sVar6 == 0x3fc) || (sVar6 == 0x40d)) {
      thunk_FUN_111e9fd0(local_44,local_40,param_4,local_3c,param_6,local_38,local_34);
    }
  }
  else {
    uVar3 = *(undefined4 *)(iVar7 + 0x24);
    uVar4 = *(undefined4 *)(iVar7 + 0x28);
    uVar5 = *(undefined4 *)(iVar7 + 0x2c);
    *param_4 = *(undefined4 *)(iVar7 + 0x20);
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    uVar3 = *(undefined4 *)(iVar7 + 0x34);
    uVar4 = *(undefined4 *)(iVar7 + 0x38);
    uVar5 = *(undefined4 *)(iVar7 + 0x3c);
    param_4[4] = *(undefined4 *)(iVar7 + 0x30);
    param_4[5] = uVar3;
    param_4[6] = uVar4;
    param_4[7] = uVar5;
    uVar3 = *(undefined4 *)(iVar7 + 0x44);
    uVar4 = *(undefined4 *)(iVar7 + 0x48);
    uVar5 = *(undefined4 *)(iVar7 + 0x4c);
    param_4[8] = *(undefined4 *)(iVar7 + 0x40);
    param_4[9] = uVar3;
    param_4[10] = uVar4;
    param_4[0xb] = uVar5;
    *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(iVar7 + 0x50);
    param_4[0xe] = *(undefined4 *)(iVar7 + 0x58);
    if (local_4c != '\0') {
      thunk_FUN_112a8010(local_30 + 8);
    }
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
