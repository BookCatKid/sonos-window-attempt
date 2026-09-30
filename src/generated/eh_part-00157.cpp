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
extern int FUN_111df3d0(...);
extern int FUN_111e06e0(...);
extern char* strchr(...);
extern ulong strtoul(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_11264740(...);
extern int thunk_FUN_11264780(...);
extern char thunk_FUN_11264b40(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145d8e0(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111df3d0; body size 448 bytes.
namespace recovered_111df3d0 {
#line 1 "ENTRY_111df3d0"

void __thiscall FUN_111df3d0(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_14;
  puVar1 = (undefined4 *)((int)param_1 + 9);
  *param_1 = 0;
  param_1[1] = 0xff;
  param_1[0xa5] = 0;
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)((int)param_1 + 0x191) = 0;
  pbVar8 = (byte *)*param_2;
  if (pbVar8 != (byte *)0x0) {
    thunk_FUN_1106a8d0(puVar1,pbVar8,0x188);
    pbVar7 = &DAT_118872c0;
    pbVar3 = pbVar8;
    do {
      bVar2 = *pbVar3;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_111df450:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_111df455;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_111df450;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    uVar4 = 0;
LAB_111df455:
    if (uVar4 != 0) {
      pbVar7 = &DAT_11880ab0;
      pbVar3 = pbVar8;
      do {
        bVar2 = *pbVar3;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_111df484:
          uVar4 = -(uint)bVar9 | 1;
          goto LAB_111df489;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_111df484;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_111df489:
      if (uVar4 != 0) {
        pcVar5 = "search";
        do {
          bVar2 = *pbVar8;
          bVar9 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_111df4b6:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_111df4bb;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_111df4b6;
          pbVar8 = pbVar8 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_111df4bb:
        if (uVar4 == 0) {
          param_1[1] = 1;
          thunk_FUN_1148ac28();
          return;
        }
        local_10 = *puVar1;
        local_c = *(undefined4 *)((int)param_1 + 0xd);
        ((void)0);
        uVar6 = strtoul((char *)&local_10,(char **)0x0,0x10);
        *param_1 = uVar6 & 0xffff;
        param_1[1] = uVar6 >> 0x10 & 0xff;
        *(byte *)(param_1 + 2) = (byte)(uVar6 >> 0x1c) & 1;
        pcVar5 = strchr((char *)((int)param_1 + 0x11),0x3a);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
          param_1[0xa5] = (uint)(pcVar5 + 1);
        }
        local_14 = 0;
        thunk_FUN_1145d8e0((char *)((int)param_1 + 0x11),(undefined1 *)((int)param_1 + 0x191),0x101,
                           &local_14);
        thunk_FUN_1148ac28();
        return;
      }
    }
    thunk_FUN_1145c250(puVar1,&DAT_11880ab0,0x188);
    param_1[1] = 0;
  }
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 111e06e0; body size 239 bytes.
namespace recovered_111e06e0 {
#line 1 "ENTRY_111e06e0"

void FUN_111e06e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_418 [1028];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar2 = thunk_FUN_113b9f60(param_3,"sonos:",6,local_14);
  if (iVar2 == 0) {
    thunk_FUN_11264740(param_3);
    ((void)0);
    uVar3 = 0;
    do {
      cVar1 = thunk_FUN_11264b40(local_418,0x401,0x3a);
      if (cVar1 == '\0') goto LAB_111e078a;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    if (uVar3 == 6) {
      thunk_FUN_1145c720(param_1,param_2,"sonos:%s",local_418);
      thunk_FUN_11264780();
    }
    else {
LAB_111e078a:
      thunk_FUN_1145c250(param_1,param_3,param_2);
      thunk_FUN_11264780();
    }
  }
  else {
    thunk_FUN_1145c250(param_1,param_3,param_2);
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}
