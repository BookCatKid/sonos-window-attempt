
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

### Checkpoint — virtual member dispatch (partial, MSVC run 37286056838)

81,770 vtable-indexed call sites `(*(code ***)obj)[k](args)` rewritten to
real virtual member calls through generated stub structs
`SCVtbl_{slot}_{arity}` (commit 06b414c). MSVC emits the reference's
`call dword ptr [eax+N]` form plus thiscall callee-cleanup (matching
`__thiscall` semantics: no caller-side `add esp`). Verified on the 45 of
82 touched objects that built: **+1,047 exact functions, +33,837 exact
bytes, zero regressions**. The other 38 objects failed to compile —
pre-existing stdcall decl/def conflicts (C2373) and one
overloaded-function ambiguity from the unverified stdcall commit
e8a7f37; both fixed in ca8b5d2, verification pending. Stdcall
verification note: run 37283901547 actually built pre-stdcall sha
7995911, so the stdcall transform is unverified until the next run.
Whole-file identity not achieved.

### Checkpoint — virtual member dispatch verified (MSVC runs 37286056838/37288187858)

Full verification of the SCVtbl stub rewrite across all 83 touched
objects: **+2,206 exact functions, +59,739 exact bytes, zero
regressions**. The companion stdcall-declaration pass (e8a7f37) proved
byte-neutral on its own (0 flips in the 56 stdcall-only objects, +82
fixed bytes net) — its real ABI benefit is subsumed by virtual-member
thiscall callee-cleanup — but it is kept since it is the faithful
convention and caused no losses. Its C2373 decl/def conflicts were
repaired in ca8b5d2 and a follow-up covering comment-prefixed defs;
all 182 objects again compile under pinned MSVC 14.28. Corpus:
**137,509 / 230,070 exact (59.8%)**, 1,936,546 exact reference bytes.
Residual leaders: +2 (10.6K), +5 (5.7K), +41 (4.8K), +3 (4.7K).
Whole-file identity not achieved.

### Checkpoint — deref-style vtable calls (MSVC run 37292907870)

36,463 additional call sites of the forms `(**(code **)E)(args)` and
`(**(code **)(E + off))(args)` — where E is a dereference yielding the
vtable pointer — rewritten to virtual-member calls on the same SCVtbl
stub family (E stripped of one deref gives the object expression;
`X[K]` becomes `&X[K]`). Verified: **+1,922 exact functions, +47,653
exact bytes, zero regressions** across 85 objects. Also fixed three
residual stdcall decl/def conflicts; all 451 objects compile. Corpus:
**139,431 / 230,070 exact (60.6%)**, ~1.98M exact reference bytes.
Whole-file identity not achieved.
