
### Checkpoint — __ehhandler funclets as naked asm (MSVC run 37279366104)

29,391 C++ EH handler funclets rewritten from `call thunk; return
__CxxFrameHandler3()` stubs to `__declspec(naked) __asm` bodies that
reproduce the reference's GS-cookie-validating handler: load the
establisher frame (`mov edx,[esp+8]`), validate the pushed cookie
(`mov ecx,[edx-N]; xor ecx,eax; call thunk_FUN_1148ac28`), load the
per-function `FuncInfo_*`/`DAT_*` table, and `jmp FUN_1148cde7` (the
import thunk site). Result: +29,391 exact functions, +796,890 exact
bytes, zero regressions across the 24 touched objects. The 279
remaining 20-byte tail-entry variants were rewritten in a follow-up
commit pending verification. Corpus: 135,303/230,070 exact (58.8%),
1,876,807 exact reference bytes. A prior 82-file vtable-subscript
experiment (commit 08d0904) produced byte-identical objects — MSVC
emits `mov eax,[eax+N]; call eax` for both function-pointer indexing
and subscript forms; the reference `call [reg+disp]` shape requires
real virtual-member dispatch, not generic function pointers.
Whole-file identity not achieved.
