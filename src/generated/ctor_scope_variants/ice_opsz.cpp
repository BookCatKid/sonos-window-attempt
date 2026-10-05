extern "C" unsigned char LAB_A;
extern "C" unsigned char LAB_B;
__declspec(naked) void T_byte(void){ __asm mov al, byte ptr [LAB_A] __asm ret }
__declspec(naked) void T_word(void){ __asm mov ax, word ptr [LAB_A] __asm ret }
__declspec(naked) void T_dword(void){ __asm mov eax, dword ptr [LAB_A] __asm ret }
__declspec(naked) void T_addw(void){ __asm add ax, word ptr [LAB_A] __asm ret }
__declspec(naked) void T_callind(void){ __asm call dword ptr [LAB_A] }
__declspec(naked) void T_call(void){ __asm call LAB_A }
__declspec(naked) void T_jmp(void){ __asm jmp LAB_A }
__declspec(naked) void T_off(void){ __asm mov eax, offset LAB_A __asm ret }
__declspec(naked) void T_stb(void){ __asm mov byte ptr [LAB_B], al __asm ret }
__declspec(naked) void T_stw(void){ __asm mov word ptr [LAB_B], 0 __asm ret }
__declspec(naked) void T_std(void){ __asm mov dword ptr [LAB_B], 0 __asm ret }
