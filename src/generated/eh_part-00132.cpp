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
extern undefined4 DAT_11884800;
extern byte DAT_1189bdd4;
extern undefined4 DAT_118c9974;
extern undefined4 DAT_11921034;
extern undefined4 DAT_12126b84;
extern int FUN_1113fd40(...);
extern int FUN_111400a0(...);
extern int FUN_111401c0(...);
extern int FUN_11140420(...);
extern int FUN_111406b0(...);
extern int FUN_11140800(...);
extern int FUN_111409f0(...);
extern int FUN_11143900(...);
extern int FUN_111492f0(...);
extern int FUN_1114e280(...);
extern int FUN_1114e340(...);
extern int FUN_1114e460(...);
extern int free(...);
extern int memcpy(...);
extern char* strchr(...);
extern int thunk_FUN_101bc430(...);
extern int thunk_FUN_110828b0(...);
extern undefined4 thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern char thunk_FUN_110a1280(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_110bf960(...);
extern int thunk_FUN_110cb840(...);
extern char thunk_FUN_1113f860(...);
extern int thunk_FUN_1113fe70(...);
extern int thunk_FUN_11148fb0(...);
extern int thunk_FUN_111491e0(...);
extern int thunk_FUN_1114a810(...);
extern int thunk_FUN_1114e340(...);
extern undefined4 thunk_FUN_111758e0(...);
extern char thunk_FUN_111a0720(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4430(...);
extern int thunk_FUN_111a4540(...);
extern int thunk_FUN_111a5a20(...);
extern char thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a6960(...);
extern undefined4 thunk_FUN_111a7100(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1128f650(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 1113fd40; body size 200 bytes.
namespace recovered_1113fd40 {
#line 1 "ENTRY_1113fd40"

undefined4 __thiscall FUN_1113fd40(int *param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  int iVar2;
  undefined4 local_24 [4];
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  if (param_1 != (int *)0x0) {
    thunk_FUN_1123fce0(param_1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  }
  thunk_FUN_111a6960(&DAT_11921034,param_1 + 8);
  local_24[0] = 0;
  ((void)0);
  thunk_FUN_111a4430(param_2);
  uVar1 = thunk_FUN_111a7100("OnUpnpEvent",1,local_24);
  (**(code **)(*param_1 + 0x2c))(param_2);
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  iVar2 = thunk_FUN_1123fcd0(param_1 + 1);
  if (iVar2 == 0) {
    (**(code **)*param_1)(1);
  }
  ((void)0);
  return uVar1;
}


}

// Reference entry 111400a0; body size 228 bytes.
namespace recovered_111400a0 {
#line 1 "ENTRY_111400a0"

void FUN_111400a0(undefined4 param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_34 [4];
  undefined4 local_24 [5];


  ((void)0);
  ((void)0);
  ((void)0);
  if (param_2 != (int *)0x0) {
    local_24[0] = 0;
    local_34[0] = 0;
    ((void)0);
    piVar2 = (int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 4))();
      while (cVar1 != '\0') {
        (**(code **)(*piVar2 + 8))(local_24);
        (**(code **)(*param_2 + 4))(local_24,local_34);
        uVar3 = thunk_FUN_111a2ec0();
        thunk_FUN_1113fe70(param_1,local_24,uVar3);
        cVar1 = (**(code **)(*piVar2 + 4))();
      }
      (**(code **)*piVar2)(1);
    }
    ((void)0);
    thunk_FUN_111a36f0();
    ((void)0);
    thunk_FUN_111a36f0();
  }
  ((void)0);
  return;
}


}

// Reference entry 111401c0; body size 442 bytes.
namespace recovered_111401c0 {
#line 1 "ENTRY_111401c0"

void __thiscall FUN_111401c0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_1c;
  int local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar8 = 1;
    thunk_FUN_1109f7f0(1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    cVar1 = thunk_FUN_110a1280(uVar8);
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)(**(code **)**(undefined4 **)(param_1 + 0x14))(&local_18);
      ((void)0);
      puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x14) + 4))(&local_14);
      puVar7 = &DAT_1186d2ee;
      if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)*puVar2;
      }
      puVar6 = &DAT_1186d2ee;
      if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)*puVar3;
      }
      thunk_FUN_112af4e0(&DAT_118c9974,3,"SWF UPnP: unsubscribing from %s - sid=%s\n",puVar6,puVar7)
      ;
      ((void)0);
      if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
        iVar4 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10));
        if (iVar4 == 0) {
          *(undefined4 *)(local_14 + -8) = 0;
          *(undefined4 *)(local_14 + -0xc) = 0;
          thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
          free((void *)(local_14 + -0x10));
        }
      }
      ((void)0);
      if ((local_18 != 0) && (*(int *)(local_18 + -0x10) < 0xffff)) {
        iVar4 = thunk_FUN_1123fcd0((void *)(local_18 + -0x10));
        if (iVar4 == 0) {
          *(undefined4 *)(local_18 + -8) = 0;
          *(undefined4 *)(local_18 + -0xc) = 0;
          thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
          free((void *)(local_18 + -0x10));
        }
      }
      ((void)0);
    }
    piVar5 = (int *)thunk_FUN_1114a810();
    puVar2 = (undefined4 *)(**(code **)**(undefined4 **)(param_1 + 0x14))(&local_1c);
    ((void)0);
    puVar7 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)*puVar2;
    }
    (**(code **)(*piVar5 + 0x18))(puVar7,param_2);
    ((void)0);
    if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
      iVar4 = thunk_FUN_1123fcd0((void *)(local_1c + -0x10));
      if (iVar4 == 0) {
        *(undefined4 *)(local_1c + -8) = 0;
        *(undefined4 *)(local_1c + -0xc) = 0;
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
        free((void *)(local_1c + -0x10));
      }
    }
    ((void)0);
    *(undefined4 *)(param_1 + 0x14) = 0;
    thunk_FUN_111a5a20("CachedState");
  }
  ((void)0);
  return;
}


}

// Reference entry 11140420; body size 506 bytes.
namespace recovered_11140420 {
#line 1 "ENTRY_11140420"

void __thiscall FUN_11140420(int param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int **ppiVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int *local_30;
  int local_2c;
  int *piStack_28;
  uint uStack_24;
  int *local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uStack_24 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    piStack_28 = (int *)0x11140459;
    ((void)0);
    piVar3 = (int *)thunk_FUN_1114a810();
    piStack_28 = param_2;
    local_2c = *(int *)(param_1 + 0x28);
    param_2 = &local_2c;
    piVar8 = &local_2c;
    if ((local_2c != 0) &&
       (local_30 = (int *)(local_2c + -0x10), piVar8 = &local_2c, *local_30 < 0xffff)) {
      thunk_FUN_1123fce0();
      piVar8 = param_2;
    }
    param_2 = piVar8;
    local_18 = (int *)&local_30;
    local_30 = *(int **)(param_1 + 0x24);
    ((void)0);
    ppiVar1 = &local_30;
    if ((local_30 != (int *)0x0) && (ppiVar1 = &local_30, local_30[-4] < 0xffff)) {
      thunk_FUN_1123fce0(local_30 + -4);
      ppiVar1 = (int **)local_18;
    }
    local_18 = (int *)ppiVar1;
    iVar7 = *(int *)(param_1 + 0x20);
    ((void)0);
    if ((iVar7 != 0) && (*(int *)(iVar7 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar7 + -0x10),iVar7);
    }
    ((void)0);
    uVar4 = (**(code **)(*piVar3 + 0x14))(param_1);
    uVar11 = 1;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    thunk_FUN_1109f7f0(1);
    cVar2 = thunk_FUN_110a1280(uVar11);
    if (cVar2 == '\0') {
      ((void)0);
      return;
    }
    puVar5 = (undefined4 *)(**(code **)**(undefined4 **)(param_1 + 0x14))(&local_18);
    ((void)0);
    puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x14) + 4))(&local_14);
    puVar9 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)*puVar5;
    }
    puVar10 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)*puVar6;
    }
    thunk_FUN_112af4e0(&DAT_118c9974,3,"SWF UPnP: subscribing to %s - sid=%s\n",puVar10,puVar9);
    ((void)0);
    if (((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) &&
       (iVar7 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10)), iVar7 == 0)) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
    ((void)0);
    piVar8 = local_18;
  }
  else {
    if ((char)param_2 == '\0') {
      return;
    }
    piStack_28 = (int *)&param_2;
    local_2c = 0x1114059b;
    ((void)0);
    (**(code **)**(undefined4 **)(param_1 + 0x14))();
    ((void)0);
    local_2c = 0x111405a7;
    puVar5 = (undefined4 *)thunk_FUN_1114a810();
    local_2c = 1;
    local_30 = (int *)&DAT_1186d2ee;
    if (param_2 != (int *)0x0) {
      local_30 = param_2;
    }
    (**(code **)*puVar5)();
    ((void)0);
    piVar8 = param_2;
  }
  if (((piVar8 != (int *)0x0) && (piVar8[-4] < 0xffff)) &&
     (iVar7 = thunk_FUN_1123fcd0(piVar8 + -4), iVar7 == 0)) {
    piVar8[-2] = 0;
    piVar8[-3] = 0;
    thunk_FUN_113cfb70(piVar8,piVar8[-1]);
    free(piVar8 + -4);
  }
  ((void)0);
  return;
}


}

// Reference entry 111406b0; body size 170 bytes.
namespace recovered_111406b0 {
#line 1 "ENTRY_111406b0"

undefined1 __fastcall FUN_111406b0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  bVar5 = false;
  local_14 = 0;
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    puVar2 = (undefined4 *)
             (**(code **)(**(int **)(param_1 + 0x14) + 4))
                       (&local_14,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    bVar5 = true;
    if (((char *)*puVar2 != (char *)0x0) && (*(char *)*puVar2 != '\0')) {
      uVar4 = 1;
      goto LAB_11140700;
    }
  }
  uVar4 = 0;
LAB_11140700:
  iVar1 = local_14;
  if (bVar5) {
    ((void)0);
    if ((local_14 != 0) &&
       (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0(_Memory);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free(_Memory);
      }
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 11140800; body size 260 bytes.
namespace recovered_11140800 {
#line 1 "ENTRY_11140800"

undefined4 __thiscall FUN_11140800(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (((uVar2 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot), param_2 < 2 ||
       (iVar3 = thunk_FUN_111a2ec0(), iVar3 == 0)) ||
      (cVar1 = thunk_FUN_111a5f10(uVar2,param_4), cVar1 == '\0')))) {
    local_20[0] = 0;
    ((void)0);
    ((void)0);
    cVar1 = thunk_FUN_111a5f10("CachedState",local_20);
    if ((cVar1 == '\0') || (iVar3 = thunk_FUN_111a2ec0(), iVar3 == 0)) {
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
    }
    else {
      thunk_FUN_111a5f10(uVar2,param_4);
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
    }
    thunk_FUN_111a36f0();
  }
  ((void)0);
  return 0;
}


}

// Reference entry 111409f0; body size 160 bytes.
namespace recovered_111409f0 {
#line 1 "ENTRY_111409f0"

undefined4 __fastcall FUN_111409f0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 0x14) != 0) {
    local_14 = param_1;
    uVar2 = thunk_FUN_111758e0(&local_14,param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    ((void)0);
    thunk_FUN_111a4540(uVar2);
    iVar1 = local_14;
    ((void)0);
    if ((local_14 != 0) &&
       (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0(_Memory);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free(_Memory);
      }
    }
  }
  ((void)0);
  return 0;
}


}

// Reference entry 11143900; body size 1225 bytes.
namespace recovered_11143900 {
#line 1 "ENTRY_11143900"

undefined1 __thiscall FUN_11143900(int param_1,int param_2,short *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 *_Memory;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_24 [4];
  undefined1 local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_11 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    if ((*(int **)(param_1 + 0x30) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0xc))
                          (DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot), cVar1 == '\0')) {
      iVar2 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 8))();
    }
    if (iVar2 == param_2) goto LAB_111439e1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((*(int **)(param_1 + 0x24) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(), cVar1 == '\0')) {
      iVar2 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 8))();
    }
    if (iVar2 == param_2) goto LAB_111439e1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    if ((*(int **)(param_1 + 0x48) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(), cVar1 == '\0')) {
      iVar2 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 8))();
    }
    if (iVar2 == param_2) goto LAB_111439e1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    if ((*(int **)(param_1 + 0x3c) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(), cVar1 == '\0')) {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    }
    if (iVar2 == param_2) {
LAB_111439e1:
      iVar2 = *(int *)(param_1 + 0x30);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x24);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0x3c);
            if (iVar2 == 0) {
              if (*(int *)(param_1 + 0x54) != 0) {
                *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xd7d4)
                ;
                *(undefined4 *)(param_1 + 0x58) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar2 + 0xd7d4);
              *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar2 + 0xd7dc);
              *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar2 + 0xd7d0);
              *(undefined4 *)(param_1 + 0x40) = 0;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar2 + 0xd7d4);
            *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar2 + 0xd7dc);
            *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar2 + 0xd7d0);
            *(undefined4 *)(param_1 + 0x4c) = 0;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar2 + 0xd7d4);
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar2 + 0xd7dc);
          *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar2 + 0xd7d0);
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar2 + 0xd7d4);
        *(undefined4 *)(param_1 + 0xcc) = 0;
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar2 + 0xd7d0);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      iVar2 = 0;
      if ((*(char **)(param_1 + 200) != (char *)0x0) && (**(char **)(param_1 + 200) != '\0')) {
        iVar2 = thunk_FUN_110828b0();
        puVar4 = &DAT_1186d2ee;
        if (*(undefined1 **)(param_1 + 200) != (undefined1 *)0x0) {
          puVar4 = *(undefined1 **)(param_1 + 200);
        }
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar4,1);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = thunk_FUN_110cb840();
        }
      }
      if (*param_3 != 0) {
        ((void)0);
        return 1;
      }
      if (*(char *)(param_1 + 0xbc) != '\0') {
        param_3 = (short *)0x0;
        ((void)0);
        thunk_FUN_111a10b0(&param_3,&DAT_11884800,
                           *(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xc4));
        puVar4 = &DAT_1186d2ee;
        if (param_3 != (short *)0x0) {
          puVar4 = (undefined1 *)param_3;
        }
        thunk_FUN_110bf960(*(undefined4 *)(param_1 + 0xb8),"TRACK_NR",puVar4);
        local_24[0] = 0;
        iVar5 = 0;
        ((void)0);
        if (((iVar2 != 0) &&
            (cVar1 = thunk_FUN_1113f860(0,"AVTransportURI",0,local_24), cVar1 != '\0')) &&
           (iVar2 = thunk_FUN_111a3630(), iVar2 == 2)) {
          iVar5 = thunk_FUN_111a32a0();
        }
        if (((*(char **)(param_1 + 0xd4) == (char *)0x0) || (**(char **)(param_1 + 0xd4) == '\0'))
           || ((iVar5 != 0 && (cVar1 = thunk_FUN_111a0720(iVar5), cVar1 != '\0')))) {
          if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
            uVar3 = (**(code **)(**(int **)(param_1 + 0xa0) + 4))
                              (param_1 + 8,*(undefined4 *)(param_1 + 0xb4));
            *(undefined4 *)(param_1 + 0xa4) = uVar3;
          }
        }
        else if (*(int **)(param_1 + 0x94) != (int *)0x0) {
          uVar3 = (**(code **)(**(int **)(param_1 + 0x94) + 4))
                            (param_1 + 8,*(undefined4 *)(param_1 + 0xb4));
          *(undefined4 *)(param_1 + 0x98) = uVar3;
        }
        ((void)0);
        thunk_FUN_111a36f0();
        puVar4 = (undefined1 *)param_3;
        ((void)0);
        if (param_3 == (short *)0x0) {
          ((void)0);
          return local_11;
        }
        _Memory = (undefined1 *)((int)param_3 + -0x10);
        if (0xfffe < *(int *)((int)param_3 + -0x10)) {
          ((void)0);
          return local_11;
        }
        iVar2 = thunk_FUN_1123fcd0(_Memory);
        if (iVar2 != 0) {
          ((void)0);
          return local_11;
        }
        *(undefined4 *)(puVar4 + -8) = 0;
        *(undefined4 *)(puVar4 + -0xc) = 0;
        thunk_FUN_113cfb70(puVar4,*(undefined4 *)(puVar4 + -4));
        free(_Memory);
        ((void)0);
        return local_11;
      }
      if (*(char *)(param_1 + 0xbd) != '\0') {
        ((void)0);
        return 1;
      }
      if (iVar2 == 0) {
        ((void)0);
        return 1;
      }
      iVar2 = thunk_FUN_110bc160(0);
      if (iVar2 != 1) {
        ((void)0);
        return 1;
      }
      if (*(char **)(param_1 + 0xd4) != (char *)0x0) {
        if (**(char **)(param_1 + 0xd4) != '\0') {
          thunk_FUN_101bc430(param_1 + 8,*(undefined4 *)(param_1 + 0xb4));
          ((void)0);
          return local_11;
        }
        ((void)0);
        return 1;
      }
      ((void)0);
      return 1;
    }
  }
  if ((*(int **)(param_1 + 0x94) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x94) + 0xc))(), cVar1 == '\0')) {
    iVar2 = *(int *)(param_1 + 0x98);
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 8))();
  }
  if (iVar2 != param_2) {
    if ((*(int **)(param_1 + 0xa0) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0xc))(), cVar1 == '\0')) {
      iVar2 = *(int *)(param_1 + 0xa4);
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0xa0) + 8))();
    }
    if (iVar2 == param_2) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
      if (*param_3 == 0) {
        if (*(int **)(param_1 + 0xac) != (int *)0x0) {
          uVar3 = (**(code **)(**(int **)(param_1 + 0xac) + 4))
                            (param_1 + 8,*(undefined4 *)(param_1 + 0xb4));
          *(undefined4 *)(param_1 + 0xb0) = uVar3;
        }
        ((void)0);
        return local_11;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *param_3 = 0;
    }
    ((void)0);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*param_3 != 0) {
    ((void)0);
    return 1;
  }
  if (*(char *)(param_1 + 0xbc) != '\0') {
    if (*(int **)(param_1 + 0xa0) == (int *)0x0) {
      ((void)0);
      return local_11;
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0xa0) + 4))
                      (param_1 + 8,*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
    ((void)0);
    return local_11;
  }
  ((void)0);
  return 1;
}


}

// Reference entry 111492f0; body size 488 bytes.
namespace recovered_111492f0 {
#line 1 "ENTRY_111492f0"

void __thiscall
FUN_111492f0(int param_1,int param_2,undefined4 param_3,byte *param_4,undefined4 param_5,
            uint param_6)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  char *_Str;
  bool bVar9;
  int local_44;
  int local_40;
  undefined1 local_38 [36];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  pbVar7 = &DAT_1189bdd4;
  do {
    bVar1 = *param_4;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_11149348:
      uVar4 = -(uint)bVar9 | 1;
      goto LAB_1114934d;
    }
    if (bVar1 == 0) break;
    bVar1 = param_4[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_11149348;
    param_4 = param_4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1114934d:
  if (uVar4 == 0) {
    *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x424);
    if ((uint)((*(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x424)) / 0xc08) < param_6) {
      if (0x154725 < param_6) {

        thunk_FUN_111491e0(local_14);
      }
      thunk_FUN_11148fb0(param_6);
    }
    local_40 = 0;
    if (0 < (int)param_6) {
      local_44 = 0;
      do {
        iVar8 = *(int *)(param_1 + 0x424) + local_44;
        iVar2 = *(int *)(param_2 + local_40 * 4);
        pcVar3 = *(char **)(iVar2 + 0x10);
        ((void)0);
        if ((((*pcVar3 == '/') && (_Str = pcVar3 + 2, pcVar3[1] == '/')) &&
            (pcVar5 = strchr(_Str,0x2f), *pcVar5 != '\0')) && (pcVar5[1] != '\0')) {
          thunk_FUN_1145c250(local_38,_Str,0x21);
          if ((uint)((int)pcVar5 - (int)_Str) < 0x21) {
            local_38[(int)pcVar5 - (int)_Str] = 0;
          }
          uVar6 = thunk_FUN_1109aba0(0,"%1$s %2$s");
          thunk_FUN_1128f650(iVar8,0x401,uVar6,pcVar5 + 1,local_38);
        }
        else {
          thunk_FUN_1145c250(iVar8,pcVar3,0x401);
        }
        thunk_FUN_1145c250(iVar8 + 0x401,*(undefined4 *)(iVar2 + 0x10),0x401);
        thunk_FUN_1145c250(iVar8 + 0x802,*(undefined4 *)(iVar2 + 4),0x401);
        local_40 = local_40 + 1;
        local_44 = local_44 + 0xc08;
        *(undefined4 *)(iVar8 + 0xc04) = 0;
        ((void)0);
      } while (local_40 < (int)param_6);
    }
    *(uint *)(param_1 + 0x420) = param_6;
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1114e280; body size 153 bytes.
namespace recovered_1114e280 {
#line 1 "ENTRY_1114e280"

void __thiscall FUN_1114e280(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_stack_00000014;
  int local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  ((void)0);
  (**(code **)(**(int **)(param_1 + 4) + 4))(&local_14,in_stack_00000014,uVar2);
  iVar1 = local_14;
  ((void)0);
  if ((local_14 != 0) && (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)
     ) {
    iVar3 = thunk_FUN_1123fcd0(_Memory);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1114e340; body size 226 bytes.
namespace recovered_1114e340 {
#line 1 "ENTRY_1114e340"

void __thiscall FUN_1114e340(int param_1,undefined4 param_2,int param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(int *)(param_1 + 0xc) != 0) && ((char)param_3 != '\0')) {
    thunk_FUN_110b0460(1);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    puVar4 = &DAT_1186d2ee;
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 8);
    }
    thunk_FUN_110b2900(param_1,puVar4,param_2,0);
    ((void)0);
    return;
  }
  param_3 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  ((void)0);
  (**(code **)(**(int **)(param_1 + 4) + 4))(&param_3,1000,uVar2);
  iVar1 = param_3;
  ((void)0);
  if ((param_3 != 0) && (_Memory = (void *)(param_3 + -0x10), *(int *)(param_3 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(_Memory);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1114e460; body size 292 bytes.
namespace recovered_1114e460 {
#line 1 "ENTRY_1114e460"

void __thiscall FUN_1114e460(int param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  size_t _Size;


  piVar4 = param_2;
  ((void)0);
  ((void)0);
  ((void)0);
  pcVar2 = (char *)param_2[6];
  ((void)0);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = pcVar2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar7 - (int)(pcVar2 + 1);
    puVar5 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    pcVar7 = (char *)(puVar5 + 4);
    *puVar5 = 1;
    puVar5[3] = _Size;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(pcVar7,pcVar2,_Size);
    pcVar7[_Size] = '\0';
  }
  ((void)0);
  param_2 = (int *)pcVar7;
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    thunk_FUN_1114e340(piVar4[1],*piVar4 == 1);
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 4))(&param_2,0);
  }
  pcVar2 = (char *)param_2;
  ((void)0);
  if ((param_2 != (int *)0x0) &&
     (pcVar7 = (char *)((int)param_2 + -0x10), *(int *)((int)param_2 + -0x10) < 0xffff)) {
    iVar6 = thunk_FUN_1123fcd0(pcVar7);
    if (iVar6 == 0) {
      uVar3 = *(undefined4 *)(pcVar2 + -4);
      pcVar2[-0xffffffff00000008] = '\0';
      pcVar2[-0xffffffff00000007] = '\0';
      pcVar2[-0xffffffff00000006] = '\0';
      pcVar2[-0xffffffff00000005] = '\0';
      pcVar2[-0xffffffff0000000c] = '\0';
      pcVar2[-0xffffffff0000000b] = '\0';
      pcVar2[-0xffffffff0000000a] = '\0';
      pcVar2[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(pcVar2,uVar3);
      free(pcVar7);
    }
  }
  ((void)0);
  return;
}


}
