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
extern undefined4 DAT_119c1ae0;
extern undefined4 DAT_119c9c20;
extern undefined4 DAT_119c9c6c;
extern undefined4 DAT_119c9c7c;
extern undefined4 DAT_12126b84;
extern int CheckForUpdates(...);
extern int FUN_110fca70(...);
extern int FUN_110ff0e0(...);
extern int FUN_110ff8b0(...);
extern int FUN_110ff950(...);
extern int FUN_110ff9f0(...);
extern int FUN_110ffae0(...);
extern int FUN_11101980(...);
extern int FUN_11102c00(...);
extern int FUN_11103450(...);
extern int FUN_11103ac0(...);
extern int FUN_11104870(...);
extern int FUN_111054d0(...);
extern int FUN_111056f0(...);
extern int FUN_111059d0(...);
extern int FUN_11105ef0(...);
extern int FUN_11106ea0(...);
extern int FUN_111076e0(...);
extern int FUN_111080f0(...);
extern int FUN_11108820(...);
extern int FUN_11109320(...);
extern int FUN_1110b170(...);
extern int FUN_1110cca0(...);
extern int FUN_1110d2e0(...);
extern int FUN_1110d3c0(...);
extern int FUN_1110d810(...);
extern int ZP(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int addDeviceToHH(...);
extern int beginUpdateZPs(...);
extern int free(...);
extern int memcpy(...);
extern int memset(...);
extern int* operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern undefined4 thunk_FUN_101a4cd0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10ba5d90(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10baa640(...);
extern int thunk_FUN_10baa760(...);
extern int thunk_FUN_11080f50(...);
extern int thunk_FUN_110810d0(...);
extern int thunk_FUN_11081b20(...);
extern int thunk_FUN_110828b0(...);
extern char thunk_FUN_11092a60(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110ceea0(...);
extern int thunk_FUN_110facf0(...);
extern undefined4 thunk_FUN_110fdde0(...);
extern int thunk_FUN_110fe3b0(...);
extern undefined4 thunk_FUN_11102510(...);
extern int thunk_FUN_111054d0(...);
extern char thunk_FUN_111059d0(...);
extern int thunk_FUN_11105c20(...);
extern int thunk_FUN_11105c90(...);
extern int thunk_FUN_11105e20(...);
extern char thunk_FUN_11107bf0(...);
extern int thunk_FUN_111083f0(...);
extern int thunk_FUN_111084f0(...);
extern int thunk_FUN_1110ec50(...);
extern int thunk_FUN_1110ef50(...);
extern int thunk_FUN_11175760(...);
extern undefined4 thunk_FUN_11194e60(...);
extern undefined4 thunk_FUN_11195000(...);
extern undefined4 thunk_FUN_11195f90(...);
extern undefined4 thunk_FUN_11195fd0(...);
extern undefined2 thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a36f0(...);
extern undefined4 thunk_FUN_111a4bc0(...);
extern char thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a6a30(...);
extern undefined4 thunk_FUN_111c06e0(...);
extern short thunk_FUN_112291d0(...);
extern int thunk_FUN_11230240(...);
extern int thunk_FUN_11230290(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1125d2f0(...);
extern undefined4 thunk_FUN_1125d900(...);
extern int thunk_FUN_1125d9d0(...);
extern char thunk_FUN_1127ddf0(...);
extern undefined4 thunk_FUN_1127e380(...);
extern char thunk_FUN_11287b20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112c4dd0(...);
extern char thunk_FUN_113cf9c0(...);
extern char thunk_FUN_113cfa30(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d2fb0(...);
extern int thunk_FUN_11458fa0(...);
extern int thunk_FUN_114595b0(...);
extern int thunk_FUN_1145a880(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int version(...);
// Reference entry 110fca70; body size 508 bytes.
namespace recovered_110fca70 {
#line 1 "ENTRY_110fca70"

void __fastcall FUN_110fca70(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_1018 [4100];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar5 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = uVar5;
  if (**(char **)(param_1 + 0xd84) == '\0') {
    sVar3 = thunk_FUN_112291d0("R_CustomerID",*(char **)(param_1 + 0xd84),0x11);
    if (sVar3 != 0) {
      if (sVar3 != 800) {
        thunk_FUN_112af4e0("upgrade",1,"failed to get CustomerID from ZP (upnp=%d)",sVar3);
      }
      **(undefined1 **)(param_1 + 0xd84) = 0;
      *(undefined4 *)(param_1 + 0xd78) = 2;
      goto LAB_110fcc50;
    }
  }
  *(undefined4 *)(param_1 + 0xd78) = 0;
  thunk_FUN_11230240(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4 + param_1 + 0xc,160000,10000);
  iVar1 = *(int *)(param_1 + 0xc);
  ((void)0);
  uVar6 = thunk_FUN_1127e380(*(undefined4 *)(param_1 + 0xd28),*(undefined1 *)(param_1 + 0xd6d),
                             param_1 + 0xd2c,local_1018,0x1001,uVar5);
  uVar4 = (**(code **)(iVar1 + 4))(uVar6);
  uVar5 = (uint)uVar4;
  if (uVar4 == 0) {
    iVar1 = param_1 + 0xd70;
    thunk_FUN_112a7f50(iVar1);
    if (*(int *)(param_1 + 0xd7c) == 0) {
      thunk_FUN_112a8010(iVar1);
      thunk_FUN_112af4e0("updatemgr",8,"CheckForUpdates() cancelled");
      *(undefined4 *)(param_1 + 0xd78) = 3;
    }
    else {
      thunk_FUN_112a7f50(*(int *)(param_1 + 0xd7c));
      thunk_FUN_112a8010(iVar1);
      cVar2 = thunk_FUN_1127ddf0(local_1018);
      if (cVar2 == '\0') {
        thunk_FUN_112af4e0("updatemgr",1,"CheckForUpdates() failed - error parsing xml");
        uVar6 = 2;
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(param_1 + 0xd78) = uVar6;
      thunk_FUN_112a8010(*(undefined4 *)(param_1 + 0xd7c));
    }
  }
  else {
    thunk_FUN_112af4e0("updatemgr",1,"CheckForUpdates() failed - upnp ret %d",uVar5);
    if ((uVar5 == 800) || (uVar6 = 1, uVar5 != 0x321)) {
      uVar6 = 2;
    }
    *(undefined4 *)(param_1 + 0xd78) = uVar6;
    *(uint *)(param_1 + 0xd88) = uVar5;
  }
  thunk_FUN_11230290();
LAB_110fcc50:
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 110ff0e0; body size 811 bytes.
namespace recovered_110ff0e0 {
#line 1 "ENTRY_110ff0e0"

void __fastcall FUN_110ff0e0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = uVar3;
  if (*(int *)(param_1 + 0x1a24) == 7) {
    local_38 = 0;
    local_3c = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x1a0c) != 0) {
      local_40 = 0;
      do {
        iVar10 = *(int *)(param_1 + 0x1a14) + local_40;
        pbVar9 = (byte *)(iVar10 + 8);
        local_48 = (**(code **)(*(int *)(*(int *)(param_1 + 0x24) + 0x1c) + 4))(pbVar9,1,uVar3);
        if (local_48 == 0) {
LAB_110ff2cd:
          if ((*(int *)(iVar10 + 0x474) == 6) &&
             ((0x2d < *(byte *)(iVar10 + 0x46d) ||
              ((*(byte *)(iVar10 + 0x46d) == 0x2d &&
               ((1 < *(byte *)(iVar10 + 0x46e) ||
                ((*(byte *)(iVar10 + 0x46e) == 1 &&
                 ((0xdae8 < *(uint *)(iVar10 + 0x470) || (*(uint *)(iVar10 + 0x470) == 0xdae8)))))))
               ))))) {
            local_38 = local_38 + 1;
            *(undefined1 *)(iVar10 + 0x4cd) = 1;
          }
          else {
            *(undefined1 *)(iVar10 + 0x4cd) = 0;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1a80) != 0) {
            pbVar4 = (byte *)(*(int *)(param_1 + 0x1a80) + 8);
            do {
              bVar1 = *pbVar4;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_110ff193:
                uVar5 = -(uint)bVar11 | 1;
                goto LAB_110ff198;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_110ff193;
              pbVar4 = pbVar4 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_110ff198:
            if (uVar5 != 0) goto LAB_110ff2cd;
          }
          *(undefined1 *)(iVar10 + 0x4cd) = 1;
          if ((((*(int *)(param_1 + 0x1b18) != 0x3f5) && (*(int *)(iVar10 + 0x4c8) == 0)) &&
              (*(char *)(iVar10 + 0x4cc) == '\0')) &&
             (((local_44 = local_48 + 0xa0, *(char *)(local_48 + 0xa1) != *(char *)(iVar10 + 0x46d)
               || (*(char *)(local_48 + 0xa2) != *(char *)(iVar10 + 0x46e))) ||
              ((*(uint *)(iVar10 + 0x470) < *(uint *)(local_48 + 0xa4) ||
               (*(uint *)(local_48 + 0xa4) != *(uint *)(iVar10 + 0x470))))))) {
            *(undefined4 *)(iVar10 + 0x4c8) = 0x3f6;
            thunk_FUN_1145a880(local_34,0x10);
            thunk_FUN_1145a880(local_24,0x10);
            puVar6 = (undefined4 *)thunk_FUN_110ceea0(&local_4c);
            puVar8 = &DAT_1186d2ee;
            if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
              puVar8 = (undefined1 *)*puVar6;
            }
            thunk_FUN_112af4e0("updatemgr",1,
                               "Updating %s may have failed. Its version (%s) is not the target version (%s)"
                               ,puVar8,local_34,local_24);
            iVar10 = local_4c;
            ((void)0);
            if ((local_4c != 0) &&
               (_Memory = (void *)(local_4c + -0x10), *(int *)(local_4c + -0x10) < 0xffff)) {
              iVar7 = thunk_FUN_1123fcd0(_Memory);
              if (iVar7 == 0) {
                *(undefined4 *)(iVar10 + -8) = 0;
                *(undefined4 *)(iVar10 + -0xc) = 0;
                thunk_FUN_113cfb70(iVar10,*(undefined4 *)(iVar10 + -4));
                free(_Memory);
              }
            }
            ((void)0);
            if (*(int *)(param_1 + 0x1b18) == 0) {
              *(undefined4 *)(param_1 + 0x1b18) = 0x3f6;
            }
          }
          local_38 = local_38 + 1;
        }
        local_3c = local_3c + 1;
        uVar5 = *(uint *)(param_1 + 0x1a0c);
        local_40 = local_40 + 0x4d4;
      } while (local_3c < uVar5);
    }
    if ((local_38 == uVar5) || ((*(int *)(param_1 + 0x1a80) != 0 && (local_38 == 1)))) {
      thunk_FUN_112af4e0("updatemgr",1,"All ZPs back online");
      if (*(int *)(param_1 + 0x1a38) != 0) {
        thunk_FUN_11175760(*(int *)(param_1 + 0x1a38));
      }
      *(undefined4 *)(param_1 + 0x1a38) = 0;
      thunk_FUN_110fe3b0(1);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x18) + 4))((local_38 * 0x32) / uVar5 + 0x32,3);
    }
  }
  if ((*(char *)(param_1 + 0x1a35) != '\0') && (*(int *)(param_1 + 0x1a24) == 4)) {
    cVar2 = thunk_FUN_11092a60();
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x1a36) != '\0')) {
      thunk_FUN_110facf0(1);
      iVar10 = thunk_FUN_11081b20(2);
      if (iVar10 != 0) {
        thunk_FUN_110fe3b0(1);
      }
      *(undefined1 *)(param_1 + 0x1a36) = 0;
    }
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 110ff8b0; body size 127 bytes.
namespace recovered_110ff8b0 {
#line 1 "ENTRY_110ff8b0"

void __fastcall FUN_110ff8b0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 0x1ad0) == 0) {
    pvVar1 = operator_new(0x6c);
    ((void)0);
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_111c06e0(0);
    }
    ((void)0);
    thunk_FUN_102207b0(uVar2,param_1 + 0x1c,0);
  }
  ((void)0);
  return;
}


}

// Reference entry 110ff950; body size 127 bytes.
namespace recovered_110ff950 {
#line 1 "ENTRY_110ff950"

void __fastcall FUN_110ff950(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 0x1ac4) == 0) {
    pvVar1 = operator_new(0x6c);
    ((void)0);
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_111c06e0(0);
    }
    ((void)0);
    thunk_FUN_102207b0(uVar2,param_1 + 0x1c,0);
  }
  ((void)0);
  return;
}


}

// Reference entry 110ff9f0; body size 180 bytes.
namespace recovered_110ff9f0 {
#line 1 "ENTRY_110ff9f0"

void __thiscall FUN_110ff9f0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if ((*(int *)(param_1 + 0x1b04) != 0) && (*(int *)(param_1 + 0x1b14) == 0)) {
    *(undefined4 *)(param_1 + 0x1a24) = 9;
    pvVar2 = operator_new(0x54);
    ((void)0);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = thunk_FUN_11195f90(param_2,uVar1);
      uVar4 = thunk_FUN_11195fd0(uVar3);
      uVar3 = thunk_FUN_11194e60(*(undefined4 *)(param_1 + 0x24),uVar4,uVar3,param_2);
    }
    ((void)0);
    thunk_FUN_102207b0(uVar3,param_1 + 0x1c,0);
  }
  ((void)0);
  return;
}


}

// Reference entry 110ffae0; body size 447 bytes.
namespace recovered_110ffae0 {
#line 1 "ENTRY_110ffae0"

void __fastcall FUN_110ffae0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *_Memory;
  char *pcVar8;
  size_t _Size;
  char *pcVar9;
  undefined4 *local_18;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (*(int *)(param_1 + 0x1b08) == 0) {
    *(undefined4 *)(param_1 + 0x1a24) = 5;
    thunk_FUN_110828b0(uVar3);
    iVar4 = thunk_FUN_110810d0();
    if (((iVar4 == 0) || (local_14 = *(char **)(iVar4 + 0x5c), local_14 == (char *)0x0)) ||
       (*local_14 == '\0')) {
      local_14 = (char *)0x0;
    }
    else {
      pcVar8 = local_14;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      _Size = (int)pcVar8 - (int)(local_14 + 1);
      puVar5 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
      puVar2 = puVar5 + 4;
      *puVar5 = 1;
      puVar5[3] = _Size;
      puVar5[2] = 0;
      puVar5[1] = 0;
      memcpy(puVar2,local_14,_Size);
      *(undefined1 *)((int)puVar2 + _Size) = 0;
      local_14 = (char *)puVar2;
    }
    pcVar8 = local_14;
    ((void)0);
    pcVar9 = local_14;
    local_18 = (undefined4 *)local_14;
    if (&local_18 != (undefined4 **)(param_1 + 0x1a30)) {
      puVar2 = *(undefined4 **)(param_1 + 0x1a30);
      if (((puVar2 != (undefined4 *)0x0) && ((int)puVar2[-4] < 0xffff)) &&
         (iVar4 = thunk_FUN_1123fcd0(puVar2 + -4), iVar4 == 0)) {
        puVar2[-2] = 0;
        puVar2[-3] = 0;
        thunk_FUN_113cfb70(puVar2,puVar2[-1]);
        free(puVar2 + -4);
      }
      pcVar9 = local_14;
      *(char **)(param_1 + 0x1a30) = pcVar8;
      if ((local_14 != (char *)0x0) && (*(int *)((int)pcVar8 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((undefined4 *)((int)pcVar8 + -0x10));
      }
    }
    ((void)0);
    if (((pcVar9 != (char *)0x0) && (_Memory = (int *)((int)pcVar8 + -0x10), *_Memory < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0(_Memory), iVar4 == 0)) {
      *(undefined4 *)((int)pcVar8 + -8) = 0;
      *(undefined4 *)((int)pcVar8 + -0xc) = 0;
      thunk_FUN_113cfb70(pcVar8,*(undefined4 *)((int)pcVar8 + -4));
      free(_Memory);
    }
    ((void)0);
    pvVar6 = operator_new(0x74);
    ((void)0);
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = thunk_FUN_11195000(*(undefined4 *)(param_1 + 0x24));
    }
    ((void)0);
    thunk_FUN_102207b0(uVar7,param_1 + 0x1c,0);
  }
  ((void)0);
  return;
}


}

// Reference entry 11101980; body size 131 bytes.
namespace recovered_11101980 {
#line 1 "ENTRY_11101980"

undefined4 __thiscall FUN_11101980(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 uVar2;


  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110facf0(1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    thunk_FUN_112af4e0("updatemgr",1,"beginUpdateZPs() - no listeners",uVar1);
    ((void)0);
    return 0x3f0;
  }
  uVar2 = thunk_FUN_110fdde0(0,param_2,0);
  ((void)0);
  return uVar2;
}


}

// Reference entry 11102c00; body size 88 bytes.
namespace recovered_11102c00 {
#line 1 "ENTRY_11102c00"

void __fastcall FUN_11102c00(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_1;
  ((void)0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 11103450; body size 342 bytes.
namespace recovered_11103450 {
#line 1 "ENTRY_11103450"

undefined4 __thiscall FUN_11103450(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  puVar4 = &DAT_1186d2ee;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_2;
  }
  thunk_FUN_112af4e0("joinhh",1,"addDeviceToHH %s",puVar4,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  *(undefined1 *)(param_1 + 0x6b8) = param_3;
  if (*(int *)(param_1 + 0x6b4) != 0) {
    ((void)0);
    return 0;
  }
  thunk_FUN_101ba530(param_2);
  *(undefined4 *)(param_1 + 0x6b4) = 1;
  thunk_FUN_112af4e0("joinhh",0,"addDeviceToHH");
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar2 = operator_new(4);
    ((void)0);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = thunk_FUN_1125d900(&DAT_119c1ae0);
    }
    ((void)0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0x21;
  *(undefined4 *)(param_1 + 0x1fc) = 0x104;
  *(undefined4 *)(param_1 + 0x280) = 0x80;
  *(undefined4 *)(param_1 + 0x2c4) = 0x40;
  *(undefined4 *)(param_1 + 0x348) = 0x80;
  *(undefined4 *)(param_1 + 0x370) = 0x21;
  *(undefined4 *)(param_1 + 0x3f4) = 0x80;
  cVar1 = thunk_FUN_111059d0();
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("joinhh",0,"addDeviceToHH (int_getHHRegDevInfo) failed - 1");
    thunk_FUN_11105c20(1);
  }
  ((void)0);
  return 1;
}


}

// Reference entry 11103ac0; body size 349 bytes.
namespace recovered_11103ac0 {
#line 1 "ENTRY_11103ac0"

undefined4 __thiscall FUN_11103ac0(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *(undefined1 *)(param_1 + 0x6b0) = 1;
  puVar5 = &DAT_1186d2ee;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*param_2;
  }
  thunk_FUN_112af4e0("joinhh",1,"addDeviceToHH %s",puVar5,uVar2);
  *(undefined1 *)(param_1 + 0x6b8) = param_3;
  if (*(int *)(param_1 + 0x6b4) != 0) {
    ((void)0);
    return 0;
  }
  thunk_FUN_101ba530(param_2);
  *(undefined4 *)(param_1 + 0x6b4) = 1;
  thunk_FUN_112af4e0("joinhh",0,"addDeviceToHH");
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar3 = operator_new(4);
    ((void)0);
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_1125d900(&DAT_119c1ae0);
    }
    ((void)0);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0x21;
  *(undefined4 *)(param_1 + 0x1fc) = 0x104;
  *(undefined4 *)(param_1 + 0x280) = 0x80;
  *(undefined4 *)(param_1 + 0x2c4) = 0x40;
  *(undefined4 *)(param_1 + 0x348) = 0x80;
  *(undefined4 *)(param_1 + 0x370) = 0x21;
  *(undefined4 *)(param_1 + 0x3f4) = 0x80;
  cVar1 = thunk_FUN_111059d0();
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("joinhh",0,"addDeviceToHH (int_getHHRegDevInfo) failed - 1");
    thunk_FUN_11105c20(1);
  }
  ((void)0);
  return 1;
}


}

// Reference entry 11104870; body size 778 bytes.
namespace recovered_11104870 {
#line 1 "ENTRY_11104870"

void __thiscall FUN_11104870(int param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_20 [8];
  void *local_18;
  undefined4 local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar6 = (undefined4 *)(param_2 + 0x234);
  puVar8 = (undefined4 *)(param_1 + 0xd0);
  for (iVar5 = 0xf2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  if (*(short *)(param_2 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x5f4);
    param_2 = 0x10;
    if (*(int *)(param_1 + 0x348) == 0) {
LAB_11104b02:
      pcVar9 = "addDeviceToHH (int_getHHRegDevInfo) failed - 2";
    }
    else {
      cVar1 = thunk_FUN_11107bf0(param_1 + 0x2c8,*(int *)(param_1 + 0x348),param_1 + 0x4d,&param_2);
      if ((cVar1 == '\0') || (param_2 != 0x10)) goto LAB_11104b02;
      pcVar9 = *(char **)(param_1 + 0x518);
      if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
        sVar3 = thunk_FUN_101a4cd0();
        memcpy((void *)(param_1 + 0x5d),pcVar9,sVar3);
        uVar4 = thunk_FUN_101a4cd0();
        *(undefined4 *)(param_1 + 0x80) = uVar4;
        puVar7 = &DAT_1186d2ee;
        if (*(undefined1 **)(param_1 + 0x51c) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_1 + 0x51c);
        }
        sVar3 = thunk_FUN_101a4cd0();
        memcpy((void *)(param_1 + 0x84),puVar7,sVar3);
        uVar4 = thunk_FUN_101a4cd0();
        *(undefined4 *)(param_1 + 200) = uVar4;
        local_14 = 0;
        ((void)0);
        thunk_FUN_101ba530(&local_14);
        local_14 = 0;
        ((void)0);
        thunk_FUN_101ba530(&local_14);
        ((void)0);
LAB_11104a4f:
        thunk_FUN_1125d2f0();
        thunk_FUN_1145c930(local_20,0);
        thunk_FUN_1145ad70(local_20,20000);
        local_18 = operator_new(0x608);
        ((void)0);
        if (local_18 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          puVar7 = &DAT_1186d2ee;
          if (*(undefined1 **)(param_1 + 0x514) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(param_1 + 0x514);
          }
          uVar4 = thunk_FUN_11102510(local_20,3,0,puVar7,param_1 + 0x2c,param_1 + 0x521,
                                     *(undefined4 *)(param_1 + 0x628),param_1 + 0x62c,
                                     *(undefined4 *)(param_1 + 0x6ac),param_1 + 0x498,
                                     *(undefined1 *)(param_1 + 0x6b8));
        }
        ((void)0);
        thunk_FUN_11105c90(3,uVar4);
        ((void)0);
        return;
      }
      if (*(int *)(param_1 + 0x370) == 0) goto LAB_11104a4f;
      local_14 = 0x41;
      cVar1 = thunk_FUN_11107bf0(param_1 + 0x374,*(undefined4 *)(param_1 + 0x3f4),param_1 + 0x84,
                                 &local_14);
      if (cVar1 != '\0') {
        thunk_FUN_1145c250(param_1 + 0x5d,param_1 + 0x34c,0x21);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x370);
        *(undefined4 *)(param_1 + 200) = local_14;
        *(undefined1 *)(*(int *)(param_1 + 0x370) + 0x5d + param_1) = 0;
        goto LAB_11104a4f;
      }
      pcVar9 = "addDeviceToHH (int_getHHRegDevInfo) failed - 4";
    }
    thunk_FUN_112af4e0("joinhh",0,pcVar9);
    thunk_FUN_112c4dd0(1);
  }
  else {
    if (*(short *)(param_2 + 0xc) == 0x192) {
      thunk_FUN_112c4dd0(1,uVar2);
      uVar4 = 4;
      goto LAB_11104b2e;
    }
    thunk_FUN_112c4dd0(1,uVar2);
  }
  uVar4 = 1;
LAB_11104b2e:
  thunk_FUN_11105e20(uVar4);
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  thunk_FUN_111054d0();
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 != 0) {
    thunk_FUN_1125d9d0();
    thunk_FUN_1148a50e(iVar5,4);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  ((void)0);
  return;
}


}

// Reference entry 111054d0; body size 432 bytes.
namespace recovered_111054d0 {
#line 1 "ENTRY_111054d0"

void __fastcall FUN_111054d0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18 [2];


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  memset((void *)(param_1 + 0x2c),0,0x46c);
  local_18[1] = 0;
  ((void)0);
  if (local_18 + 1 != (int *)(param_1 + 0x514)) {
    iVar2 = *(int *)(param_1 + 0x514);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar4 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar3);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
        free((void *)(iVar2 + -0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x514) = 0;
  }
  local_18[0] = 0;
  piVar1 = (int *)(param_1 + 0x518);
  ((void)0);
  if (local_18 != piVar1) {
    iVar2 = *piVar1;
    local_1c = iVar2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar4 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar3);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(iVar2 + -4));
        free((void *)(iVar2 + -0x10));
      }
    }
    *piVar1 = 0;
  }
  local_20 = 0;
  piVar1 = (int *)(param_1 + 0x51c);
  ((void)0);
  if (&local_20 != piVar1) {
    iVar2 = *piVar1;
    local_1c = iVar2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar4 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar3);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(iVar2 + -4));
        free((void *)(iVar2 + -0x10));
      }
    }
    *piVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  memset((void *)(param_1 + 0x521),0,0x104);
  *(undefined4 *)(param_1 + 0x628) = 0x104;
  memset((void *)(param_1 + 0x62c),0,0x80);
  *(undefined4 *)(param_1 + 0x6ac) = 0x80;
  ((void)0);
  return;
}


}

// Reference entry 111056f0; body size 578 bytes.
namespace recovered_111056f0 {
#line 1 "ENTRY_111056f0"

void __fastcall FUN_111056f0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  int *piVar9;
  int local_24 [2];
  char *local_1c;
  int *local_18;
  int *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar2 = thunk_FUN_11287b20((undefined4 *)(param_1 + 0x2c),0x21,
                             DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    thunk_FUN_112af4e0("joinhh",0,"Failed to generate Household ID");
  }
  thunk_FUN_113d2fb0(param_1 + 0x4d,0x10);
  piVar9 = (int *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x490);
  pcVar1 = (char *)*piVar9;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    if (*(char *)(param_1 + 0x6b0) == '\0') {
      ((void)0);
      return;
    }
    if (pcVar1 == (char *)0x0) {
      sVar8 = 0;
      goto LAB_111057b1;
    }
  }
  sVar8 = *(size_t *)(pcVar1 + -0xc);
  if (sVar8 == 0) {
    local_18 = (int *)(pcVar1 + 1);
    pcVar7 = pcVar1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    sVar8 = (int)pcVar7 - (int)local_18;
    *(size_t *)(pcVar1 + -0xc) = sVar8;
  }
LAB_111057b1:
  puVar5 = &DAT_1186d2ee;
  if ((undefined1 *)*piVar9 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*piVar9;
  }
  local_14 = piVar9;
  memcpy((void *)(param_1 + 0x5d),puVar5,sVar8);
  pcVar1 = (char *)*piVar9;
  if (pcVar1 == (char *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(pcVar1 + -0xc);
    if (iVar6 == 0) {
      pcVar7 = pcVar1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      iVar6 = (int)pcVar7 - (int)(pcVar1 + 1);
      *(int *)(pcVar1 + -0xc) = iVar6;
    }
  }
  piVar9 = (int *)(param_1 + 0x51c);
  *(int *)(param_1 + 0x80) = iVar6;
  pcVar1 = (char *)*piVar9;
  if (pcVar1 == (char *)0x0) {
    sVar8 = 0;
  }
  else {
    sVar8 = *(size_t *)(pcVar1 + -0xc);
    if (sVar8 == 0) {
      local_1c = pcVar1 + 1;
      pcVar7 = pcVar1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      sVar8 = (int)pcVar7 - (int)local_1c;
      *(size_t *)(pcVar1 + -0xc) = sVar8;
    }
  }
  puVar5 = &DAT_1186d2ee;
  if ((undefined1 *)*piVar9 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*piVar9;
  }
  local_18 = piVar9;
  memcpy((void *)(param_1 + 0x84),puVar5,sVar8);
  pcVar1 = (char *)*piVar9;
  if (pcVar1 == (char *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(pcVar1 + -0xc);
    if (iVar6 == 0) {
      local_1c = pcVar1 + 1;
      pcVar7 = pcVar1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      iVar6 = (int)pcVar7 - (int)local_1c;
      *(int *)(pcVar1 + -0xc) = iVar6;
    }
  }
  *(int *)(param_1 + 200) = iVar6;
  local_24[1] = 0;
  ((void)0);
  piVar4 = (int *)(param_1 + 0x518);
  if (local_24 + 1 != piVar4) {
    iVar6 = *piVar4;
    if (((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) &&
       (iVar3 = thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)), piVar4 = local_14, iVar3 == 0)) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
      piVar4 = local_14;
    }
    *piVar4 = 0;
    piVar9 = local_18;
  }
  local_24[0] = 0;
  ((void)0);
  if (local_24 != piVar9) {
    iVar6 = *piVar9;
    if (((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) &&
       (iVar3 = thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)), iVar3 == 0)) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
    *local_18 = 0;
  }
  ((void)0);
  return;
}


}

// Reference entry 111059d0; body size 470 bytes.
namespace recovered_111059d0 {
#line 1 "ENTRY_111059d0"

undefined4 __fastcall FUN_111059d0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_20 [8];
  void *local_18;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  memset((void *)(param_1 + 0x2c),0,0xa4);
  puVar1 = (undefined4 *)(param_1 + 0x628);
  *puVar1 = 0x104;
  puVar2 = (undefined4 *)(param_1 + 0x6ac);
  cVar3 = thunk_FUN_113cf9c0(param_1 + 0x521,puVar1);
  if (cVar3 == '\0') {
    *puVar2 = 0;
    *puVar1 = 0;
    uVar6 = 0x4aa;
  }
  else {
    *puVar2 = 0x80;
    cVar3 = thunk_FUN_113cfa30(param_1 + 0x62c,puVar2,uVar4);
    if (cVar3 != '\0') goto LAB_11105a76;
    uVar6 = 0x4a4;
  }
  thunk_FUN_112af4e0("joinhh",0,"%d: load data failed",uVar6);
LAB_11105a76:
  iVar5 = thunk_FUN_1109f7f0();
  thunk_FUN_11458fa0(*(undefined4 *)(iVar5 + 0x20));
  thunk_FUN_114595b0("HouseholdID",param_1 + 0x2c,0x21);
  thunk_FUN_110828b0();
  local_14 = thunk_FUN_11080f50();
  if (local_14 != 0) {
    thunk_FUN_1145c930(local_20,0);
    thunk_FUN_1145ad70(local_20,10000);
    *(undefined4 *)(param_1 + 0xf4) = 0x21;
    *(undefined4 *)(param_1 + 0x1fc) = 0x104;
    *(undefined4 *)(param_1 + 0x280) = 0x80;
    *(undefined4 *)(param_1 + 0x2c4) = 0x40;
    *(undefined4 *)(param_1 + 0x348) = 0x80;
    *(undefined4 *)(param_1 + 0x370) = 0x21;
    *(undefined4 *)(param_1 + 0x3f4) = 0x80;
    thunk_FUN_1125d2f0();
    local_18 = operator_new(0x608);
    ((void)0);
    if (local_18 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = thunk_FUN_11102510(local_20,4,0,local_14,param_1 + 0x2c,param_1 + 0x521,*puVar1,
                                 param_1 + 0x62c,*puVar2,param_1 + 0x498,0);
    }
    ((void)0);
    thunk_FUN_11105c90(2,uVar6);
    ((void)0);
    return 1;
  }
  ((void)0);
  return 0;
}


}

// Reference entry 11105ef0; body size 606 bytes.
namespace recovered_11105ef0 {
#line 1 "ENTRY_11105ef0"

undefined4 __thiscall FUN_11105ef0(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_18 [8];


  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *(undefined1 *)(param_1 + 0x6b8) = param_3;
  thunk_FUN_101ba530(param_2);
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar5 = operator_new(4);
    ((void)0);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = thunk_FUN_1125d900(&DAT_119c1ae0);
    }
    ((void)0);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
  }
  puVar1 = (undefined4 *)(param_1 + 0x628);
  *puVar1 = 0x104;
  puVar2 = (undefined4 *)(param_1 + 0x6ac);
  cVar3 = thunk_FUN_113cf9c0(param_1 + 0x521,puVar1,uVar4);
  if (cVar3 == '\0') {
    *puVar2 = 0;
    *puVar1 = 0;
    uVar6 = 0x754;
  }
  else {
    *puVar2 = 0x80;
    cVar3 = thunk_FUN_113cfa30(param_1 + 0x62c,puVar2);
    if (cVar3 != '\0') goto LAB_11105fd5;
    uVar6 = 0x74e;
  }
  thunk_FUN_112af4e0("joinhh",0,"%d: load data failed",uVar6);
LAB_11105fd5:
  *(undefined4 *)(param_1 + 0xf4) = 0x21;
  *(undefined4 *)(param_1 + 0x1fc) = 0x104;
  *(undefined4 *)(param_1 + 0x280) = 0x80;
  *(undefined4 *)(param_1 + 0x2c4) = 0x40;
  *(undefined4 *)(param_1 + 0x348) = 0x80;
  thunk_FUN_1125d2f0();
  cVar3 = *(char *)(param_1 + 0x6b8);
  thunk_FUN_1145c930(local_18,0);
  uVar6 = 40000;
  if (cVar3 == '\0') {
    uVar6 = 20000;
  }
  thunk_FUN_1145ad70(local_18,uVar6);
  if (*(int *)(param_1 + 0x6b4) == 0xe) {
    pvVar5 = operator_new(0x608);
    ((void)0);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
      uVar7 = 0xf;
    }
    else {
      puVar8 = &DAT_1186d2ee;
      if (*(undefined1 **)(param_1 + 0x514) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(param_1 + 0x514);
      }
      uVar6 = thunk_FUN_11102510(local_18,2,0,puVar8,&DAT_1186d2ee,param_1 + 0x521,*puVar1,
                                 param_1 + 0x62c,*(undefined4 *)(param_1 + 0x6ac),param_1 + 0x498,
                                 *(undefined1 *)(param_1 + 0x6b8));
      uVar7 = 0xf;
    }
  }
  else {
    pvVar5 = operator_new(0x608);
    ((void)0);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_1186d2ee;
      if (*(undefined1 **)(param_1 + 0x514) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(param_1 + 0x514);
      }
      uVar6 = thunk_FUN_11102510(local_18,2,0,puVar8,&DAT_1186d2ee,param_1 + 0x521,*puVar1,
                                 param_1 + 0x62c,*(undefined4 *)(param_1 + 0x6ac),param_1 + 0x498,
                                 *(undefined1 *)(param_1 + 0x6b8));
    }
    uVar7 = 6;
  }
  ((void)0);
  thunk_FUN_11105c90(uVar7,uVar6);
  ((void)0);
  return 1;
}


}

// Reference entry 11106ea0; body size 120 bytes.
namespace recovered_11106ea0 {
#line 1 "ENTRY_11106ea0"

void __fastcall FUN_11106ea0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar1 = operator_new(4);
    ((void)0);
    if (pvVar1 != (void *)0x0) {
      uVar2 = thunk_FUN_1125d900(&DAT_119c1ae0);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      ((void)0);
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  ((void)0);
  return;
}


}

// Reference entry 111076e0; body size 624 bytes.
namespace recovered_111076e0 {
#line 1 "ENTRY_111076e0"

undefined1 * __thiscall
FUN_111076e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 auStackY_100 [144];
  undefined4 uStackY_70;
  undefined1 *puStackY_6c;
  undefined4 uStackY_68;
  undefined4 uStackY_64;
  undefined1 *puStackY_60;
  int iStackY_5c;
  int iStackY_58;
  undefined1 local_18 [8];


  ((void)0);
  ((void)0);
  ((void)0);
  if (*(int *)(param_1 + 0x6b4) == 0) {
    ((void)0);
    thunk_FUN_101ba530();
    thunk_FUN_101ba530();
    thunk_FUN_101ba530();
    *(undefined1 *)(param_1 + 0x520) = param_5;
    *(undefined1 *)(param_1 + 0x6b8) = param_6;
    *(undefined4 *)(param_1 + 0x6b4) = 10;
    thunk_FUN_112af4e0();
    if (*(int *)(param_1 + 0x28) == 0) {
      pvVar2 = operator_new(4);
      ((void)0);
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = thunk_FUN_1125d900();
      }
      ((void)0);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x628) = 0x104;
    cVar1 = thunk_FUN_113cf9c0();
    if (cVar1 == '\0') {
      thunk_FUN_112af4e0();
      *(undefined4 *)(param_1 + 0x6ac) = 0;
      *(undefined4 *)(param_1 + 0x628) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x6ac) = 0x80;
      cVar1 = thunk_FUN_113cfa30();
      if (cVar1 == '\0') {
        thunk_FUN_112af4e0();
      }
    }
    *(undefined4 *)(param_1 + 0xf4) = 0x21;
    *(undefined4 *)(param_1 + 0x1fc) = 0x104;
    *(undefined4 *)(param_1 + 0x280) = 0x80;
    *(undefined4 *)(param_1 + 0x2c4) = 0x40;
    *(undefined4 *)(param_1 + 0x348) = 0x80;
    *(undefined4 *)(param_1 + 0x370) = 0x21;
    *(undefined4 *)(param_1 + 0x3f4) = 0x80;
    thunk_FUN_1125d2f0();
    thunk_FUN_1109f7f0();
    thunk_FUN_11458fa0();
    thunk_FUN_114595b0();
    thunk_FUN_1145c930();
    thunk_FUN_1145ad70();
    iStackY_58 = 0x111078cf;
    pvVar2 = operator_new(0x608);
    ((void)0);
    if (pvVar2 != (void *)0x0) {
      puStackY_60 = &DAT_1186d2ee;
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        puStackY_60 = (undefined1 *)*param_4;
      }
      iStackY_58 = param_1 + 0x521;
      iStackY_5c = param_1 + 0x2c;
      uStackY_64 = 0;
      uStackY_68 = 3;
      puStackY_6c = local_18;
      uStackY_70 = 0x11107925;
      thunk_FUN_11102510();
    }
    ((void)0);
    thunk_FUN_11105c90();
    ((void)0);
    return (undefined1 *)0x1;
  }
  return auStackY_100;
}


}

// Reference entry 111080f0; body size 515 bytes.
namespace recovered_111080f0 {
#line 1 "ENTRY_111080f0"

void __thiscall FUN_111080f0(int *param_1,int param_2,int param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar4 = *param_1;
  uVar2 = (param_3 - param_2) / 0x24;
  iVar7 = param_1[1];
  uVar3 = (iVar7 - iVar4) / 0x24;
  if (uVar2 <= uVar3) {
    thunk_FUN_111083f0(param_2,param_3,iVar4,uVar1);
    iVar7 = param_1[1];
    iVar4 = iVar4 + uVar2 * 0x24;
    for (iVar5 = iVar4; iVar5 != iVar7; iVar5 = iVar5 + 0x24) {
      thunk_FUN_10ba6fd0();
    }
    param_1[1] = iVar4;
    ((void)0);
    return;
  }
  uVar6 = (param_1[2] - iVar4) / 0x24;
  if (uVar6 < uVar2) {
    if (0x71c71c7 < uVar2) {

      thunk_FUN_10baa640();
    }
    if (0x71c71c7 - (uVar6 >> 1) < uVar6) {
      uVar6 = 0x71c71c7;
    }
    else {
      uVar6 = uVar6 + (uVar6 >> 1);
      if (uVar6 < uVar2) {
        uVar6 = uVar2;
      }
    }
    if (iVar4 != 0) {
      if (iVar4 != iVar7) {
        do {
          thunk_FUN_10ba6fd0();
          iVar4 = iVar4 + 0x24;
        } while (iVar4 != iVar7);
        iVar4 = *param_1;
      }
      uVar2 = ((param_1[2] - iVar4) / 0x24) * 0x24;
      iVar7 = iVar4;
      if (0xfff < uVar2) {
        iVar7 = *(int *)(iVar4 + -4);
        uVar2 = uVar2 + 0x23;
        if (0x1f < (iVar4 - iVar7) - 4U) {

          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar7,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar4 = thunk_FUN_10baa760(uVar6);
    *param_1 = iVar4;
    param_1[1] = iVar4;
    param_1[2] = iVar4 + uVar6 * 0x24;
    uVar3 = 0;
  }
  iVar7 = param_2 + uVar3 * 0x24;
  thunk_FUN_111083f0(param_2,iVar7,iVar4,uVar1);
  iVar4 = param_1[1];
  ((void)0);
  for (; iVar7 != param_3; iVar7 = iVar7 + 0x24) {
    thunk_FUN_10ba5d90(iVar7);
    iVar4 = iVar4 + 0x24;
  }
  param_1[1] = iVar4;
  ((void)0);
  return;
}


}

// Reference entry 11108820; body size 549 bytes.
namespace recovered_11108820 {
#line 1 "ENTRY_11108820"

int * __thiscall FUN_11108820(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar3 = *param_1;
  iVar5 = param_1[1] - iVar3 >> 2;
  if (iVar5 == 0x3fffffff) {

    thunk_FUN_1110ef50();
  }
  uVar1 = iVar5 + 1;
  uVar7 = param_1[2] - iVar3 >> 2;
  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
LAB_11108a3b:

    thunk_FUN_1012a2a0();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
    uVar10 = uVar7;
  }
  if (0x3fffffff < uVar10) goto LAB_11108a3b;
  uVar7 = uVar10 * 4;
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = operator_new(uVar7);
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_11108a3b;
    pvVar6 = operator_new(uVar7 + 0x23);
    if (pvVar6 == (void *)0x0) goto LAB_11108a35;
    piVar8 = (int *)((int)pvVar6 + 0x23U & 0xffffffe0);
    piVar8[-1] = (int)pvVar6;
  }
  piVar2 = piVar8 + ((int)param_2 - iVar3 >> 2);
  ((void)0);
  *piVar2 = 0;
  if (piVar2 != param_3) {
    iVar3 = *param_3;
    *piVar2 = iVar3;
    if (iVar3 != 0) {
      thunk_FUN_1123fce0(iVar3 + 4);
    }
  }
  piVar4 = (int *)param_1[1];
  piVar11 = (int *)*param_1;
  if (param_2 == piVar4) {
    ((void)0);
    piVar9 = piVar8;
    for (; piVar11 != piVar4; piVar11 = piVar11 + 1) {
      *piVar9 = 0;
      if (piVar9 != piVar11) {
        iVar3 = *piVar11;
        *piVar9 = iVar3;
        if (iVar3 != 0) {
          thunk_FUN_1123fce0(iVar3 + 4);
        }
      }
      piVar9 = piVar9 + 1;
    }
    thunk_FUN_111084f0(piVar9,piVar9,param_1);
  }
  else {
    thunk_FUN_1110ec50(piVar11,param_2,piVar8);
    thunk_FUN_1110ec50(param_2,param_1[1],piVar2 + 1);
  }
  if (*param_1 != 0) {
    thunk_FUN_111084f0(*param_1,param_1[1],param_1);
    iVar3 = *param_1;
    uVar7 = param_1[2] - iVar3 & 0xfffffffc;
    iVar5 = iVar3;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar3 + -4);
      uVar7 = uVar7 + 0x23;
      if (0x1f < (iVar3 - iVar5) - 4U) {
LAB_11108a35:

        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
  }
  *param_1 = (int)piVar8;
  param_1[1] = (int)(piVar8 + uVar1);
  param_1[2] = (int)(piVar8 + uVar10);
  ((void)0);
  return piVar2;
}


}

// Reference entry 11109320; body size 91 bytes.
namespace recovered_11109320 {
#line 1 "ENTRY_11109320"

void FUN_11109320(undefined4 param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1110b170; body size 88 bytes.
namespace recovered_1110b170 {
#line 1 "ENTRY_1110b170"

void __fastcall FUN_1110b170(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_1;
  ((void)0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1110cca0; body size 113 bytes.
namespace recovered_1110cca0 {
#line 1 "ENTRY_1110cca0"

int * __thiscall FUN_1110cca0(int *param_1,byte param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_1;
  ((void)0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  ((void)0);
  return param_1;
}


}

// Reference entry 1110d2e0; body size 179 bytes.
namespace recovered_1110d2e0 {
#line 1 "ENTRY_1110d2e0"

void FUN_1110d2e0(undefined4 param_1,undefined1 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_20[0] = 0;
  ((void)0);
  thunk_FUN_111a5f10(&DAT_119c9c20,local_20);
  uVar1 = thunk_FUN_111a2df0(uVar3);
  *param_2 = uVar1;
  thunk_FUN_111a5f10("minute",local_20);
  uVar1 = thunk_FUN_111a2df0();
  param_2[1] = uVar1;
  cVar2 = thunk_FUN_111a5f10("second",local_20);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_111a2df0();
  }
  ((void)0);
  param_2[2] = uVar1;
  thunk_FUN_111a36f0();
  ((void)0);
  return;
}


}

// Reference entry 1110d3c0; body size 161 bytes.
namespace recovered_1110d3c0 {
#line 1 "ENTRY_1110d3c0"

undefined4 FUN_1110d3c0(undefined4 param_1,undefined1 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  pvVar1 = operator_new(0x14);
  ((void)0);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_111a4bc0(param_1,"Object");
  }
  ((void)0);
  thunk_FUN_111a6a30(&DAT_119c9c20,*param_2);
  thunk_FUN_111a6a30("minute",param_2[1]);
  thunk_FUN_111a6a30("second",param_2[2]);
  ((void)0);
  return uVar2;
}


}

// Reference entry 1110d810; body size 315 bytes.
namespace recovered_1110d810 {
#line 1 "ENTRY_1110d810"

void FUN_1110d810(undefined4 param_1,int param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined2 uVar1;
  uint uVar2;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_20[0] = 0;
  ((void)0);
  thunk_FUN_111a5f10(&DAT_119c9c6c,local_20);
  uVar1 = thunk_FUN_111a2df0(uVar2);
  *(undefined2 *)(param_2 + 4) = uVar1;
  thunk_FUN_111a5f10("month",local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 6) = uVar1;
  thunk_FUN_111a5f10(&DAT_119c9c7c,local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 10) = uVar1;
  thunk_FUN_111a5f10("dayofweek",local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 8) = uVar1;
  thunk_FUN_111a5f10(&DAT_119c9c20,local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 0xc) = uVar1;
  thunk_FUN_111a5f10("minute",local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 0xe) = uVar1;
  thunk_FUN_111a5f10("second",local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 0x10) = uVar1;
  thunk_FUN_111a5f10("millisecond",local_20);
  uVar1 = thunk_FUN_111a2df0();
  *(undefined2 *)(param_2 + 0x12) = uVar1;
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return;
}


}
