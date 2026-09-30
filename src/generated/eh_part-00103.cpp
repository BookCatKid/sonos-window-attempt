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
extern undefined4 DAT_12126b84;
extern int FUN_1112aa50(...);
extern undefined4 thunk_FUN_11167970(...);
extern int thunk_FUN_1123fcd0(...);
extern char thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
// Reference entry 1112aa50; body size 225 bytes.
namespace recovered_1112aa50 {
#line 1 "ENTRY_1112aa50"

void __thiscall FUN_1112aa50(int param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar4 = thunk_FUN_112a7f50(param_1 + 0xc,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    pbVar9 = &DAT_1186d2ee;
    if (*(byte **)(param_2 + 0x18) != (byte *)0x0) {
      pbVar9 = *(byte **)(param_2 + 0x18);
    }
    pbVar2 = *(byte **)(*(int *)(param_1 + 0x1c) + 0x18);
    pbVar8 = &DAT_1186d2ee;
    if (pbVar2 != (byte *)0x0) {
      pbVar8 = pbVar2;
    }
    do {
      bVar1 = *pbVar8;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_1112aad4:
        uVar5 = -(uint)bVar10 | 1;
        goto LAB_1112aad9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_1112aad4;
      pbVar8 = pbVar8 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_1112aad9:
    if (uVar5 == 0) {
      uVar6 = thunk_FUN_11167970();
      puVar3 = *(undefined4 **)(param_1 + 0x1c);
      if ((puVar3 != (undefined4 *)0x0) && (iVar7 = thunk_FUN_1123fcd0(puVar3 + 1), iVar7 == 0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
    }
  }
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1 + 0xc);
  }
  ((void)0);
  return;
}


}
