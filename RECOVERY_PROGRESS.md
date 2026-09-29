# Recovery checkpoint: 2026-09-29

The target remains a C++ rebuilt DLL matching at least 95% of the reference by byte and PE metrics. No Sonos/DLL execution and no assembly embedding are permitted.

## SCStr expansion

Commit `04d8031` adds placement constructors, exported method overloads, exported-definition normalization, global declarations, and support for lowering vtable addresses. The generated source is `src/generated/scstr_expanded.cpp`; its inventory is `src/generated/scstr-expanded-index.tsv`.

Local x86 clang-cl syntax/object gate: 4,033 candidates, 4,019 compiled functions, 223,870 reference body bytes, 14 rejected functions. Relative to the existing SCStr inventory, all 2,306 old entries are retained and 1,713 entries / 78,278 reference bytes are added. No vtable references survived eligibility in this particular tranche; the lowering is available for later mixed-function recovery. Caller-frame-dependent unwind handlers remain excluded.

Pinned MSVC 14.28 build succeeded: https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36619654703 . Both `scstr_expanded_o2.obj` and `scstr_expanded_reference_flags.obj` were downloaded and compared with all 4,019 entries mapped. Each variant verifies 925 exact function bodies / 80,277 reference bytes after resolving relocation placement constraints; 927 functions / 80,313 bytes have matching non-relocation bytes and lengths. All 787 previously verified SCStr entries are retained. Local authoritative reports are under `analysis/compiled-cpp-scstr-expanded` and objects under `analysis/msvc-14-28-x86-objects-04d8031-run36619654703`.

## Relocation verification

The comparator now maps SCStr decorated signatures from `analysis/exports.csv` through reference incremental-link jumps. It ignores access control and char-pointee constness, which do not change the x86 call ABI; overloads and calling conventions remain distinguished. It also verifies narrow string contents at candidate reference addresses before accepting literal placement constraints. Wide strings are not handled by this pass.

Rechecking the existing MSVC SCStr object verifies 787 matching function bodies / 74,734 reference bytes. Including the expanded tranche, the disjoint union with recovered thunks and vtables totals 25,647 exact bodies / 322,515 reference body bytes under their original-address placement constraints. The comparator also resolves declared DAT/PTR/string global symbols using exported Ghidra symbols; explicit DAT addresses provide a fallback when no symbol mapping exists.

These scores compare compiled object bodies after relocation resolution. A linked DLL with the required section layout and data placement has not been produced or measured at 95%. The verified literal addresses are constraints for the eventual linker/layout reconstruction, not evidence that a current linked DLL already places them there.


## Direct jump tranche

Commit `f5be3ed` generates 127,119 ordinary C++ tail-transfer wrappers in 32 chunks under `src/generated/direct_jumps`. Each wrapper is a return expression calling a separately declared target; no assembly, raw instruction byte arrays, or DLL execution is involved. Destinations are decoded from the reference jump instructions and carried by explicit target symbols. The no-argument prototypes are opaque compiler-facing anchors, not recovered API types; those types still require recovery.

Pinned MSVC 14.28 build succeeded: https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36623035632 . All 127,119 functions / 635,595 reference bytes match after destination relocation, with zero unresolved relocations. The independent local clang-cl comparison produced the same result. Final linker address placement has not yet been reconstructed.

The combined MSVC audit in `analysis/recovery-coverage-msvc.json` reports 152,765 distinct matching function bodies / 958,105 distinct reference bytes. One five-byte entry overlaps the earlier function inventory and is counted only once. No overlapping byte ranges remain after merging. Against the full 25,582,672-byte executable `.text` virtual span, verified body coverage is 3.745133%. The 95% threshold would require 24,303,539 executable bytes; function count is not a substitute for that requirement. This is object-body coverage under relocation placement constraints, not an achieved linked-DLL equality score.

## ABI recovery evidence

The offline export at `analysis/all-recovered-signatures.jsonl` contains 302,450 signatures with parameter and pointee sizes where available. Only 961 have parameters, and 301,436 have unknown calling conventions. These saved prototypes alone cannot replace generic calls across the corpus. The next ABI recovery pass must use the inferred headers from the existing decompiler output, with saved type metadata as supporting evidence. The enhanced exporter accepts `--project-dir` and `--namespace '*'` without launching Sonos.


## Inferred call ABI tranche

Commit `763c707` adds `tools/recovered_call_abi.py` and `tools/compile_typed_ghidra_cpp.py`. The call resolver parses the inferred C headers already present in the decompilation corpus and follows the actual reference jump chains before selecting a callee prototype. Primitive values and opaque pointers are admitted; unknown by-value class layouts are excluded. Genuine synthetic C++ member declarations preserve thiscall receivers in ECX. Separate typed call aliases let unsupported calls retain their earlier provisional declarations without conflicting with typed declarations elsewhere in a translation unit.

Local syntax/object gates accept 1,971 native functions / 137,738 reference bytes with 3,213 typed call sites, plus 70 SCStr functions / 8,257 bytes with 111 typed call sites. The generated variants are `src/generated/native_typed.cpp` and `src/generated/scstr_typed.cpp`. The existing matching source variants remain available.

Pinned MSVC 14.28 run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36624965852 succeeded. Both native compiler flag variants verify 497 exact bodies / 19,821 bytes after relocation resolution; the SCStr variant verifies six / 621 bytes. After removing overlap with prior matching variants, this adds 359 functions / 13,978 distinct reference bytes.

The updated authoritative MSVC audit is `analysis/recovery-coverage-msvc-typed.json`: 153,124 distinct matching bodies / 972,083 distinct reference bytes, or 3.799771% of the executable virtual span. No linked DLL has been verified at 95%. Callers still need more recovery where arguments are implicit in registers, inferred prototypes disagree with caller use, or EH scaffolding must be expressed through C++ lifetimes. Merely changing declarations cannot repair those source structures.


## Compiler sweep and virtual receiver recovery

The eight-profile, four-family pinned MSVC sweep succeeded in run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36626235420 . Rechecking the original O2 bulk object with the improved relocation comparator explains most apparent new matches. Relative to freshly rechecked family baselines, alternate flags add only 16 distinct functions / 251 bytes. The full audited checkpoint `analysis/recovery-coverage-msvc-sweep.json` verifies 153,726 distinct bodies / 976,453 bytes (3.816853%). The sweep is now opt-in through the workflow's `sweep_flags` input.

Commit `57268c5` restores explicit C++ member receivers for provisional no-argument virtual slots 1 and 2. Pinned build https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36628347716 succeeded. Both native flag variants verify 2,452 bodies / 78,833 bytes, and the SCStr variant verifies eight / 513 bytes. All 2,460 bodies are new to the previous inventory. Audit `analysis/recovery-coverage-msvc-virtual.json` verifies 156,186 distinct bodies / 1,055,799 bytes (4.127008%). These call declarations remain provisional API types; only byte-verified bodies enter coverage.

## SCStr byte-offset correction

Saved Ghidra signatures report SCStr pointee size 1 in all 255 SCStr pointer parameters with that metadata. The real compiler-facing SCStr class has a four-byte pointer field. Translating `param_1 + 4` directly therefore changed the recovered byte offset from 4 to 16. The opt-in `--byte-pointer-offsets` transformation preserves arithmetic through `char *` while retaining the real class layout for calls/construction. It handles explicit parenthesized offsets; it does not claim to recover arbitrary pointer increments, indexes, or nested expressions.

Commit `215280a` compiles 4,019 SCStr functions / 223,870 reference bytes with 1,106 corrected offsets, plus a 185-function virtual-receiver variant with 211 corrected offsets. Pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36629017193 succeeded. The offset-only object verifies 933 bodies / 80,593 bytes; both combined flag variants verify 13 bodies / 969 bytes. In particular function `101aaa70` now matches all 90 bytes, with its two call relocations resolved.

After deduplication, the offset variants add 13 functions / 772 bytes. Audit `analysis/recovery-coverage-msvc-byte-offsets.json` verifies 156,199 distinct bodies / 1,056,571 bytes (4.130026% of the executable virtual span). No whole linked DLL has achieved the requested 95% equality.

## Broader virtual slots and mixed native calls

The new `--virtual-zero-arg-calls` probes integer-result virtual dispatch at recovered byte offsets, including slot zero and calls whose return value is used. Slot declarations are ordinary C++ virtual methods; argument-bearing calls are left unchanged. The local native gate accepts 5,739 functions / 282,953 reference bytes with 8,645 restored receiver sites; the SCStr gate accepts 248 functions / 26,096 bytes with 434 sites. Byte matching awaits the next pinned build.

`--expanded-eligibility` admits supported global references and typed direct calls in native bodies, using the existing global and vtable declarations. Explicit character-pointer casts preserve local byte-pointer signedness when separate functions infer different types for one global. Exception-frame and unsupported macro lowering remain excluded; they require compiler-generated C++ lifetimes rather than deleting EH behavior.


## Compiler-generated terminate handling probe

`tools/compile_noexcept_cleanup_cpp.py` admits a strict cleanup family only when the independently decoded reference EH table has one state and its action is the imported `__std_terminate` jump. Every SCStr release must immediately activate that state; the sized-delete call is declared noexcept. The recovered third delete argument is removed only when it is the explicit security-cookie local, which the reference call sites do not push. Compiler-owned FS registration, state storage, and security cookies are replaced with C++ `noexcept` and `/EHsc /GS`, rather than dropping exception behavior. Other calls, multi-state cleanup, and unexplained residual frame variables are excluded.

The initial local gate compiles 145 functions / 14,116 reference bytes. Its body comparison is not an exception-metadata verification and contributes nothing to the authoritative coverage until pinned compiler output and EH placement are verified. The source is `src/generated/noexcept_cleanup.cpp`, and the reference handler/metadata inventory is `analysis/compiled-cpp-noexcept-cleanup/reference-eh-inventory.json`.
