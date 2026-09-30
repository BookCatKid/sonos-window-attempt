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

extern undefined4 DAT_1189dc98;
extern undefined4 DAT_119260bc;
extern undefined4 DAT_12126b84;
extern int FUN_11117750(...);
extern int FUN_11117e90(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11095e00(...);
extern int thunk_FUN_110cb560(...);
extern char thunk_FUN_110d3ac0(...);
extern int thunk_FUN_111084f0(...);
extern int thunk_FUN_1110d2e0(...);
extern int thunk_FUN_1111c700(...);
extern int thunk_FUN_11140c20(...);
extern int thunk_FUN_111a2bd0(...);
extern undefined4 thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_11264170(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 11117750; body size 316 bytes.
namespace recovered_11117750 {
#line 1 "ENTRY_11117750"

undefined4 __fastcall FUN_11117750(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_24 [2];
  uint local_1c;
  byte local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar5 = thunk_FUN_110828b0(uVar4);
  iVar5 = (*(code *)**(undefined4 **)(iVar5 + 0x1c))();
  *(undefined4 *)(param_1 + 0x174) = 0;
  local_11 = *(byte *)(param_1 + 0x4d);
  if (iVar5 != 0) {
    cVar3 = thunk_FUN_110d3ac0();
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      goto LAB_111177da;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  thunk_FUN_111084f0(*puVar1,*(undefined4 *)(param_1 + 0x90),puVar1);
  *(undefined4 *)(param_1 + 0x90) = *puVar1;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
LAB_111177da:
  if (*(char *)(param_1 + 0x34) != '\0') {
    iVar6 = thunk_FUN_110828b0(uVar4);
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x1c) + 4))((undefined1 *)(param_1 + 0x34),1);
    *(undefined1 *)(param_1 + 0x34) = 0;
    if (iVar6 != 0) {
      thunk_FUN_110cb560();
      thunk_FUN_11140c20(param_1,1);
      thunk_FUN_110828b0(param_1);
      thunk_FUN_11095e00();
    }
  }
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    thunk_FUN_1111c700();
  }
  bVar2 = *(byte *)(param_1 + 0x4d);
  if (local_11 != bVar2) {
    local_24[0] = 0;
    ((void)0);
    thunk_FUN_111a36f0();
    local_24[0] = 5;
    local_1c = (uint)bVar2;
    thunk_FUN_111a7100("OnAlarmServiceAvailable",1,local_24);
    ((void)0);
    thunk_FUN_111a36f0();
  }
  ((void)0);
  return 0;
}


}

// Reference entry 11117e90; body size 336 bytes.
namespace recovered_11117e90 {
#line 1 "ENTRY_11117e90"

void FUN_11117e90(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_20 [12];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_28 = param_2;
  iVar5 = thunk_FUN_110828b0(local_14);
  iVar5 = (*(code *)**(undefined4 **)(iVar5 + 0x1c))();
  if (iVar5 != 0) {
    cVar3 = thunk_FUN_110d3ac0();
    if (cVar3 != '\0') {
      iVar5 = thunk_FUN_110cb560();
      if ((iVar5 != 0) && (piVar1 = *(int **)(iVar5 + 0x2c), piVar1 != (int *)0x0)) {
        uVar6 = thunk_FUN_111a2ec0();
        local_38[0] = 0;
        ((void)0);
        thunk_FUN_111a5f10(&DAT_119260bc,local_38);
        iVar5 = thunk_FUN_111a2bd0();
        if (iVar5 == 0) {
          local_24 = 0;
          local_22 = 0;
          thunk_FUN_1110d2e0(uVar6,&local_24);
          thunk_FUN_11264170(local_20,4);
        }
        else {
          local_20[0] = 0;
        }
        uVar4 = (**(code **)(*piVar1 + 0x3c))(local_20);
        thunk_FUN_111a36f0();
        *param_3 = 4;
        *(double *)(param_3 + 2) = (double)uVar4;
        ((void)0);
        thunk_FUN_111a36f0();
        goto LAB_11117fc0;
      }
    }
  }
  thunk_FUN_111a36f0();
  uVar2 = DAT_1189dc98;
  *param_3 = 4;
  *(undefined8 *)(param_3 + 2) = uVar2;
LAB_11117fc0:
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
