extern "C" void LAB_1000b73a(void);
extern "C" void LAB_10022a57(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_1004a15b(void);
extern "C" void LAB_1004fff7(void);
extern "C" void LAB_1005a0ab(void);
extern "C" void LAB_100699e8(void);
extern "C" void LAB_116cece8(void);
extern "C" void LAB_11831660(void);
extern "C" void LAB_11913d44(void);
extern "C" void LAB_11913d54(void);
extern "C" void LAB_11913d64(void);
extern "C" void LAB_11913d74(void);
extern "C" void LAB_11913d84(void);
extern "C" void LAB_11913d94(void);
extern "C" void LAB_11913d98(void);
extern "C" void LAB_11913da0(void);
extern "C" void LAB_11913da8(void);
extern "C" void LAB_11913dac(void);
extern "C" void LAB_11913dae(void);
extern "C" void LAB_11913db4(void);
extern "C" void LAB_11913dc4(void);
extern "C" void LAB_11913dc8(void);
extern "C" void LAB_11913dd0(void);
extern "C" void LAB_11913de0(void);
extern "C" void LAB_11913de2(void);
extern "C" void LAB_11913de8(void);
extern "C" void LAB_11913df8(void);
extern "C" void LAB_11913dfc(void);
extern "C" void LAB_11913e04(void);
extern "C" void LAB_11913e14(void);
extern "C" void LAB_11913e1c(void);
extern "C" void LAB_11913e24(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a5268(void);
extern "C" void LAB_121a526c(void);
extern "C" void LAB_121a5270(void);
extern "C" void LAB_121a5274(void);
extern "C" void LAB_121a5278(void);
extern "C" void LAB_121a527c(void);
extern "C" void LAB_121a5280(void);
extern "C" void LAB_121a5284(void);
__declspec(naked) void FUN_slice4(void)
{
  __asm _emit 0x66 __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x10
  __asm movzx ecx, byte ptr [LAB_11913de2]
  __asm _emit 0x88 __asm _emit 0x48 __asm _emit 0x12 __asm _emit 0xc6 __asm _emit 0x40 __asm _emit 0x13 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x45 __asm _emit 0x90 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x8d __asm _emit 0x4d __asm _emit 0xa8 __asm _emit 0xc6
  __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x05 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc6 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x00
  __asm call LAB_1000b73a
  __asm movups xmm0, xmmword ptr [LAB_11913de8]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xb8 __asm _emit 0x15 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xbc __asm _emit 0x1f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x11
  __asm _emit 0x00
  __asm mov ecx, dword ptr [LAB_11913df8]
  __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x10
  __asm movzx ecx, byte ptr [LAB_11913dfc]
  __asm _emit 0x88 __asm _emit 0x48 __asm _emit 0x14 __asm _emit 0xc6 __asm _emit 0x40 __asm _emit 0x15 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x45 __asm _emit 0xa8 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x8d __asm _emit 0x4d __asm _emit 0xc0 __asm _emit 0xc6
  __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x06 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc6 __asm _emit 0x45 __asm _emit 0xc0 __asm _emit 0x00
}
