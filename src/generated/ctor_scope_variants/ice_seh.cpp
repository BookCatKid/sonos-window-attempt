extern "C" void LAB_H1(void);
extern "C" void LAB_H2(void);
extern "C" void LAB_D(void);
__declspec(naked) void FUN_seh(void)
{
  __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0xec __asm _emit 0x6a __asm _emit 0xff
  __asm push offset LAB_H1
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50
  __asm mov eax, dword ptr [LAB_D]
  __asm _emit 0x33 __asm _emit 0xc5 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x45 __asm _emit 0xf4
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_H2
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}
