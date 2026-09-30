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
extern int FUN_110ce920(...);
extern int thunk_FUN_101ba300(...);
extern undefined4 thunk_FUN_110d9580(...);
extern char thunk_FUN_111a0640(...);
extern char thunk_FUN_1127caf0(...);
extern char thunk_FUN_1127cb00(...);
// Reference entry 110ce920; body size 309 bytes.
namespace recovered_110ce920 {
#line 1 "ENTRY_110ce920"

undefined4 __fastcall FUN_110ce920(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_18 [4];
  undefined1 local_14 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (*(char *)(param_1 + 0xa70) != '\0') {
    cVar1 = thunk_FUN_1127caf0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) &&
       (cVar1 = thunk_FUN_1127cb00(), cVar1 != '\0')) {
      ((void)0);
      return 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x1c) != 0) && (cVar1 = FUN_10091f7e(), cVar1 != '\0')) {
      ((void)0);
      return 0xffffffff;
    }
    uVar2 = thunk_FUN_110d9580(local_14,0);
    ((void)0);
    puVar3 = &DAT_1186d2ee;
    if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_1 + 0x5c);
    }
    cVar1 = thunk_FUN_111a0640(puVar3,uVar2);
    ((void)0);
    thunk_FUN_101ba300();
    if (cVar1 != '\0') {
      ((void)0);
      return 4;
    }
    uVar2 = thunk_FUN_110d9580(local_18,1);
    puVar3 = &DAT_1186d2ee;
    if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_1 + 0x5c);
    }
    ((void)0);
    cVar1 = thunk_FUN_111a0640(puVar3,uVar2);
    thunk_FUN_101ba300();
    if (cVar1 != '\0') {
      ((void)0);
      return 5;
    }
  }
  ((void)0);
  return 0xffffffff;
}


}
