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
__declspec(naked) void FUN_slice2(void)
{
  __asm mov ecx, dword ptr [LAB_11913d94]
  __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x10
  __asm movzx ecx, word ptr [LAB_11913d98]
  __asm _emit 0x66 __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x14 __asm _emit 0xc6 __asm _emit 0x40 __asm _emit 0x16 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x85 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov eax, dword ptr [LAB_11913da8]
  __asm movq xmm0, qword ptr [LAB_11913da0]
  __asm _emit 0x89 __asm _emit 0x85 __asm _emit 0x68 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov ax, word ptr [LAB_11913dac]
  __asm _emit 0x66 __asm _emit 0x89 __asm _emit 0x85 __asm _emit 0x6c __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov al, byte ptr [LAB_11913dae]
  __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x74 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x85 __asm _emit 0x70 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm _emit 0x0f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0xd6 __asm _emit 0x85 __asm _emit 0x60 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x88 __asm _emit 0x85 __asm _emit 0x6e __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc6 __asm _emit 0x85 __asm _emit 0x6f __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x20 __asm _emit 0x8d __asm _emit 0x8d __asm _emit 0x78 __asm _emit 0xff __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xc6 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x8c __asm _emit 0x0f
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc6 __asm _emit 0x85 __asm _emit 0x78 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x00
}
