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
extern int FUN_111f2720(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_111c7b30(...);
extern char thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111f2720; body size 402 bytes.
namespace recovered_111f2720 {
#line 1 "ENTRY_111f2720"

void __thiscall FUN_111f2720(int param_1,char *param_2,undefined4 *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined4 ****ppppuVar12;
  bool bVar13;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 *local_38;
  int local_34;
  bool local_2d;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_38 = param_3;
  local_34 = param_1;
  cVar7 = thunk_FUN_112a7f50(param_1 + 8,local_14);
  ((void)0);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  pcVar9 = param_2;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  thunk_FUN_1012d130(param_2,(int)pcVar9 - (int)(param_2 + 1));
  pppuVar6 = local_2c[0];
  local_3c = param_1 + 0x1848;
  ppppuVar12 = local_2c;
  if (0xf < local_18) {
    ppppuVar12 = (undefined4 ****)local_2c[0];
  }
  uVar10 = 0;
  uVar11 = 0x811c9dc5;
  if (local_1c != 0) {
    do {
      pbVar1 = (byte *)(uVar10 + (int)ppppuVar12);
      uVar10 = uVar10 + 1;
      uVar11 = (*pbVar1 ^ uVar11) * 0x1000193;
    } while (uVar10 < local_1c);
  }
  iVar8 = thunk_FUN_111c7b30(local_40,local_2c,uVar11);
  iVar8 = *(int *)(iVar8 + 4);
  if (iVar8 == 0) {
    iVar8 = *(int *)(local_34 + 0x184c);
  }
  if (0xf < local_18) {
    uVar10 = local_18 + 1;
    ppppuVar12 = (undefined4 ****)pppuVar6;
    if (0xfff < uVar10) {
      ppppuVar12 = (undefined4 ****)pppuVar6[-1];
      uVar10 = local_18 + 0x24;
      if (0x1f < (uint)((int)pppuVar6 + (-4 - (int)ppppuVar12))) {

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar12,uVar10);
  }
  bVar13 = iVar8 == *(int *)(local_34 + 0x184c);
  if (bVar13) {
    thunk_FUN_112b0270("sonoscp_crypto",5,"multi-key decrypt params not found in lookup dict");
  }
  else {
    uVar3 = *(undefined4 *)(iVar8 + 0x24);
    uVar4 = *(undefined4 *)(iVar8 + 0x28);
    uVar5 = *(undefined4 *)(iVar8 + 0x2c);
    *local_38 = *(undefined4 *)(iVar8 + 0x20);
    local_38[1] = uVar3;
    local_38[2] = uVar4;
    local_38[3] = uVar5;
    uVar3 = *(undefined4 *)(iVar8 + 0x34);
    uVar4 = *(undefined4 *)(iVar8 + 0x38);
    uVar5 = *(undefined4 *)(iVar8 + 0x3c);
    local_38[4] = *(undefined4 *)(iVar8 + 0x30);
    local_38[5] = uVar3;
    local_38[6] = uVar4;
    local_38[7] = uVar5;
    uVar3 = *(undefined4 *)(iVar8 + 0x44);
    uVar4 = *(undefined4 *)(iVar8 + 0x48);
    uVar5 = *(undefined4 *)(iVar8 + 0x4c);
    local_38[8] = *(undefined4 *)(iVar8 + 0x40);
    local_38[9] = uVar3;
    local_38[10] = uVar4;
    local_38[0xb] = uVar5;
    *(undefined8 *)(local_38 + 0xc) = *(undefined8 *)(iVar8 + 0x50);
    local_38[0xe] = *(undefined4 *)(iVar8 + 0x58);
  }
  local_2d = !bVar13;
  if (cVar7 != '\0') {
    thunk_FUN_112a8010(local_34 + 8);
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
