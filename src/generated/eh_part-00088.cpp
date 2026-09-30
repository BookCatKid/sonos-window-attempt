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
extern int FUN_11118a00(...);
extern int FUN_1111cb60(...);
extern int FUN_1111f4b0(...);
extern int _time64(...);
extern int free(...);
extern int thunk_FUN_101bc3e0(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b260(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110cb560(...);
extern char thunk_FUN_110d3ac0(...);
extern int thunk_FUN_111138f0(...);
extern int thunk_FUN_111155f0(...);
extern int thunk_FUN_111156e0(...);
extern int thunk_FUN_11119940(...);
extern int thunk_FUN_1111c930(...);
extern int thunk_FUN_1111cf00(...);
extern char thunk_FUN_1115c580(...);
extern char thunk_FUN_1115c730(...);
extern int thunk_FUN_111a36f0(...);
extern uint thunk_FUN_111a7100(...);
extern int thunk_FUN_1123fcd0(...);
extern char thunk_FUN_11262ba0(...);
extern int thunk_FUN_112630e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 11118a00; body size 1469 bytes.
namespace recovered_11118a00 {
#line 1 "ENTRY_11118a00"

void __thiscall FUN_11118a00(int param_1,int param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  __time64_t _Var9;
  undefined4 local_38 [2];
  double local_30;
  char local_26;
  char local_25;
  undefined8 local_24;
  undefined4 local_1c;
  undefined2 local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (*(int **)(param_1 + 0x18c) == (int *)0x0) {
LAB_11118a4f:
    iVar4 = *(int *)(param_1 + 400);
  }
  else {
    cVar3 = (**(code **)(**(int **)(param_1 + 0x18c) + 0xc))(local_14);
    if (cVar3 == '\0') goto LAB_11118a4f;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18c) + 8))();
  }
  if (iVar4 == param_2) {
    uVar8 = 0;
    if ((short)param_3 == 0) {
      thunk_FUN_1106a8d0(param_1 + 0x3c,*(int *)(param_1 + 0x18c) + 0xd7d0,0x24);
      thunk_FUN_111156e0();
      uVar8 = thunk_FUN_111a7100("onAlarmsChanged",0,0);
    }
    if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x60))(1);
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  else {
    if (*(int **)(param_1 + 0x168) == (int *)0x0) {
LAB_11118ad6:
      iVar4 = *(int *)(param_1 + 0x16c);
    }
    else {
      cVar3 = (**(code **)(**(int **)(param_1 + 0x168) + 0xc))();
      if (cVar3 == '\0') goto LAB_11118ad6;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x168) + 8))();
    }
    if (iVar4 == param_2) {
      uVar8 = 0;
      (**(code **)(param_1 + 500))(param_3);
      if ((short)param_3 == 0) {
        uVar8 = thunk_FUN_111a7100("onAlarmsChanged",0,0);
      }
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
    else {
      if (*(int **)(param_1 + 0x174) == (int *)0x0) {
LAB_11118b39:
        iVar4 = *(int *)(param_1 + 0x178);
      }
      else {
        cVar3 = (**(code **)(**(int **)(param_1 + 0x174) + 0xc))();
        if (cVar3 == '\0') goto LAB_11118b39;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x174) + 8))();
      }
      if (iVar4 == param_2) {
        uVar8 = 0;
        (**(code **)(param_1 + 500))(param_3);
        if ((short)param_3 == 0) {
          uVar8 = thunk_FUN_111a7100("onAlarmsChanged",0,0);
        }
        *(undefined4 *)(param_1 + 0x178) = 0;
      }
      else {
        if (*(int **)(param_1 + 0x180) == (int *)0x0) {
LAB_11118b9c:
          iVar4 = *(int *)(param_1 + 0x184);
        }
        else {
          cVar3 = (**(code **)(**(int **)(param_1 + 0x180) + 0xc))();
          if (cVar3 == '\0') goto LAB_11118b9c;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x180) + 8))();
        }
        if (iVar4 == param_2) {
          uVar8 = 0;
          (**(code **)(param_1 + 0x1f8))(param_3);
          if ((short)param_3 == 0) {
            uVar8 = thunk_FUN_111a7100("onAlarmsChanged",0,0);
          }
          *(undefined4 *)(param_1 + 0x184) = 0;
        }
        else {
          iVar4 = thunk_FUN_101bc3e0();
          if (iVar4 == param_2) {
            local_38[0] = 0;
            iVar4 = *(int *)(param_1 + 0x130);
            ((void)0);
            *(undefined4 *)(param_1 + 0x19c) = 0;
            if ((short)param_3 == 0) {
              local_1c = *(undefined4 *)(param_1 + 0x112);
              local_24 = *(undefined8 *)(param_1 + 0x10a);
              local_18 = *(undefined2 *)(param_1 + 0x116);
              (**(code **)(*(int *)(param_1 + 0x138) + 4))(*(int *)(param_1 + 0x198) + 0xd7d0);
              thunk_FUN_112630e0(*(int *)(param_1 + 0x198) + 0xd7f8);
              *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(int *)(param_1 + 0x198) + 0xd818)
              ;
              _Var9 = _time64((__time64_t *)0x0);
              *(__time64_t *)(param_1 + 0x150) = _Var9;
              cVar3 = thunk_FUN_11262ba0((undefined8 *)(param_1 + 0x10a));
              if (cVar3 == '\0') {
LAB_11118cc8:
                *(undefined4 *)(param_1 + 0x15c) = 0;
              }
              else {
                thunk_FUN_1111cf00();
                *(undefined4 *)(param_1 + 0x15c) = 0;
              }
            }
            else {
              if ((short)param_3 == 800) {
                *(undefined4 *)(param_1 + 0x130) = 0;
                goto LAB_11118cc8;
              }
              if (*(uint *)(param_1 + 0x15c) < 5) {
                *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) + 1;
                thunk_FUN_11119940();
              }
            }
            iVar2 = *(int *)(param_1 + 0x130);
            if (iVar4 != iVar2) {
              thunk_FUN_111a36f0();
              local_30 = (double)iVar2;
              local_38[0] = 4;
              uVar5 = thunk_FUN_111a7100("onTimeGenerationChanged",1,local_38);
              thunk_FUN_1106b260(uVar5);
            }
            thunk_FUN_111155f0();
            ((void)0);
            thunk_FUN_111a36f0();
            goto LAB_11118f9f;
          }
          iVar4 = thunk_FUN_101bc3e0();
          if (iVar4 == param_2) {
            *(undefined4 *)(param_1 + 0x1a8) = 0;
          }
          else {
            iVar4 = thunk_FUN_101bc3e0();
            if (iVar4 == param_2) {
              uVar8 = 0;
              if ((short)param_3 == 0) {
                pcVar6 = (char *)(*(int *)(param_1 + 0x1c8) + 0xd7d4);
                local_25 = '\0';
                local_26 = '\0';
                if (*pcVar6 != '\0') {
                  cVar3 = thunk_FUN_1115c580(pcVar6);
                  if (*(char *)(param_1 + 0x135) != cVar3) {
                    *(char *)(param_1 + 0x135) = cVar3;
                    local_25 = '\x01';
                  }
                }
                pcVar6 = (char *)(*(int *)(param_1 + 0x1c8) + 0xd7d0);
                if (*pcVar6 != '\0') {
                  cVar3 = thunk_FUN_1115c730(pcVar6);
                  if (*(char *)(param_1 + 0x134) != cVar3) {
                    *(char *)(param_1 + 0x134) = cVar3;
                    local_26 = '\x01';
                  }
                }
                if (local_25 != '\0') {
                  local_38[0] = 0;
                  bVar1 = *(byte *)(param_1 + 0x135);
                  ((void)0);
                  thunk_FUN_111a36f0();
                  local_30 = (double)bVar1;
                  local_38[0] = 4;
                  uVar8 = thunk_FUN_111a7100("OnDateFormatChanged",1,local_38);
                  ((void)0);
                  thunk_FUN_111a36f0();
                  ((void)0);
                }
                if (local_26 != '\0') {
                  local_38[0] = 0;
                  bVar1 = *(byte *)(param_1 + 0x134);
                  ((void)0);
                  thunk_FUN_111a36f0();
                  local_30 = (double)bVar1;
                  local_38[0] = 4;
                  uVar7 = thunk_FUN_111a7100("OnTimeFormatChanged",1,local_38);
                  uVar8 = uVar8 | uVar7;
                  ((void)0);
                  thunk_FUN_111a36f0();
                }
              }
              *(undefined4 *)(param_1 + 0x1cc) = 0;
              goto LAB_11118f97;
            }
            iVar4 = thunk_FUN_101bc3e0();
            if (iVar4 == param_2) {
              *(undefined4 *)(param_1 + 0x1d8) = 0;
            }
            else {
              iVar4 = thunk_FUN_101bc3e0();
              if (iVar4 == param_2) {
                thunk_FUN_111138f0(param_3);
                goto LAB_11118f9f;
              }
              iVar4 = thunk_FUN_101bc3e0();
              if (iVar4 == param_2) {
                *(undefined4 *)(param_1 + 0x1c0) = 0;
              }
              else {
                iVar4 = thunk_FUN_101bc3e0();
                if (iVar4 == param_2) {
                  *(undefined4 *)(param_1 + 0x1e4) = 0;
                  if ((short)param_3 == 0) {
                    *(undefined4 *)(param_1 + 0x15c) = 0;
                    thunk_FUN_1106a8d0(param_1 + 0x88,*(int *)(param_1 + 0x1e0) + 0xd7d0,0x81);
                    thunk_FUN_111155f0();
                  }
                  else {
                    if (*(uint *)(param_1 + 0x15c) < 5) {
                      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) + 1;
                      thunk_FUN_1111c930();
                    }
                    thunk_FUN_111155f0();
                  }
                  goto LAB_11118f9f;
                }
                iVar4 = thunk_FUN_101bc3e0();
                if (iVar4 != param_2) goto LAB_11118f9f;
                *(undefined4 *)(param_1 + 0x1f0) = 0;
              }
            }
          }
          uVar8 = 0;
        }
      }
    }
  }
LAB_11118f97:
  thunk_FUN_1106b260(uVar8);
LAB_11118f9f:
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1111cb60; body size 414 bytes.
namespace recovered_1111cb60 {
#line 1 "ENTRY_1111cb60"

void __thiscall FUN_1111cb60(int param_1,char param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_74 [2];
  double local_6c;
  int local_64;
  int local_60;
  undefined1 local_5c [32];
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_64 = *(int *)(param_1 + 0x50);
  piVar4 = (int *)0x0;
  iVar2 = thunk_FUN_110828b0(local_14);
  iVar2 = (*(code *)**(undefined4 **)(iVar2 + 0x1c))();
  if (((iVar2 != 0) && (cVar1 = thunk_FUN_110d3ac0(), cVar1 != '\0')) &&
     (iVar2 = thunk_FUN_110cb560(), iVar2 != 0)) {
    piVar4 = *(int **)(iVar2 + 0x2c);
  }
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    iVar2 = 1;
  }
  else {
    pcVar5 = (char *)(param_1 + 0xa0);
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_60 = *(int *)(param_1 + 0x148);
    if (*(int *)(param_1 + 0x50) == 0) {
      if (pcVar3 == (char *)(param_1 + 0xa1)) {
        (**(code **)(*piVar4 + 0x20))(pcVar5,0x81);
      }
      if (local_60 == 0) {
        (**(code **)(*piVar4 + 0x2c))(local_3c,0x14,local_28,0x14,local_5c,0x1d,param_1 + 0x148);
      }
    }
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (*(int *)(param_1 + 0x148) == 0) {
      iVar2 = (-(uint)(pcVar5 != (char *)(param_1 + 0xa1)) & 0xfffffffe) + 5;
      *(int *)(param_1 + 0x50) = iVar2;
    }
    else if (pcVar5 == (char *)(param_1 + 0xa1)) {
      *(undefined4 *)(param_1 + 0x50) = 4;
      iVar2 = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 2;
      iVar2 = 2;
    }
  }
  if ((param_2 != '\0') && (local_64 != iVar2)) {
    local_74[0] = 0;
    ((void)0);
    thunk_FUN_111a36f0();
    local_6c = (double)iVar2;
    local_74[0] = 4;
    thunk_FUN_111a7100("OnTimeStatusChanged",1,local_74);
    ((void)0);
    thunk_FUN_111a36f0();
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1111f4b0; body size 183 bytes.
namespace recovered_1111f4b0 {
#line 1 "ENTRY_1111f4b0"

void __fastcall FUN_1111f4b0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;
  int iVar3;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar1 = *(int *)(param_1 + 8);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ((void)0);
  return;
}


}
