extern "C" void LAB_A(void);
extern "C" void LAB_B(void);
__declspec(naked) void T1_mov_eax(void){ __asm mov eax, dword ptr [LAB_A] __asm ret }
__declspec(naked) void T2_call_ind(void){ __asm call dword ptr [LAB_A] __asm ret }
__declspec(naked) void T3_movups(void){ __asm movups xmm0, xmmword ptr [LAB_A] __asm ret }
__declspec(naked) void T4_inc(void){ __asm inc dword ptr [LAB_A] __asm ret }
__declspec(naked) void T5_push_off(void){ __asm push offset LAB_A __asm ret }
__declspec(naked) void T6_mov_imm(void){ __asm mov dword ptr [esp], offset LAB_A __asm ret }
__declspec(naked) void T7_jmp_ind(void){ __asm jmp dword ptr [LAB_A] }
__declspec(naked) void T8_mix(void){ __asm mov eax, dword ptr [LAB_B] __asm mov dword ptr [LAB_A], eax __asm call LAB_B __asm ret }
