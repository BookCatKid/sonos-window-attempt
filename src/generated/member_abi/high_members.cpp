// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using code = int(...);
// Reference entry 10122560; body size 65 bytes.
struct Recovered_10122560 { int * FUN_10122560(int *param_2); };
#line 1 "ENTRY_10122560"

int * Recovered_10122560::FUN_10122560(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 1014cce0; body size 102 bytes.

void __stdcall FUN_1014cce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
  }
  return;
}


// Reference entry 1014de40; body size 211 bytes.

void __stdcall FUN_1014de40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                 undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                 undefined4 param_29)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
    *(undefined4 *)(param_1 + 0x40) = param_15;
    *(undefined4 *)(param_1 + 0x44) = param_16;
    *(undefined4 *)(param_1 + 0x48) = param_17;
    *(undefined4 *)(param_1 + 0x4c) = param_18;
    *(undefined4 *)(param_1 + 0x50) = param_19;
    *(undefined4 *)(param_1 + 0x54) = param_20;
    *(undefined4 *)(param_1 + 0x58) = param_21;
    *(undefined4 *)(param_1 + 0x5c) = param_22;
    *(undefined4 *)(param_1 + 0x60) = param_23;
    *(undefined4 *)(param_1 + 100) = param_24;
    *(undefined4 *)(param_1 + 0x68) = param_25;
    *(undefined4 *)(param_1 + 0x6c) = param_26;
    *(undefined4 *)(param_1 + 0x70) = param_27;
    *(undefined4 *)(param_1 + 0x74) = param_28;
    *(undefined4 *)(param_1 + 0x78) = param_29;
  }
  return;
}


// Reference entry 101541e0; body size 74 bytes.

void __stdcall FUN_101541e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
  }
  return;
}


// Reference entry 10155360; body size 102 bytes.

void __stdcall FUN_10155360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
  }
  return;
}


// Reference entry 101557a0; body size 67 bytes.

void __stdcall FUN_101557a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
  }
  return;
}


// Reference entry 101575d0; body size 423 bytes.

void __stdcall FUN_101575d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                 undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                 undefined4 param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,
                 undefined4 param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36,
                 undefined4 param_37,undefined4 param_38,undefined4 param_39,undefined4 param_40,
                 undefined4 param_41,undefined4 param_42,undefined4 param_43,undefined4 param_44,
                 undefined4 param_45,undefined4 param_46)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
    *(undefined4 *)(param_1 + 0x40) = param_15;
    *(undefined4 *)(param_1 + 0x44) = param_16;
    *(undefined4 *)(param_1 + 0x48) = param_17;
    *(undefined4 *)(param_1 + 0x4c) = param_18;
    *(undefined4 *)(param_1 + 0x50) = param_19;
    *(undefined4 *)(param_1 + 0x54) = param_20;
    *(undefined4 *)(param_1 + 0x58) = param_21;
    *(undefined4 *)(param_1 + 0x5c) = param_22;
    *(undefined4 *)(param_1 + 0x60) = param_23;
    *(undefined4 *)(param_1 + 100) = param_24;
    *(undefined4 *)(param_1 + 0x68) = param_25;
    *(undefined4 *)(param_1 + 0x6c) = param_26;
    *(undefined4 *)(param_1 + 0x70) = param_27;
    *(undefined4 *)(param_1 + 0x74) = param_28;
    *(undefined4 *)(param_1 + 0x78) = param_29;
    *(undefined4 *)(param_1 + 0x7c) = param_30;
    *(undefined4 *)(param_1 + 0x80) = param_31;
    *(undefined4 *)(param_1 + 0x84) = param_32;
    *(undefined4 *)(param_1 + 0x88) = param_33;
    *(undefined4 *)(param_1 + 0x8c) = param_34;
    *(undefined4 *)(param_1 + 0x90) = param_35;
    *(undefined4 *)(param_1 + 0x94) = param_36;
    *(undefined4 *)(param_1 + 0x98) = param_37;
    *(undefined4 *)(param_1 + 0x9c) = param_38;
    *(undefined4 *)(param_1 + 0xa0) = param_39;
    *(undefined4 *)(param_1 + 0xa4) = param_40;
    *(undefined4 *)(param_1 + 0xa8) = param_41;
    *(undefined4 *)(param_1 + 0xac) = param_42;
    *(undefined4 *)(param_1 + 0xb0) = param_43;
    *(undefined4 *)(param_1 + 0xb4) = param_44;
    *(undefined4 *)(param_1 + 0xb8) = param_45;
    *(undefined4 *)(param_1 + 0xbc) = param_46;
  }
  return;
}


// Reference entry 1015c380; body size 109 bytes.

void __stdcall FUN_1015c380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
    *(undefined4 *)(param_1 + 0x40) = param_15;
  }
  return;
}


// Reference entry 10162110; body size 130 bytes.

void __stdcall FUN_10162110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
    *(undefined4 *)(param_1 + 0x40) = param_15;
    *(undefined4 *)(param_1 + 0x44) = param_16;
    *(undefined4 *)(param_1 + 0x48) = param_17;
    *(undefined4 *)(param_1 + 0x4c) = param_18;
  }
  return;
}


// Reference entry 10167b10; body size 67 bytes.

void __stdcall FUN_10167b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
  }
  return;
}


// Reference entry 1016e490; body size 123 bytes.

void __stdcall FUN_1016e490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
    *(undefined4 *)(param_1 + 0x40) = param_15;
    *(undefined4 *)(param_1 + 0x44) = param_16;
    *(undefined4 *)(param_1 + 0x48) = param_17;
  }
  return;
}


// Reference entry 1017cfb0; body size 102 bytes.

void __stdcall FUN_1017cfb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
  }
  return;
}


// Reference entry 1017fed0; body size 88 bytes.

void __stdcall FUN_1017fed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
  }
  return;
}


// Reference entry 101886c0; body size 81 bytes.

void __stdcall FUN_101886c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
  }
  return;
}


// Reference entry 1018e0c0; body size 81 bytes.

void __stdcall FUN_1018e0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
  }
  return;
}


// Reference entry 1018f250; body size 123 bytes.

void __stdcall FUN_1018f250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined4 *)(param_1 + 0x34) = param_12;
    *(undefined4 *)(param_1 + 0x38) = param_13;
    *(undefined4 *)(param_1 + 0x3c) = param_14;
    *(undefined4 *)(param_1 + 0x40) = param_15;
    *(undefined4 *)(param_1 + 0x44) = param_16;
    *(undefined4 *)(param_1 + 0x48) = param_17;
  }
  return;
}


// Reference entry 10196370; body size 72 bytes.

void __stdcall FUN_10196370(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = *param_2, iVar2 != *(int *)(param_1 + 0x28))) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *(int *)(param_1 + 0x28) = iVar2;
    piVar1 = (int *)param_2[1];
    *(int **)(param_1 + 0x2c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


// Reference entry 10198050; body size 162 bytes.

void __stdcall FUN_10198050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(undefined4 *)(param_1 + 0x18) = param_6;
    *(undefined4 *)(param_1 + 0x1c) = param_7;
    *(undefined4 *)(param_1 + 0x20) = param_8;
    *(undefined4 *)(param_1 + 0x24) = param_9;
    *(undefined4 *)(param_1 + 0x28) = param_10;
    *(undefined4 *)(param_1 + 0x2c) = param_11;
    *(undefined4 *)(param_1 + 0x30) = param_12;
    *(undefined4 *)(param_1 + 0x34) = param_13;
    *(undefined4 *)(param_1 + 0x38) = param_14;
    *(undefined4 *)(param_1 + 0x3c) = param_15;
    *(undefined4 *)(param_1 + 0x40) = param_16;
    *(undefined4 *)(param_1 + 0x44) = param_17;
    *(undefined4 *)(param_1 + 0x48) = param_18;
    *(undefined4 *)(param_1 + 0x4c) = param_19;
    *(undefined4 *)(param_1 + 0x50) = param_20;
    *(undefined4 *)(param_1 + 0x54) = param_21;
    *(undefined4 *)(param_1 + 0x58) = param_22;
  }
  return;
}


// Reference entry 101986e0; body size 200 bytes.

void FUN_101986e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  (**(code **)(*param_1 + 0x14))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12,param_13,param_14);
  return;
}


// Reference entry 10199630; body size 72 bytes.

void __stdcall FUN_10199630(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = *param_2, iVar2 != *(int *)(param_1 + 0x34))) {
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *(int *)(param_1 + 0x34) = iVar2;
    piVar1 = (int *)param_2[1];
    *(int **)(param_1 + 0x38) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


// Reference entry 101996d0; body size 72 bytes.

void __stdcall FUN_101996d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = *param_2, iVar2 != *(int *)(param_1 + 0x2c))) {
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *(int *)(param_1 + 0x2c) = iVar2;
    piVar1 = (int *)param_2[1];
    *(int **)(param_1 + 0x30) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


// Reference entry 101a7310; body size 474 bytes.

void FUN_101a7310(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = (int)param_3 - (int)param_1 >> 2;
  if (iVar4 < 0x29) {
    cVar3 = (*param_4)(*param_2,*param_1);
    if (cVar3 != '\0') {
      uVar2 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar2;
    }
    cVar3 = (*param_4)(*param_3,*param_2);
    if (cVar3 != '\0') {
      uVar2 = *param_3;
      *param_3 = *param_2;
      *param_2 = uVar2;
      cVar3 = (*param_4)(uVar2,*param_1);
      if (cVar3 != '\0') {
        uVar2 = *param_2;
        *param_2 = *param_1;
        *param_1 = uVar2;
      }
    }
  }
  else {
    iVar4 = iVar4 + 1 >> 3;
    puVar1 = param_1 + iVar4;
    cVar3 = (*param_4)(param_1[iVar4],*param_1);
    if (cVar3 != '\0') {
      uVar2 = *puVar1;
      *puVar1 = *param_1;
      *param_1 = uVar2;
    }
    cVar3 = (*param_4)(param_1[iVar4 * 2],*puVar1);
    if (cVar3 != '\0') {
      uVar2 = param_1[iVar4 * 2];
      param_1[iVar4 * 2] = *puVar1;
      *puVar1 = uVar2;
      cVar3 = (*param_4)(uVar2,*param_1);
      if (cVar3 != '\0') {
        uVar2 = *puVar1;
        *puVar1 = *param_1;
        *param_1 = uVar2;
      }
    }
    puVar5 = param_2 + -iVar4;
    cVar3 = (*param_4)(*param_2,*puVar5);
    if (cVar3 != '\0') {
      uVar2 = *param_2;
      *param_2 = *puVar5;
      *puVar5 = uVar2;
    }
    cVar3 = (*param_4)(param_2[iVar4],*param_2);
    if (cVar3 != '\0') {
      uVar2 = param_2[iVar4];
      param_2[iVar4] = *param_2;
      *param_2 = uVar2;
      cVar3 = (*param_4)(uVar2,*puVar5);
      if (cVar3 != '\0') {
        uVar2 = *param_2;
        *param_2 = *puVar5;
        *puVar5 = uVar2;
      }
    }
    puVar5 = param_3 + iVar4 * -2;
    puVar6 = param_3 + -iVar4;
    cVar3 = (*param_4)(*puVar6,*puVar5);
    if (cVar3 != '\0') {
      uVar2 = *puVar6;
      *puVar6 = *puVar5;
      *puVar5 = uVar2;
    }
    cVar3 = (*param_4)(*param_3,*puVar6);
    if (cVar3 != '\0') {
      uVar2 = *param_3;
      *param_3 = *puVar6;
      *puVar6 = uVar2;
      cVar3 = (*param_4)(uVar2,*puVar5);
      if (cVar3 != '\0') {
        uVar2 = *puVar6;
        *puVar6 = *puVar5;
        *puVar5 = uVar2;
      }
    }
    cVar3 = (*param_4)(*param_2,*puVar1);
    if (cVar3 != '\0') {
      uVar2 = *param_2;
      *param_2 = *puVar1;
      *puVar1 = uVar2;
    }
    cVar3 = (*param_4)(*puVar6,*param_2);
    if (cVar3 != '\0') {
      uVar2 = *puVar6;
      *puVar6 = *param_2;
      *param_2 = uVar2;
      cVar3 = (*param_4)(uVar2,*puVar1);
      if (cVar3 != '\0') {
        uVar2 = *param_2;
        *param_2 = *puVar1;
        *puVar1 = uVar2;
        return;
      }
    }
  }
  return;
}


// Reference entry 101a7560; body size 258 bytes.

void FUN_101a7560(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar3 = (int)param_3 - (int)param_1 >> 2;
  if (iVar3 < 0x29) {
    iVar3 = *param_2;
    if (iVar3 < *param_1) {
      *param_2 = *param_1;
      *param_1 = iVar3;
      iVar3 = *param_2;
    }
    iVar4 = *param_3;
    if (iVar4 < iVar3) {
      *param_3 = iVar3;
      *param_2 = iVar4;
      if (iVar4 < *param_1) {
        *param_2 = *param_1;
        *param_1 = iVar4;
      }
    }
  }
  else {
    iVar4 = iVar3 + 1 >> 3;
    iVar3 = param_1[iVar4];
    piVar1 = param_1 + iVar4;
    if (iVar3 < *param_1) {
      *piVar1 = *param_1;
      *param_1 = iVar3;
      iVar3 = *piVar1;
    }
    iVar2 = param_1[iVar4 * 2];
    if (iVar2 < iVar3) {
      param_1[iVar4 * 2] = iVar3;
      *piVar1 = iVar2;
      if (iVar2 < *param_1) {
        *piVar1 = *param_1;
        *param_1 = iVar2;
      }
    }
    piVar5 = param_2 + -iVar4;
    iVar3 = *param_2;
    if (iVar3 < *piVar5) {
      *param_2 = *piVar5;
      *piVar5 = iVar3;
      iVar3 = *param_2;
    }
    iVar2 = param_2[iVar4];
    if (iVar2 < iVar3) {
      param_2[iVar4] = iVar3;
      *param_2 = iVar2;
      if (iVar2 < *piVar5) {
        *param_2 = *piVar5;
        *piVar5 = iVar2;
      }
    }
    piVar6 = param_3 + iVar4 * -2;
    piVar5 = param_3 + -iVar4;
    iVar3 = *piVar5;
    if (iVar3 < *piVar6) {
      *piVar5 = *piVar6;
      *piVar6 = iVar3;
      iVar3 = *piVar5;
    }
    iVar4 = *param_3;
    if (iVar4 < iVar3) {
      *param_3 = iVar3;
      *piVar5 = iVar4;
      if (iVar4 < *piVar6) {
        *piVar5 = *piVar6;
        *piVar6 = iVar4;
      }
    }
    iVar3 = *param_2;
    if (iVar3 < *piVar1) {
      *param_2 = *piVar1;
      *piVar1 = iVar3;
      iVar3 = *param_2;
    }
    iVar4 = *piVar5;
    if (iVar4 < iVar3) {
      *piVar5 = iVar3;
      *param_2 = iVar4;
      if (iVar4 < *piVar1) {
        *param_2 = *piVar1;
        *piVar1 = iVar4;
        return;
      }
    }
  }
  return;
}


// Reference entry 101a7f30; body size 193 bytes.

void FUN_101a7f30(int param_1,int param_2,uint param_3,undefined4 *param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)(param_3 - 1) >> 1;
  iVar3 = param_2;
  while (iVar3 < iVar2) {
    iVar4 = iVar3 * 2 + 2;
    cVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar4 * 4),*(undefined4 *)(param_1 + 4 + iVar3 * 8)
                      );
    if (cVar1 != '\0') {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    iVar3 = iVar4;
  }
  if ((iVar3 == iVar2) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar3 = param_3 - 1;
  }
  if (iVar3 <= param_2) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = iVar3 + -1 >> 1;
    cVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar2 * 4),*param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  } while (param_2 < iVar2);
  *(undefined4 *)(param_1 + iVar3 * 4) = *param_4;
  return;
}


// Reference entry 101a8030; body size 141 bytes.

void FUN_101a8030(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(param_3 - 1) >> 1;
  iVar1 = param_2;
  while (iVar1 < iVar3) {
    iVar2 = iVar1 * 2 + 2;
    if (*(int *)(param_1 + 8 + iVar1 * 8) < *(int *)(param_1 + -4 + iVar2 * 4)) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar1 = iVar2;
  }
  if ((iVar1 == iVar3) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar1 = param_3 - 1;
  }
  if (iVar1 <= param_2) {
    *(int *)(param_1 + iVar1 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = iVar1 + -1 >> 1;
    iVar3 = *(int *)(param_1 + iVar2 * 4);
    if (*param_4 <= iVar3) break;
    *(int *)(param_1 + iVar1 * 4) = iVar3;
    iVar1 = iVar2;
  } while (param_2 < iVar2);
  *(int *)(param_1 + iVar1 * 4) = *param_4;
  return;
}


// Reference entry 101a9dc0; body size 66 bytes.
struct Recovered_101a9dc0 { undefined4 FUN_101a9dc0(int param_2); };
#line 1 "ENTRY_101a9dc0"

undefined4 Recovered_101a9dc0::FUN_101a9dc0(int param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[3] - param_1[2] >> 2 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x18))(uVar2);
      if (param_2 == iVar1) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[3] - param_1[2] >> 2));
  }
  return 0;
}


// Reference entry 101aa810; body size 91 bytes.
struct Recovered_101aa810 { int * FUN_101aa810(int *param_2); };
#line 1 "ENTRY_101aa810"

int * Recovered_101aa810::FUN_101aa810(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101aa970; body size 91 bytes.
struct Recovered_101aa970 { int * FUN_101aa970(int *param_2); };
#line 1 "ENTRY_101aa970"

int * Recovered_101aa970::FUN_101aa970(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101aa9f0; body size 91 bytes.
struct Recovered_101aa9f0 { int * FUN_101aa9f0(int *param_2); };
#line 1 "ENTRY_101aa9f0"

int * Recovered_101aa9f0::FUN_101aa9f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101af250; body size 81 bytes.
struct Recovered_101af250 { int * FUN_101af250(int *param_2); };
#line 1 "ENTRY_101af250"

int * Recovered_101af250::FUN_101af250(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101af4a0; body size 81 bytes.
struct Recovered_101af4a0 { int * FUN_101af4a0(int *param_2); };
#line 1 "ENTRY_101af4a0"

int * Recovered_101af4a0::FUN_101af4a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101af510; body size 81 bytes.
struct Recovered_101af510 { int * FUN_101af510(int *param_2); };
#line 1 "ENTRY_101af510"

int * Recovered_101af510::FUN_101af510(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101af5e0; body size 81 bytes.
struct Recovered_101af5e0 { int * FUN_101af5e0(int *param_2); };
#line 1 "ENTRY_101af5e0"

int * Recovered_101af5e0::FUN_101af5e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101af9b0; body size 81 bytes.
struct Recovered_101af9b0 { int * FUN_101af9b0(int *param_2); };
#line 1 "ENTRY_101af9b0"

int * Recovered_101af9b0::FUN_101af9b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101afba0; body size 81 bytes.
struct Recovered_101afba0 { int * FUN_101afba0(int *param_2); };
#line 1 "ENTRY_101afba0"

int * Recovered_101afba0::FUN_101afba0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101b0060; body size 94 bytes.
struct Recovered_101b0060 { int FUN_101b0060(int param_2); };
#line 1 "ENTRY_101b0060"

int Recovered_101b0060::FUN_101b0060(int param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *(int *)(param_2 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar2;
    piVar1 = *(int **)(param_2 + 0x18);
    *(int **)(param_1 + 0x18) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 101b00e0; body size 70 bytes.
struct Recovered_101b00e0 { int FUN_101b00e0(int param_2); };
#line 1 "ENTRY_101b00e0"

int Recovered_101b00e0::FUN_101b00e0(int param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != *(int *)(param_1 + 4)) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *(int *)(param_2 + 4);
    }
    *(int *)(param_1 + 4) = iVar2;
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 101b7d60; body size 101 bytes.
struct Recovered_101b7d60 { void FUN_101b7d60(int *param_2); };
#line 1 "ENTRY_101b7d60"

void Recovered_101b7d60::FUN_101b7d60(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x108)) {
    piVar1 = *(int **)(param_1 + 0x10c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x108) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10c) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}


// Reference entry 101b7de0; body size 101 bytes.
struct Recovered_101b7de0 { void FUN_101b7de0(int *param_2); };
#line 1 "ENTRY_101b7de0"

void Recovered_101b7de0::FUN_101b7de0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x158)) {
    piVar1 = *(int **)(param_1 + 0x15c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x158) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x15c) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  return;
}


// Reference entry 101b7e60; body size 115 bytes.
struct Recovered_101b7e60 { void FUN_101b7e60(int *param_2); };
#line 1 "ENTRY_101b7e60"

void Recovered_101b7e60::FUN_101b7e60(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x160)) {
    piVar1 = *(int **)(param_1 + 0x164);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x160) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x164) = piVar1;
      (**(code **)(*piVar1 + 4))();
      *(undefined1 *)(param_1 + 0x17c) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  *(undefined1 *)(param_1 + 0x17c) = 1;
  return;
}


// Reference entry 101b8310; body size 81 bytes.
struct Recovered_101b8310 { int * FUN_101b8310(int *param_2); };
#line 1 "ENTRY_101b8310"

int * Recovered_101b8310::FUN_101b8310(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101b8570; body size 105 bytes.
struct Recovered_101b8570 { undefined4 FUN_101b8570(int *param_2); };
#line 1 "ENTRY_101b8570"

undefined4 Recovered_101b8570::FUN_101b8570(int *param_2)

{
  int param_1 = (int)this;
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x14))();
  if (iVar1 < *(int *)(param_1 + 8)) {
    return 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x14))();
  if (*(int *)(param_1 + 8) == iVar1) {
    iVar1 = (**(code **)(*param_2 + 0x18))();
    if (iVar1 < *(int *)(param_1 + 0xc)) {
      return 1;
    }
    iVar1 = (**(code **)(*param_2 + 0x18))();
    if (*(int *)(param_1 + 0xc) == iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x1c))();
      if (iVar1 < *(int *)(param_1 + 0x10)) {
        return 1;
      }
      iVar1 = (**(code **)(*param_2 + 0x1c))();
      if (*(int *)(param_1 + 0x10) == iVar1) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}


// Reference entry 101b8fc0; body size 279 bytes.
struct Recovered_101b8fc0 { void FUN_101b8fc0(int *param_2,int *param_3); };
#line 1 "ENTRY_101b8fc0"

void Recovered_101b8fc0::FUN_101b8fc0(int *param_2,int *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x38))(param_3);
  if (iVar1 < 1) {
    if (param_2 != *(int **)(param_1 + 8)) {
      piVar2 = *(int **)(param_1 + 0xc);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 8) = param_2;
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
    if (param_3 != *(int **)(param_1 + 0x10)) {
      piVar2 = *(int **)(param_1 + 0x14);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 0x10) = param_3;
      if (param_3 != (int *)0x0) {
        piVar2 = (int *)(**(code **)(*param_3 + 0xc))();
        *(int **)(param_1 + 0x14) = piVar2;
        (**(code **)(*piVar2 + 4))();
        return;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  else {
    if (param_3 != *(int **)(param_1 + 8)) {
      piVar2 = *(int **)(param_1 + 0xc);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 8) = param_3;
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        piVar2 = (int *)(**(code **)(*param_3 + 0xc))();
        *(int **)(param_1 + 0xc) = piVar2;
        (**(code **)(*piVar2 + 4))();
      }
    }
    if (param_2 != *(int **)(param_1 + 0x10)) {
      piVar2 = *(int **)(param_1 + 0x14);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 0x10) = param_2;
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x14) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  return;
}


// Reference entry 101b9270; body size 91 bytes.
struct Recovered_101b9270 { int * FUN_101b9270(int *param_2); };
#line 1 "ENTRY_101b9270"

int * Recovered_101b9270::FUN_101b9270(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101b92f0; body size 91 bytes.
struct Recovered_101b92f0 { int * FUN_101b92f0(int *param_2); };
#line 1 "ENTRY_101b92f0"

int * Recovered_101b92f0::FUN_101b92f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101ba390; body size 81 bytes.
struct Recovered_101ba390 { int * FUN_101ba390(int *param_2); };
#line 1 "ENTRY_101ba390"

int * Recovered_101ba390::FUN_101ba390(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101ba460; body size 81 bytes.
struct Recovered_101ba460 { int * FUN_101ba460(int *param_2); };
#line 1 "ENTRY_101ba460"

int * Recovered_101ba460::FUN_101ba460(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101ba4d0; body size 70 bytes.
struct Recovered_101ba4d0 { int FUN_101ba4d0(int param_2); };
#line 1 "ENTRY_101ba4d0"

int Recovered_101ba4d0::FUN_101ba4d0(int param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != *(int *)(param_1 + 4)) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *(int *)(param_2 + 4);
    }
    *(int *)(param_1 + 4) = iVar2;
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 101baaf0; body size 149 bytes.
struct Recovered_101baaf0 { void FUN_101baaf0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_101baaf0"

void Recovered_101baaf0::FUN_101baaf0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 101bc4f0; body size 91 bytes.
struct Recovered_101bc4f0 { int * FUN_101bc4f0(int *param_2); };
#line 1 "ENTRY_101bc4f0"

int * Recovered_101bc4f0::FUN_101bc4f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101bf370; body size 91 bytes.
struct Recovered_101bf370 { int * FUN_101bf370(int *param_2); };
#line 1 "ENTRY_101bf370"

int * Recovered_101bf370::FUN_101bf370(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101c3940; body size 91 bytes.
struct Recovered_101c3940 { int * FUN_101c3940(int *param_2); };
#line 1 "ENTRY_101c3940"

int * Recovered_101c3940::FUN_101c3940(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101c39c0; body size 91 bytes.
struct Recovered_101c39c0 { int * FUN_101c39c0(int *param_2); };
#line 1 "ENTRY_101c39c0"

int * Recovered_101c39c0::FUN_101c39c0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101c3b00; body size 91 bytes.
struct Recovered_101c3b00 { int * FUN_101c3b00(int *param_2); };
#line 1 "ENTRY_101c3b00"

int * Recovered_101c3b00::FUN_101c3b00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101c7350; body size 81 bytes.
struct Recovered_101c7350 { int * FUN_101c7350(int *param_2); };
#line 1 "ENTRY_101c7350"

int * Recovered_101c7350::FUN_101c7350(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101cc950; body size 91 bytes.
struct Recovered_101cc950 { int * FUN_101cc950(int *param_2); };
#line 1 "ENTRY_101cc950"

int * Recovered_101cc950::FUN_101cc950(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cc9d0; body size 91 bytes.
struct Recovered_101cc9d0 { int * FUN_101cc9d0(int *param_2); };
#line 1 "ENTRY_101cc9d0"

int * Recovered_101cc9d0::FUN_101cc9d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101ccab0; body size 91 bytes.
struct Recovered_101ccab0 { int * FUN_101ccab0(int *param_2); };
#line 1 "ENTRY_101ccab0"

int * Recovered_101ccab0::FUN_101ccab0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101ccb50; body size 91 bytes.
struct Recovered_101ccb50 { int * FUN_101ccb50(int *param_2); };
#line 1 "ENTRY_101ccb50"

int * Recovered_101ccb50::FUN_101ccb50(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101ccbf0; body size 91 bytes.
struct Recovered_101ccbf0 { int * FUN_101ccbf0(int *param_2); };
#line 1 "ENTRY_101ccbf0"

int * Recovered_101ccbf0::FUN_101ccbf0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101ccf10; body size 91 bytes.
struct Recovered_101ccf10 { int * FUN_101ccf10(int *param_2); };
#line 1 "ENTRY_101ccf10"

int * Recovered_101ccf10::FUN_101ccf10(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101ccf90; body size 91 bytes.
struct Recovered_101ccf90 { int * FUN_101ccf90(int *param_2); };
#line 1 "ENTRY_101ccf90"

int * Recovered_101ccf90::FUN_101ccf90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cd010; body size 91 bytes.
struct Recovered_101cd010 { int * FUN_101cd010(int *param_2); };
#line 1 "ENTRY_101cd010"

int * Recovered_101cd010::FUN_101cd010(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cd0d0; body size 91 bytes.
struct Recovered_101cd0d0 { int * FUN_101cd0d0(int *param_2); };
#line 1 "ENTRY_101cd0d0"

int * Recovered_101cd0d0::FUN_101cd0d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cd150; body size 91 bytes.
struct Recovered_101cd150 { int * FUN_101cd150(int *param_2); };
#line 1 "ENTRY_101cd150"

int * Recovered_101cd150::FUN_101cd150(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cd1d0; body size 91 bytes.
struct Recovered_101cd1d0 { int * FUN_101cd1d0(int *param_2); };
#line 1 "ENTRY_101cd1d0"

int * Recovered_101cd1d0::FUN_101cd1d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cd2b0; body size 78 bytes.
struct Recovered_101cd2b0 { int * FUN_101cd2b0(int *param_2); };
#line 1 "ENTRY_101cd2b0"

int * Recovered_101cd2b0::FUN_101cd2b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101cd7d0; body size 78 bytes.
struct Recovered_101cd7d0 { int * FUN_101cd7d0(int *param_2); };
#line 1 "ENTRY_101cd7d0"

int * Recovered_101cd7d0::FUN_101cd7d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101d0300; body size 87 bytes.
struct Recovered_101d0300 { int FUN_101d0300(int *param_2); };
#line 1 "ENTRY_101d0300"

int Recovered_101d0300::FUN_101d0300(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 101d3bb0; body size 81 bytes.
struct Recovered_101d3bb0 { int * FUN_101d3bb0(int *param_2); };
#line 1 "ENTRY_101d3bb0"

int * Recovered_101d3bb0::FUN_101d3bb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3c80; body size 81 bytes.
struct Recovered_101d3c80 { int * FUN_101d3c80(int *param_2); };
#line 1 "ENTRY_101d3c80"

int * Recovered_101d3c80::FUN_101d3c80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3cf0; body size 81 bytes.
struct Recovered_101d3cf0 { int * FUN_101d3cf0(int *param_2); };
#line 1 "ENTRY_101d3cf0"

int * Recovered_101d3cf0::FUN_101d3cf0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3dc0; body size 81 bytes.
struct Recovered_101d3dc0 { int * FUN_101d3dc0(int *param_2); };
#line 1 "ENTRY_101d3dc0"

int * Recovered_101d3dc0::FUN_101d3dc0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3e30; body size 81 bytes.
struct Recovered_101d3e30 { int * FUN_101d3e30(int *param_2); };
#line 1 "ENTRY_101d3e30"

int * Recovered_101d3e30::FUN_101d3e30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3ea0; body size 81 bytes.
struct Recovered_101d3ea0 { int * FUN_101d3ea0(int *param_2); };
#line 1 "ENTRY_101d3ea0"

int * Recovered_101d3ea0::FUN_101d3ea0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3f10; body size 81 bytes.
struct Recovered_101d3f10 { int * FUN_101d3f10(int *param_2); };
#line 1 "ENTRY_101d3f10"

int * Recovered_101d3f10::FUN_101d3f10(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d3f80; body size 65 bytes.
struct Recovered_101d3f80 { int * FUN_101d3f80(int *param_2); };
#line 1 "ENTRY_101d3f80"

int * Recovered_101d3f80::FUN_101d3f80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 101d3fe0; body size 81 bytes.
struct Recovered_101d3fe0 { int * FUN_101d3fe0(int *param_2); };
#line 1 "ENTRY_101d3fe0"

int * Recovered_101d3fe0::FUN_101d3fe0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101d4810; body size 88 bytes.
struct Recovered_101d4810 { int * FUN_101d4810(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_101d4810"

int * Recovered_101d4810::FUN_101d4810(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 101d6e80; body size 79 bytes.
struct Recovered_101d6e80 { void FUN_101d6e80(int param_2); };
#line 1 "ENTRY_101d6e80"

void Recovered_101d6e80::FUN_101d6e80(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 101d7100; body size 83 bytes.
struct Recovered_101d7100 { void FUN_101d7100(int *param_2); };
#line 1 "ENTRY_101d7100"

void Recovered_101d7100::FUN_101d7100(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 101dac00; body size 135 bytes.

void __fastcall FUN_101dac00(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 101dacb0; body size 71 bytes.

void __fastcall FUN_101dacb0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 101e04e0; body size 91 bytes.
struct Recovered_101e04e0 { int * FUN_101e04e0(int *param_2); };
#line 1 "ENTRY_101e04e0"

int * Recovered_101e04e0::FUN_101e04e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e0560; body size 78 bytes.
struct Recovered_101e0560 { int * FUN_101e0560(int *param_2); };
#line 1 "ENTRY_101e0560"

int * Recovered_101e0560::FUN_101e0560(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e0900; body size 78 bytes.
struct Recovered_101e0900 { int * FUN_101e0900(int *param_2); };
#line 1 "ENTRY_101e0900"

int * Recovered_101e0900::FUN_101e0900(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e09e0; body size 78 bytes.
struct Recovered_101e09e0 { int * FUN_101e09e0(int *param_2); };
#line 1 "ENTRY_101e09e0"

int * Recovered_101e09e0::FUN_101e09e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e1410; body size 81 bytes.
struct Recovered_101e1410 { int * FUN_101e1410(int *param_2); };
#line 1 "ENTRY_101e1410"

int * Recovered_101e1410::FUN_101e1410(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101e1480; body size 81 bytes.
struct Recovered_101e1480 { int * FUN_101e1480(int *param_2); };
#line 1 "ENTRY_101e1480"

int * Recovered_101e1480::FUN_101e1480(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101e2250; body size 79 bytes.
struct Recovered_101e2250 { void FUN_101e2250(int param_2); };
#line 1 "ENTRY_101e2250"

void Recovered_101e2250::FUN_101e2250(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 101e2330; body size 83 bytes.
struct Recovered_101e2330 { void FUN_101e2330(int *param_2); };
#line 1 "ENTRY_101e2330"

void Recovered_101e2330::FUN_101e2330(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 101e7e50; body size 91 bytes.
struct Recovered_101e7e50 { int * FUN_101e7e50(int *param_2); };
#line 1 "ENTRY_101e7e50"

int * Recovered_101e7e50::FUN_101e7e50(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e7fd0; body size 91 bytes.
struct Recovered_101e7fd0 { int * FUN_101e7fd0(int *param_2); };
#line 1 "ENTRY_101e7fd0"

int * Recovered_101e7fd0::FUN_101e7fd0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e8090; body size 91 bytes.
struct Recovered_101e8090 { int * FUN_101e8090(int *param_2); };
#line 1 "ENTRY_101e8090"

int * Recovered_101e8090::FUN_101e8090(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e8390; body size 78 bytes.
struct Recovered_101e8390 { int * FUN_101e8390(int *param_2); };
#line 1 "ENTRY_101e8390"

int * Recovered_101e8390::FUN_101e8390(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e8400; body size 78 bytes.
struct Recovered_101e8400 { int * FUN_101e8400(int *param_2); };
#line 1 "ENTRY_101e8400"

int * Recovered_101e8400::FUN_101e8400(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101e85f0; body size 92 bytes.

int * FUN_101e85f0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 101e8ef0; body size 93 bytes.

int * FUN_101e8ef0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == param_1) {
    return param_3;
  }
  do {
    iVar2 = param_2[-2];
    piVar4 = param_2 + -2;
    piVar3 = param_3 + -2;
    if (iVar2 != *piVar3) {
      piVar1 = (int *)param_3[-1];
      if (piVar1 != (int *)0x0) {
        *piVar3 = 0;
        param_3[-1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *piVar4;
      }
      *piVar3 = iVar2;
      piVar1 = (int *)param_2[-1];
      param_3[-1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = piVar3;
    param_2 = piVar4;
  } while (piVar4 != param_1);
  return piVar3;
}


// Reference entry 101eb4b0; body size 81 bytes.
struct Recovered_101eb4b0 { int * FUN_101eb4b0(int *param_2); };
#line 1 "ENTRY_101eb4b0"

int * Recovered_101eb4b0::FUN_101eb4b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101eb520; body size 81 bytes.
struct Recovered_101eb520 { int * FUN_101eb520(int *param_2); };
#line 1 "ENTRY_101eb520"

int * Recovered_101eb520::FUN_101eb520(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101eb590; body size 81 bytes.
struct Recovered_101eb590 { int * FUN_101eb590(int *param_2); };
#line 1 "ENTRY_101eb590"

int * Recovered_101eb590::FUN_101eb590(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101eb600; body size 81 bytes.
struct Recovered_101eb600 { int * FUN_101eb600(int *param_2); };
#line 1 "ENTRY_101eb600"

int * Recovered_101eb600::FUN_101eb600(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101eb6d0; body size 81 bytes.
struct Recovered_101eb6d0 { int * FUN_101eb6d0(int *param_2); };
#line 1 "ENTRY_101eb6d0"

int * Recovered_101eb6d0::FUN_101eb6d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101eb7a0; body size 81 bytes.
struct Recovered_101eb7a0 { int * FUN_101eb7a0(int *param_2); };
#line 1 "ENTRY_101eb7a0"

int * Recovered_101eb7a0::FUN_101eb7a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101f34a0; body size 89 bytes.

int __fastcall FUN_101f34a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  iVar2 = 0x38;
  if (*(int *)(param_1 + 0x84) < 1) {
    iVar2 = 0x2c;
  }
  puVar3 = *(undefined4 **)(iVar2 + param_1);
  while( true ) {
    iVar2 = 0x3c;
    if (*(int *)(param_1 + 0x84) < 1) {
      iVar2 = 0x30;
    }
    if (puVar3 == *(undefined4 **)(iVar2 + param_1)) break;
    iVar2 = (**(code **)(*(int *)*puVar3 + 0x18))();
    iVar1 = iVar1 + iVar2;
    puVar3 = puVar3 + 2;
  }
  return iVar1;
}


// Reference entry 101f3db0; body size 91 bytes.
struct Recovered_101f3db0 { int * FUN_101f3db0(int *param_2); };
#line 1 "ENTRY_101f3db0"

int * Recovered_101f3db0::FUN_101f3db0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101f4c70; body size 81 bytes.
struct Recovered_101f4c70 { int * FUN_101f4c70(int *param_2); };
#line 1 "ENTRY_101f4c70"

int * Recovered_101f4c70::FUN_101f4c70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101f4ce0; body size 81 bytes.
struct Recovered_101f4ce0 { int * FUN_101f4ce0(int *param_2); };
#line 1 "ENTRY_101f4ce0"

int * Recovered_101f4ce0::FUN_101f4ce0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 101f9190; body size 80 bytes.
struct Recovered_101f9190 { void FUN_101f9190(int *param_2); };
#line 1 "ENTRY_101f9190"

void Recovered_101f9190::FUN_101f9190(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 101fa120; body size 87 bytes.
struct Recovered_101fa120 { int FUN_101fa120(int *param_2); };
#line 1 "ENTRY_101fa120"

int Recovered_101fa120::FUN_101fa120(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 101fc680; body size 91 bytes.
struct Recovered_101fc680 { int * FUN_101fc680(int *param_2); };
#line 1 "ENTRY_101fc680"

int * Recovered_101fc680::FUN_101fc680(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fc720; body size 91 bytes.
struct Recovered_101fc720 { int * FUN_101fc720(int *param_2); };
#line 1 "ENTRY_101fc720"

int * Recovered_101fc720::FUN_101fc720(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fc7a0; body size 91 bytes.
struct Recovered_101fc7a0 { int * FUN_101fc7a0(int *param_2); };
#line 1 "ENTRY_101fc7a0"

int * Recovered_101fc7a0::FUN_101fc7a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fc820; body size 91 bytes.
struct Recovered_101fc820 { int * FUN_101fc820(int *param_2); };
#line 1 "ENTRY_101fc820"

int * Recovered_101fc820::FUN_101fc820(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fc920; body size 91 bytes.
struct Recovered_101fc920 { int * FUN_101fc920(int *param_2); };
#line 1 "ENTRY_101fc920"

int * Recovered_101fc920::FUN_101fc920(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fca00; body size 91 bytes.
struct Recovered_101fca00 { int * FUN_101fca00(int *param_2); };
#line 1 "ENTRY_101fca00"

int * Recovered_101fca00::FUN_101fca00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fca80; body size 91 bytes.
struct Recovered_101fca80 { int * FUN_101fca80(int *param_2); };
#line 1 "ENTRY_101fca80"

int * Recovered_101fca80::FUN_101fca80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fcd40; body size 91 bytes.
struct Recovered_101fcd40 { int * FUN_101fcd40(int *param_2); };
#line 1 "ENTRY_101fcd40"

int * Recovered_101fcd40::FUN_101fcd40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fcdc0; body size 91 bytes.
struct Recovered_101fcdc0 { int * FUN_101fcdc0(int *param_2); };
#line 1 "ENTRY_101fcdc0"

int * Recovered_101fcdc0::FUN_101fcdc0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fce40; body size 91 bytes.
struct Recovered_101fce40 { int * FUN_101fce40(int *param_2); };
#line 1 "ENTRY_101fce40"

int * Recovered_101fce40::FUN_101fce40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fcfa0; body size 91 bytes.
struct Recovered_101fcfa0 { int * FUN_101fcfa0(int *param_2); };
#line 1 "ENTRY_101fcfa0"

int * Recovered_101fcfa0::FUN_101fcfa0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fd060; body size 91 bytes.
struct Recovered_101fd060 { int * FUN_101fd060(int *param_2); };
#line 1 "ENTRY_101fd060"

int * Recovered_101fd060::FUN_101fd060(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fd0e0; body size 91 bytes.
struct Recovered_101fd0e0 { int * FUN_101fd0e0(int *param_2); };
#line 1 "ENTRY_101fd0e0"

int * Recovered_101fd0e0::FUN_101fd0e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fd250; body size 78 bytes.
struct Recovered_101fd250 { int * FUN_101fd250(int *param_2); };
#line 1 "ENTRY_101fd250"

int * Recovered_101fd250::FUN_101fd250(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 101fd3a0; body size 78 bytes.
struct Recovered_101fd3a0 { int * FUN_101fd3a0(int *param_2); };
#line 1 "ENTRY_101fd3a0"

int * Recovered_101fd3a0::FUN_101fd3a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102047e0; body size 81 bytes.
struct Recovered_102047e0 { int * FUN_102047e0(int *param_2); };
#line 1 "ENTRY_102047e0"

int * Recovered_102047e0::FUN_102047e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204850; body size 81 bytes.
struct Recovered_10204850 { int * FUN_10204850(int *param_2); };
#line 1 "ENTRY_10204850"

int * Recovered_10204850::FUN_10204850(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204920; body size 81 bytes.
struct Recovered_10204920 { int * FUN_10204920(int *param_2); };
#line 1 "ENTRY_10204920"

int * Recovered_10204920::FUN_10204920(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204990; body size 81 bytes.
struct Recovered_10204990 { int * FUN_10204990(int *param_2); };
#line 1 "ENTRY_10204990"

int * Recovered_10204990::FUN_10204990(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204a00; body size 81 bytes.
struct Recovered_10204a00 { int * FUN_10204a00(int *param_2); };
#line 1 "ENTRY_10204a00"

int * Recovered_10204a00::FUN_10204a00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204a70; body size 81 bytes.
struct Recovered_10204a70 { int * FUN_10204a70(int *param_2); };
#line 1 "ENTRY_10204a70"

int * Recovered_10204a70::FUN_10204a70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204b40; body size 81 bytes.
struct Recovered_10204b40 { int * FUN_10204b40(int *param_2); };
#line 1 "ENTRY_10204b40"

int * Recovered_10204b40::FUN_10204b40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10204bb0; body size 81 bytes.
struct Recovered_10204bb0 { int * FUN_10204bb0(int *param_2); };
#line 1 "ENTRY_10204bb0"

int * Recovered_10204bb0::FUN_10204bb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1020b9d0; body size 65 bytes.
struct Recovered_1020b9d0 { undefined4 FUN_1020b9d0(undefined4 param_2,undefined4 param_3); };
#line 1 "ENTRY_1020b9d0"

undefined4 Recovered_1020b9d0::FUN_1020b9d0(undefined4 param_2,undefined4 param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x8c))();
  if ((iVar1 != 0) && (iVar1 != 1)) {
    (**(code **)(*param_1 + 0x5c))(param_2);
    return param_2;
  }
  (**(code **)(*param_1 + 0x54))(param_2,param_3,0);
  return param_2;
}


// Reference entry 1020d260; body size 93 bytes.
struct Recovered_1020d260 { int FUN_1020d260(undefined4 *param_2); };
#line 1 "ENTRY_1020d260"

int Recovered_1020d260::FUN_1020d260(undefined4 *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    pcVar7 = "";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar7 = (char *)*param_2;
    }
    cVar2 = *pcVar7;
    uVar4 = 0;
    uVar5 = 0;
    if (cVar2 != '#') {
      do {
        uVar5 = uVar4;
        if (0x1a < uVar4) break;
        uVar5 = uVar4 + 1;
        iVar6 = uVar4 + 1;
        uVar4 = uVar5;
      } while ("#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[iVar6] != cVar2);
    }
    if ("#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar5] == cVar2) {
      iVar3 = *(int *)(param_1 + 0x7c + uVar5 * 4);
      iVar6 = param_1 + 0x7c + uVar5 * 4;
      if (iVar3 != -1) {
        do {
          piVar1 = (int *)(iVar6 + 4);
          iVar6 = iVar6 + 4;
        } while (*piVar1 == -1);
        return *piVar1 - iVar3;
      }
    }
  }
  return 0;
}


// Reference entry 10217340; body size 185 bytes.
struct Recovered_10217340 { int FUN_10217340(undefined4 *param_2); };
#line 1 "ENTRY_10217340"

int Recovered_10217340::FUN_10217340(undefined4 *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return -1;
  }
  pcVar7 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar7 = (char *)*param_2;
  }
  cVar2 = *pcVar7;
  if (cVar2 == '#') {
    cVar2 = (**(code **)(*(int *)(param_1 + -0x80) + 0x13c))();
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x51) == '\0')) {
      return 0;
    }
    iVar3 = (**(code **)(*(int *)(param_1 + -0x80) + 0xbc))();
    return iVar3;
  }
  uVar4 = 1;
  uVar5 = 1;
  if (cVar2 != 'A') {
    do {
      uVar5 = uVar4;
      if (0x1a < uVar4) break;
      uVar5 = uVar4 + 1;
      iVar3 = uVar4 + 1;
      uVar4 = uVar5;
    } while ("#ABCDEFGHIJKLMNOPQRSTUVWXYZ"[iVar3] != cVar2);
  }
  piVar1 = (int *)(param_1 + 0x7c + uVar5 * 4);
  iVar3 = *(int *)(param_1 + 0x7c + uVar5 * 4);
  while (iVar3 == -1) {
    piVar1 = piVar1 + 1;
    uVar5 = uVar5 + 1;
    iVar3 = *piVar1;
  }
  iVar3 = param_1 + uVar5 * 4;
  cVar2 = (**(code **)(*(int *)(param_1 + -0x80) + 0x13c))();
  if (cVar2 != '\0') {
    iVar6 = (**(code **)(*(int *)(param_1 + -0x80) + 0xbc))();
    return iVar6 + *(int *)(iVar3 + 0x7c);
  }
  return *(int *)(iVar3 + 0x7c);
}


// Reference entry 10220920; body size 80 bytes.
struct Recovered_10220920 { void FUN_10220920(int *param_2); };
#line 1 "ENTRY_10220920"

void Recovered_10220920::FUN_10220920(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 102226d0; body size 91 bytes.
struct Recovered_102226d0 { int * FUN_102226d0(int *param_2); };
#line 1 "ENTRY_102226d0"

int * Recovered_102226d0::FUN_102226d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10224f30; body size 91 bytes.
struct Recovered_10224f30 { int * FUN_10224f30(int *param_2); };
#line 1 "ENTRY_10224f30"

int * Recovered_10224f30::FUN_10224f30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10224fb0; body size 91 bytes.
struct Recovered_10224fb0 { int * FUN_10224fb0(int *param_2); };
#line 1 "ENTRY_10224fb0"

int * Recovered_10224fb0::FUN_10224fb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10225170; body size 91 bytes.
struct Recovered_10225170 { int * FUN_10225170(int *param_2); };
#line 1 "ENTRY_10225170"

int * Recovered_10225170::FUN_10225170(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102253f0; body size 91 bytes.
struct Recovered_102253f0 { int * FUN_102253f0(int *param_2); };
#line 1 "ENTRY_102253f0"

int * Recovered_102253f0::FUN_102253f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10225ef0; body size 98 bytes.
struct Recovered_10225ef0 { int * FUN_10225ef0(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_10225ef0"

int * Recovered_10225ef0::FUN_10225ef0(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 10225f70; body size 98 bytes.
struct Recovered_10225f70 { int * FUN_10225f70(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_10225f70"

int * Recovered_10225f70::FUN_10225f70(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 10225ff0; body size 98 bytes.
struct Recovered_10225ff0 { int * FUN_10225ff0(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_10225ff0"

int * Recovered_10225ff0::FUN_10225ff0(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 10229eb0; body size 87 bytes.
struct Recovered_10229eb0 { int FUN_10229eb0(int *param_2); };
#line 1 "ENTRY_10229eb0"

int Recovered_10229eb0::FUN_10229eb0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10229fa0; body size 87 bytes.
struct Recovered_10229fa0 { int FUN_10229fa0(int *param_2); };
#line 1 "ENTRY_10229fa0"

int Recovered_10229fa0::FUN_10229fa0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 1022a090; body size 87 bytes.
struct Recovered_1022a090 { int FUN_1022a090(int *param_2); };
#line 1 "ENTRY_1022a090"

int Recovered_1022a090::FUN_1022a090(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 1022c0c0; body size 87 bytes.
struct Recovered_1022c0c0 { int FUN_1022c0c0(int *param_2); };
#line 1 "ENTRY_1022c0c0"

int Recovered_1022c0c0::FUN_1022c0c0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 1022c450; body size 87 bytes.
struct Recovered_1022c450 { int FUN_1022c450(int *param_2); };
#line 1 "ENTRY_1022c450"

int Recovered_1022c450::FUN_1022c450(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 1022f2b0; body size 81 bytes.
struct Recovered_1022f2b0 { int * FUN_1022f2b0(int *param_2); };
#line 1 "ENTRY_1022f2b0"

int * Recovered_1022f2b0::FUN_1022f2b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1022f320; body size 81 bytes.
struct Recovered_1022f320 { int * FUN_1022f320(int *param_2); };
#line 1 "ENTRY_1022f320"

int * Recovered_1022f320::FUN_1022f320(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1022f390; body size 81 bytes.
struct Recovered_1022f390 { int * FUN_1022f390(int *param_2); };
#line 1 "ENTRY_1022f390"

int * Recovered_1022f390::FUN_1022f390(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1022f400; body size 81 bytes.
struct Recovered_1022f400 { int * FUN_1022f400(int *param_2); };
#line 1 "ENTRY_1022f400"

int * Recovered_1022f400::FUN_1022f400(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10245b70; body size 91 bytes.
struct Recovered_10245b70 { int * FUN_10245b70(int *param_2); };
#line 1 "ENTRY_10245b70"

int * Recovered_10245b70::FUN_10245b70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10247810; body size 81 bytes.
struct Recovered_10247810 { int * FUN_10247810(int *param_2); };
#line 1 "ENTRY_10247810"

int * Recovered_10247810::FUN_10247810(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10247880; body size 81 bytes.
struct Recovered_10247880 { int * FUN_10247880(int *param_2); };
#line 1 "ENTRY_10247880"

int * Recovered_10247880::FUN_10247880(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1024a590; body size 81 bytes.
struct Recovered_1024a590 { int * FUN_1024a590(int *param_2); };
#line 1 "ENTRY_1024a590"

int * Recovered_1024a590::FUN_1024a590(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1024a600; body size 81 bytes.
struct Recovered_1024a600 { int * FUN_1024a600(int *param_2); };
#line 1 "ENTRY_1024a600"

int * Recovered_1024a600::FUN_1024a600(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1024eed0; body size 87 bytes.
struct Recovered_1024eed0 { int FUN_1024eed0(int *param_2); };
#line 1 "ENTRY_1024eed0"

int Recovered_1024eed0::FUN_1024eed0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 1024f800; body size 81 bytes.
struct Recovered_1024f800 { int * FUN_1024f800(int *param_2); };
#line 1 "ENTRY_1024f800"

int * Recovered_1024f800::FUN_1024f800(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1024f870; body size 81 bytes.
struct Recovered_1024f870 { int * FUN_1024f870(int *param_2); };
#line 1 "ENTRY_1024f870"

int * Recovered_1024f870::FUN_1024f870(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10256720; body size 87 bytes.
struct Recovered_10256720 { int FUN_10256720(int *param_2); };
#line 1 "ENTRY_10256720"

int Recovered_10256720::FUN_10256720(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10256890; body size 87 bytes.
struct Recovered_10256890 { int FUN_10256890(int *param_2); };
#line 1 "ENTRY_10256890"

int Recovered_10256890::FUN_10256890(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10256a00; body size 87 bytes.
struct Recovered_10256a00 { int FUN_10256a00(int *param_2); };
#line 1 "ENTRY_10256a00"

int Recovered_10256a00::FUN_10256a00(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10256de0; body size 87 bytes.
struct Recovered_10256de0 { int FUN_10256de0(int *param_2); };
#line 1 "ENTRY_10256de0"

int Recovered_10256de0::FUN_10256de0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 102574f0; body size 87 bytes.
struct Recovered_102574f0 { int FUN_102574f0(int *param_2); };
#line 1 "ENTRY_102574f0"

int Recovered_102574f0::FUN_102574f0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 102575e0; body size 87 bytes.
struct Recovered_102575e0 { int FUN_102575e0(int *param_2); };
#line 1 "ENTRY_102575e0"

int Recovered_102575e0::FUN_102575e0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 102576d0; body size 87 bytes.
struct Recovered_102576d0 { int FUN_102576d0(int *param_2); };
#line 1 "ENTRY_102576d0"

int Recovered_102576d0::FUN_102576d0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 102577c0; body size 87 bytes.
struct Recovered_102577c0 { int FUN_102577c0(int *param_2); };
#line 1 "ENTRY_102577c0"

int Recovered_102577c0::FUN_102577c0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10258e90; body size 81 bytes.
struct Recovered_10258e90 { int * FUN_10258e90(int *param_2); };
#line 1 "ENTRY_10258e90"

int * Recovered_10258e90::FUN_10258e90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1025d940; body size 81 bytes.
struct Recovered_1025d940 { int * FUN_1025d940(int *param_2); };
#line 1 "ENTRY_1025d940"

int * Recovered_1025d940::FUN_1025d940(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1025dff0; body size 80 bytes.
struct Recovered_1025dff0 { void FUN_1025dff0(int *param_2); };
#line 1 "ENTRY_1025dff0"

void Recovered_1025dff0::FUN_1025dff0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 1025ea30; body size 96 bytes.
struct Recovered_1025ea30 { int * FUN_1025ea30(int *param_2,uint *param_3); };
#line 1 "ENTRY_1025ea30"

int * Recovered_1025ea30::FUN_1025ea30(int *param_2,uint *param_3)

{
  uint * param_1 = (uint *)this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = *param_1;
  uVar4 = *param_3;
  if ((param_3[1] + uVar4) - 1 < (param_1[1] - 1) + uVar3) {
    uVar1 = param_3[1];
    uVar2 = param_1[1];
    *param_2 = param_3[1] + uVar4;
    param_2[1] = ((uVar3 - uVar4) - uVar1) + uVar2;
    uVar3 = *param_1;
    uVar4 = *param_3;
  }
  param_1[1] = -(uint)(uVar3 < uVar4) & uVar4 - uVar3;
  return param_2;
}


// Reference entry 102607c0; body size 79 bytes.
struct Recovered_102607c0 { void FUN_102607c0(int param_2); };
#line 1 "ENTRY_102607c0"

void Recovered_102607c0::FUN_102607c0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10260840; body size 83 bytes.
struct Recovered_10260840 { void FUN_10260840(int *param_2); };
#line 1 "ENTRY_10260840"

void Recovered_10260840::FUN_10260840(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 102627b0; body size 72 bytes.
struct Recovered_102627b0 { void FUN_102627b0(undefined4 param_2); };
#line 1 "ENTRY_102627b0"

void Recovered_102627b0::FUN_102627b0(undefined4 param_2)

{
  int param_1 = (int)this;
  int iVar1;
  undefined1 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0xd4))(param_1 + 0xc,param_2);
  iVar1 = **(int **)(param_1 + 0x14);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x30))();
  (**(code **)(iVar1 + 0xe4))(param_1 + 0x10,uVar2);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return;
}


// Reference entry 10263630; body size 91 bytes.
struct Recovered_10263630 { int * FUN_10263630(int *param_2); };
#line 1 "ENTRY_10263630"

int * Recovered_10263630::FUN_10263630(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102636f0; body size 91 bytes.
struct Recovered_102636f0 { int * FUN_102636f0(int *param_2); };
#line 1 "ENTRY_102636f0"

int * Recovered_102636f0::FUN_102636f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10263770; body size 91 bytes.
struct Recovered_10263770 { int * FUN_10263770(int *param_2); };
#line 1 "ENTRY_10263770"

int * Recovered_10263770::FUN_10263770(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10267820; body size 116 bytes.

int * __fastcall FUN_10267820(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 1026db10; body size 81 bytes.
struct Recovered_1026db10 { int * FUN_1026db10(int *param_2); };
#line 1 "ENTRY_1026db10"

int * Recovered_1026db10::FUN_1026db10(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1026e0e0; body size 80 bytes.
struct Recovered_1026e0e0 { void FUN_1026e0e0(int *param_2); };
#line 1 "ENTRY_1026e0e0"

void Recovered_1026e0e0::FUN_1026e0e0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 1026e3a0; body size 91 bytes.
struct Recovered_1026e3a0 { int * FUN_1026e3a0(int *param_2); };
#line 1 "ENTRY_1026e3a0"

int * Recovered_1026e3a0::FUN_1026e3a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1026e420; body size 91 bytes.
struct Recovered_1026e420 { int * FUN_1026e420(int *param_2); };
#line 1 "ENTRY_1026e420"

int * Recovered_1026e420::FUN_1026e420(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10270220; body size 81 bytes.
struct Recovered_10270220 { int * FUN_10270220(int *param_2); };
#line 1 "ENTRY_10270220"

int * Recovered_10270220::FUN_10270220(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10270290; body size 81 bytes.
struct Recovered_10270290 { int * FUN_10270290(int *param_2); };
#line 1 "ENTRY_10270290"

int * Recovered_10270290::FUN_10270290(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10272d20; body size 92 bytes.

int * FUN_10272d20(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 10275d00; body size 81 bytes.
struct Recovered_10275d00 { int * FUN_10275d00(int *param_2); };
#line 1 "ENTRY_10275d00"

int * Recovered_10275d00::FUN_10275d00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1027fb30; body size 81 bytes.
struct Recovered_1027fb30 { int * FUN_1027fb30(int *param_2); };
#line 1 "ENTRY_1027fb30"

int * Recovered_1027fb30::FUN_1027fb30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10283860; body size 68 bytes.

int __fastcall FUN_10283860(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      if (*(int **)(param_1 + 8) == (int *)0x0) {
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      else {
        cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
        *(char *)(param_1 + 0x1c) = cVar1;
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
      *(int *)(param_1 + 0x14) = iVar2;
      return iVar2;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return iVar2;
}


// Reference entry 10285d80; body size 81 bytes.
struct Recovered_10285d80 { int * FUN_10285d80(int *param_2); };
#line 1 "ENTRY_10285d80"

int * Recovered_10285d80::FUN_10285d80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10285e50; body size 81 bytes.
struct Recovered_10285e50 { int * FUN_10285e50(int *param_2); };
#line 1 "ENTRY_10285e50"

int * Recovered_10285e50::FUN_10285e50(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10285ec0; body size 81 bytes.
struct Recovered_10285ec0 { int * FUN_10285ec0(int *param_2); };
#line 1 "ENTRY_10285ec0"

int * Recovered_10285ec0::FUN_10285ec0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10286d60; body size 79 bytes.
struct Recovered_10286d60 { void FUN_10286d60(int param_2); };
#line 1 "ENTRY_10286d60"

void Recovered_10286d60::FUN_10286d60(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10286eb0; body size 83 bytes.
struct Recovered_10286eb0 { void FUN_10286eb0(int *param_2); };
#line 1 "ENTRY_10286eb0"

void Recovered_10286eb0::FUN_10286eb0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 1028b6f0; body size 91 bytes.
struct Recovered_1028b6f0 { int * FUN_1028b6f0(int *param_2); };
#line 1 "ENTRY_1028b6f0"

int * Recovered_1028b6f0::FUN_1028b6f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1028b870; body size 91 bytes.
struct Recovered_1028b870 { int * FUN_1028b870(int *param_2); };
#line 1 "ENTRY_1028b870"

int * Recovered_1028b870::FUN_1028b870(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1028b8f0; body size 78 bytes.
struct Recovered_1028b8f0 { int * FUN_1028b8f0(int *param_2); };
#line 1 "ENTRY_1028b8f0"

int * Recovered_1028b8f0::FUN_1028b8f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1028e330; body size 107 bytes.

bool FUN_1028e330(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  cVar2 = (**(code **)(*(int *)*param_1 + 0x34))();
  cVar3 = (**(code **)(*(int *)*param_2 + 0x34))();
  if (cVar2 != cVar3) {
    return (bool)cVar2;
  }
  iVar4 = (**(code **)(*(int *)*param_1 + 0x14))();
  iVar5 = (**(code **)(*(int *)*param_2 + 0x14))();
  if (iVar4 == iVar5) {
    piVar1 = (int *)*param_1;
    uVar6 = (**(code **)(*(int *)*param_2 + 0x2c))();
    uVar7 = (**(code **)(*piVar1 + 0x2c))();
    return uVar6 < uVar7;
  }
  return iVar4 < iVar5;
}


// Reference entry 1028f140; body size 79 bytes.
struct Recovered_1028f140 { void FUN_1028f140(int param_2); };
#line 1 "ENTRY_1028f140"

void Recovered_1028f140::FUN_1028f140(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1028f1b0; body size 79 bytes.
struct Recovered_1028f1b0 { void FUN_1028f1b0(int param_2); };
#line 1 "ENTRY_1028f1b0"

void Recovered_1028f1b0::FUN_1028f1b0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1028f310; body size 83 bytes.
struct Recovered_1028f310 { void FUN_1028f310(int *param_2); };
#line 1 "ENTRY_1028f310"

void Recovered_1028f310::FUN_1028f310(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 1028f380; body size 83 bytes.
struct Recovered_1028f380 { void FUN_1028f380(int *param_2); };
#line 1 "ENTRY_1028f380"

void Recovered_1028f380::FUN_1028f380(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 102986f0; body size 79 bytes.
struct Recovered_102986f0 { void FUN_102986f0(int param_2); };
#line 1 "ENTRY_102986f0"

void Recovered_102986f0::FUN_102986f0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 102987e0; body size 83 bytes.
struct Recovered_102987e0 { void FUN_102987e0(int *param_2); };
#line 1 "ENTRY_102987e0"

void Recovered_102987e0::FUN_102987e0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 10298960; body size 76 bytes.

void __fastcall FUN_10298960(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 102989c0; body size 76 bytes.

void __fastcall FUN_102989c0(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298a20; body size 76 bytes.

void __fastcall FUN_10298a20(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298b30; body size 76 bytes.

void __fastcall FUN_10298b30(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298b90; body size 149 bytes.
struct Recovered_10298b90 { void FUN_10298b90(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_10298b90"

void Recovered_10298b90::FUN_10298b90(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1029d130; body size 81 bytes.
struct Recovered_1029d130 { int * FUN_1029d130(int *param_2); };
#line 1 "ENTRY_1029d130"

int * Recovered_1029d130::FUN_1029d130(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1029d970; body size 99 bytes.
struct Recovered_1029d970 { undefined4 FUN_1029d970(int param_2); };
#line 1 "ENTRY_1029d970"

undefined4 Recovered_1029d970::FUN_1029d970(int param_2)

{
  int param_1 = (int)this;
  if (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)) {
    return 1;
  }
  if (*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8)) {
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
      return 1;
    }
    if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_1 + 0xc)) {
      if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14)) {
        return 1;
      }
      if (*(uint *)(param_2 + 0x14) <= *(uint *)(param_1 + 0x14)) {
        if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) {
          return 1;
        }
        if (*(uint *)(param_2 + 0x18) <= *(uint *)(param_1 + 0x18)) {
          if (*(uint *)(param_2 + 0x1c) < *(uint *)(param_1 + 0x1c)) {
            return 1;
          }
          if (*(uint *)(param_2 + 0x1c) <= *(uint *)(param_1 + 0x1c)) {
            if (*(uint *)(param_2 + 0x20) < *(uint *)(param_1 + 0x20)) {
              return 1;
            }
            if (*(uint *)(param_2 + 0x20) <= *(uint *)(param_1 + 0x20)) {
              if (*(uint *)(param_2 + 0x24) < *(uint *)(param_1 + 0x24)) {
                return 1;
              }
              if (*(uint *)(param_2 + 0x24) <= *(uint *)(param_1 + 0x24)) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


// Reference entry 1029dd80; body size 109 bytes.

void FUN_1029dd80(int *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x24))();
    *(undefined2 *)(param_2 + 4) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x2c))();
    *(undefined2 *)(param_2 + 6) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x34))();
    *(undefined2 *)(param_2 + 8) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3c))();
    *(undefined2 *)(param_2 + 10) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x44))();
    *(undefined2 *)(param_2 + 0xc) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x4c))();
    *(undefined2 *)(param_2 + 0xe) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x54))();
    *(undefined2 *)(param_2 + 0x10) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x5c))();
    *(undefined2 *)(param_2 + 0x12) = uVar1;
  }
  return;
}


// Reference entry 1029e0f0; body size 81 bytes.
struct Recovered_1029e0f0 { int * FUN_1029e0f0(int *param_2); };
#line 1 "ENTRY_1029e0f0"

int * Recovered_1029e0f0::FUN_1029e0f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1029e960; body size 142 bytes.

void FUN_1029e960(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 == 0) {
      param_2[0] = '\0';
      param_2[1] = '\x7f';
      return;
    }
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 == 1) {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 1;
      do {
        cVar1 = (**(code **)(*param_1 + 0x24))(uVar4);
        if (cVar1 != '\0') {
          uVar3 = uVar3 | uVar5;
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 * 2;
      } while (uVar4 < 7);
      param_2[1] = (char)uVar3;
      if (uVar3 == 0x3e) {
        *param_2 = '\x01';
        return;
      }
      if (uVar3 == 0x41) {
        *param_2 = '\x02';
        return;
      }
      *param_2 = (uVar3 != 0x7f) + '\x03';
    }
  }
  return;
}


// Reference entry 1029fe10; body size 79 bytes.
struct Recovered_1029fe10 { void FUN_1029fe10(int param_2); };
#line 1 "ENTRY_1029fe10"

void Recovered_1029fe10::FUN_1029fe10(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1029fea0; body size 83 bytes.
struct Recovered_1029fea0 { void FUN_1029fea0(int *param_2); };
#line 1 "ENTRY_1029fea0"

void Recovered_1029fea0::FUN_1029fea0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 102a1f10; body size 91 bytes.
struct Recovered_102a1f10 { int * FUN_102a1f10(int *param_2); };
#line 1 "ENTRY_102a1f10"

int * Recovered_102a1f10::FUN_102a1f10(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102a23b0; body size 91 bytes.
struct Recovered_102a23b0 { int * FUN_102a23b0(int *param_2); };
#line 1 "ENTRY_102a23b0"

int * Recovered_102a23b0::FUN_102a23b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102a25b0; body size 78 bytes.
struct Recovered_102a25b0 { int * FUN_102a25b0(int *param_2); };
#line 1 "ENTRY_102a25b0"

int * Recovered_102a25b0::FUN_102a25b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102a2f00; body size 92 bytes.

int * FUN_102a2f00(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 102a4110; body size 73 bytes.
struct Recovered_102a4110 { int * FUN_102a4110(int *param_2,uint *param_3); };
#line 1 "ENTRY_102a4110"

int * Recovered_102a4110::FUN_102a4110(int *param_2,uint *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_3;
    do {
      *param_2 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 102aa650; body size 81 bytes.
struct Recovered_102aa650 { int * FUN_102aa650(int *param_2); };
#line 1 "ENTRY_102aa650"

int * Recovered_102aa650::FUN_102aa650(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102aa7e0; body size 81 bytes.
struct Recovered_102aa7e0 { int * FUN_102aa7e0(int *param_2); };
#line 1 "ENTRY_102aa7e0"

int * Recovered_102aa7e0::FUN_102aa7e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102be420; body size 79 bytes.
struct Recovered_102be420 { void FUN_102be420(int param_2); };
#line 1 "ENTRY_102be420"

void Recovered_102be420::FUN_102be420(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 102be520; body size 83 bytes.
struct Recovered_102be520 { void FUN_102be520(int *param_2); };
#line 1 "ENTRY_102be520"

void Recovered_102be520::FUN_102be520(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 102c0460; body size 81 bytes.
struct Recovered_102c0460 { int * FUN_102c0460(int *param_2); };
#line 1 "ENTRY_102c0460"

int * Recovered_102c0460::FUN_102c0460(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102c0be0; body size 80 bytes.
struct Recovered_102c0be0 { void FUN_102c0be0(int *param_2); };
#line 1 "ENTRY_102c0be0"

void Recovered_102c0be0::FUN_102c0be0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 102c2d20; body size 91 bytes.
struct Recovered_102c2d20 { int * FUN_102c2d20(int *param_2); };
#line 1 "ENTRY_102c2d20"

int * Recovered_102c2d20::FUN_102c2d20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102c2ea0; body size 91 bytes.
struct Recovered_102c2ea0 { int * FUN_102c2ea0(int *param_2); };
#line 1 "ENTRY_102c2ea0"

int * Recovered_102c2ea0::FUN_102c2ea0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102c2fc0; body size 91 bytes.
struct Recovered_102c2fc0 { int * FUN_102c2fc0(int *param_2); };
#line 1 "ENTRY_102c2fc0"

int * Recovered_102c2fc0::FUN_102c2fc0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102c3040; body size 91 bytes.
struct Recovered_102c3040 { int * FUN_102c3040(int *param_2); };
#line 1 "ENTRY_102c3040"

int * Recovered_102c3040::FUN_102c3040(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102c5210; body size 81 bytes.
struct Recovered_102c5210 { int * FUN_102c5210(int *param_2); };
#line 1 "ENTRY_102c5210"

int * Recovered_102c5210::FUN_102c5210(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102c5280; body size 81 bytes.
struct Recovered_102c5280 { int * FUN_102c5280(int *param_2); };
#line 1 "ENTRY_102c5280"

int * Recovered_102c5280::FUN_102c5280(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102c6b80; body size 88 bytes.

void __fastcall FUN_102c6b80(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
      (**(code **)(*(int *)(param_1 + 0x24) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x90) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x102c6bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 102c8500; body size 135 bytes.

void __fastcall FUN_102c8500(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 102c85b0; body size 135 bytes.

void __fastcall FUN_102c85b0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 102ca690; body size 80 bytes.
struct Recovered_102ca690 { void FUN_102ca690(int *param_2); };
#line 1 "ENTRY_102ca690"

void Recovered_102ca690::FUN_102ca690(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x40)) {
    piVar1 = *(int **)(param_1 + 0x44);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x40) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x44) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// Reference entry 102caa30; body size 91 bytes.
struct Recovered_102caa30 { int * FUN_102caa30(int *param_2); };
#line 1 "ENTRY_102caa30"

int * Recovered_102caa30::FUN_102caa30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102caab0; body size 91 bytes.
struct Recovered_102caab0 { int * FUN_102caab0(int *param_2); };
#line 1 "ENTRY_102caab0"

int * Recovered_102caab0::FUN_102caab0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102cb2c0; body size 73 bytes.
struct Recovered_102cb2c0 { int * FUN_102cb2c0(int *param_2,uint *param_3); };
#line 1 "ENTRY_102cb2c0"

int * Recovered_102cb2c0::FUN_102cb2c0(int *param_2,uint *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_3;
    do {
      *param_2 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 102cd1d0; body size 81 bytes.
struct Recovered_102cd1d0 { int * FUN_102cd1d0(int *param_2); };
#line 1 "ENTRY_102cd1d0"

int * Recovered_102cd1d0::FUN_102cd1d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102cd2a0; body size 81 bytes.
struct Recovered_102cd2a0 { int * FUN_102cd2a0(int *param_2); };
#line 1 "ENTRY_102cd2a0"

int * Recovered_102cd2a0::FUN_102cd2a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102cffa0; body size 135 bytes.

void __fastcall FUN_102cffa0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 102d0050; body size 135 bytes.

void __fastcall FUN_102d0050(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 102d20c0; body size 91 bytes.
struct Recovered_102d20c0 { int * FUN_102d20c0(int *param_2); };
#line 1 "ENTRY_102d20c0"

int * Recovered_102d20c0::FUN_102d20c0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102d4060; body size 81 bytes.
struct Recovered_102d4060 { int * FUN_102d4060(int *param_2); };
#line 1 "ENTRY_102d4060"

int * Recovered_102d4060::FUN_102d4060(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102d4130; body size 81 bytes.
struct Recovered_102d4130 { int * FUN_102d4130(int *param_2); };
#line 1 "ENTRY_102d4130"

int * Recovered_102d4130::FUN_102d4130(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102dc060; body size 91 bytes.
struct Recovered_102dc060 { int * FUN_102dc060(int *param_2); };
#line 1 "ENTRY_102dc060"

int * Recovered_102dc060::FUN_102dc060(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102dd0e0; body size 81 bytes.
struct Recovered_102dd0e0 { int * FUN_102dd0e0(int *param_2); };
#line 1 "ENTRY_102dd0e0"

int * Recovered_102dd0e0::FUN_102dd0e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102e5d90; body size 91 bytes.
struct Recovered_102e5d90 { int * FUN_102e5d90(int *param_2); };
#line 1 "ENTRY_102e5d90"

int * Recovered_102e5d90::FUN_102e5d90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102e6010; body size 78 bytes.
struct Recovered_102e6010 { int * FUN_102e6010(int *param_2); };
#line 1 "ENTRY_102e6010"

int * Recovered_102e6010::FUN_102e6010(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102e6700; body size 78 bytes.
struct Recovered_102e6700 { int * FUN_102e6700(int *param_2); };
#line 1 "ENTRY_102e6700"

int * Recovered_102e6700::FUN_102e6700(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 102e78c0; body size 93 bytes.

int * FUN_102e78c0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == param_1) {
    return param_3;
  }
  do {
    iVar2 = param_2[-2];
    piVar4 = param_2 + -2;
    piVar3 = param_3 + -2;
    if (iVar2 != *piVar3) {
      piVar1 = (int *)param_3[-1];
      if (piVar1 != (int *)0x0) {
        *piVar3 = 0;
        param_3[-1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *piVar4;
      }
      *piVar3 = iVar2;
      piVar1 = (int *)param_2[-1];
      param_3[-1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = piVar3;
    param_2 = piVar4;
  } while (piVar4 != param_1);
  return piVar3;
}


// Reference entry 102ed720; body size 81 bytes.
struct Recovered_102ed720 { int * FUN_102ed720(int *param_2); };
#line 1 "ENTRY_102ed720"

int * Recovered_102ed720::FUN_102ed720(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ed790; body size 81 bytes.
struct Recovered_102ed790 { int * FUN_102ed790(int *param_2); };
#line 1 "ENTRY_102ed790"

int * Recovered_102ed790::FUN_102ed790(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ed800; body size 81 bytes.
struct Recovered_102ed800 { int * FUN_102ed800(int *param_2); };
#line 1 "ENTRY_102ed800"

int * Recovered_102ed800::FUN_102ed800(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ed870; body size 81 bytes.
struct Recovered_102ed870 { int * FUN_102ed870(int *param_2); };
#line 1 "ENTRY_102ed870"

int * Recovered_102ed870::FUN_102ed870(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ed8e0; body size 81 bytes.
struct Recovered_102ed8e0 { int * FUN_102ed8e0(int *param_2); };
#line 1 "ENTRY_102ed8e0"

int * Recovered_102ed8e0::FUN_102ed8e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ed950; body size 81 bytes.
struct Recovered_102ed950 { int * FUN_102ed950(int *param_2); };
#line 1 "ENTRY_102ed950"

int * Recovered_102ed950::FUN_102ed950(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ed9c0; body size 81 bytes.
struct Recovered_102ed9c0 { int * FUN_102ed9c0(int *param_2); };
#line 1 "ENTRY_102ed9c0"

int * Recovered_102ed9c0::FUN_102ed9c0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102eda30; body size 81 bytes.
struct Recovered_102eda30 { int * FUN_102eda30(int *param_2); };
#line 1 "ENTRY_102eda30"

int * Recovered_102eda30::FUN_102eda30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edaa0; body size 81 bytes.
struct Recovered_102edaa0 { int * FUN_102edaa0(int *param_2); };
#line 1 "ENTRY_102edaa0"

int * Recovered_102edaa0::FUN_102edaa0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edb10; body size 81 bytes.
struct Recovered_102edb10 { int * FUN_102edb10(int *param_2); };
#line 1 "ENTRY_102edb10"

int * Recovered_102edb10::FUN_102edb10(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edb80; body size 81 bytes.
struct Recovered_102edb80 { int * FUN_102edb80(int *param_2); };
#line 1 "ENTRY_102edb80"

int * Recovered_102edb80::FUN_102edb80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edbf0; body size 81 bytes.
struct Recovered_102edbf0 { int * FUN_102edbf0(int *param_2); };
#line 1 "ENTRY_102edbf0"

int * Recovered_102edbf0::FUN_102edbf0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edc60; body size 81 bytes.
struct Recovered_102edc60 { int * FUN_102edc60(int *param_2); };
#line 1 "ENTRY_102edc60"

int * Recovered_102edc60::FUN_102edc60(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edcd0; body size 81 bytes.
struct Recovered_102edcd0 { int * FUN_102edcd0(int *param_2); };
#line 1 "ENTRY_102edcd0"

int * Recovered_102edcd0::FUN_102edcd0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102edd40; body size 81 bytes.
struct Recovered_102edd40 { int * FUN_102edd40(int *param_2); };
#line 1 "ENTRY_102edd40"

int * Recovered_102edd40::FUN_102edd40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102eddb0; body size 81 bytes.
struct Recovered_102eddb0 { int * FUN_102eddb0(int *param_2); };
#line 1 "ENTRY_102eddb0"

int * Recovered_102eddb0::FUN_102eddb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102ede20; body size 81 bytes.
struct Recovered_102ede20 { int * FUN_102ede20(int *param_2); };
#line 1 "ENTRY_102ede20"

int * Recovered_102ede20::FUN_102ede20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 102f71e0; body size 243 bytes.

undefined4 FUN_102f71e0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 7;
  case 8:
    return 8;
  case 9:
    return 9;
  case 10:
    return 10;
  case 0xb:
    return 0xb;
  case 0xc:
    return 0xc;
  case 0xd:
    return 0xd;
  case 0xe:
    return 0xe;
  case 0xf:
    return 0xf;
  case 0x10:
    return 0x10;
  case 0x11:
    return 0x17;
  case 0x12:
    return 0x18;
  case 0x13:
    return 0x19;
  case 0x14:
    return 0x1a;
  case 0x15:
    return 0x1b;
  case 0x16:
    return 0x1c;
  case 0x17:
    return 0x1d;
  case 0x18:
    return 0x1e;
  case 0x19:
    return 0x1f;
  case 0x1a:
    return 0x20;
  case 0x1b:
    return 0x21;
  case 0x1c:
    return 0x22;
  case 0x1d:
    return 0x23;
  case 0x1e:
    return 0x24;
  case 0x1f:
    return 0x25;
  case 0x20:
    return 0x26;
  case 0x21:
    return 0x27;
  case 0x22:
    return 0x28;
  case 0x23:
    return 0x29;
  case 0x24:
    return 0x2a;
  default:
    return 0xffffffff;
  }
}


// Reference entry 102f8250; body size 295 bytes.

undefined4 FUN_102f8250(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 7;
  case 8:
    return 8;
  case 9:
    return 9;
  case 10:
    return 10;
  case 0xb:
    return 0xb;
  case 0xc:
    return 0xc;
  case 0xd:
    return 0xd;
  case 0xe:
    return 0xe;
  case 0xf:
    return 0xf;
  case 0x10:
    return 0x10;
  case 0x11:
    return 0x11;
  case 0x12:
    return 0x12;
  case 0x13:
    return 0x13;
  case 0x14:
    return 0x14;
  case 0x15:
    return 0x15;
  case 0x16:
    return 0x16;
  case 0x17:
    return 0x17;
  case 0x18:
    return 0x18;
  default:
    return 0xffffffff;
  case 0x1b:
    return 0x19;
  case 0x1c:
    return 0x1a;
  case 0x1d:
    return 0x1b;
  case 0x1e:
    return 0x1c;
  case 0x1f:
    return 0x1d;
  case 0x20:
    return 0x1e;
  case 0x21:
    return 0x1f;
  case 0x22:
    return 0x20;
  case 0x23:
    return 0x21;
  case 0x24:
    return 0x22;
  case 0x25:
    return 0x23;
  case 0x26:
    return 0x24;
  case 0x27:
    return 0x25;
  case 0x28:
    return 0x26;
  case 0x29:
    return 0x27;
  case 0x2a:
    return 0x28;
  case 0x2b:
    return 0x29;
  case 0x2c:
    return 0x2a;
  case 0x2d:
    return 0x2b;
  case 0x2e:
    return 0x2c;
  case 0x2f:
    return 0x2d;
  }
}


// Reference entry 103067a0; body size 81 bytes.
struct Recovered_103067a0 { int * FUN_103067a0(int *param_2); };
#line 1 "ENTRY_103067a0"

int * Recovered_103067a0::FUN_103067a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10307c40; body size 79 bytes.
struct Recovered_10307c40 { void FUN_10307c40(int param_2); };
#line 1 "ENTRY_10307c40"

void Recovered_10307c40::FUN_10307c40(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10307ea0; body size 83 bytes.
struct Recovered_10307ea0 { void FUN_10307ea0(int *param_2); };
#line 1 "ENTRY_10307ea0"

void Recovered_10307ea0::FUN_10307ea0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 1030d470; body size 98 bytes.
struct Recovered_1030d470 { int * FUN_1030d470(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_1030d470"

int * Recovered_1030d470::FUN_1030d470(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 1030d4f0; body size 98 bytes.
struct Recovered_1030d4f0 { int * FUN_1030d4f0(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_1030d4f0"

int * Recovered_1030d4f0::FUN_1030d4f0(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 1030d570; body size 98 bytes.
struct Recovered_1030d570 { int * FUN_1030d570(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_1030d570"

int * Recovered_1030d570::FUN_1030d570(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 10314330; body size 91 bytes.
struct Recovered_10314330 { int * FUN_10314330(int *param_2); };
#line 1 "ENTRY_10314330"

int * Recovered_10314330::FUN_10314330(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1031a1e0; body size 149 bytes.
struct Recovered_1031a1e0 { void FUN_1031a1e0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_1031a1e0"

void Recovered_1031a1e0::FUN_1031a1e0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1031a2c0; body size 149 bytes.
struct Recovered_1031a2c0 { void FUN_1031a2c0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_1031a2c0"

void Recovered_1031a2c0::FUN_1031a2c0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1031a3a0; body size 149 bytes.
struct Recovered_1031a3a0 { void FUN_1031a3a0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_1031a3a0"

void Recovered_1031a3a0::FUN_1031a3a0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1031a480; body size 149 bytes.
struct Recovered_1031a480 { void FUN_1031a480(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_1031a480"

void Recovered_1031a480::FUN_1031a480(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1031a560; body size 149 bytes.
struct Recovered_1031a560 { void FUN_1031a560(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_1031a560"

void Recovered_1031a560::FUN_1031a560(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1031f610; body size 80 bytes.

undefined4 FUN_1031f610(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 7;
  default:
    return 10;
  case 0x12:
    return 8;
  }
}


// Reference entry 1032fa50; body size 73 bytes.
struct Recovered_1032fa50 { int * FUN_1032fa50(int *param_2,int *param_3); };
#line 1 "ENTRY_1032fa50"

int * Recovered_1032fa50::FUN_1032fa50(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 1032fab0; body size 73 bytes.
struct Recovered_1032fab0 { int * FUN_1032fab0(int *param_2,int *param_3); };
#line 1 "ENTRY_1032fab0"

int * Recovered_1032fab0::FUN_1032fab0(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 10333e30; body size 87 bytes.
struct Recovered_10333e30 { int FUN_10333e30(int *param_2); };
#line 1 "ENTRY_10333e30"

int Recovered_10333e30::FUN_10333e30(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10334790; body size 87 bytes.
struct Recovered_10334790 { int FUN_10334790(int *param_2); };
#line 1 "ENTRY_10334790"

int Recovered_10334790::FUN_10334790(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10334b20; body size 87 bytes.
struct Recovered_10334b20 { int FUN_10334b20(int *param_2); };
#line 1 "ENTRY_10334b20"

int Recovered_10334b20::FUN_10334b20(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10334d60; body size 87 bytes.
struct Recovered_10334d60 { int FUN_10334d60(int *param_2); };
#line 1 "ENTRY_10334d60"

int Recovered_10334d60::FUN_10334d60(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 103355b0; body size 87 bytes.
struct Recovered_103355b0 { int FUN_103355b0(int *param_2); };
#line 1 "ENTRY_103355b0"

int Recovered_103355b0::FUN_103355b0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10335af0; body size 87 bytes.
struct Recovered_10335af0 { int FUN_10335af0(int *param_2); };
#line 1 "ENTRY_10335af0"

int Recovered_10335af0::FUN_10335af0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10336d40; body size 81 bytes.
struct Recovered_10336d40 { int * FUN_10336d40(int *param_2); };
#line 1 "ENTRY_10336d40"

int * Recovered_10336d40::FUN_10336d40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10336db0; body size 81 bytes.
struct Recovered_10336db0 { int * FUN_10336db0(int *param_2); };
#line 1 "ENTRY_10336db0"

int * Recovered_10336db0::FUN_10336db0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10337960; body size 116 bytes.

int * __fastcall FUN_10337960(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 10337a00; body size 116 bytes.

int * __fastcall FUN_10337a00(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 1033ab00; body size 79 bytes.
struct Recovered_1033ab00 { void FUN_1033ab00(int param_2); };
#line 1 "ENTRY_1033ab00"

void Recovered_1033ab00::FUN_1033ab00(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1033b120; body size 83 bytes.
struct Recovered_1033b120 { void FUN_1033b120(int *param_2); };
#line 1 "ENTRY_1033b120"

void Recovered_1033b120::FUN_1033b120(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 103448e0; body size 98 bytes.
struct Recovered_103448e0 { int * FUN_103448e0(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_103448e0"

int * Recovered_103448e0::FUN_103448e0(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 10344960; body size 73 bytes.
struct Recovered_10344960 { int * FUN_10344960(int *param_2,int *param_3); };
#line 1 "ENTRY_10344960"

int * Recovered_10344960::FUN_10344960(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 1034d6c0; body size 145 bytes.
struct Recovered_1034d6c0 { uint FUN_1034d6c0(uint param_2); };
#line 1 "ENTRY_1034d6c0"

uint Recovered_1034d6c0::FUN_1034d6c0(uint param_2)

{
  int param_1 = (int)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint local_8;
  int iStack_4;
  
  uVar6 = 0;
  piVar5 = (int *)**(int **)(param_1 + 0x18);
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    iStack_4 = 0;
    local_8 = 0;
    do {
      if ((param_2 & piVar5[4]) != 0) {
        iVar2 = piVar5[7];
        if ((iStack_4 <= iVar2) && ((iStack_4 < iVar2 || (local_8 < (uint)piVar5[6])))) {
          uVar6 = piVar5[4];
          iStack_4 = iVar2;
          local_8 = piVar5[6];
        }
      }
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0xd);
        piVar5 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0xd);
        piVar4 = (int *)piVar5[1];
        piVar3 = piVar5;
        while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
        }
      }
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  return uVar6;
}


// Reference entry 10350870; body size 91 bytes.
struct Recovered_10350870 { int * FUN_10350870(int *param_2); };
#line 1 "ENTRY_10350870"

int * Recovered_10350870::FUN_10350870(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10350b70; body size 91 bytes.
struct Recovered_10350b70 { int * FUN_10350b70(int *param_2); };
#line 1 "ENTRY_10350b70"

int * Recovered_10350b70::FUN_10350b70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10351370; body size 91 bytes.
struct Recovered_10351370 { int * FUN_10351370(int *param_2); };
#line 1 "ENTRY_10351370"

int * Recovered_10351370::FUN_10351370(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 103522f0; body size 78 bytes.
struct Recovered_103522f0 { int * FUN_103522f0(int *param_2); };
#line 1 "ENTRY_103522f0"

int * Recovered_103522f0::FUN_103522f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10353c70; body size 98 bytes.
struct Recovered_10353c70 { int * FUN_10353c70(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_10353c70"

int * Recovered_10353c70::FUN_10353c70(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 10355870; body size 93 bytes.

int * FUN_10355870(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == param_1) {
    return param_3;
  }
  do {
    iVar2 = param_2[-2];
    piVar4 = param_2 + -2;
    piVar3 = param_3 + -2;
    if (iVar2 != *piVar3) {
      piVar1 = (int *)param_3[-1];
      if (piVar1 != (int *)0x0) {
        *piVar3 = 0;
        param_3[-1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *piVar4;
      }
      *piVar3 = iVar2;
      piVar1 = (int *)param_2[-1];
      param_3[-1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = piVar3;
    param_2 = piVar4;
  } while (piVar4 != param_1);
  return piVar3;
}


// Reference entry 10355970; body size 92 bytes.

int * FUN_10355970(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 103559f0; body size 92 bytes.

int * FUN_103559f0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 1035c6f0; body size 87 bytes.
struct Recovered_1035c6f0 { int FUN_1035c6f0(int *param_2); };
#line 1 "ENTRY_1035c6f0"

int Recovered_1035c6f0::FUN_1035c6f0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10365a60; body size 81 bytes.
struct Recovered_10365a60 { int * FUN_10365a60(int *param_2); };
#line 1 "ENTRY_10365a60"

int * Recovered_10365a60::FUN_10365a60(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365ad0; body size 81 bytes.
struct Recovered_10365ad0 { int * FUN_10365ad0(int *param_2); };
#line 1 "ENTRY_10365ad0"

int * Recovered_10365ad0::FUN_10365ad0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365b40; body size 81 bytes.
struct Recovered_10365b40 { int * FUN_10365b40(int *param_2); };
#line 1 "ENTRY_10365b40"

int * Recovered_10365b40::FUN_10365b40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365bb0; body size 81 bytes.
struct Recovered_10365bb0 { int * FUN_10365bb0(int *param_2); };
#line 1 "ENTRY_10365bb0"

int * Recovered_10365bb0::FUN_10365bb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365c20; body size 81 bytes.
struct Recovered_10365c20 { int * FUN_10365c20(int *param_2); };
#line 1 "ENTRY_10365c20"

int * Recovered_10365c20::FUN_10365c20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365c90; body size 81 bytes.
struct Recovered_10365c90 { int * FUN_10365c90(int *param_2); };
#line 1 "ENTRY_10365c90"

int * Recovered_10365c90::FUN_10365c90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365d00; body size 81 bytes.
struct Recovered_10365d00 { int * FUN_10365d00(int *param_2); };
#line 1 "ENTRY_10365d00"

int * Recovered_10365d00::FUN_10365d00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365d70; body size 81 bytes.
struct Recovered_10365d70 { int * FUN_10365d70(int *param_2); };
#line 1 "ENTRY_10365d70"

int * Recovered_10365d70::FUN_10365d70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365de0; body size 81 bytes.
struct Recovered_10365de0 { int * FUN_10365de0(int *param_2); };
#line 1 "ENTRY_10365de0"

int * Recovered_10365de0::FUN_10365de0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365e50; body size 81 bytes.
struct Recovered_10365e50 { int * FUN_10365e50(int *param_2); };
#line 1 "ENTRY_10365e50"

int * Recovered_10365e50::FUN_10365e50(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365f20; body size 81 bytes.
struct Recovered_10365f20 { int * FUN_10365f20(int *param_2); };
#line 1 "ENTRY_10365f20"

int * Recovered_10365f20::FUN_10365f20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10365f90; body size 81 bytes.
struct Recovered_10365f90 { int * FUN_10365f90(int *param_2); };
#line 1 "ENTRY_10365f90"

int * Recovered_10365f90::FUN_10365f90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10366000; body size 81 bytes.
struct Recovered_10366000 { int * FUN_10366000(int *param_2); };
#line 1 "ENTRY_10366000"

int * Recovered_10366000::FUN_10366000(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10366070; body size 81 bytes.
struct Recovered_10366070 { int * FUN_10366070(int *param_2); };
#line 1 "ENTRY_10366070"

int * Recovered_10366070::FUN_10366070(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103660e0; body size 81 bytes.
struct Recovered_103660e0 { int * FUN_103660e0(int *param_2); };
#line 1 "ENTRY_103660e0"

int * Recovered_103660e0::FUN_103660e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10366150; body size 81 bytes.
struct Recovered_10366150 { int * FUN_10366150(int *param_2); };
#line 1 "ENTRY_10366150"

int * Recovered_10366150::FUN_10366150(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103661c0; body size 81 bytes.
struct Recovered_103661c0 { int * FUN_103661c0(int *param_2); };
#line 1 "ENTRY_103661c0"

int * Recovered_103661c0::FUN_103661c0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10366290; body size 81 bytes.
struct Recovered_10366290 { int * FUN_10366290(int *param_2); };
#line 1 "ENTRY_10366290"

int * Recovered_10366290::FUN_10366290(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103663c0; body size 81 bytes.
struct Recovered_103663c0 { int * FUN_103663c0(int *param_2); };
#line 1 "ENTRY_103663c0"

int * Recovered_103663c0::FUN_103663c0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10366430; body size 81 bytes.
struct Recovered_10366430 { int * FUN_10366430(int *param_2); };
#line 1 "ENTRY_10366430"

int * Recovered_10366430::FUN_10366430(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10366500; body size 81 bytes.
struct Recovered_10366500 { int * FUN_10366500(int *param_2); };
#line 1 "ENTRY_10366500"

int * Recovered_10366500::FUN_10366500(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10367510; body size 88 bytes.
struct Recovered_10367510 { int * FUN_10367510(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_10367510"

int * Recovered_10367510::FUN_10367510(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 1036d400; body size 79 bytes.
struct Recovered_1036d400 { void FUN_1036d400(int param_2); };
#line 1 "ENTRY_1036d400"

void Recovered_1036d400::FUN_1036d400(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1036d470; body size 79 bytes.
struct Recovered_1036d470 { void FUN_1036d470(int param_2); };
#line 1 "ENTRY_1036d470"

void Recovered_1036d470::FUN_1036d470(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1036dc30; body size 83 bytes.
struct Recovered_1036dc30 { void FUN_1036dc30(int *param_2); };
#line 1 "ENTRY_1036dc30"

void Recovered_1036dc30::FUN_1036dc30(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 1036dca0; body size 83 bytes.
struct Recovered_1036dca0 { void FUN_1036dca0(int *param_2); };
#line 1 "ENTRY_1036dca0"

void Recovered_1036dca0::FUN_1036dca0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 103701d0; body size 149 bytes.
struct Recovered_103701d0 { void FUN_103701d0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103701d0"

void Recovered_103701d0::FUN_103701d0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 10371f90; body size 69 bytes.

undefined4 __fastcall FUN_10371f90(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(uVar3,9);
      if ((*(char *)(iVar2 + 0x530) != '\0') && (*(int *)(iVar2 + 0x528) == 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}


// Reference entry 10384750; body size 135 bytes.

void __fastcall FUN_10384750(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 1039ff50; body size 81 bytes.
struct Recovered_1039ff50 { int * FUN_1039ff50(int *param_2); };
#line 1 "ENTRY_1039ff50"

int * Recovered_1039ff50::FUN_1039ff50(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103a0620; body size 149 bytes.
struct Recovered_103a0620 { void FUN_103a0620(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103a0620"

void Recovered_103a0620::FUN_103a0620(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103a0700; body size 149 bytes.
struct Recovered_103a0700 { void FUN_103a0700(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103a0700"

void Recovered_103a0700::FUN_103a0700(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103a4600; body size 91 bytes.
struct Recovered_103a4600 { int * FUN_103a4600(int *param_2); };
#line 1 "ENTRY_103a4600"

int * Recovered_103a4600::FUN_103a4600(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 103a8a50; body size 81 bytes.
struct Recovered_103a8a50 { int * FUN_103a8a50(int *param_2); };
#line 1 "ENTRY_103a8a50"

int * Recovered_103a8a50::FUN_103a8a50(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103a9120; body size 100 bytes.
struct Recovered_103a9120 { void FUN_103a9120(int *param_2,uint param_3); };
#line 1 "ENTRY_103a9120"

void Recovered_103a9120::FUN_103a9120(int *param_2,uint param_3)

{
  int * param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  iVar2 = -param_3;
  if ((iVar2 < 0) && (uVar1 < param_3)) {
    *param_2 = *param_1 - ((~(uVar1 + iVar2) >> 5) * 4 + 4);
    param_2[1] = uVar1 + iVar2 & 0x1f;
    return;
  }
  *param_2 = *param_1 + (uVar1 + iVar2 >> 5) * 4;
  param_2[1] = uVar1 + iVar2 & 0x1f;
  return;
}


// Reference entry 103a91a0; body size 100 bytes.
struct Recovered_103a91a0 { void FUN_103a91a0(int *param_2,int param_3); };
#line 1 "ENTRY_103a91a0"

void Recovered_103a91a0::FUN_103a91a0(int *param_2,int param_3)

{
  int * param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = param_1[1];
  if ((param_3 < 0) && (uVar1 < (uint)-param_3)) {
    *param_2 = *param_1 - ((~(uVar1 + param_3) >> 5) * 4 + 4);
    param_2[1] = uVar1 + param_3 & 0x1f;
    return;
  }
  *param_2 = *param_1 + (uVar1 + param_3 >> 5) * 4;
  param_2[1] = uVar1 + param_3 & 0x1f;
  return;
}


// Reference entry 103a9240; body size 88 bytes.
struct Recovered_103a9240 { int * FUN_103a9240(int param_2); };
#line 1 "ENTRY_103a9240"

int * Recovered_103a9240::FUN_103a9240(int param_2)

{
  int * param_1 = (int *)this;
  uint uVar1;
  
  if ((param_2 < 0) && ((uint)param_1[1] < (uint)-param_2)) {
    uVar1 = param_1[1] + param_2;
    param_1[1] = uVar1;
    *param_1 = *param_1 + (~uVar1 >> 5) * -4 + -4;
    param_1[1] = uVar1 & 0x1f;
    return param_1;
  }
  uVar1 = param_1[1] + param_2;
  param_1[1] = uVar1;
  *param_1 = *param_1 + (uVar1 >> 5) * 4;
  param_1[1] = uVar1 & 0x1f;
  return param_1;
}


// Reference entry 103ab380; body size 79 bytes.
struct Recovered_103ab380 { void FUN_103ab380(int param_2); };
#line 1 "ENTRY_103ab380"

void Recovered_103ab380::FUN_103ab380(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 103ab5c0; body size 83 bytes.
struct Recovered_103ab5c0 { void FUN_103ab5c0(int *param_2); };
#line 1 "ENTRY_103ab5c0"

void Recovered_103ab5c0::FUN_103ab5c0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 103ac060; body size 107 bytes.
struct Recovered_103ac060 { void FUN_103ac060(int *param_2); };
#line 1 "ENTRY_103ac060"

void Recovered_103ac060::FUN_103ac060(int *param_2)

{
  int * param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar4 = param_1[3];
  if (((int)uVar4 < 0) && (uVar4 != 0)) {
    iVar2 = -((~uVar4 >> 5) * 4 + 4);
  }
  else {
    iVar2 = (uVar4 >> 5) * 4;
  }
  uVar1 = (uVar4 & 0x1f) - 1;
  if ((uVar4 & 0x1f) == 0) {
    param_2[1] = 0x1f;
    *param_2 = iVar3 + iVar2 + -4;
    return;
  }
  param_2[1] = uVar1 & 0x1f;
  *param_2 = iVar3 + iVar2 + (uVar1 >> 5) * 4;
  return;
}


// Reference entry 103b6b10; body size 69 bytes.
struct Recovered_103b6b10 { void FUN_103b6b10(int *param_2); };
#line 1 "ENTRY_103b6b10"

void Recovered_103b6b10::FUN_103b6b10(int *param_2)

{
  int * param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = param_1[3];
  if (((int)uVar1 < 0) && (uVar1 != 0)) {
    *param_2 = *param_1 - ((~uVar1 >> 5) * 4 + 4);
    param_2[1] = uVar1 & 0x1f;
    return;
  }
  *param_2 = *param_1 + (uVar1 >> 5) * 4;
  param_2[1] = uVar1 & 0x1f;
  return;
}


// Reference entry 103c31d0; body size 81 bytes.
struct Recovered_103c31d0 { int * FUN_103c31d0(int *param_2); };
#line 1 "ENTRY_103c31d0"

int * Recovered_103c31d0::FUN_103c31d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103c3240; body size 81 bytes.
struct Recovered_103c3240 { int * FUN_103c3240(int *param_2); };
#line 1 "ENTRY_103c3240"

int * Recovered_103c3240::FUN_103c3240(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103c32b0; body size 81 bytes.
struct Recovered_103c32b0 { int * FUN_103c32b0(int *param_2); };
#line 1 "ENTRY_103c32b0"

int * Recovered_103c32b0::FUN_103c32b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103c3320; body size 81 bytes.
struct Recovered_103c3320 { int * FUN_103c3320(int *param_2); };
#line 1 "ENTRY_103c3320"

int * Recovered_103c3320::FUN_103c3320(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103c3390; body size 81 bytes.
struct Recovered_103c3390 { int * FUN_103c3390(int *param_2); };
#line 1 "ENTRY_103c3390"

int * Recovered_103c3390::FUN_103c3390(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103c4b80; body size 79 bytes.
struct Recovered_103c4b80 { void FUN_103c4b80(int param_2); };
#line 1 "ENTRY_103c4b80"

void Recovered_103c4b80::FUN_103c4b80(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 103c4ca0; body size 83 bytes.
struct Recovered_103c4ca0 { void FUN_103c4ca0(int *param_2); };
#line 1 "ENTRY_103c4ca0"

void Recovered_103c4ca0::FUN_103c4ca0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 103c5d70; body size 149 bytes.
struct Recovered_103c5d70 { void FUN_103c5d70(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103c5d70"

void Recovered_103c5d70::FUN_103c5d70(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103c5e50; body size 149 bytes.
struct Recovered_103c5e50 { void FUN_103c5e50(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103c5e50"

void Recovered_103c5e50::FUN_103c5e50(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103c64f0; body size 73 bytes.
struct Recovered_103c64f0 { int FUN_103c64f0(int *param_2); };
#line 1 "ENTRY_103c64f0"

int Recovered_103c64f0::FUN_103c64f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 4))();
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[1] = (int)param_2;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0xc))();
    param_1[2] = iVar2;
    return param_1[1];
  }
  param_1[2] = 0;
  return 0;
}


// Reference entry 103c9230; body size 135 bytes.

void __fastcall FUN_103c9230(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 103c92e0; body size 135 bytes.

void __fastcall FUN_103c92e0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 103d12c0; body size 116 bytes.

int * __fastcall FUN_103d12c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 103d1360; body size 116 bytes.

int * __fastcall FUN_103d1360(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 103d21d0; body size 79 bytes.
struct Recovered_103d21d0 { void FUN_103d21d0(int param_2); };
#line 1 "ENTRY_103d21d0"

void Recovered_103d21d0::FUN_103d21d0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 103d2430; body size 83 bytes.
struct Recovered_103d2430 { void FUN_103d2430(int *param_2); };
#line 1 "ENTRY_103d2430"

void Recovered_103d2430::FUN_103d2430(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 103e7150; body size 149 bytes.
struct Recovered_103e7150 { void FUN_103e7150(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7150"

void Recovered_103e7150::FUN_103e7150(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7230; body size 149 bytes.
struct Recovered_103e7230 { void FUN_103e7230(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7230"

void Recovered_103e7230::FUN_103e7230(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7310; body size 149 bytes.
struct Recovered_103e7310 { void FUN_103e7310(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7310"

void Recovered_103e7310::FUN_103e7310(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e73f0; body size 149 bytes.
struct Recovered_103e73f0 { void FUN_103e73f0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e73f0"

void Recovered_103e73f0::FUN_103e73f0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e74d0; body size 149 bytes.
struct Recovered_103e74d0 { void FUN_103e74d0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e74d0"

void Recovered_103e74d0::FUN_103e74d0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e75b0; body size 149 bytes.
struct Recovered_103e75b0 { void FUN_103e75b0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e75b0"

void Recovered_103e75b0::FUN_103e75b0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7690; body size 149 bytes.
struct Recovered_103e7690 { void FUN_103e7690(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7690"

void Recovered_103e7690::FUN_103e7690(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7770; body size 149 bytes.
struct Recovered_103e7770 { void FUN_103e7770(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7770"

void Recovered_103e7770::FUN_103e7770(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7850; body size 149 bytes.
struct Recovered_103e7850 { void FUN_103e7850(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7850"

void Recovered_103e7850::FUN_103e7850(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7930; body size 149 bytes.
struct Recovered_103e7930 { void FUN_103e7930(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7930"

void Recovered_103e7930::FUN_103e7930(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7a10; body size 149 bytes.
struct Recovered_103e7a10 { void FUN_103e7a10(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7a10"

void Recovered_103e7a10::FUN_103e7a10(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7af0; body size 149 bytes.
struct Recovered_103e7af0 { void FUN_103e7af0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7af0"

void Recovered_103e7af0::FUN_103e7af0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7bd0; body size 149 bytes.
struct Recovered_103e7bd0 { void FUN_103e7bd0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7bd0"

void Recovered_103e7bd0::FUN_103e7bd0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7cb0; body size 149 bytes.
struct Recovered_103e7cb0 { void FUN_103e7cb0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7cb0"

void Recovered_103e7cb0::FUN_103e7cb0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7d90; body size 149 bytes.
struct Recovered_103e7d90 { void FUN_103e7d90(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7d90"

void Recovered_103e7d90::FUN_103e7d90(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7e70; body size 149 bytes.
struct Recovered_103e7e70 { void FUN_103e7e70(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7e70"

void Recovered_103e7e70::FUN_103e7e70(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103e7f50; body size 149 bytes.
struct Recovered_103e7f50 { void FUN_103e7f50(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_103e7f50"

void Recovered_103e7f50::FUN_103e7f50(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 103f6e10; body size 73 bytes.
struct Recovered_103f6e10 { int * FUN_103f6e10(int *param_2,int *param_3); };
#line 1 "ENTRY_103f6e10"

int * Recovered_103f6e10::FUN_103f6e10(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 103f8790; body size 87 bytes.
struct Recovered_103f8790 { int FUN_103f8790(int *param_2); };
#line 1 "ENTRY_103f8790"

int Recovered_103f8790::FUN_103f8790(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 103fb4b0; body size 81 bytes.
struct Recovered_103fb4b0 { int * FUN_103fb4b0(int *param_2); };
#line 1 "ENTRY_103fb4b0"

int * Recovered_103fb4b0::FUN_103fb4b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 103fbb60; body size 116 bytes.

int * __fastcall FUN_103fbb60(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 103fe890; body size 213 bytes.

void __fastcall FUN_103fe890(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x98) + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x94) + 4))();
      (**(code **)(*(int *)(param_1 + 0x94) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x170) + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x16c) + 4))();
      (**(code **)(*(int *)(param_1 + 0x16c) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x1d4) + 4))();
      (**(code **)(*(int *)(param_1 + 0x1d4) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x104) + 4))();
                    /* WARNING: Could not recover jumptable at 0x103fe95f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 0x104) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 104002d0; body size 135 bytes.

void __fastcall FUN_104002d0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10400380; body size 135 bytes.

void __fastcall FUN_10400380(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10400430; body size 135 bytes.

void __fastcall FUN_10400430(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 104004e0; body size 135 bytes.

void __fastcall FUN_104004e0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10405900; body size 91 bytes.
struct Recovered_10405900 { int * FUN_10405900(int *param_2); };
#line 1 "ENTRY_10405900"

int * Recovered_10405900::FUN_10405900(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10408680; body size 81 bytes.
struct Recovered_10408680 { int * FUN_10408680(int *param_2); };
#line 1 "ENTRY_10408680"

int * Recovered_10408680::FUN_10408680(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1040f7e0; body size 91 bytes.
struct Recovered_1040f7e0 { int * FUN_1040f7e0(int *param_2); };
#line 1 "ENTRY_1040f7e0"

int * Recovered_1040f7e0::FUN_1040f7e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10411310; body size 87 bytes.
struct Recovered_10411310 { int FUN_10411310(int *param_2); };
#line 1 "ENTRY_10411310"

int Recovered_10411310::FUN_10411310(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 10415f70; body size 91 bytes.
struct Recovered_10415f70 { int * FUN_10415f70(int *param_2); };
#line 1 "ENTRY_10415f70"

int * Recovered_10415f70::FUN_10415f70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10416f00; body size 81 bytes.
struct Recovered_10416f00 { int * FUN_10416f00(int *param_2); };
#line 1 "ENTRY_10416f00"

int * Recovered_10416f00::FUN_10416f00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10416f70; body size 81 bytes.
struct Recovered_10416f70 { int * FUN_10416f70(int *param_2); };
#line 1 "ENTRY_10416f70"

int * Recovered_10416f70::FUN_10416f70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10417040; body size 81 bytes.
struct Recovered_10417040 { int * FUN_10417040(int *param_2); };
#line 1 "ENTRY_10417040"

int * Recovered_10417040::FUN_10417040(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104170b0; body size 81 bytes.
struct Recovered_104170b0 { int * FUN_104170b0(int *param_2); };
#line 1 "ENTRY_104170b0"

int * Recovered_104170b0::FUN_104170b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1041cfb0; body size 101 bytes.
struct Recovered_1041cfb0 { void FUN_1041cfb0(int *param_2); };
#line 1 "ENTRY_1041cfb0"

void Recovered_1041cfb0::FUN_1041cfb0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xd8)) {
    piVar1 = *(int **)(param_1 + 0xdc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xd8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xdc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return;
}


// Reference entry 1041d230; body size 101 bytes.
struct Recovered_1041d230 { void FUN_1041d230(int *param_2); };
#line 1 "ENTRY_1041d230"

void Recovered_1041d230::FUN_1041d230(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xd0)) {
    piVar1 = *(int **)(param_1 + 0xd4);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xd0) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xd4) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
}


// Reference entry 1041d2c0; body size 101 bytes.
struct Recovered_1041d2c0 { void FUN_1041d2c0(int *param_2); };
#line 1 "ENTRY_1041d2c0"

void Recovered_1041d2c0::FUN_1041d2c0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xe8)) {
    piVar1 = *(int **)(param_1 + 0xec);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xe8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xec) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


// Reference entry 1041d490; body size 101 bytes.
struct Recovered_1041d490 { void FUN_1041d490(int *param_2); };
#line 1 "ENTRY_1041d490"

void Recovered_1041d490::FUN_1041d490(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 200)) {
    piVar1 = *(int **)(param_1 + 0xcc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 200) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xcc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}


// Reference entry 1041e050; body size 92 bytes.

int * FUN_1041e050(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 104259a0; body size 91 bytes.
struct Recovered_104259a0 { int * FUN_104259a0(int *param_2); };
#line 1 "ENTRY_104259a0"

int * Recovered_104259a0::FUN_104259a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10425b60; body size 91 bytes.
struct Recovered_10425b60 { int * FUN_10425b60(int *param_2); };
#line 1 "ENTRY_10425b60"

int * Recovered_10425b60::FUN_10425b60(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10433fb0; body size 81 bytes.
struct Recovered_10433fb0 { int * FUN_10433fb0(int *param_2); };
#line 1 "ENTRY_10433fb0"

int * Recovered_10433fb0::FUN_10433fb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10434080; body size 81 bytes.
struct Recovered_10434080 { int * FUN_10434080(int *param_2); };
#line 1 "ENTRY_10434080"

int * Recovered_10434080::FUN_10434080(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104343b0; body size 88 bytes.
struct Recovered_104343b0 { int * FUN_104343b0(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_104343b0"

int * Recovered_104343b0::FUN_104343b0(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 1043b620; body size 135 bytes.

void __fastcall FUN_1043b620(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10443e90; body size 81 bytes.
struct Recovered_10443e90 { int * FUN_10443e90(int *param_2); };
#line 1 "ENTRY_10443e90"

int * Recovered_10443e90::FUN_10443e90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10443f00; body size 81 bytes.
struct Recovered_10443f00 { int * FUN_10443f00(int *param_2); };
#line 1 "ENTRY_10443f00"

int * Recovered_10443f00::FUN_10443f00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1044b450; body size 81 bytes.
struct Recovered_1044b450 { int * FUN_1044b450(int *param_2); };
#line 1 "ENTRY_1044b450"

int * Recovered_1044b450::FUN_1044b450(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1044e870; body size 95 bytes.

void __fastcall FUN_1044e870(int param_1)

{
  int *piVar1;
  
  if ((*(int **)(param_1 + 0x90) != (int *)0x0) && (*(int *)(param_1 + 0x98) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x70))(*(int *)(param_1 + 0x98));
    if (*(int *)(param_1 + 0x98) != 0) {
      piVar1 = *(int **)(param_1 + 0x9c);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0x9c) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  return;
}


// Reference entry 1044fd00; body size 81 bytes.
struct Recovered_1044fd00 { int * FUN_1044fd00(int *param_2); };
#line 1 "ENTRY_1044fd00"

int * Recovered_1044fd00::FUN_1044fd00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10452350; body size 81 bytes.
struct Recovered_10452350 { int * FUN_10452350(int *param_2); };
#line 1 "ENTRY_10452350"

int * Recovered_10452350::FUN_10452350(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104557d0; body size 91 bytes.
struct Recovered_104557d0 { int * FUN_104557d0(int *param_2); };
#line 1 "ENTRY_104557d0"

int * Recovered_104557d0::FUN_104557d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10464b60; body size 135 bytes.

void __fastcall FUN_10464b60(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10465ec0; body size 91 bytes.
struct Recovered_10465ec0 { int * FUN_10465ec0(int *param_2); };
#line 1 "ENTRY_10465ec0"

int * Recovered_10465ec0::FUN_10465ec0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1046d2c0; body size 133 bytes.

void __fastcall FUN_1046d2c0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    piVar1 = *(int **)(param_1 + 0x98);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    piVar1 = *(int **)(param_1 + 0xa0);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}


// Reference entry 1046e960; body size 81 bytes.
struct Recovered_1046e960 { int * FUN_1046e960(int *param_2); };
#line 1 "ENTRY_1046e960"

int * Recovered_1046e960::FUN_1046e960(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1047f1f0; body size 91 bytes.
struct Recovered_1047f1f0 { int * FUN_1047f1f0(int *param_2); };
#line 1 "ENTRY_1047f1f0"

int * Recovered_1047f1f0::FUN_1047f1f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 104acc90; body size 87 bytes.
struct Recovered_104acc90 { int FUN_104acc90(int *param_2); };
#line 1 "ENTRY_104acc90"

int Recovered_104acc90::FUN_104acc90(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 104ae950; body size 135 bytes.

void __fastcall FUN_104ae950(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 104aee60; body size 133 bytes.

void __fastcall FUN_104aee60(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    piVar1 = *(int **)(param_1 + 0x98);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    piVar1 = *(int **)(param_1 + 0xa0);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}


// Reference entry 104ba330; body size 261 bytes.

void __fastcall FUN_104ba330(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    piVar1 = *(int **)(param_1 + 0x94);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    piVar1 = *(int **)(param_1 + 0xa4);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    piVar1 = *(int **)(param_1 + 0x9c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    piVar1 = *(int **)(param_1 + 0xac);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}


// Reference entry 104ca210; body size 69 bytes.

void __fastcall FUN_104ca210(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    piVar1 = *(int **)(param_1 + 0x98);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}


// Reference entry 104cb570; body size 78 bytes.
struct Recovered_104cb570 { int * FUN_104cb570(int *param_2); };
#line 1 "ENTRY_104cb570"

int * Recovered_104cb570::FUN_104cb570(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 104cce20; body size 81 bytes.
struct Recovered_104cce20 { int * FUN_104cce20(int *param_2); };
#line 1 "ENTRY_104cce20"

int * Recovered_104cce20::FUN_104cce20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104d66e0; body size 91 bytes.
struct Recovered_104d66e0 { int * FUN_104d66e0(int *param_2); };
#line 1 "ENTRY_104d66e0"

int * Recovered_104d66e0::FUN_104d66e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 104d7a30; body size 81 bytes.
struct Recovered_104d7a30 { int * FUN_104d7a30(int *param_2); };
#line 1 "ENTRY_104d7a30"

int * Recovered_104d7a30::FUN_104d7a30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104dc3a0; body size 81 bytes.
struct Recovered_104dc3a0 { int * FUN_104dc3a0(int *param_2); };
#line 1 "ENTRY_104dc3a0"

int * Recovered_104dc3a0::FUN_104dc3a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104dd440; body size 71 bytes.

uint __fastcall FUN_104dd440(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == -1) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x58))();
  }
  piVar1 = *(int **)(param_1 + 0x20);
  uVar3 = *(int *)(param_1 + 0x24) - (int)piVar1;
  if ((uVar3 & 0xfffffff8) == 8) {
    if (((*piVar1 == 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar2 == piVar1[1])) {
      return 1;
    }
    return 0;
  }
  return uVar3 & 0xffffff00;
}


// Reference entry 104dfbd0; body size 92 bytes.

int * FUN_104dfbd0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 104e4590; body size 81 bytes.
struct Recovered_104e4590 { int * FUN_104e4590(int *param_2); };
#line 1 "ENTRY_104e4590"

int * Recovered_104e4590::FUN_104e4590(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104ea4c0; body size 73 bytes.
struct Recovered_104ea4c0 { int * FUN_104ea4c0(int *param_2,int param_3,uint param_4); };
#line 1 "ENTRY_104ea4c0"

int * Recovered_104ea4c0::FUN_104ea4c0(int *param_2,int param_3,uint param_4)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  
  if (param_3 < 0xc) {
    iVar1 = *(int *)(param_1 + 0x38 + param_3 * 0xc);
    if (param_4 < (uint)(*(int *)(param_1 + 0x3c + param_3 * 0xc) - iVar1 >> 3)) {
      piVar2 = *(int **)(iVar1 + param_4 * 8);
      *param_2 = (int)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 104ed9a0; body size 81 bytes.
struct Recovered_104ed9a0 { int * FUN_104ed9a0(int *param_2); };
#line 1 "ENTRY_104ed9a0"

int * Recovered_104ed9a0::FUN_104ed9a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104edaf0; body size 124 bytes.
struct Recovered_104edaf0 { void FUN_104edaf0(undefined4 param_2); };
#line 1 "ENTRY_104edaf0"

void Recovered_104edaf0::FUN_104edaf0(undefined4 param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 0x14))(param_2,param_1);
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      param_1[4] = 0;
      param_1[5] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  (**(code **)(*param_1 + 4))();
  if (param_1[2] != 0) {
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      param_1[2] = 0;
      param_1[3] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  (**(code **)(*param_1 + 8))();
  return;
}


// Reference entry 104ee370; body size 145 bytes.
struct Recovered_104ee370 { void FUN_104ee370(int *param_2); };
#line 1 "ENTRY_104ee370"

void Recovered_104ee370::FUN_104ee370(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1 + 8;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  (**(code **)(*param_2 + 0x1c))(iVar2);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)param_2[6]) {
    piVar1 = (int *)param_2[7];
    if (piVar1 != (int *)0x0) {
      param_2[6] = 0;
      param_2[7] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_2[6] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      param_2[7] = 0;
    }
    else {
      piVar3 = (int *)(**(code **)(*piVar3 + 0xc))();
      param_2[7] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }
  iVar2 = (**(code **)(*param_2 + 0x14))();
  if (iVar2 == 0) {
    (**(code **)(*param_2 + 0x1c))(0);
    (**(code **)(*(int *)(param_1 + 8) + 0x14))(0,param_2);
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}


// Reference entry 104ee430; body size 149 bytes.
struct Recovered_104ee430 { bool FUN_104ee430(int *param_2); };
#line 1 "ENTRY_104ee430"

bool Recovered_104ee430::FUN_104ee430(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x1c))(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)param_2[6]) {
    piVar1 = (int *)param_2[7];
    if (piVar1 != (int *)0x0) {
      param_2[6] = 0;
      param_2[7] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_2[6] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      param_2[7] = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*piVar2 + 0xc))();
      param_2[7] = (int)piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  iVar3 = (**(code **)(*param_2 + 0x14))();
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x1c))(param_2);
    return (char)param_1[5] != '\0';
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return true;
}


// Reference entry 104ee4f0; body size 80 bytes.
struct Recovered_104ee4f0 { void FUN_104ee4f0(int *param_2); };
#line 1 "ENTRY_104ee4f0"

void Recovered_104ee4f0::FUN_104ee4f0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 104ee560; body size 80 bytes.
struct Recovered_104ee560 { void FUN_104ee560(int *param_2); };
#line 1 "ENTRY_104ee560"

void Recovered_104ee560::FUN_104ee560(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x10)) {
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x10) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x14) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 104ee5d0; body size 80 bytes.
struct Recovered_104ee5d0 { void FUN_104ee5d0(int *param_2); };
#line 1 "ENTRY_104ee5d0"

void Recovered_104ee5d0::FUN_104ee5d0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x18)) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x18) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x1c) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 104f83d0; body size 91 bytes.
struct Recovered_104f83d0 { int * FUN_104f83d0(int *param_2); };
#line 1 "ENTRY_104f83d0"

int * Recovered_104f83d0::FUN_104f83d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 104fb610; body size 81 bytes.
struct Recovered_104fb610 { int * FUN_104fb610(int *param_2); };
#line 1 "ENTRY_104fb610"

int * Recovered_104fb610::FUN_104fb610(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 104fce70; body size 79 bytes.
struct Recovered_104fce70 { void FUN_104fce70(int param_2); };
#line 1 "ENTRY_104fce70"

void Recovered_104fce70::FUN_104fce70(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 104fd0f0; body size 83 bytes.
struct Recovered_104fd0f0 { void FUN_104fd0f0(int *param_2); };
#line 1 "ENTRY_104fd0f0"

void Recovered_104fd0f0::FUN_104fd0f0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 10504480; body size 83 bytes.
struct Recovered_10504480 { int * FUN_10504480(int param_2); };
#line 1 "ENTRY_10504480"

int * Recovered_10504480::FUN_10504480(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = param_2;
    if (param_2 != 0) {
      piVar1 = (int *)(**(code **)(*(int *)(param_2 + 4) + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105044f0; body size 89 bytes.
struct Recovered_105044f0 { int * FUN_105044f0(int param_2); };
#line 1 "ENTRY_105044f0"

int * Recovered_105044f0::FUN_105044f0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = param_2;
    if (param_2 != 0) {
      piVar1 = (int *)(**(code **)(*(int *)(param_2 + 0xa8) + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105097f0; body size 80 bytes.

int __fastcall FUN_105097f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char **)(param_1 + 0x134) == (char *)0x0) || (**(char **)(param_1 + 0x134) == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  if ((*(char **)(param_1 + 0x138) == (char *)0x0) || (**(char **)(param_1 + 0x138) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((*(char **)(param_1 + 0x13c) != (char *)0x0) && (**(char **)(param_1 + 0x13c) != '\0')) {
    return iVar1 + iVar2 + 1;
  }
  return iVar1 + iVar2;
}


// Reference entry 1050ac40; body size 89 bytes.

int __fastcall FUN_1050ac40(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0xac) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0xac) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  uVar1 = (uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff);
  return (uVar1 >> 0x10) + (uVar1 & 0xffff);
}


// Reference entry 1050acb0; body size 89 bytes.

int __fastcall FUN_1050acb0(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0xac) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0xac) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  uVar1 = (uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff);
  return (uVar1 >> 0x10) + (uVar1 & 0xffff);
}


// Reference entry 1050ad20; body size 89 bytes.

int __fastcall FUN_1050ad20(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0xac) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0xac) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  uVar1 = (uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff);
  return (uVar1 >> 0x10) + (uVar1 & 0xffff);
}


// Reference entry 1050e670; body size 91 bytes.
struct Recovered_1050e670 { int * FUN_1050e670(int *param_2); };
#line 1 "ENTRY_1050e670"

int * Recovered_1050e670::FUN_1050e670(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 105106f0; body size 81 bytes.
struct Recovered_105106f0 { int * FUN_105106f0(int *param_2); };
#line 1 "ENTRY_105106f0"

int * Recovered_105106f0::FUN_105106f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10510760; body size 81 bytes.
struct Recovered_10510760 { int * FUN_10510760(int *param_2); };
#line 1 "ENTRY_10510760"

int * Recovered_10510760::FUN_10510760(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105107d0; body size 81 bytes.
struct Recovered_105107d0 { int * FUN_105107d0(int *param_2); };
#line 1 "ENTRY_105107d0"

int * Recovered_105107d0::FUN_105107d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10524d20; body size 91 bytes.
struct Recovered_10524d20 { int * FUN_10524d20(int *param_2); };
#line 1 "ENTRY_10524d20"

int * Recovered_10524d20::FUN_10524d20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10524ee0; body size 91 bytes.
struct Recovered_10524ee0 { int * FUN_10524ee0(int *param_2); };
#line 1 "ENTRY_10524ee0"

int * Recovered_10524ee0::FUN_10524ee0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10525360; body size 83 bytes.
struct Recovered_10525360 { int * FUN_10525360(int *param_2); };
#line 1 "ENTRY_10525360"

int * Recovered_10525360::FUN_10525360(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)*param_2;
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105253d0; body size 78 bytes.
struct Recovered_105253d0 { int * FUN_105253d0(int *param_2); };
#line 1 "ENTRY_105253d0"

int * Recovered_105253d0::FUN_105253d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1052a9a0; body size 81 bytes.
struct Recovered_1052a9a0 { int * FUN_1052a9a0(int *param_2); };
#line 1 "ENTRY_1052a9a0"

int * Recovered_1052a9a0::FUN_1052a9a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1052aa70; body size 81 bytes.
struct Recovered_1052aa70 { int * FUN_1052aa70(int *param_2); };
#line 1 "ENTRY_1052aa70"

int * Recovered_1052aa70::FUN_1052aa70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1052e0d0; body size 73 bytes.

undefined4 __fastcall FUN_1052e0d0(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x7c))();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


// Reference entry 1052e640; body size 73 bytes.

undefined4 __fastcall FUN_1052e640(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x3c))();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


// Reference entry 1052e970; body size 64 bytes.

void __fastcall FUN_1052e970(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1052e9a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x6c))();
    return;
  }
  return;
}


// Reference entry 10534e70; body size 66 bytes.

undefined4 __fastcall FUN_10534e70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10534ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 0x68))();
    return uVar3;
  }
  return 0;
}


// Reference entry 10535fd0; body size 65 bytes.

undefined4 __fastcall FUN_10535fd0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10536006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 4))();
    return uVar3;
  }
  return 0xffffffff;
}


// Reference entry 10536180; body size 87 bytes.

int __fastcall FUN_10536180(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x60))();
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x1c))();
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      return iVar3;
    }
  }
  return *(int *)(param_1 + 0x7c);
}


// Reference entry 105362b0; body size 73 bytes.
struct Recovered_105362b0 { undefined4 * FUN_105362b0(undefined4 *param_2,int param_3); };
#line 1 "ENTRY_105362b0"

undefined4 * Recovered_105362b0::FUN_105362b0(undefined4 *param_2,int param_3)

{
  int param_1 = (int)this;
  if (param_3 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1d8))(param_2);
    return param_2;
  }
  if (param_3 != 1) {
    *param_2 = 0;
    return param_2;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x1dc))(param_2);
  return param_2;
}


// Reference entry 10536390; body size 88 bytes.
struct Recovered_10536390 { undefined4 * FUN_10536390(undefined4 *param_2,undefined4 param_3); };
#line 1 "ENTRY_10536390"

undefined4 * Recovered_10536390::FUN_10536390(undefined4 *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x50))(param_2,param_3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 1053cf30; body size 84 bytes.
struct Recovered_1053cf30 { undefined4 * FUN_1053cf30(undefined4 *param_2); };
#line 1 "ENTRY_1053cf30"

undefined4 * Recovered_1053cf30::FUN_1053cf30(undefined4 *param_2)

{
  int param_1 = (int)this;
  uint uVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x4c))(param_2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 1053d770; body size 87 bytes.

undefined4 __fastcall FUN_1053d770(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1;
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4);
  }
  if (*(int *)(*(int *)(param_1 + 0x6c) + 8) != *(int *)(*(int *)(param_1 + 0x6c) + 0xc)) {
    return 1;
  }
  if ((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 0x5c))(), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}


// Reference entry 1053d830; body size 161 bytes.

void __fastcall FUN_1053d830(int param_1)

{
  *(undefined1 *)(param_1 + 0xd09) = 0;
  *(undefined1 *)(param_1 + 0x2d4b) = 0;
  *(undefined1 *)(param_1 + 0x4d8d) = 0;
  *(undefined1 *)(param_1 + 0x4d4c) = 0;
  *(undefined1 *)(param_1 + 0x2d0a) = 0;
  *(undefined2 *)(param_1 + 0x59d2) = 0;
  *(undefined1 *)(param_1 + 0x4dce) = 0;
  *(undefined1 *)(param_1 + 0x51cf) = 0;
  *(undefined1 *)(param_1 + 0x55d0) = 0;
  *(undefined1 *)(param_1 + 0x59d1) = 0;
  *(undefined1 *)(param_1 + 0x59d4) = 0;
  *(undefined1 *)(param_1 + 0x7a16) = 0;
  *(undefined1 *)(param_1 + 0x9a58) = 0;
  *(undefined1 *)(param_1 + 0x9a17) = 0;
  *(undefined1 *)(param_1 + 0x79d5) = 0;
  *(undefined2 *)(param_1 + 0xa69e) = 0;
  *(undefined1 *)(param_1 + 0xc6a0) = 0;
  *(undefined1 *)(param_1 + 0xc6e1) = 0;
  *(undefined2 *)(param_1 + 0xc722) = 0;
  *(undefined1 *)(param_1 + 0xe724) = 0;
  *(undefined1 *)(param_1 + 0xe765) = 0;
  *(undefined1 *)(param_1 + 0xe7a6) = 0;
  return;
}


// Reference entry 1053e430; body size 64 bytes.

undefined4 __fastcall FUN_1053e430(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1,
     piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                                (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4)
     , piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1053e466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 0x60))();
    return uVar3;
  }
  return 0;
}


// Reference entry 105411c0; body size 86 bytes.

undefined4 __fastcall FUN_105411c0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (param_1[0x1a] != 0) {
    uVar1 = (param_1[0x1a] + param_1[0x19]) - 1;
    piVar2 = *(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                      (uVar1 & 3) * 4);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x20))();
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*param_1 + 0x5c))();
        if (cVar3 == '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


// Reference entry 105415b0; body size 73 bytes.

undefined4 __fastcall FUN_105415b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x74))();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


// Reference entry 10541610; body size 98 bytes.

undefined4 __fastcall FUN_10541610(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4);
    if ((((piVar2 != (int *)0x0) &&
         (*(int *)(*(int *)(param_1 + 0x6c) + 8) == *(int *)(*(int *)(param_1 + 0x6c) + 0xc))) &&
        (*(char *)(param_1 + 0x78) == '\0')) && (*(int *)(param_1 + 0x74) == 0)) {
      cVar3 = (**(code **)(*piVar2 + 0x24))();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


// Reference entry 10541810; body size 108 bytes.

undefined4 __fastcall FUN_10541810(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  if (param_1[0x1a] == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar1 = (param_1[0x1a] + param_1[0x19]) - 1;
    piVar3 = *(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                      (uVar1 & 3) * 4);
  }
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (cVar2 != '\0') {
      return 1;
    }
    if ((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 0x38))(), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}


// Reference entry 10546900; body size 73 bytes.

undefined4 __fastcall FUN_10546900(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1;
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x5c) +
                               (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) + (uVar1 & 3) * 4);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x78))();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


// Reference entry 1054b890; body size 84 bytes.
struct Recovered_1054b890 { void FUN_1054b890(int param_2); };
#line 1 "ENTRY_1054b890"

void Recovered_1054b890::FUN_1054b890(int param_2)

{
  int * param_1 = (int *)this;
  uint uVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = (**(code **)(*param_1 + 0x5c))();
  if (((cVar3 == '\0') && (param_1[0x2c] = param_2, param_1[0x1a] != 0)) &&
     (uVar1 = (param_1[0x1a] + param_1[0x19]) - 1,
     piVar2 = *(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                       (uVar1 & 3) * 4), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x48))(param_2);
  }
  return;
}


// Reference entry 10550320; body size 81 bytes.
struct Recovered_10550320 { int * FUN_10550320(int *param_2); };
#line 1 "ENTRY_10550320"

int * Recovered_10550320::FUN_10550320(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105503f0; body size 81 bytes.
struct Recovered_105503f0 { int * FUN_105503f0(int *param_2); };
#line 1 "ENTRY_105503f0"

int * Recovered_105503f0::FUN_105503f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105517b0; body size 79 bytes.
struct Recovered_105517b0 { void FUN_105517b0(int param_2); };
#line 1 "ENTRY_105517b0"

void Recovered_105517b0::FUN_105517b0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 105518d0; body size 83 bytes.
struct Recovered_105518d0 { void FUN_105518d0(int *param_2); };
#line 1 "ENTRY_105518d0"

void Recovered_105518d0::FUN_105518d0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 10551ef0; body size 149 bytes.
struct Recovered_10551ef0 { void FUN_10551ef0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_10551ef0"

void Recovered_10551ef0::FUN_10551ef0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1055a290; body size 81 bytes.
struct Recovered_1055a290 { int * FUN_1055a290(int *param_2); };
#line 1 "ENTRY_1055a290"

int * Recovered_1055a290::FUN_1055a290(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1055a300; body size 81 bytes.
struct Recovered_1055a300 { int * FUN_1055a300(int *param_2); };
#line 1 "ENTRY_1055a300"

int * Recovered_1055a300::FUN_1055a300(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1055a370; body size 81 bytes.
struct Recovered_1055a370 { int * FUN_1055a370(int *param_2); };
#line 1 "ENTRY_1055a370"

int * Recovered_1055a370::FUN_1055a370(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10566bd0; body size 81 bytes.
struct Recovered_10566bd0 { int * FUN_10566bd0(int *param_2); };
#line 1 "ENTRY_10566bd0"

int * Recovered_10566bd0::FUN_10566bd0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1056b4a0; body size 149 bytes.
struct Recovered_1056b4a0 { void FUN_1056b4a0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_1056b4a0"

void Recovered_1056b4a0::FUN_1056b4a0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1057c010; body size 81 bytes.
struct Recovered_1057c010 { int * FUN_1057c010(int *param_2); };
#line 1 "ENTRY_1057c010"

int * Recovered_1057c010::FUN_1057c010(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10588c80; body size 81 bytes.
struct Recovered_10588c80 { int * FUN_10588c80(int *param_2); };
#line 1 "ENTRY_10588c80"

int * Recovered_10588c80::FUN_10588c80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10589c90; body size 149 bytes.
struct Recovered_10589c90 { void FUN_10589c90(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_10589c90"

void Recovered_10589c90::FUN_10589c90(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 10595790; body size 81 bytes.
struct Recovered_10595790 { int * FUN_10595790(int *param_2); };
#line 1 "ENTRY_10595790"

int * Recovered_10595790::FUN_10595790(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10596780; body size 79 bytes.
struct Recovered_10596780 { void FUN_10596780(int param_2); };
#line 1 "ENTRY_10596780"

void Recovered_10596780::FUN_10596780(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10596890; body size 83 bytes.
struct Recovered_10596890 { void FUN_10596890(int *param_2); };
#line 1 "ENTRY_10596890"

void Recovered_10596890::FUN_10596890(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 1059b760; body size 73 bytes.
struct Recovered_1059b760 { int * FUN_1059b760(int *param_2,uint *param_3); };
#line 1 "ENTRY_1059b760"

int * Recovered_1059b760::FUN_1059b760(int *param_2,uint *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_3;
    do {
      *param_2 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 1059cd60; body size 79 bytes.
struct Recovered_1059cd60 { void FUN_1059cd60(int param_2); };
#line 1 "ENTRY_1059cd60"

void Recovered_1059cd60::FUN_1059cd60(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 1059ce50; body size 83 bytes.
struct Recovered_1059ce50 { void FUN_1059ce50(int *param_2); };
#line 1 "ENTRY_1059ce50"

void Recovered_1059ce50::FUN_1059ce50(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 1059f1a0; body size 73 bytes.
struct Recovered_1059f1a0 { int * FUN_1059f1a0(int *param_2,int *param_3); };
#line 1 "ENTRY_1059f1a0"

int * Recovered_1059f1a0::FUN_1059f1a0(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 105a0b80; body size 88 bytes.
struct Recovered_105a0b80 { int * FUN_105a0b80(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_105a0b80"

int * Recovered_105a0b80::FUN_105a0b80(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 105a5630; body size 73 bytes.
struct Recovered_105a5630 { int * FUN_105a5630(int *param_2,int *param_3); };
#line 1 "ENTRY_105a5630"

int * Recovered_105a5630::FUN_105a5630(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 105a5690; body size 73 bytes.
struct Recovered_105a5690 { int * FUN_105a5690(int *param_2,uint *param_3); };
#line 1 "ENTRY_105a5690"

int * Recovered_105a5690::FUN_105a5690(int *param_2,uint *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_3;
    do {
      *param_2 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 105a8b60; body size 71 bytes.
struct Recovered_105a8b60 { int * FUN_105a8b60(int *param_2); };
#line 1 "ENTRY_105a8b60"

int * Recovered_105a8b60::FUN_105a8b60(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  param_1[2] = param_2[2];
  return param_1;
}


// Reference entry 105a96c0; body size 88 bytes.
struct Recovered_105a96c0 { int * FUN_105a96c0(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_105a96c0"

int * Recovered_105a96c0::FUN_105a96c0(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 105ab410; body size 79 bytes.
struct Recovered_105ab410 { void FUN_105ab410(int param_2); };
#line 1 "ENTRY_105ab410"

void Recovered_105ab410::FUN_105ab410(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 105ab560; body size 79 bytes.
struct Recovered_105ab560 { void FUN_105ab560(int param_2); };
#line 1 "ENTRY_105ab560"

void Recovered_105ab560::FUN_105ab560(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 105ab8e0; body size 83 bytes.
struct Recovered_105ab8e0 { void FUN_105ab8e0(int *param_2); };
#line 1 "ENTRY_105ab8e0"

void Recovered_105ab8e0::FUN_105ab8e0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 105aba30; body size 83 bytes.
struct Recovered_105aba30 { void FUN_105aba30(int *param_2); };
#line 1 "ENTRY_105aba30"

void Recovered_105aba30::FUN_105aba30(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 105b16f0; body size 87 bytes.
struct Recovered_105b16f0 { int FUN_105b16f0(int *param_2); };
#line 1 "ENTRY_105b16f0"

int Recovered_105b16f0::FUN_105b16f0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 105b1820; body size 87 bytes.
struct Recovered_105b1820 { int FUN_105b1820(int *param_2); };
#line 1 "ENTRY_105b1820"

int Recovered_105b1820::FUN_105b1820(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 105b23d0; body size 81 bytes.
struct Recovered_105b23d0 { int * FUN_105b23d0(int *param_2); };
#line 1 "ENTRY_105b23d0"

int * Recovered_105b23d0::FUN_105b23d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105b3320; body size 149 bytes.

void __fastcall FUN_105b3320(int param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x18))();
      if (*(int *)(param_1 + 0x44) != 0) {
        piVar1 = *(int **)(param_1 + 0x48);
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x44) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))();
      if (*(int *)(param_1 + 0x4c) != 0) {
        piVar1 = *(int **)(param_1 + 0x50);
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
  }
  return;
}


// Reference entry 105bba50; body size 113 bytes.

void __fastcall FUN_105bba50(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar1 = *(int **)(param_1 + 0x24);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}


// Reference entry 105bbc80; body size 149 bytes.
struct Recovered_105bbc80 { void FUN_105bbc80(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_105bbc80"

void Recovered_105bbc80::FUN_105bbc80(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 105c3170; body size 91 bytes.
struct Recovered_105c3170 { int * FUN_105c3170(int *param_2); };
#line 1 "ENTRY_105c3170"

int * Recovered_105c3170::FUN_105c3170(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 105c4300; body size 81 bytes.
struct Recovered_105c4300 { int * FUN_105c4300(int *param_2); };
#line 1 "ENTRY_105c4300"

int * Recovered_105c4300::FUN_105c4300(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105c4370; body size 81 bytes.
struct Recovered_105c4370 { int * FUN_105c4370(int *param_2); };
#line 1 "ENTRY_105c4370"

int * Recovered_105c4370::FUN_105c4370(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105d46f0; body size 81 bytes.
struct Recovered_105d46f0 { int * FUN_105d46f0(int *param_2); };
#line 1 "ENTRY_105d46f0"

int * Recovered_105d46f0::FUN_105d46f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105d4760; body size 81 bytes.
struct Recovered_105d4760 { int * FUN_105d4760(int *param_2); };
#line 1 "ENTRY_105d4760"

int * Recovered_105d4760::FUN_105d4760(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105d47d0; body size 81 bytes.
struct Recovered_105d47d0 { int * FUN_105d47d0(int *param_2); };
#line 1 "ENTRY_105d47d0"

int * Recovered_105d47d0::FUN_105d47d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 105d75e0; body size 149 bytes.
struct Recovered_105d75e0 { void FUN_105d75e0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_105d75e0"

void Recovered_105d75e0::FUN_105d75e0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 105eca70; body size 87 bytes.
struct Recovered_105eca70 { int FUN_105eca70(int *param_2); };
#line 1 "ENTRY_105eca70"

int Recovered_105eca70::FUN_105eca70(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 105ee9a0; body size 66 bytes.

void __fastcall FUN_105ee9a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 10);
    param_1[0x13] = 0;
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[9] = 0;
  }
  return;
}


// Reference entry 105eeb30; body size 66 bytes.

void __fastcall FUN_105eeb30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 10);
    param_1[0x13] = 0;
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[9] = 0;
  }
  return;
}


// Reference entry 105f29d0; body size 78 bytes.
struct Recovered_105f29d0 { int * FUN_105f29d0(int *param_2); };
#line 1 "ENTRY_105f29d0"

int * Recovered_105f29d0::FUN_105f29d0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10601390; body size 65 bytes.
struct Recovered_10601390 { int * FUN_10601390(int *param_2); };
#line 1 "ENTRY_10601390"

int * Recovered_10601390::FUN_10601390(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 10623c70; body size 78 bytes.
struct Recovered_10623c70 { int * FUN_10623c70(int *param_2); };
#line 1 "ENTRY_10623c70"

int * Recovered_10623c70::FUN_10623c70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10623ce0; body size 78 bytes.
struct Recovered_10623ce0 { int * FUN_10623ce0(int *param_2); };
#line 1 "ENTRY_10623ce0"

int * Recovered_10623ce0::FUN_10623ce0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10648530; body size 92 bytes.

int * FUN_10648530(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 10656a30; body size 81 bytes.
struct Recovered_10656a30 { int * FUN_10656a30(int *param_2); };
#line 1 "ENTRY_10656a30"

int * Recovered_10656a30::FUN_10656a30(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10656aa0; body size 65 bytes.
struct Recovered_10656aa0 { int * FUN_10656aa0(int *param_2); };
#line 1 "ENTRY_10656aa0"

int * Recovered_10656aa0::FUN_10656aa0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 10684bb0; body size 116 bytes.

int * __fastcall FUN_10684bb0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 106896f0; body size 149 bytes.
struct Recovered_106896f0 { void FUN_106896f0(int *param_2,undefined4 param_3); };
#line 1 "ENTRY_106896f0"

void Recovered_106896f0::FUN_106896f0(int *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x10) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x14))();
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// Reference entry 1068d4b0; body size 98 bytes.
struct Recovered_1068d4b0 { int * FUN_1068d4b0(int *param_2,int *param_3,uint param_4); };
#line 1 "ENTRY_1068d4b0"

int * Recovered_1068d4b0::FUN_1068d4b0(int *param_2,int *param_3,uint param_4)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_4) * 8);
  piVar3 = (int *)puVar1[1];
  if (piVar3 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return param_2;
  }
  iVar2 = piVar3[2];
  while( true ) {
    if (*param_3 == iVar2) {
      iVar2 = *piVar3;
      param_2[1] = (int)piVar3;
      *param_2 = iVar2;
      return param_2;
    }
    if (piVar3 == (int *)*puVar1) break;
    piVar3 = (int *)piVar3[1];
    iVar2 = piVar3[2];
  }
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  return param_2;
}


// Reference entry 106910d0; body size 87 bytes.
struct Recovered_106910d0 { int FUN_106910d0(int *param_2); };
#line 1 "ENTRY_106910d0"

int Recovered_106910d0::FUN_106910d0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 106979b0; body size 81 bytes.
struct Recovered_106979b0 { int * FUN_106979b0(int *param_2); };
#line 1 "ENTRY_106979b0"

int * Recovered_106979b0::FUN_106979b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1069c7e0; body size 81 bytes.
struct Recovered_1069c7e0 { int * FUN_1069c7e0(int *param_2); };
#line 1 "ENTRY_1069c7e0"

int * Recovered_1069c7e0::FUN_1069c7e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106a4610; body size 88 bytes.
struct Recovered_106a4610 { int * FUN_106a4610(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_106a4610"

int * Recovered_106a4610::FUN_106a4610(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 106a4780; body size 116 bytes.

int * __fastcall FUN_106a4780(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 106a4820; body size 116 bytes.

int * __fastcall FUN_106a4820(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 106a8e70; body size 91 bytes.
struct Recovered_106a8e70 { int * FUN_106a8e70(int *param_2); };
#line 1 "ENTRY_106a8e70"

int * Recovered_106a8e70::FUN_106a8e70(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 106a9140; body size 91 bytes.
struct Recovered_106a9140 { int * FUN_106a9140(int *param_2); };
#line 1 "ENTRY_106a9140"

int * Recovered_106a9140::FUN_106a9140(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 106a9e70; body size 92 bytes.

int * FUN_106a9e70(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 106ab8c0; body size 73 bytes.
struct Recovered_106ab8c0 { int * FUN_106ab8c0(int *param_2,int *param_3); };
#line 1 "ENTRY_106ab8c0"

int * Recovered_106ab8c0::FUN_106ab8c0(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 106ab920; body size 73 bytes.
struct Recovered_106ab920 { int * FUN_106ab920(int *param_2,int *param_3); };
#line 1 "ENTRY_106ab920"

int * Recovered_106ab920::FUN_106ab920(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 106ac610; body size 93 bytes.

int * FUN_106ac610(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == param_1) {
    return param_3;
  }
  do {
    iVar2 = param_2[-2];
    piVar4 = param_2 + -2;
    piVar3 = param_3 + -2;
    if (iVar2 != *piVar3) {
      piVar1 = (int *)param_3[-1];
      if (piVar1 != (int *)0x0) {
        *piVar3 = 0;
        param_3[-1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *piVar4;
      }
      *piVar3 = iVar2;
      piVar1 = (int *)param_2[-1];
      param_3[-1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = piVar3;
    param_2 = piVar4;
  } while (piVar4 != param_1);
  return piVar3;
}


// Reference entry 106ac6f0; body size 92 bytes.

int * FUN_106ac6f0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = *param_1;
    if (iVar2 != *param_3) {
      piVar1 = (int *)param_3[1];
      if (piVar1 != (int *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *param_1;
      }
      *param_3 = iVar2;
      piVar1 = (int *)param_1[1];
      param_3[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 106b21b0; body size 87 bytes.
struct Recovered_106b21b0 { int FUN_106b21b0(int *param_2); };
#line 1 "ENTRY_106b21b0"

int Recovered_106b21b0::FUN_106b21b0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
        param_2[9] = 0;
        return param_1;
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return param_1;
}


// Reference entry 106b5300; body size 81 bytes.
struct Recovered_106b5300 { int * FUN_106b5300(int *param_2); };
#line 1 "ENTRY_106b5300"

int * Recovered_106b5300::FUN_106b5300(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106b5370; body size 81 bytes.
struct Recovered_106b5370 { int * FUN_106b5370(int *param_2); };
#line 1 "ENTRY_106b5370"

int * Recovered_106b5370::FUN_106b5370(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106b53e0; body size 81 bytes.
struct Recovered_106b53e0 { int * FUN_106b53e0(int *param_2); };
#line 1 "ENTRY_106b53e0"

int * Recovered_106b53e0::FUN_106b53e0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106b54b0; body size 89 bytes.
struct Recovered_106b54b0 { int * FUN_106b54b0(int param_2); };
#line 1 "ENTRY_106b54b0"

int * Recovered_106b54b0::FUN_106b54b0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = param_2;
    if (param_2 != 0) {
      piVar1 = (int *)(**(code **)(*(int *)(param_2 + 200) + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106b5520; body size 81 bytes.
struct Recovered_106b5520 { int * FUN_106b5520(int *param_2); };
#line 1 "ENTRY_106b5520"

int * Recovered_106b5520::FUN_106b5520(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106ba360; body size 79 bytes.
struct Recovered_106ba360 { void FUN_106ba360(int param_2); };
#line 1 "ENTRY_106ba360"

void Recovered_106ba360::FUN_106ba360(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 106ba3d0; body size 79 bytes.
struct Recovered_106ba3d0 { void FUN_106ba3d0(int param_2); };
#line 1 "ENTRY_106ba3d0"

void Recovered_106ba3d0::FUN_106ba3d0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 106ba880; body size 83 bytes.
struct Recovered_106ba880 { void FUN_106ba880(int *param_2); };
#line 1 "ENTRY_106ba880"

void Recovered_106ba880::FUN_106ba880(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 106ba8f0; body size 83 bytes.
struct Recovered_106ba8f0 { void FUN_106ba8f0(int *param_2); };
#line 1 "ENTRY_106ba8f0"

void Recovered_106ba8f0::FUN_106ba8f0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 106d0ca0; body size 135 bytes.

void __fastcall FUN_106d0ca0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 106d41e0; body size 79 bytes.
struct Recovered_106d41e0 { void FUN_106d41e0(int param_2); };
#line 1 "ENTRY_106d41e0"

void Recovered_106d41e0::FUN_106d41e0(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 106d4340; body size 83 bytes.
struct Recovered_106d4340 { void FUN_106d4340(int *param_2); };
#line 1 "ENTRY_106d4340"

void Recovered_106d4340::FUN_106d4340(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 106d9340; body size 73 bytes.
struct Recovered_106d9340 { int * FUN_106d9340(int *param_2,uint *param_3); };
#line 1 "ENTRY_106d9340"

int * Recovered_106d9340::FUN_106d9340(int *param_2,uint *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_3;
    do {
      *param_2 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 106d93a0; body size 73 bytes.
struct Recovered_106d93a0 { int * FUN_106d93a0(int *param_2,uint *param_3); };
#line 1 "ENTRY_106d93a0"

int * Recovered_106d93a0::FUN_106d93a0(int *param_2,uint *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_3;
    do {
      *param_2 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 106e0a40; body size 73 bytes.
struct Recovered_106e0a40 { int * FUN_106e0a40(int *param_2,int *param_3); };
#line 1 "ENTRY_106e0a40"

int * Recovered_106e0a40::FUN_106e0a40(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 106e5b00; body size 81 bytes.
struct Recovered_106e5b00 { int * FUN_106e5b00(int *param_2); };
#line 1 "ENTRY_106e5b00"

int * Recovered_106e5b00::FUN_106e5b00(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 106e7520; body size 79 bytes.
struct Recovered_106e7520 { void FUN_106e7520(int param_2); };
#line 1 "ENTRY_106e7520"

void Recovered_106e7520::FUN_106e7520(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 106e75e0; body size 83 bytes.
struct Recovered_106e75e0 { void FUN_106e75e0(int *param_2); };
#line 1 "ENTRY_106e75e0"

void Recovered_106e75e0::FUN_106e75e0(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 106f70a0; body size 78 bytes.
struct Recovered_106f70a0 { int * FUN_106f70a0(int *param_2); };
#line 1 "ENTRY_106f70a0"

int * Recovered_106f70a0::FUN_106f70a0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10708cd0; body size 78 bytes.
struct Recovered_10708cd0 { int * FUN_10708cd0(int *param_2); };
#line 1 "ENTRY_10708cd0"

int * Recovered_10708cd0::FUN_10708cd0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10708d40; body size 78 bytes.
struct Recovered_10708d40 { int * FUN_10708d40(int *param_2); };
#line 1 "ENTRY_10708d40"

int * Recovered_10708d40::FUN_10708d40(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10712310; body size 78 bytes.
struct Recovered_10712310 { int * FUN_10712310(int *param_2); };
#line 1 "ENTRY_10712310"

int * Recovered_10712310::FUN_10712310(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10723720; body size 78 bytes.
struct Recovered_10723720 { int * FUN_10723720(int *param_2); };
#line 1 "ENTRY_10723720"

int * Recovered_10723720::FUN_10723720(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10723ea0; body size 73 bytes.
struct Recovered_10723ea0 { int * FUN_10723ea0(int *param_2,int *param_3); };
#line 1 "ENTRY_10723ea0"

int * Recovered_10723ea0::FUN_10723ea0(int *param_2,int *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  puVar3 = *(undefined4 **)(iVar1 + 4);
  *param_2 = (int)puVar3;
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (int)puVar3;
      iVar2 = puVar3[4];
      if (iVar1 <= iVar2) {
        param_2[2] = (int)puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        puVar3 = (undefined4 *)puVar3[2];
      }
      param_2[1] = (uint)(iVar1 <= iVar2);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return param_2;
}


// Reference entry 1072bf50; body size 116 bytes.

int * __fastcall FUN_1072bf50(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = piVar2[2];
    return param_1;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0xd);
    iVar4 = *(int *)(iVar3 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *param_1 = iVar3;
  }
  else {
    cVar1 = *(char *)(piVar2[1] + 0xd);
    piVar5 = (int *)piVar2[1];
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)piVar5;
      cVar1 = *(char *)(piVar5[1] + 0xd);
      piVar2 = piVar5;
      piVar5 = (int *)piVar5[1];
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)piVar5;
      return param_1;
    }
  }
  return param_1;
}


// Reference entry 10762630; body size 78 bytes.
struct Recovered_10762630 { int * FUN_10762630(int *param_2); };
#line 1 "ENTRY_10762630"

int * Recovered_10762630::FUN_10762630(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10772eb0; body size 91 bytes.
struct Recovered_10772eb0 { int * FUN_10772eb0(int *param_2); };
#line 1 "ENTRY_10772eb0"

int * Recovered_10772eb0::FUN_10772eb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 107744c0; body size 81 bytes.
struct Recovered_107744c0 { int * FUN_107744c0(int *param_2); };
#line 1 "ENTRY_107744c0"

int * Recovered_107744c0::FUN_107744c0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10785ae0; body size 91 bytes.
struct Recovered_10785ae0 { int * FUN_10785ae0(int *param_2); };
#line 1 "ENTRY_10785ae0"

int * Recovered_10785ae0::FUN_10785ae0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10785b80; body size 78 bytes.
struct Recovered_10785b80 { int * FUN_10785b80(int *param_2); };
#line 1 "ENTRY_10785b80"

int * Recovered_10785b80::FUN_10785b80(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10790020; body size 81 bytes.
struct Recovered_10790020 { int * FUN_10790020(int *param_2); };
#line 1 "ENTRY_10790020"

int * Recovered_10790020::FUN_10790020(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10790090; body size 81 bytes.
struct Recovered_10790090 { int * FUN_10790090(int *param_2); };
#line 1 "ENTRY_10790090"

int * Recovered_10790090::FUN_10790090(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10790100; body size 81 bytes.
struct Recovered_10790100 { int * FUN_10790100(int *param_2); };
#line 1 "ENTRY_10790100"

int * Recovered_10790100::FUN_10790100(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10790170; body size 81 bytes.
struct Recovered_10790170 { int * FUN_10790170(int *param_2); };
#line 1 "ENTRY_10790170"

int * Recovered_10790170::FUN_10790170(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 107cc390; body size 101 bytes.
struct Recovered_107cc390 { void FUN_107cc390(int *param_2); };
#line 1 "ENTRY_107cc390"

void Recovered_107cc390::FUN_107cc390(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x100)) {
    piVar1 = *(int **)(param_1 + 0x104);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x100) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0x104) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 107e53d0; body size 101 bytes.
struct Recovered_107e53d0 { void FUN_107e53d0(int *param_2); };
#line 1 "ENTRY_107e53d0"

void Recovered_107e53d0::FUN_107e53d0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0xe8)) {
    piVar1 = *(int **)(param_1 + 0xec);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xe8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      *(int **)(param_1 + 0xec) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


// Reference entry 107e6cb0; body size 81 bytes.
struct Recovered_107e6cb0 { int * FUN_107e6cb0(int *param_2); };
#line 1 "ENTRY_107e6cb0"

int * Recovered_107e6cb0::FUN_107e6cb0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 1083f700; body size 78 bytes.
struct Recovered_1083f700 { int * FUN_1083f700(int *param_2); };
#line 1 "ENTRY_1083f700"

int * Recovered_1083f700::FUN_1083f700(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 10846a20; body size 81 bytes.
struct Recovered_10846a20 { int * FUN_10846a20(int *param_2); };
#line 1 "ENTRY_10846a20"

int * Recovered_10846a20::FUN_10846a20(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10846a90; body size 81 bytes.
struct Recovered_10846a90 { int * FUN_10846a90(int *param_2); };
#line 1 "ENTRY_10846a90"

int * Recovered_10846a90::FUN_10846a90(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 108622f0; body size 81 bytes.
struct Recovered_108622f0 { int * FUN_108622f0(int *param_2); };
#line 1 "ENTRY_108622f0"

int * Recovered_108622f0::FUN_108622f0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}


// Reference entry 10875b40; body size 88 bytes.
struct Recovered_10875b40 { int * FUN_10875b40(int *param_2, unsigned int recovered_unused_stack_0); };
#line 1 "ENTRY_10875b40"

int * Recovered_10875b40::FUN_10875b40(int *param_2, unsigned int recovered_unused_stack_0)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  *param_2 = (int)piVar3;
  piVar4 = (int *)piVar3[2];
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    piVar4 = (int *)piVar3[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      while (piVar3 == (int *)piVar4[2]) {
        *param_1 = (int)piVar4;
        piVar2 = (int *)piVar4[1];
        piVar3 = piVar4;
        piVar4 = piVar2;
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          *param_1 = (int)piVar2;
          return param_2;
        }
      }
    }
  }
  *param_1 = (int)piVar4;
  return param_2;
}


// Reference entry 1095b180; body size 78 bytes.
struct Recovered_1095b180 { int * FUN_1095b180(int *param_2); };
#line 1 "ENTRY_1095b180"

int * Recovered_1095b180::FUN_1095b180(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    param_1[1] = iVar3;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}


// Reference entry 1095c840; body size 100 bytes.
struct Recovered_1095c840 { void FUN_1095c840(int *param_2,int param_3); };
#line 1 "ENTRY_1095c840"

void Recovered_1095c840::FUN_1095c840(int *param_2,int param_3)

{
  int * param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = param_1[1];
  if ((param_3 < 0) && (uVar1 < (uint)-param_3)) {
    *param_2 = *param_1 - ((~(uVar1 + param_3) >> 5) * 4 + 4);
    param_2[1] = uVar1 + param_3 & 0x1f;
    return;
  }
  *param_2 = *param_1 + (uVar1 + param_3 >> 5) * 4;
  param_2[1] = uVar1 + param_3 & 0x1f;
  return;
}


// Reference entry 10962930; body size 65 bytes.
struct Recovered_10962930 { int * FUN_10962930(int *param_2); };
#line 1 "ENTRY_10962930"

int * Recovered_10962930::FUN_10962930(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 10991950; body size 79 bytes.
struct Recovered_10991950 { void FUN_10991950(int param_2); };
#line 1 "ENTRY_10991950"

void Recovered_10991950::FUN_10991950(int param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*param_1 + 4)) {
    *(int **)(*param_1 + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10991a50; body size 83 bytes.
struct Recovered_10991a50 { void FUN_10991a50(int *param_2); };
#line 1 "ENTRY_10991a50"

void Recovered_10991a50::FUN_10991a50(int *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*param_1 + 4)) {
    *(int *)(*param_1 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}


// Reference entry 109a96b0; body size 81 bytes.
struct Recovered_109a96b0 { int * FUN_109a96b0(int *param_2); };
#line 1 "ENTRY_109a96b0"

int * Recovered_109a96b0::FUN_109a96b0(int *param_2)

{
  int * param_1 = (int *)this;
  int *piVar1;
  
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}

