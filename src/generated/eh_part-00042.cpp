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
extern char FUN_10091f7e(...);
extern int FUN_110d35a0(...);
extern int FUN_110d3660(...);
extern int FUN_110d3720(...);
extern int FUN_110d3ad0(...);
extern int FUN_110d3f40(...);
extern int FUN_110d4590(...);
extern int FUN_110d4cf0(...);
extern int FUN_110d4e90(...);
extern int FUN_110d4fa0(...);
extern int FUN_110d50b0(...);
extern int FUN_110d5430(...);
extern int FUN_110d5660(...);
extern int FUN_110d64e0(...);
extern int free(...);
extern int strncmp(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110cc7f0(...);
extern char thunk_FUN_110d3420(...);
extern char thunk_FUN_110d34e0(...);
extern int thunk_FUN_110d63e0(...);
extern int thunk_FUN_110d78c0(...);
extern int thunk_FUN_110d9290(...);
extern int thunk_FUN_110d9580(...);
extern undefined4 thunk_FUN_110d9820(...);
extern int thunk_FUN_110d98e0(...);
extern int thunk_FUN_11138290(...);
extern char thunk_FUN_111a06b0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1127c6b0(...);
extern char thunk_FUN_1127caf0(...);
extern char thunk_FUN_1127cb00(...);
extern int thunk_FUN_113cfb70(...);
extern char thunk_FUN_11457320(...);
// Reference entry 110d35a0; body size 148 bytes.
namespace recovered_110d35a0 {
#line 1 "ENTRY_110d35a0"

undefined1 FUN_110d35a0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar2 = (undefined4 *)thunk_FUN_110d98e0(&local_14);
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10),uVar1);
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 110d3660; body size 148 bytes.
namespace recovered_110d3660 {
#line 1 "ENTRY_110d3660"

undefined1 FUN_110d3660(void)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar2 = (undefined4 *)thunk_FUN_110d9290(&local_14);
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10),uVar1);
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 110d3720; body size 249 bytes.
namespace recovered_110d3720 {
#line 1 "ENTRY_110d3720"

undefined1 FUN_110d3720(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int *_Memory;
  char *local_18;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110d9580(&local_14,0);
  ((void)0);
  if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
    thunk_FUN_110d9580(&local_18,1);
    if ((local_18 == (char *)0x0) || (*local_18 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    ((void)0);
    if ((local_18 != (char *)0x0) && (*(int *)(local_18 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0(local_18 + -0x10,uVar2);
      if (iVar3 == 0) {
        uVar1 = *(undefined4 *)(local_18 + -4);
        local_18[-0xffffffff00000008] = '\0';
        local_18[-0xffffffff00000007] = '\0';
        local_18[-0xffffffff00000006] = '\0';
        local_18[-0xffffffff00000005] = '\0';
        local_18[-0xffffffff0000000c] = '\0';
        local_18[-0xffffffff0000000b] = '\0';
        local_18[-0xffffffff0000000a] = '\0';
        local_18[-0xffffffff00000009] = '\0';
        thunk_FUN_113cfb70(local_18,uVar1);
        free(local_18 + -0x10);
      }
    }
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_14 != (char *)0x0) && (_Memory = (int *)(local_14 + -0x10), *_Memory < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(_Memory,uVar2);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(local_14 + -4);
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(_Memory);
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 110d3ad0; body size 150 bytes.
namespace recovered_110d3ad0 {
#line 1 "ENTRY_110d3ad0"

undefined1 FUN_110d3ad0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  puVar2 = (undefined4 *)thunk_FUN_110cc7f0(&local_14,5);
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10),uVar1);
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 110d3f40; body size 245 bytes.
namespace recovered_110d3f40 {
#line 1 "ENTRY_110d3f40"

undefined1 FUN_110d3f40(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int *_Memory;
  char *local_18;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110d9580(&local_14,0);
  ((void)0);
  thunk_FUN_110d9580(&local_18,1);
  if ((((local_14 == (char *)0x0) || (*local_14 == '\0')) || (local_18 == (char *)0x0)) ||
     (*local_18 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  ((void)0);
  if ((local_18 != (char *)0x0) && (*(int *)(local_18 + -0x10) < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(local_18 + -0x10,uVar2);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(local_18 + -4);
      local_18[-0xffffffff00000008] = '\0';
      local_18[-0xffffffff00000007] = '\0';
      local_18[-0xffffffff00000006] = '\0';
      local_18[-0xffffffff00000005] = '\0';
      local_18[-0xffffffff0000000c] = '\0';
      local_18[-0xffffffff0000000b] = '\0';
      local_18[-0xffffffff0000000a] = '\0';
      local_18[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_18,uVar1);
      free(local_18 + -0x10);
    }
  }
  ((void)0);
  if ((local_14 != (char *)0x0) && (_Memory = (int *)(local_14 + -0x10), *_Memory < 0xffff)) {
    iVar3 = thunk_FUN_1123fcd0(_Memory,uVar2);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(local_14 + -4);
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(_Memory);
    }
  }
  ((void)0);
  return uVar4;
}


}

// Reference entry 110d4590; body size 1427 bytes.
namespace recovered_110d4590 {
#line 1 "ENTRY_110d4590"

bool FUN_110d4590(void)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_18 = 0;
  piVar2 = (int *)thunk_FUN_110d63e0(&local_40);
  ((void)0);
  uVar5 = 1;
  pcVar4 = "";
  if ((char *)*piVar2 != (char *)0x0) {
    pcVar4 = (char *)*piVar2;
  }
  local_18 = 1;
  iVar3 = strncmp(pcVar4,"ZP80",4);
  if (iVar3 != 0) {
    piVar2 = (int *)thunk_FUN_110d63e0(&local_3c);
    ((void)0);
    pcVar4 = "";
    if ((char *)*piVar2 != (char *)0x0) {
      pcVar4 = (char *)*piVar2;
    }
    uVar5 = 3;
    local_18 = 3;
    iVar3 = strncmp(pcVar4,"ZP100",5);
    if (iVar3 != 0) {
      piVar2 = (int *)thunk_FUN_110d63e0(&local_38);
      ((void)0);
      pcVar4 = "";
      if ((char *)*piVar2 != (char *)0x0) {
        pcVar4 = (char *)*piVar2;
      }
      local_18 = 7;
      iVar3 = strncmp(pcVar4,"ZP90",4);
      uVar6 = 7;
      if (iVar3 == 0) {
        piVar2 = (int *)thunk_FUN_110d78c0(&local_34);
        ((void)0);
        pcVar4 = "";
        if ((char *)*piVar2 != (char *)0x0) {
          pcVar4 = (char *)*piVar2;
        }
        uVar5 = 0xf;
        local_18 = 0xf;
        iVar3 = strncmp(pcVar4,"C100",4);
        uVar6 = uVar5;
        if (iVar3 != 0) goto LAB_110d47f5;
      }
      piVar2 = (int *)thunk_FUN_110d63e0(&local_30);
      uVar5 = uVar6 | 0x10;
      ((void)0);
      pcVar4 = "";
      if ((char *)*piVar2 != (char *)0x0) {
        pcVar4 = (char *)*piVar2;
      }
      local_18 = uVar5;
      iVar3 = strncmp(pcVar4,"ZP120",5);
      if (iVar3 == 0) {
        piVar2 = (int *)thunk_FUN_110d78c0(&local_2c);
        uVar5 = uVar6 | 0x30;
        ((void)0);
        pcVar4 = "";
        if ((char *)*piVar2 != (char *)0x0) {
          pcVar4 = (char *)*piVar2;
        }
        local_18 = uVar5;
        iVar3 = strncmp(pcVar4,"P100",4);
        if (iVar3 == 0) goto LAB_110d47f5;
      }
      piVar2 = (int *)thunk_FUN_110d63e0(&local_28);
      ((void)0);
      pcVar4 = "";
      if ((char *)*piVar2 != (char *)0x0) {
        pcVar4 = (char *)*piVar2;
      }
      local_18 = uVar5 | 0x40;
      iVar3 = strncmp(pcVar4,"S5",2);
      uVar6 = uVar5 | 0x40;
      if (iVar3 == 0) {
        piVar2 = (int *)thunk_FUN_110d78c0(&local_24);
        uVar5 = uVar5 | 0xc0;
        ((void)0);
        pcVar4 = "";
        if ((char *)*piVar2 != (char *)0x0) {
          pcVar4 = (char *)*piVar2;
        }
        local_18 = uVar5;
        iVar3 = strncmp(pcVar4,"P100",4);
        uVar6 = uVar5;
        if (iVar3 == 0) goto LAB_110d47f5;
      }
      piVar2 = (int *)thunk_FUN_110d63e0(&local_20);
      uVar5 = uVar6 | 0x100;
      ((void)0);
      pcVar4 = "";
      if ((char *)*piVar2 != (char *)0x0) {
        pcVar4 = (char *)*piVar2;
      }
      local_18 = uVar5;
      iVar3 = strncmp(pcVar4,"CR200",5);
      if (iVar3 != 0) {
        piVar2 = (int *)thunk_FUN_110d63e0(&local_1c);
        uVar5 = uVar6 | 0x300;
        pcVar4 = "";
        if ((char *)*piVar2 != (char *)0x0) {
          pcVar4 = (char *)*piVar2;
        }
        iVar3 = strncmp(pcVar4,"ZoneBridge",10);
        local_11 = '\0';
        if (iVar3 != 0) goto LAB_110d47f9;
      }
    }
  }
LAB_110d47f5:
  local_11 = '\x01';
LAB_110d47f9:
  if ((uVar5 & 0x200) != 0) {
    uVar5 = uVar5 & 0xfffffdff;
    ((void)0);
    local_18 = uVar5;
    if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_1c + -0x10),uVar1);
      if (iVar3 == 0) {
        *(undefined4 *)(local_1c + -8) = 0;
        *(undefined4 *)(local_1c + -0xc) = 0;
        thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
        free((void *)(local_1c + -0x10));
      }
    }
  }
  if ((uVar5 & 0x100) != 0) {
    uVar5 = uVar5 & 0xfffffeff;
    ((void)0);
    local_18 = uVar5;
    if ((local_20 != 0) && (*(int *)(local_20 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_20 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_20 + -8) = 0;
        *(undefined4 *)(local_20 + -0xc) = 0;
        thunk_FUN_113cfb70(local_20,*(undefined4 *)(local_20 + -4));
        free((void *)(local_20 + -0x10));
      }
    }
  }
  if ((char)uVar5 < '\0') {
    uVar5 = uVar5 & 0xffffff7f;
    ((void)0);
    local_18 = uVar5;
    if ((local_24 != 0) && (*(int *)(local_24 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_24 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_24 + -8) = 0;
        *(undefined4 *)(local_24 + -0xc) = 0;
        thunk_FUN_113cfb70(local_24,*(undefined4 *)(local_24 + -4));
        free((void *)(local_24 + -0x10));
      }
    }
  }
  if ((uVar5 & 0x40) != 0) {
    uVar5 = uVar5 & 0xffffffbf;
    ((void)0);
    local_18 = uVar5;
    if ((local_28 != 0) && (*(int *)(local_28 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_28 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_28 + -8) = 0;
        *(undefined4 *)(local_28 + -0xc) = 0;
        thunk_FUN_113cfb70(local_28,*(undefined4 *)(local_28 + -4));
        free((void *)(local_28 + -0x10));
      }
    }
  }
  if ((uVar5 & 0x20) != 0) {
    uVar5 = uVar5 & 0xffffffdf;
    ((void)0);
    local_18 = uVar5;
    if ((local_2c != 0) && (*(int *)(local_2c + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_2c + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_2c + -8) = 0;
        *(undefined4 *)(local_2c + -0xc) = 0;
        thunk_FUN_113cfb70(local_2c,*(undefined4 *)(local_2c + -4));
        free((void *)(local_2c + -0x10));
      }
    }
  }
  if ((uVar5 & 0x10) != 0) {
    uVar5 = uVar5 & 0xffffffef;
    ((void)0);
    local_18 = uVar5;
    if ((local_30 != 0) && (*(int *)(local_30 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_30 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_30 + -8) = 0;
        *(undefined4 *)(local_30 + -0xc) = 0;
        thunk_FUN_113cfb70(local_30,*(undefined4 *)(local_30 + -4));
        free((void *)(local_30 + -0x10));
      }
    }
  }
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    ((void)0);
    local_18 = uVar5;
    if ((local_34 != 0) && (*(int *)(local_34 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_34 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_34 + -8) = 0;
        *(undefined4 *)(local_34 + -0xc) = 0;
        thunk_FUN_113cfb70(local_34,*(undefined4 *)(local_34 + -4));
        free((void *)(local_34 + -0x10));
      }
    }
  }
  if ((uVar5 & 4) != 0) {
    uVar5 = uVar5 & 0xfffffffb;
    ((void)0);
    local_18 = uVar5;
    if ((local_38 != 0) && (*(int *)(local_38 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_38 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_38 + -8) = 0;
        *(undefined4 *)(local_38 + -0xc) = 0;
        thunk_FUN_113cfb70(local_38,*(undefined4 *)(local_38 + -4));
        free((void *)(local_38 + -0x10));
      }
    }
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    ((void)0);
    local_18 = uVar5;
    if ((local_3c != 0) && (*(int *)(local_3c + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_3c + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_3c + -8) = 0;
        *(undefined4 *)(local_3c + -0xc) = 0;
        thunk_FUN_113cfb70(local_3c,*(undefined4 *)(local_3c + -4));
        free((void *)(local_3c + -0x10));
      }
    }
  }
  if ((uVar5 & 1) != 0) {
    ((void)0);
    if ((local_40 != 0) && (*(int *)(local_40 + -0x10) < 0xffff)) {
      iVar3 = thunk_FUN_1123fcd0((void *)(local_40 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_40 + -8) = 0;
        *(undefined4 *)(local_40 + -0xc) = 0;
        thunk_FUN_113cfb70(local_40,*(undefined4 *)(local_40 + -4));
        free((void *)(local_40 + -0x10));
      }
    }
  }
  ((void)0);
  return local_11 != '\0';
}


}

// Reference entry 110d4cf0; body size 328 bytes.
namespace recovered_110d4cf0 {
#line 1 "ENTRY_110d4cf0"

undefined4 __fastcall FUN_110d4cf0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 local_18 [4];
  undefined1 local_14 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar2 = thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    cVar1 = thunk_FUN_11457320();
    if (cVar1 != '\0') {
      cVar1 = thunk_FUN_110d3420();
      if (cVar1 == '\0') {
        cVar1 = thunk_FUN_110d34e0();
      }
      else {
        puVar3 = (undefined4 *)thunk_FUN_110d9580(local_14,0);
        ((void)0);
        puVar4 = &DAT_1186d2ee;
        if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)*puVar3;
        }
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar4,1);
        ((void)0);
        thunk_FUN_101ba300();
        cVar1 = iVar2 == 0;
      }
      if (cVar1 != '\0') {
        iVar2 = thunk_FUN_110828b0();
        if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
          cVar1 = thunk_FUN_11457320();
          if (cVar1 != '\0') {
            cVar1 = thunk_FUN_110d34e0();
            if (cVar1 == '\0') {
              cVar1 = thunk_FUN_110d3420();
            }
            else {
              puVar3 = (undefined4 *)thunk_FUN_110d9580(local_18,1);
              ((void)0);
              puVar4 = &DAT_1186d2ee;
              if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
                puVar4 = (undefined1 *)*puVar3;
              }
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar4,1);
              thunk_FUN_101ba300();
              cVar1 = iVar2 == 0;
            }
            if (cVar1 != '\0') {
              ((void)0);
              return 1;
            }
          }
        }
      }
    }
  }
  ((void)0);
  return 0;
}


}

// Reference entry 110d4e90; body size 213 bytes.
namespace recovered_110d4e90 {
#line 1 "ENTRY_110d4e90"

bool __fastcall FUN_110d4e90(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  iVar2 = thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    cVar1 = thunk_FUN_11457320();
    if (cVar1 != '\0') {
      cVar1 = thunk_FUN_110d3420();
      if (cVar1 != '\0') {
        puVar3 = (undefined4 *)thunk_FUN_110d9580(&local_14,0);
        ((void)0);
        puVar4 = &DAT_1186d2ee;
        if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)*puVar3;
        }
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar4,1);
        thunk_FUN_101ba300();
        ((void)0);
        return iVar2 == 0;
      }
      cVar1 = thunk_FUN_110d34e0();
      if (cVar1 != '\0') {
        ((void)0);
        return true;
      }
    }
  }
  ((void)0);
  return false;
}


}

// Reference entry 110d4fa0; body size 213 bytes.
namespace recovered_110d4fa0 {
#line 1 "ENTRY_110d4fa0"

bool __fastcall FUN_110d4fa0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = param_1;
  iVar2 = thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    cVar1 = thunk_FUN_11457320();
    if (cVar1 != '\0') {
      cVar1 = thunk_FUN_110d34e0();
      if (cVar1 != '\0') {
        puVar3 = (undefined4 *)thunk_FUN_110d9580(&local_14,1);
        ((void)0);
        puVar4 = &DAT_1186d2ee;
        if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)*puVar3;
        }
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar4,1);
        thunk_FUN_101ba300();
        ((void)0);
        return iVar2 == 0;
      }
      cVar1 = thunk_FUN_110d3420();
      if (cVar1 != '\0') {
        ((void)0);
        return true;
      }
    }
  }
  ((void)0);
  return false;
}


}

// Reference entry 110d50b0; body size 508 bytes.
namespace recovered_110d50b0 {
#line 1 "ENTRY_110d50b0"

undefined4 FUN_110d50b0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = 0;
  iVar1 = thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (iVar1 == 0) {
    ((void)0);
    return 0;
  }
  local_24 = iVar1;
  puVar2 = (undefined4 *)thunk_FUN_110d9290(&local_20);
  uVar4 = 1;
  ((void)0);
  local_18 = 1;
  if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
LAB_110d514d:
    local_11 = '\0';
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_110d9290(&local_1c);
    ((void)0);
    uVar4 = 3;
    puVar3 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*puVar2;
    }
    local_18 = 3;
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 4))(puVar3,1);
    local_11 = '\x01';
    if (iVar1 != 0) goto LAB_110d514d;
  }
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    ((void)0);
    local_18 = uVar4;
    if (((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) &&
       (iVar1 = thunk_FUN_1123fcd0((void *)(local_1c + -0x10)), iVar1 == 0)) {
      *(undefined4 *)(local_1c + -8) = 0;
      *(undefined4 *)(local_1c + -0xc) = 0;
      thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
      free((void *)(local_1c + -0x10));
    }
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffe;
    ((void)0);
    if (((local_20 != 0) && (*(int *)(local_20 + -0x10) < 0xffff)) &&
       (iVar1 = thunk_FUN_1123fcd0((void *)(local_20 + -0x10)), iVar1 == 0)) {
      *(undefined4 *)(local_20 + -8) = 0;
      *(undefined4 *)(local_20 + -0xc) = 0;
      thunk_FUN_113cfb70(local_20,*(undefined4 *)(local_20 + -4));
      free((void *)(local_20 + -0x10));
    }
  }
  ((void)0);
  if (local_11 != '\0') {
    ((void)0);
    return 1;
  }
  puVar2 = (undefined4 *)thunk_FUN_110d98e0(local_2c);
  uVar5 = uVar4 | 4;
  ((void)0);
  local_18 = uVar5;
  if (((char *)*puVar2 != (char *)0x0) && (*(char *)*puVar2 != '\0')) {
    puVar2 = (undefined4 *)thunk_FUN_110d98e0(local_28);
    uVar5 = uVar4 | 0xc;
    ((void)0);
    puVar3 = &DAT_1186d2ee;
    if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*puVar2;
    }
    local_18 = uVar5;
    iVar1 = (**(code **)(*(int *)(local_24 + 0x1c) + 4))(puVar3,1);
    local_11 = '\x01';
    if (iVar1 == 0) goto LAB_110d5261;
  }
  local_11 = '\0';
LAB_110d5261:
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    thunk_FUN_101ba300();
  }
  if ((uVar5 & 4) != 0) {
    thunk_FUN_101ba300();
  }
  if (local_11 != '\0') {
    ((void)0);
    return 1;
  }
  ((void)0);
  return 0;
}


}

// Reference entry 110d5430; body size 210 bytes.
namespace recovered_110d5430 {
#line 1 "ENTRY_110d5430"

undefined4 __fastcall FUN_110d5430(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = param_1;
  cVar1 = thunk_FUN_1127caf0(uVar2);
  if ((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) {
    cVar1 = thunk_FUN_1127caf0(uVar2);
    if ((cVar1 != '\0') &&
       ((1 < *(uint *)(param_1 + 0x568) && (cVar1 = thunk_FUN_1127cb00(), cVar1 != '\0')))) {
      ((void)0);
      return 0;
    }
    iVar3 = thunk_FUN_110828b0();
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)thunk_FUN_110d9820(&local_14);
      ((void)0);
      puVar5 = &DAT_1186d2ee;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)*puVar4;
      }
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x1c) + 4))(puVar5,1);
      thunk_FUN_101ba300();
      if (iVar3 == 0) {
        ((void)0);
        return 1;
      }
    }
  }
  ((void)0);
  return 0;
}


}

// Reference entry 110d5660; body size 197 bytes.
namespace recovered_110d5660 {
#line 1 "ENTRY_110d5660"

undefined4 __fastcall FUN_110d5660(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = param_1;
  puVar3 = (undefined4 *)thunk_FUN_110d9820(&local_14);
  puVar6 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)*puVar3;
  }
  ((void)0);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(puVar6,1,uVar2);
  iVar1 = local_14;
  ((void)0);
  if ((local_14 != 0) && (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)
     ) {
    iVar5 = thunk_FUN_1123fcd0(_Memory);
    if (iVar5 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x528) == 1)) {
    ((void)0);
    return 1;
  }
  ((void)0);
  return 0;
}


}

// Reference entry 110d64e0; body size 563 bytes.
namespace recovered_110d64e0 {
#line 1 "ENTRY_110d64e0"

int FUN_110d64e0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  void *pvVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = 0;
  iVar8 = 0;
  cVar2 = thunk_FUN_1127caf0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if (((cVar2 == '\0') || (*(uint *)(local_1c + 0x568) < 2)) ||
     (cVar2 = thunk_FUN_1127cb00(), cVar2 == '\0')) {
    iVar3 = (**(code **)(**(int **)(local_1c + 0x20) + 0xc))(local_1c + 0x4fa);
    if (iVar3 != 0) {
      piVar4 = (int *)thunk_FUN_11138290();
      local_24 = 0;
      uVar5 = piVar4[1] - *piVar4 >> 2;
      iVar3 = iVar8;
      if (uVar5 != 0) {
        do {
          local_20 = *(int *)(*piVar4 + local_24 * 4);
          uVar6 = thunk_FUN_110d9820(&local_2c);
          local_18 = 1;
          ((void)0);
          thunk_FUN_110d9820(&local_28);
          ((void)0);
          local_18 = 3;
          cVar2 = thunk_FUN_111a06b0(uVar6);
          if ((cVar2 == '\0') || (*(int *)(local_20 + 0x1c) == 0)) {
LAB_110d6634:
            local_11 = '\0';
          }
          else {
            cVar2 = FUN_10091f7e();
            local_11 = '\x01';
            if (cVar2 == '\0') goto LAB_110d6634;
          }
          iVar8 = local_28;
          local_18 = 1;
          ((void)0);
          uVar6 = 1;
          if (((local_28 != 0) &&
              (pvVar1 = (void *)(local_28 + -0x10), uVar6 = local_18,
              *(int *)(local_28 + -0x10) < 0xffff)) &&
             (local_18 = 1, iVar7 = thunk_FUN_1123fcd0(pvVar1), uVar6 = local_18, iVar7 == 0)) {
            *(undefined4 *)(iVar8 + -8) = 0;
            *(undefined4 *)(iVar8 + -0xc) = 0;
            thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
            free(pvVar1);
            uVar6 = local_18;
          }
          local_18 = uVar6;
          iVar8 = local_2c;
          ((void)0);
          if (((local_2c != 0) &&
              (pvVar1 = (void *)(local_2c + -0x10), *(int *)(local_2c + -0x10) < 0xffff)) &&
             (iVar7 = thunk_FUN_1123fcd0(pvVar1), iVar7 == 0)) {
            *(undefined4 *)(iVar8 + -8) = 0;
            *(undefined4 *)(iVar8 + -0xc) = 0;
            thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
            free(pvVar1);
          }
          ((void)0);
          iVar8 = iVar3 + 1;
          if (local_11 == '\0') {
            iVar8 = iVar3;
          }
          local_24 = local_24 + 1;
          iVar3 = iVar8;
        } while (local_24 < uVar5);
      }
    }
  }
  else {
    iVar3 = thunk_FUN_1127c6b0(1);
    if (iVar3 != -1) {
      iVar8 = thunk_FUN_1127c6b0(2);
      if ((-1 < iVar8) && (iVar3 != iVar8)) {
        ((void)0);
        return 2;
      }
      ((void)0);
      return 1;
    }
  }
  ((void)0);
  return iVar8;
}


}
