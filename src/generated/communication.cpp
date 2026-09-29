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
extern int thunk_FUN_1107f630(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0210(...);
extern int thunk_FUN_1114a810(...);
extern int thunk_FUN_1116d520(...);
extern int thunk_FUN_11253130(...);
// Reference entry 1037e840; body size 5 bytes.
#line 1 "ENTRY_1037e840"

undefined2 __fastcall FUN_1037e840(int param_1)

{
  return *(undefined2 *)(param_1 + 0x24);
}


// Reference entry 10383540; body size 9 bytes.
#line 1 "ENTRY_10383540"

int __fastcall FUN_10383540(int param_1)

{
  return *(int *)(param_1 + 0x18) + 0xd7d0;
}


// Reference entry 11096620; body size 61 bytes.
#line 1 "ENTRY_11096620"

void __fastcall FUN_11096620(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  thunk_FUN_1107f630();
  piVar1 = (int *)thunk_FUN_1114a810();
  (**(code **)(*piVar1 + 8))();
  thunk_FUN_1107f630();
  thunk_FUN_1109f7f0();
  thunk_FUN_110a0210();
  thunk_FUN_1116d520();
  return;
}


// Reference entry 11252c80; body size 255 bytes.
#line 1 "ENTRY_11252c80"

char * __fastcall FUN_11252c80(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  char *local_c;
  
  iVar4 = thunk_FUN_11253130();
  pcVar9 = *(char **)(param_1 + 0x20);
  pcVar1 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  pcVar7 = *(char **)(param_1 + 0x24);
  pcVar2 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  iVar5 = 0x6c;
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = 0xae;
  }
  pcVar8 = pcVar9 + ((iVar5 + iVar4 + ((int)pcVar7 - (int)pcVar2) * 2) - (int)pcVar1) + 0x10;
  if (*(char *)(param_1 + 0x28) == '\0') {
    pcVar8 = pcVar9 + ((iVar5 + iVar4 + ((int)pcVar7 - (int)pcVar2) * 2) - (int)pcVar1);
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    piVar11 = (int *)(param_1 + 0x2c);
    local_c = pcVar8;
    do {
      iVar4 = *piVar11;
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 8) == 0) {
          pcVar7 = (char *)0x0;
          local_c = pcVar8;
        }
        else {
          iVar5 = thunk_FUN_11253130();
          pcVar9 = *(char **)(iVar4 + 0x24);
          pcVar1 = pcVar9 + 1;
          do {
            cVar3 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar3 != '\0');
          pcVar7 = *(char **)(iVar4 + 0x20);
          pcVar2 = pcVar7 + 1;
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          iVar10 = 0x15;
          if (*(char *)(iVar4 + 0xc2d) == '\0') {
            iVar10 = 0;
          }
          iVar6 = 0x1a;
          if (*(int *)(iVar4 + 4) == 0) {
            iVar6 = 0x20;
          }
          pcVar7 = pcVar7 + iVar5 + -0xc +
                            ((int)pcVar9 - (int)pcVar1) * 2 + iVar10 + (iVar6 - (int)pcVar2);
        }
        pcVar8 = local_c + (int)pcVar7;
        local_c = pcVar8;
      }
      uVar12 = uVar12 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x38));
  }
  return pcVar8;
}

