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

extern undefined4 DAT_1188465c;
extern undefined4 DAT_12126b84;
extern char FUN_10091f7e(...);
extern int FUN_110ceb10(...);
extern int free(...);
extern int thunk_FUN_101b9a40(...);
extern undefined4 thunk_FUN_1109aba0(...);
extern int thunk_FUN_110ceea0(...);
extern int thunk_FUN_110d6310(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern char thunk_FUN_1127caf0(...);
extern int thunk_FUN_113cfb70(...);
// Reference entry 110ceb10; body size 726 bytes.
namespace recovered_110ceb10 {
#line 1 "ENTRY_110ceb10"

int ******* __thiscall FUN_110ceb10(int param_1,int *******param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  int *******pppppppiVar4;
  undefined4 uVar5;
  int *******_Memory;
  int ******ppppppiVar6;
  int ******local_20;
  int ******local_1c;
  undefined4 local_18;
  int ******local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  *param_2 = (int ******)0x0;
  ((void)0);
  local_18 = 1;
  if (*(char *)(param_1 + 0x520) == '\0') {
    local_1c = (int ******)thunk_FUN_110d6310(&local_20);
    ((void)0);
    if ((int *******)local_1c != param_2) {
      ppppppiVar6 = *param_2;
      if (((ppppppiVar6 != (int ******)0x0) && ((int)ppppppiVar6[-4] < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0(ppppppiVar6 + -4), iVar3 == 0)) {
        ppppppiVar6[-2] = (int *****)0x0;
        ppppppiVar6[-3] = (int *****)0x0;
        thunk_FUN_113cfb70(ppppppiVar6,ppppppiVar6[-1]);
        free(ppppppiVar6 + -4);
      }
      ppppppiVar6 = (int ******)*local_1c;
      *param_2 = ppppppiVar6;
      if ((ppppppiVar6 != (int ******)0x0) && ((int)ppppppiVar6[-4] < 0xffff)) {
        thunk_FUN_1123fce0(ppppppiVar6 + -4);
      }
    }
    ((void)0);
    pppppppiVar4 = (int *******)local_20;
  }
  else {
    cVar1 = thunk_FUN_1127caf0(uVar2);
    if ((cVar1 == '\0') || (*(uint *)(param_1 + 0x568) < 2)) {
      if (((*(char *)(param_1 + 0x51e) != '\0') &&
          ((*(int *)(param_1 + 0x1c) == 0 ||
           (cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x378) + 4))(), cVar1 != '\0'))
          )) && ((*(int *)(param_1 + 0x1c) == 0 || (cVar1 = FUN_10091f7e(), cVar1 == '\0')))) {
        uVar5 = thunk_FUN_1109aba0(0x204,&DAT_1188465c,param_1 + 0xb8);
        thunk_FUN_111a10b0(param_2,uVar5);
        ((void)0);
        return param_2;
      }
      thunk_FUN_101b9a40(param_1 + 0xb8);
      ((void)0);
      if (&local_14 != param_2) {
        pppppppiVar4 = (int *******)*param_2;
        local_20 = (int ******)pppppppiVar4;
        if (((pppppppiVar4 != (int *******)0x0) && ((int)pppppppiVar4[-4] < 0xffff)) &&
           (iVar3 = thunk_FUN_1123fcd0(pppppppiVar4 + -4), iVar3 == 0)) {
          pppppppiVar4[-2] = (int ******)0x0;
          pppppppiVar4[-3] = (int ******)0x0;
          thunk_FUN_113cfb70(local_20,pppppppiVar4[-1]);
          free(pppppppiVar4 + -4);
        }
        *param_2 = local_14;
        if (((int *******)local_14 != (int *******)0x0) && ((int)local_14[-4] < 0xffff)) {
          thunk_FUN_1123fce0(local_14 + -4);
        }
      }
      ((void)0);
      if ((int *******)local_14 == (int *******)0x0) {
        ((void)0);
        return param_2;
      }
      _Memory = (int *******)(local_14 + -4);
      if (0xfffe < (int)*_Memory) {
        ((void)0);
        return param_2;
      }
      iVar3 = thunk_FUN_1123fcd0(_Memory);
      if (iVar3 != 0) {
        ((void)0);
        return param_2;
      }
      ppppppiVar6 = (int ******)local_14[-1];
      goto LAB_110cedb4;
    }
    local_20 = (int ******)thunk_FUN_110ceea0(&local_1c);
    ((void)0);
    if ((int *******)local_20 != param_2) {
      ppppppiVar6 = *param_2;
      if (((ppppppiVar6 != (int ******)0x0) && ((int)ppppppiVar6[-4] < 0xffff)) &&
         (iVar3 = thunk_FUN_1123fcd0(ppppppiVar6 + -4), iVar3 == 0)) {
        ppppppiVar6[-2] = (int *****)0x0;
        ppppppiVar6[-3] = (int *****)0x0;
        thunk_FUN_113cfb70(ppppppiVar6,ppppppiVar6[-1]);
        free(ppppppiVar6 + -4);
      }
      ppppppiVar6 = (int ******)*local_20;
      *param_2 = ppppppiVar6;
      if ((ppppppiVar6 != (int ******)0x0) && ((int)ppppppiVar6[-4] < 0xffff)) {
        thunk_FUN_1123fce0(ppppppiVar6 + -4);
      }
    }
    ((void)0);
    pppppppiVar4 = (int *******)local_1c;
  }
  if (pppppppiVar4 == (int *******)0x0) {
    ((void)0);
    return param_2;
  }
  _Memory = pppppppiVar4 + -4;
  if (0xfffe < (int)pppppppiVar4[-4]) {
    ((void)0);
    return param_2;
  }
  iVar3 = thunk_FUN_1123fcd0(_Memory);
  if (iVar3 != 0) {
    ((void)0);
    return param_2;
  }
  ppppppiVar6 = pppppppiVar4[-1];
  local_14 = (int ******)pppppppiVar4;
LAB_110cedb4:
  _Memory[2] = (int ******)0x0;
  _Memory[1] = (int ******)0x0;
  thunk_FUN_113cfb70(local_14,ppppppiVar6);
  free(_Memory);
  ((void)0);
  return param_2;
}


}
