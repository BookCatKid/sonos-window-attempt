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
extern undefined4 DAT_118823e0;
extern undefined4 DAT_119c6f4c;
extern undefined4 DAT_119c6f50;
extern undefined4 DAT_12126b84;
extern undefined4* DAT_122e8a14;
extern undefined4 * PTR_DAT_119c6a9c;
extern undefined4 * PTR_DAT_1211de94;
extern undefined4 * PTR_s_ROWID_119c6ac8;
extern int FUN_110f2980(...);
extern int FUN_110f3120(...);
extern int FUN_110f3540(...);
extern int FUN_110f3940(...);
extern int FUN_110f3a70(...);
extern int FUN_110f4830(...);
extern int FUN_110f4970(...);
extern int FUN_110f4c30(...);
extern int FUN_110f4e10(...);
extern int FUN_110f51c0(...);
extern int FUN_110fc520(...);
extern int FUN_110fc930(...);
extern int FUN_110fc9c0(...);
extern int free(...);
extern int* operator_new(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1107e1f0(...);
extern int thunk_FUN_110ee120(...);
extern int thunk_FUN_110ee6b0(...);
extern int thunk_FUN_110ee850(...);
extern int thunk_FUN_110f0510(...);
extern int thunk_FUN_110f0eb0(...);
extern int thunk_FUN_110f2600(...);
extern int thunk_FUN_110f2b90(...);
extern int thunk_FUN_110f3120(...);
extern int thunk_FUN_110f3540(...);
extern int thunk_FUN_110f3940(...);
extern char thunk_FUN_110f3ba0(...);
extern int thunk_FUN_110f4970(...);
extern int thunk_FUN_110f4e10(...);
extern int thunk_FUN_110f9190(...);
extern char thunk_FUN_110fa330(...);
extern undefined4 thunk_FUN_110fd1e0(...);
extern int thunk_FUN_11100160(...);
extern int thunk_FUN_11101ad0(...);
extern int thunk_FUN_1114acf0(...);
extern char thunk_FUN_111a0940(...);
extern int thunk_FUN_111a0c00(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_111a1880(...);
extern undefined4 thunk_FUN_111a2ec0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern char thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1138fad0(...);
extern int thunk_FUN_1138fbf0(...);
extern int thunk_FUN_1138fd50(...);
extern int thunk_FUN_11391670(...);
extern undefined4 thunk_FUN_11393990(...);
extern int thunk_FUN_113948f0(...);
extern int thunk_FUN_11395f20(...);
extern int thunk_FUN_11397670(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 110f2980; body size 244 bytes.
namespace recovered_110f2980 {
#line 1 "ENTRY_110f2980"

undefined4 * FUN_110f2980(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (DAT_122e8a14 == (undefined4 *)0x0) {
    pvVar3 = operator_new(0x20);
    ((void)0);
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)thunk_FUN_110ee850(uVar2);
    }
    ((void)0);
    if (puVar4 != (undefined4 *)0x0) {
      thunk_FUN_1123fce0(puVar4 + 1);
    }
    puVar1 = DAT_122e8a14;
    ((void)0);
    if (((DAT_122e8a14 != (undefined4 *)0x0) &&
        (iVar5 = thunk_FUN_1123fcd0(DAT_122e8a14 + 1), iVar5 == 0)) && (puVar1 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar1)(1);
    }
    DAT_122e8a14 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      thunk_FUN_1123fce0(puVar4 + 1);
    }
    ((void)0);
    if ((puVar4 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar4 + 1), iVar5 == 0)) {
      (**(code **)*puVar4)(1);
    }
  }
  ((void)0);
  return DAT_122e8a14;
}


}

// Reference entry 110f3120; body size 839 bytes.
namespace recovered_110f3120 {
#line 1 "ENTRY_110f3120"

void __fastcall FUN_110f3120(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  undefined4 *_Memory_00;
  char *pcVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  local_18 = param_1;
  puVar4 = (undefined4 *)thunk_FUN_110f2600(&local_20,param_1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot)
  ;
  puVar11 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)*puVar4;
  }
  local_1c = param_1 + 0xc;
  iVar5 = thunk_FUN_11395f20(param_1[0xb],puVar11,0xffffffff,local_1c,0);
  iVar9 = local_20;
  ((void)0);
  if (((local_20 != 0) &&
      (_Memory = (void *)(local_20 + -0x10), *(int *)(local_20 + -0x10) < 0xffff)) &&
     (iVar6 = thunk_FUN_1123fcd0(_Memory), iVar6 == 0)) {
    *(undefined4 *)(iVar9 + -8) = 0;
    *(undefined4 *)(iVar9 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar9,*(undefined4 *)(iVar9 + -4));
    free(_Memory);
  }
  ((void)0);
  if (iVar5 != 0) {
    uVar7 = thunk_FUN_11393990(param_1[0xb]);
    thunk_FUN_112af4e0("queryBuilder",1,"Failed to create sqlite statement %s\n",uVar7);
    ((void)0);
    return;
  }
  if ((param_1[1] - *param_1 >> 2 != 0) &&
     (piVar13 = *(int **)param_1[3], piVar13 != (int *)param_1[3])) {
    do {
      ((void)0);
      local_14 = (undefined4 *)thunk_FUN_1148b586(0x12);
      *local_14 = 1;
      local_14[3] = 1;
      local_14[2] = 0;
      local_14[1] = 0;
      local_14 = local_14 + 4;
      *(undefined2 *)local_14 = 0x3a;
      ((void)0);
      thunk_FUN_111a0c00(piVar13 + 4);
      puVar4 = (undefined4 *)&DAT_1186d2ee;
      if (local_14 != (undefined4 *)0x0) {
        puVar4 = local_14;
      }
      local_20 = thunk_FUN_1138fbf0(*local_1c,puVar4);
      thunk_FUN_110ee120(&local_34,piVar13 + 4);
      iVar9 = local_2c;
      if ((*(char *)(local_2c + 0xd) != '\0') ||
         (cVar3 = thunk_FUN_111a0940(local_2c + 0x10), cVar3 != '\0')) {
        if (local_18[4] == 0xaaaaaaa) {

          thunk_FUN_101d7220();
        }
        iVar9 = local_18[3];
        ((void)0);
        local_24 = (int *)0x0;
        local_28 = local_18 + 3;
        piVar8 = operator_new(0x18);
        iVar5 = piVar13[4];
        ((void)0);
        piVar8[4] = iVar5;
        if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
          local_24 = piVar8;
          thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
        }
        piVar8[5] = 0;
        *piVar8 = iVar9;
        piVar8[1] = iVar9;
        piVar8[2] = iVar9;
        *(undefined2 *)(piVar8 + 3) = 0;
        ((void)0);
        local_24 = (int *)0x0;
        iVar9 = thunk_FUN_110f0eb0(local_34,local_30,piVar8);
      }
      pcVar1 = *(char **)(iVar9 + 0x14);
      if (pcVar1 == (char *)0x0) {
        iVar9 = 0;
        pcVar10 = "";
      }
      else {
        if (*(int *)(pcVar1 + -0x10) < 0xffff) {
          thunk_FUN_1123fce0(pcVar1 + -0x10);
        }
        iVar9 = *(int *)(pcVar1 + -0xc);
        pcVar10 = pcVar1;
        if (iVar9 == 0) {
          pcVar12 = pcVar1;
          do {
            cVar3 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar3 != '\0');
          iVar9 = (int)pcVar12 - (int)(pcVar1 + 1);
          *(int *)(pcVar1 + -0xc) = iVar9;
        }
      }
      thunk_FUN_1138fd50(*local_1c,local_20,pcVar10,iVar9,0);
      piVar8 = (int *)piVar13[2];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar3 = *(char *)(*piVar8 + 0xd);
        piVar13 = piVar8;
        piVar8 = (int *)*piVar8;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*piVar8 + 0xd);
          piVar13 = piVar8;
          piVar8 = (int *)*piVar8;
        }
      }
      else {
        cVar3 = *(char *)(piVar13[1] + 0xd);
        piVar2 = (int *)piVar13[1];
        piVar8 = piVar13;
        while ((piVar13 = piVar2, cVar3 == '\0' && (piVar8 == (int *)piVar13[2]))) {
          cVar3 = *(char *)(piVar13[1] + 0xd);
          piVar2 = (int *)piVar13[1];
          piVar8 = piVar13;
        }
      }
      ((void)0);
      if (((pcVar1 != (char *)0x0) && (*(int *)(pcVar1 + -0x10) < 0xffff)) &&
         (iVar9 = thunk_FUN_1123fcd0(pcVar1 + -0x10), iVar9 == 0)) {
        pcVar1[-0xffffffff00000008] = '\0';
        pcVar1[-0xffffffff00000007] = '\0';
        pcVar1[-0xffffffff00000006] = '\0';
        pcVar1[-0xffffffff00000005] = '\0';
        pcVar1[-0xffffffff0000000c] = '\0';
        pcVar1[-0xffffffff0000000b] = '\0';
        pcVar1[-0xffffffff0000000a] = '\0';
        pcVar1[-0xffffffff00000009] = '\0';
        thunk_FUN_113cfb70(pcVar1,*(undefined4 *)(pcVar1 + -4));
        free(pcVar1 + -0x10);
      }
      puVar4 = local_14;
      ((void)0);
      if (((local_14 != (undefined4 *)0x0) &&
          (_Memory_00 = local_14 + -4, (int)local_14[-4] < 0xffff)) &&
         (iVar9 = thunk_FUN_1123fcd0(_Memory_00), iVar9 == 0)) {
        puVar4[-2] = 0;
        puVar4[-3] = 0;
        thunk_FUN_113cfb70(puVar4,puVar4[-1]);
        free(_Memory_00);
      }
      param_1 = local_18;
    } while (piVar13 != (int *)local_18[3]);
  }
  *(undefined1 *)(param_1 + 10) = 1;
  ((void)0);
  return;
}


}

// Reference entry 110f3540; body size 816 bytes.
namespace recovered_110f3540 {
#line 1 "ENTRY_110f3540"

bool __thiscall FUN_110f3540(int param_1,char *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_2c;
  undefined4 local_24;
  int local_1c;
  bool local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110ee6b0(*(undefined4 *)(param_1 + 0x14),PTR_DAT_1211de94,0);
  ((void)0);
  thunk_FUN_110f4970(&PTR_DAT_119c6a9c,0xb);
  if (local_2c == '\0') {
    thunk_FUN_110f3120(uVar2);
  }
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c,param_2,(int)pcVar5 - (int)(param_2 + 1),0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120(uVar2);
  }
  pcVar5 = param_2 + 0x21;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 1,param_2 + 0x21,(int)pcVar5 - (int)(param_2 + 0x22),0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar5 = param_2 + 0x42;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 2,param_2 + 0x42,(int)pcVar5 - (int)(param_2 + 0x43),0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar5 = param_2 + 99;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 3,param_2 + 99,(int)pcVar5 - (int)(param_2 + 100),0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar5 = param_2 + 0x74;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 4,param_2 + 0x74,(int)pcVar5 - (int)(param_2 + 0x75),0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar5 = param_2 + 0x8d;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 5,param_2 + 0x8d,(int)pcVar5 - (int)(param_2 + 0x8e),0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fad0(local_24,local_1c + 6,uVar4);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar5 = param_2 + 0xc3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 7,param_2 + 0xc3,(int)pcVar5 - (int)(param_2 + 0xc4),0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  pcVar5 = param_2 + 0xd8;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_1138fd50(local_24,local_1c + 8,param_2 + 0xd8,(int)pcVar5 - (int)(param_2 + 0xd9),0);
  uVar4 = *(undefined4 *)(param_2 + 0x4dc);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fad0(local_24,local_1c + 9,uVar4);
  uVar4 = *(undefined4 *)(param_2 + 0x4e0);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fad0(local_24,local_1c + 10,uVar4);
  if (local_2c == '\0') {
    thunk_FUN_110f3120();
  }
  iVar3 = thunk_FUN_11397670(local_24);
  if (iVar3 != 0x65) {
    uVar4 = thunk_FUN_11393990(*(undefined4 *)(param_1 + 0x14));
    thunk_FUN_112af4e0("ssiddb",1,"Failed to insert row %s",uVar4);
  }
  local_11 = iVar3 == 0x65;
  thunk_FUN_113948f0(local_24);
  thunk_FUN_110f0510();
  ((void)0);
  return local_11;
}


}

// Reference entry 110f3940; body size 232 bytes.
namespace recovered_110f3940 {
#line 1 "ENTRY_110f3940"

int __thiscall
FUN_110f3940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_4c [40];
  char local_24;
  undefined4 local_1c;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110ee6b0(*(undefined4 *)(param_1 + 0x14),PTR_DAT_1211de94,1);
  ((void)0);
  thunk_FUN_110f4970(&PTR_s_ROWID_119c6ac8,0xc);
  thunk_FUN_110f2b90(local_4c,param_2,param_3,param_4,param_5,param_6,param_7,&DAT_119c6f50);
  if (local_24 == '\0') {
    thunk_FUN_110f3120(uVar1);
  }
  iVar2 = thunk_FUN_11397670(local_1c);
  while ((iVar3 = -1, iVar2 == 100 && (iVar3 = thunk_FUN_11391670(local_1c,0), iVar3 < param_8))) {
    iVar2 = thunk_FUN_11397670(local_1c);
  }
  thunk_FUN_113948f0(local_1c);
  thunk_FUN_110f0510();
  ((void)0);
  return iVar3;
}


}

// Reference entry 110f3a70; body size 232 bytes.
namespace recovered_110f3a70 {
#line 1 "ENTRY_110f3a70"

int __thiscall
FUN_110f3a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_4c [40];
  char local_24;
  undefined4 local_1c;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_110ee6b0(*(undefined4 *)(param_1 + 0x14),PTR_DAT_1211de94,1);
  ((void)0);
  thunk_FUN_110f4970(&PTR_s_ROWID_119c6ac8,0xc);
  thunk_FUN_110f2b90(local_4c,param_2,param_3,param_4,param_5,param_6,param_7,&DAT_119c6f4c);
  if (local_24 == '\0') {
    thunk_FUN_110f3120(uVar1);
  }
  iVar2 = thunk_FUN_11397670(local_1c);
  while ((iVar3 = -1, iVar2 == 100 && (iVar3 = thunk_FUN_11391670(local_1c,0), iVar3 < param_8))) {
    iVar2 = thunk_FUN_11397670(local_1c);
  }
  thunk_FUN_113948f0(local_1c);
  thunk_FUN_110f0510();
  ((void)0);
  return iVar3;
}


}

// Reference entry 110f4830; body size 231 bytes.
namespace recovered_110f4830 {
#line 1 "ENTRY_110f4830"

void __thiscall
FUN_110f4830(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 local_54 [40];
  char local_2c;
  undefined4 local_24;
  int local_18;
  char local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = param_1 + 0x18;
  local_18 = iVar1;
  cVar2 = thunk_FUN_112a7f50(iVar1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  local_14 = cVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_110ee6b0(*(int *)(param_1 + 0x14),PTR_DAT_1211de94,2);
    ((void)0);
    thunk_FUN_110f2b90(local_54,param_2,param_3,param_4,param_5,param_6,0,&DAT_119c6f50);
    if (local_2c == '\0') {
      thunk_FUN_110f3120();
    }
    iVar3 = thunk_FUN_11397670(local_24);
    if (iVar3 != 0x65) {
      thunk_FUN_112af4e0("ssiddb",1,"Failed to delete rows");
    }
    thunk_FUN_113948f0(local_24);
    thunk_FUN_110f0510();
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(iVar1);
  }
  ((void)0);
  return;
}


}

// Reference entry 110f4970; body size 298 bytes.
namespace recovered_110f4970 {
#line 1 "ENTRY_110f4970"

void __thiscall FUN_110f4970(int param_1,int param_2,uint param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_14;


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = 0;
  uVar5 = 0;
  ((void)0);
  if (param_3 != 0) {
    do {
      thunk_FUN_111a0cc0(*(undefined4 *)(param_2 + uVar5 * 4));
      if (uVar5 < param_3 - 1) {
        thunk_FUN_111a0cc0(&DAT_118823e0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  piVar1 = (int *)(param_1 + 0x18);
  if (&local_14 != piVar1) {
    iVar2 = *piVar1;
    if (((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0((void *)(iVar2 + -0x10),uVar3), iVar4 == 0)) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
    *piVar1 = local_14;
    if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(local_14 + -0x10);
    }
  }
  iVar2 = local_14;
  *(uint *)(param_1 + 0x34) = param_3;
  ((void)0);
  if (((local_14 != 0) &&
      (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(_Memory,uVar3), iVar4 == 0)) {
    *(undefined4 *)(iVar2 + -8) = 0;
    *(undefined4 *)(iVar2 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
    free(_Memory);
  }
  ((void)0);
  return;
}


}

// Reference entry 110f4c30; body size 377 bytes.
namespace recovered_110f4c30 {
#line 1 "ENTRY_110f4c30"

void __thiscall FUN_110f4c30(int param_1,char *param_2,char *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 *_Memory;
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *local_18;
  undefined4 local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  cVar2 = thunk_FUN_112a7f50(param_1 + 0x18,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  ((void)0);
  if (((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) && (*(int *)(param_1 + 0x14) != 0)) {
    local_18 = (undefined1 *)0x0;
    ((void)0);
    thunk_FUN_111a1880(&local_18,"UPDATE ssid SET CustomerID = ? WHERE Hhid = ?;");
    local_14 = 0;
    puVar4 = &DAT_1186d2ee;
    if (local_18 != (undefined1 *)0x0) {
      puVar4 = local_18;
    }
    thunk_FUN_11395f20(*(undefined4 *)(param_1 + 0x14),puVar4,0xffffffff,&local_14,0);
    pcVar5 = param_3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    thunk_FUN_1138fd50(local_14,1,param_3,(int)pcVar5 - (int)(param_3 + 1),0);
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    thunk_FUN_1138fd50(local_14,2,param_2,(int)pcVar5 - (int)(param_2 + 1),0);
    iVar3 = thunk_FUN_11397670(local_14);
    if (iVar3 != 0x65) {
      thunk_FUN_112af4e0("ssiddb",1,"Failed to update row");
    }
    thunk_FUN_113948f0(local_14);
    puVar4 = local_18;
    ((void)0);
    if (((local_18 != (undefined1 *)0x0) &&
        (_Memory = local_18 + -0x10, *(int *)(local_18 + -0x10) < 0xffff)) &&
       (iVar3 = thunk_FUN_1123fcd0(_Memory), iVar3 == 0)) {
      *(undefined4 *)(puVar4 + -8) = 0;
      *(undefined4 *)(puVar4 + -0xc) = 0;
      thunk_FUN_113cfb70(puVar4,*(undefined4 *)(puVar4 + -4));
      free(_Memory);
    }
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x18);
  }
  ((void)0);
  return;
}


}

// Reference entry 110f4e10; body size 752 bytes.
namespace recovered_110f4e10 {
#line 1 "ENTRY_110f4e10"

void __thiscall FUN_110f4e10(int param_1,char *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int *_Memory;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;


  pcVar2 = param_2;
  ((void)0);
  ((void)0);
  ((void)0);
  uVar4 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  pcVar5 = param_2 + 0x21;
  cVar3 = thunk_FUN_110f3ba0(param_2,pcVar5);
  if (cVar3 == '\0') {
    cVar3 = thunk_FUN_112a7f50(param_1 + 0x18,uVar4);
    ((void)0);
    if (*(int *)(param_1 + 0x14) != 0) {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        pcVar5 = (char *)0x0;
      }
      pcVar6 = (char *)0x0;
      if (cVar1 == '\0') {
        pcVar6 = pcVar2;
      }
      iVar7 = thunk_FUN_110f3940(pcVar6,pcVar5,pcVar2 + 0x42,0,0,0,0);
      if (iVar7 == -1) {
        thunk_FUN_110f3540(pcVar2);
      }
      else {
        _Memory = (int *)thunk_FUN_1148b586(0xbf);
        *_Memory = 1;
        _Memory[3] = 0xae;
        _Memory[2] = 0;
        _Memory[1] = 0;
        piVar8 = _Memory + 4;
        piVar10 = (int *)
                  "UPDATE ssid SET Ssid = ?, Bssid = ?, Hhid = ?, IpAddr = ?, ZpUdn = ?, MuseHHID = ?, WirelessMode = ?, CustomerID = ?, Location = ?, SSLPort = ?, OpenPort = ? WHERE ROWID = ?;"
        ;
        piVar11 = piVar8;
        for (iVar9 = 0x2b; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
        *(short *)piVar11 = (short)*piVar10;
        *(undefined1 *)((int)_Memory + 0xbe) = 0;
        param_2 = (char *)0x0;
        thunk_FUN_11395f20(*(undefined4 *)(param_1 + 0x14),piVar8,0xffffffff,&param_2,0);
        pcVar5 = pcVar2;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,1,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1),0);
        pcVar5 = pcVar2 + 0x21;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,2,pcVar2 + 0x21,(int)pcVar5 - (int)(pcVar2 + 0x22),0);
        pcVar5 = pcVar2 + 0x42;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,3,pcVar2 + 0x42,(int)pcVar5 - (int)(pcVar2 + 0x43),0);
        pcVar5 = pcVar2 + 99;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,4,pcVar2 + 99,(int)pcVar5 - (int)(pcVar2 + 100),0);
        pcVar5 = pcVar2 + 0x74;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,5,pcVar2 + 0x74,(int)pcVar5 - (int)(pcVar2 + 0x75),0);
        pcVar5 = pcVar2 + 0x8d;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,6,pcVar2 + 0x8d,(int)pcVar5 - (int)(pcVar2 + 0x8e),0);
        thunk_FUN_1138fad0(param_2,7,*(undefined4 *)(pcVar2 + 0xd4));
        pcVar5 = pcVar2 + 0xc3;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,8,pcVar2 + 0xc3,(int)pcVar5 - (int)(pcVar2 + 0xc4),0);
        pcVar5 = pcVar2 + 0xd8;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1138fd50(param_2,9,pcVar2 + 0xd8,(int)pcVar5 - (int)(pcVar2 + 0xd9),0);
        thunk_FUN_1138fad0(param_2,10,*(undefined4 *)(pcVar2 + 0x4dc));
        thunk_FUN_1138fad0(param_2,0xb,*(undefined4 *)(pcVar2 + 0x4e0));
        thunk_FUN_1138fad0(param_2,0xc,iVar7);
        iVar7 = thunk_FUN_11397670(param_2);
        if (iVar7 != 0x65) {
          thunk_FUN_112af4e0("ssiddb",1,"Failed to update row");
        }
        thunk_FUN_113948f0(param_2);
        ((void)0);
        if (*_Memory < 0xffff) {
          iVar7 = thunk_FUN_1123fcd0(_Memory);
          if (iVar7 == 0) {
            _Memory[2] = 0;
            _Memory[1] = 0;
            thunk_FUN_113cfb70(piVar8,_Memory[3]);
            free(_Memory);
          }
        }
      }
    }
    if (cVar3 != '\0') {
      thunk_FUN_112a8010(param_1 + 0x18);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 110f51c0; body size 394 bytes.
namespace recovered_110f51c0 {
#line 1 "ENTRY_110f51c0"

void FUN_110f51c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  char cVar1;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined1 local_4e8 [33];
  undefined1 local_4c7 [33];
  undefined1 local_4a6 [33];
  undefined1 local_485 [17];
  undefined1 local_474 [25];
  undefined1 local_45b [54];
  undefined4 local_425;
  undefined4 uStack_421;
  undefined4 uStack_41d;
  undefined4 uStack_419;
  undefined1 local_415;
  int local_414;
  undefined1 local_410 [1028];
  undefined4 local_c;

  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_4fc;
  local_4fc = param_3;
  local_4f8 = param_4;
  local_4f4 = param_5;
  local_4f0 = param_6;
  local_4ec = param_9;
  cVar1 = thunk_FUN_110f3ba0(param_1,param_2);
  if (cVar1 == '\0') {
    thunk_FUN_1106a8d0(local_4e8,param_1,0x21);
    thunk_FUN_1106a8d0(local_4c7,param_2,0x21);
    thunk_FUN_1106a8d0(local_4a6,local_4fc,0x21);
    thunk_FUN_1106a8d0(local_485,local_4f8,0x11);
    thunk_FUN_1106a8d0(local_474,local_4f4,0x19);
    thunk_FUN_1106a8d0(local_45b,local_4f0,0x36);
    local_414 = param_7;
    if ((param_7 < -1) || (1 < param_7)) {
      local_414 = -1;
    }
    if (*param_8 == '\0') {
      local_415 = 0;
      local_425 = 0;
      uStack_421 = 0;
      uStack_41d = 0;
      uStack_419 = 0;
    }
    else {
      thunk_FUN_1106a8d0(&local_425,param_8,0x11);
    }
    thunk_FUN_1106a8d0(local_410,local_4ec,0x401);
    local_c = param_10;
    ((void)0);
    thunk_FUN_110f4e10(local_4e8);
  }
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 110fc520; body size 331 bytes.
namespace recovered_110fc520 {
#line 1 "ENTRY_110fc520"

undefined4 __fastcall FUN_110fc520(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  thunk_FUN_112af4e0("updatemgr",1,"continuing to update ZP after setup",
                     DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  if ((*(char *)(param_1 + 0x1a34) == '\0') && (*(char *)(param_1 + 0x1a35) == '\0')) {
    thunk_FUN_1107e1f0(param_1);
  }
  *(undefined1 *)(param_1 + 0x1a34) = 1;
  *(undefined4 *)(param_1 + 0x1a24) = 6;
  if (*(int *)(param_1 + 0x1a80) != 0) {
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x24) + 0x1c) + 4))
                      (*(int *)(param_1 + 0x1a80) + 8,1);
    cVar1 = thunk_FUN_110fa330(param_1,iVar2,*(int *)(param_1 + 0x1a08) + 0xf13,
                               *(int *)(param_1 + 0x1a08) + 0x1396);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x1b18) = 0;
      pvVar3 = operator_new(0x30);
      ((void)0);
      if (pvVar3 != (void *)0x0) {
        puVar5 = &DAT_1186d2ee;
        if (*(undefined1 **)(iVar2 + 0x68) != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)(iVar2 + 0x68);
        }
        thunk_FUN_1114acf0(*(undefined4 *)(param_1 + 0x1a80),param_1 + 0x18,puVar5,3600000);
      }
      uVar6 = 2;
      param_1 = param_1 + 0x14;
      ((void)0);
      uVar4 = thunk_FUN_110fd1e0(param_1,2);
      thunk_FUN_11101ad0(uVar4,param_1,uVar6);
      thunk_FUN_11100160();
      ((void)0);
      return 1;
    }
  }
  ((void)0);
  return 0;
}


}

// Reference entry 110fc930; body size 107 bytes.
namespace recovered_110fc930 {
#line 1 "ENTRY_110fc930"

int FUN_110fc930(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  pvVar1 = operator_new(0x1b40);
  ((void)0);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = thunk_FUN_110f9190(param_1);
  }
  *(undefined4 *)(iVar2 + 0x24) = param_2;
  *(undefined4 *)(iVar2 + 0x1a08) = param_2;
  ((void)0);
  return iVar2;
}


}

// Reference entry 110fc9c0; body size 136 bytes.
namespace recovered_110fc9c0 {
#line 1 "ENTRY_110fc9c0"

int FUN_110fc9c0(undefined4 param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  pvVar2 = operator_new(0x1b40);
  ((void)0);
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = thunk_FUN_110f9190(param_1);
  }
  ((void)0);
  if (iVar3 != 0) {
    uVar4 = thunk_FUN_111a2ec0(uVar1);
    *(undefined4 *)(iVar3 + 0x24) = uVar4;
    *(undefined4 *)(iVar3 + 0x1a08) = uVar4;
  }
  ((void)0);
  return iVar3;
}


}
