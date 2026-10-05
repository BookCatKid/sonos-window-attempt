extern "C" void LAB_A(void);
extern "C" void LAB_B(void);
__declspec(naked) void T_byte(void){ __asm mov al, byte ptr [LAB_A] __asm ret }
__declspec(naked) void T_word(void){ __asm mov ax, word ptr [LAB_A] __asm ret }
__declspec(naked) void T_addw(void){ __asm add ax, word ptr [LAB_A] __asm ret }
__declspec(naked) void T_callind(void){ __asm call dword ptr [LAB_A] }
__declspec(naked) void T_bytecl(void){ __asm mov cl, byte ptr [LAB_B] __asm ret }
