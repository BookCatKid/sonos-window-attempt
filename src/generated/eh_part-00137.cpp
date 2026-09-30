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
extern int FUN_11151670(...);
extern int free(...);
extern int memcpy(...);
extern undefined4 thunk_FUN_111a2df0(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a4540(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 11151670; body size 290 bytes.
namespace recovered_11151670 {
#line 1 "ENTRY_11151670"

undefined4 __thiscall FUN_11151670(int param_1,undefined4 *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *_Src;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  size_t _Size;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  uVar4 = thunk_FUN_111a2df0();
  _Src = (char *)(**(code **)(**(int **)(param_1 + 0x20) + 0x4c))(uVar3,uVar4);
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    pcVar7 = _Src;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar7 - (int)(_Src + 1);
    puVar5 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11);
    puVar1 = puVar5 + 4;
    *puVar5 = 1;
    puVar5[3] = _Size;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_2 = puVar1;
  }
  ((void)0);
  thunk_FUN_111a4540(&param_2);
  puVar1 = param_2;
  ((void)0);
  if ((param_2 != (undefined4 *)0x0) && (puVar5 = param_2 + -4, (int)param_2[-4] < 0xffff)) {
    iVar6 = thunk_FUN_1123fcd0(puVar5);
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  ((void)0);
  return 0;
}


}
