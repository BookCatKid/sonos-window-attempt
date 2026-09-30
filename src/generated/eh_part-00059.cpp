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
extern int FUN_110e28f0(...);
extern int free(...);
extern int memcpy(...);
extern undefined4 thunk_FUN_110828b0(...);
extern int thunk_FUN_11193540(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a4430(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 110e28f0; body size 498 bytes.
namespace recovered_110e28f0 {
#line 1 "ENTRY_110e28f0"

undefined4 FUN_110e28f0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  pcVar4 = (char *)thunk_FUN_111a32a0(uVar3);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    pcVar8 = pcVar4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    sVar9 = (int)pcVar8 - (int)(pcVar4 + 1);
    puVar5 = (undefined4 *)thunk_FUN_1148b586(sVar9 + 0x11);
    puVar1 = puVar5 + 4;
    *puVar5 = 1;
    puVar5[3] = sVar9;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,pcVar4,sVar9);
    *(undefined1 *)((int)puVar1 + sVar9) = 0;
    local_18 = puVar1;
  }
  ((void)0);
  pcVar4 = (char *)thunk_FUN_111a32a0(uVar3);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    pcVar8 = pcVar4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    sVar9 = (int)pcVar8 - (int)(pcVar4 + 1);
    puVar5 = (undefined4 *)thunk_FUN_1148b586(sVar9 + 0x11);
    puVar1 = puVar5 + 4;
    *puVar5 = 1;
    puVar5[3] = sVar9;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,pcVar4,sVar9);
    *(undefined1 *)((int)puVar1 + sVar9) = 0;
    local_14 = puVar1;
  }
  ((void)0);
  uVar6 = thunk_FUN_110828b0();
  thunk_FUN_11193540(&local_1c,&local_18,&local_14,uVar6);
  ((void)0);
  thunk_FUN_111a4430(local_1c);
  ((void)0);
  if (local_1c != (undefined4 *)0x0) {
    iVar7 = thunk_FUN_1123fcd0(local_1c + 1);
    if ((iVar7 == 0) && (local_1c != (undefined4 *)0x0)) {
      (**(code **)*local_1c)(1);
    }
  }
  puVar1 = local_14;
  ((void)0);
  if ((local_14 != (undefined4 *)0x0) && (puVar5 = local_14 + -4, (int)local_14[-4] < 0xffff)) {
    iVar7 = thunk_FUN_1123fcd0(puVar5);
    if (iVar7 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  puVar1 = local_18;
  ((void)0);
  if ((local_18 != (undefined4 *)0x0) && (puVar5 = local_18 + -4, (int)local_18[-4] < 0xffff)) {
    iVar7 = thunk_FUN_1123fcd0(puVar5);
    if (iVar7 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  ((void)0);
  return 0;
}


}
