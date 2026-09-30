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
extern undefined4 DAT_11951400;
extern undefined4 DAT_12126b84;
extern int FUN_10065348(...);
extern int FUN_11158780(...);
extern int FUN_1115b340(...);
extern int FUN_1115b3c0(...);
extern int FUN_1115b9c0(...);
extern char thunk_FUN_1113fa10(...);
extern int thunk_FUN_11140c20(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_111a2bd0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a36f0(...);
extern char thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
// Reference entry 11158780; body size 349 bytes.
namespace recovered_11158780 {
#line 1 "ENTRY_11158780"

undefined4 FUN_11158780(void)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_30 [4];
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar3 = thunk_FUN_111a2ec0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (iVar3 == 0) {
    ((void)0);
    return 0;
  }
  local_30[0] = 0;
  local_20[0] = 0;
  ((void)0);
  cVar2 = thunk_FUN_111a5f10("TOSLinkConnected",local_20);
  if (cVar2 != '\0') {
    iVar3 = thunk_FUN_111a2bd0();
    cVar2 = thunk_FUN_1113fa10("TOSLinkConnected",local_30);
    if ((cVar2 == '\0') || (iVar4 = thunk_FUN_111a2bd0(), iVar3 != iVar4)) {
      thunk_FUN_111a7100("onTOSLinkConnectedChanged",1,local_20);
    }
  }
  cVar2 = thunk_FUN_111a5f10("IRRepeaterState",local_20);
  if (cVar2 != '\0') {
    pbVar5 = (byte *)thunk_FUN_111a32a0();
    cVar2 = thunk_FUN_1113fa10("IRRepeaterState",local_30);
    if (cVar2 != '\0') {
      pbVar6 = (byte *)thunk_FUN_111a32a0();
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_11158890:
          uVar7 = -(uint)bVar8 | 1;
          goto LAB_11158895;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_11158890;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_11158895:
      if (uVar7 == 0) goto LAB_111588ac;
    }
    thunk_FUN_111a7100("onIRRepeaterStateChanged",1,local_20);
  }
LAB_111588ac:
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return 0;
}


}

// Reference entry 1115b340; body size 101 bytes.
namespace recovered_1115b340 {
#line 1 "ENTRY_1115b340"

undefined4 * FUN_1115b340(undefined4 *param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_1 = 0;
  ((void)0);
  thunk_FUN_111a10b0(param_1,&DAT_11951400,param_2,uVar1);
  ((void)0);
  return param_1;
}


}

// Reference entry 1115b3c0; body size 117 bytes.
namespace recovered_1115b3c0 {
#line 1 "ENTRY_1115b3c0"

undefined4 * __thiscall FUN_1115b3c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined1 *puVar2;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_2 = 0;
  ((void)0);
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x20);
  }
  thunk_FUN_111a10b0(param_2,"x-rincon-queue:%s#%d",puVar2,param_3,uVar1);
  ((void)0);
  return param_2;
}


}

// Reference entry 1115b9c0; body size 141 bytes.
namespace recovered_1115b9c0 {
#line 1 "ENTRY_1115b9c0"

void __thiscall FUN_1115b9c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  FUN_10065348(param_2,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (param_1[0x10] == 0) {
    ((void)0);
    thunk_FUN_1123fce0(param_1 + 1);
    ((void)0);
    thunk_FUN_11140c20(param_1,1);
    ((void)0);
    iVar1 = thunk_FUN_1123fcd0(param_1 + 1);
    if (iVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  ((void)0);
  return;
}


}
