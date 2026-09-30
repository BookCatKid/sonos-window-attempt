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

extern byte DAT_11880ab0;
extern byte DAT_118872c0;
extern undefined4 DAT_12126b84;
extern int FUN_111e4c70(...);
extern char* strchr(...);
extern ulong strtoul(...);
extern int thunk_FUN_1106a8d0(...);
extern char thunk_FUN_111f1980(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145d8e0(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111e4c70; body size 535 bytes.
namespace recovered_111e4c70 {
#line 1 "ENTRY_111e4c70"

void FUN_111e4c70(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 local_2ac;
  uint local_2a8;
  uint local_2a4;
  byte local_2a0;
  uint uStack_29f;
  undefined4 local_29b;
  char local_297 [384];
  undefined1 local_117 [259];
  char *local_14;
  uint local_10;
  undefined4 local_c;

  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_2ac;
  cVar2 = thunk_FUN_111f1980(param_1,0);
  local_2a0 = 0;
  uStack_29f = uStack_29f & 0xffffff00;
  local_2a8 = 0;
  local_2a4 = 0xff;
  pbVar9 = (byte *)0x0;
  if (cVar2 != '\0') {
    pbVar9 = param_1;
  }
  local_14 = (char *)0x0;
  local_117[0] = 0;
  if (pbVar9 == (byte *)0x0) {
LAB_111e4e30:
    puVar7 = (uint *)local_117;
    goto LAB_111e4e37;
  }
  thunk_FUN_1106a8d0(&uStack_29f,pbVar9,0x188);
  pbVar8 = &DAT_118872c0;
  pbVar3 = pbVar9;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_111e4d12:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_111e4d17;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_111e4d12;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_111e4d17:
  if (uVar4 == 0) {
LAB_111e4e62:
    thunk_FUN_1145c250(&uStack_29f,&DAT_11880ab0,0x188);
    local_2a4 = 0;
  }
  else {
    pbVar8 = &DAT_11880ab0;
    pbVar3 = pbVar9;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_111e4d46:
        uVar4 = -(uint)bVar10 | 1;
        goto LAB_111e4d4b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_111e4d46;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_111e4d4b:
    if (uVar4 == 0) goto LAB_111e4e62;
    pcVar5 = "search";
    do {
      bVar1 = *pbVar9;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_111e4d78:
        uVar4 = -(uint)bVar10 | 1;
        goto LAB_111e4d7d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_111e4d78;
      pbVar9 = pbVar9 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_111e4d7d:
    if (uVar4 == 0) {
      local_2a4 = 1;
      puVar7 = &uStack_29f;
      goto LAB_111e4e37;
    }
    local_10 = uStack_29f;
    local_c = local_29b;
    ((void)0);
    uVar6 = strtoul((char *)&local_10,(char **)0x0,0x10);
    local_2a8 = uVar6 & 0xffff;
    local_2a0 = (byte)(uVar6 >> 0x1c) & 1;
    local_2a4 = uVar6 >> 0x10 & 0xff;
    pcVar5 = strchr(local_297,0x3a);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
      local_14 = pcVar5 + 1;
    }
    local_2ac = 0;
    thunk_FUN_1145d8e0(local_297,local_117,0x101,&local_2ac);
    if ((local_2a4 != 0) && (local_2a4 != 1)) goto LAB_111e4e30;
  }
  puVar7 = &uStack_29f;
LAB_111e4e37:
  thunk_FUN_1106a8d0(param_2,puVar7,param_3);
  thunk_FUN_1148ac28();
  return;
}


}
