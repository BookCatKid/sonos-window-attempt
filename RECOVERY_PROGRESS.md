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


Pinned broader build https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36629858677 succeeded. The expanded native call batch compiles 2,941 functions / 287,027 reference bytes; both MSVC flag variants verify 753 bodies / 34,390 bytes. The broader native virtual-slot object verifies 4,032 bodies / 179,356 bytes; the SCStr virtual-slot object verifies 17 bodies / 1,479 bytes.

The batch comparator `tools/compare_recovery_tranches.py` loads the reference/symbols once, verifies the baseline DLL hash, records object/index hashes, writes per-object reports, and re-audits distinct coverage without double counting. Its manifest is `tools/recovery_tranches.json`. Reports and audit for this run are in `analysis/recovery-msvc-expanded`.

This build adds 1,834 distinct exact bodies / 115,449 bytes. The cumulative verified union is 158,033 bodies / 1,172,020 bytes (4.581304% of executable virtual span). The rebuilt linked-DLL 95% requirement remains unachieved.


The outer-noexcept pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36630391075 succeeded but verifies zero exact cleanup bodies. Both variants add zero coverage; reports are in `analysis/recovery-msvc-noexcept`. Static inspection of `10117170` shows MSVC produces 82 bytes versus the reference's 89. Its frame/operations match the same shape, but the reference explicitly writes exception state zero before the release call, while a function-wide noexcept boundary omits that seven-byte store. The two unresolved relocation classes are the generated EH handler and `__security_cookie`; no placement is assumed for either.

That evidence motivates the `--inline-destructor` variant. It recognizes a release followed by a zero store to the same address and restores an inline `SCStr::~SCStr() noexcept { int_release(); rep = 0; }` call inside the original caller. The outer caller retains its original signature and exception specification. This places the termination boundary around the destructor operation and lets MSVC generate the caller's EH state transitions. All 145 candidates / 14,116 reference bytes pass the local gate, with zero syntax rejects after stricter eligibility. Source and manifest are `src/generated/inline_cleanup.cpp` and `tools/recovery_tranches.json`. Pinned verification is pending; these candidates do not contribute to exact coverage yet.


## Independent EH graph placement verification

The first inline-destructor build https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36631383615 succeeded. It produces 103 cleanup bodies with matching lengths and all fixed bytes. `tools/verify_eh_placement.py` verifies the handler code, 36-byte FuncInfo, eight-byte unwind map, and imported termination action before accepting internal handler addresses. It independently reads the security-cookie address from PE LoadConfig, checks the reference cookie-check routine's comparison/return shape, and uses the reference import symbols for CxxFrameHandler3 and __std_terminate identities. Internal EH symbols are excluded from generic parent-FUN address fallback. These are reference placement constraints, not a linked DLL result.

Three EH graphs match completely; one corresponding compiled function (`1019eb70`, 93 bytes) matches its entire body after relocation. Negative checks modify all handler prefixes or all FuncInfo magic values in temporary copies of the object and correctly reject every graph. The earlier outer-noexcept object is also rejected. Reports and audit are under `analysis/recovery-msvc-inline-cleanup`, and detailed graph proofs are in `analysis/compiled-cpp-inline-cleanup/eh-placement-inline_cleanup_reference_flags.json`.

The exact cumulative union increases to 158,034 bodies / 1,172,113 executable bytes (4.581668%). EH table/data bytes are recorded separately and are not added to this executable-body denominator. Most rejected graphs differ because the reference FuncInfo flags include the outer-noexcept bit 4 as well as the inner single-state destructor guard. The generator now preserves both independently based on the reference metadata. The next pinned build must establish whether this combination reproduces the remaining caller/handler graphs.


The corrected flags run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36632346151 succeeded. All 145 reconstructed handler/FuncInfo/unwind graphs verify exactly after their independently established runtime relocations. Of the caller bodies, 103 / 9,782 bytes verify completely; 42 still differ in non-relocation body instructions. Compared with the previous one-body checkpoint this adds 102 functions / 9,689 executable bytes. The cumulative audited union is 158,136 bodies / 1,181,802 bytes (4.619541%). Reports are in `analysis/recovery-msvc-inline-cleanup-flags`.

## General single-state guard tranche

`tools/compile_single_state_guards.py` extends that verified terminate-region source shape beyond the manually recognized SCStr destructor pair. It admits only a validated single-state unwind map to __std_terminate with no catch/type-specification metadata. One recovered state-zero region must have balanced braces; a C++ noexcept lambda expresses the protected call region, while the enclosing function preserves its own reference noexcept flag. Non-throwing scalar/pointer returns stay in the caller. Gotos, break/continue transfers, state aliasing, unsupported frame layouts, and unexplained cookie/stack expressions are rejected. Known sized-delete calls retain two actual arguments and their noexcept declaration. Existing call/vtable/global lowering and inferred call ABI declarations are reused.

The local gate accepts 4,635 functions / 357,588 reference bytes, with five syntax rejects. These are candidates only; matching requires the pinned object comparison plus the same independent EH graph verifier. Generated C++ and inventory are `src/generated/single_state_guards.cpp` and `src/generated/single-state-guards-index.tsv`. The manifest now lets `tools/compare_recovery_tranches.py` compare this whole tranche in one pass and audit its distinct byte gain.


## Bulk terminate-guard verification checkpoint

Pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36633285731 succeeded. Of 4,635 candidate functions / 357,588 reference bytes, 4,466 bodies / 340,804 bytes verify completely after independent EH/runtime relocation checks. The graph verifier accepts 4,625 EH graphs; the other ten remain excluded. The disjoint union adds 4,402 functions / 334,493 executable bytes beyond the previous checkpoint.

The authoritative audit is `analysis/recovery-msvc-single-state-guards/coverage-audit.json`: 162,538 distinct exact bodies / 1,516,295 executable bytes (5.927039%). This remains object-body equality under reference placement constraints, not a matching linked DLL. Reports and object hashes are recorded alongside the audit.

`analysis/single-state-guard-rejections.json` identifies the next recovery gap: 1,882 functions / 248,448 reference bytes still use Ghidra's apparent security-cookie call argument; another 490 / 56,837 bytes retain inline cookie expressions. An isolated Ghidra signature-propagation experiment would test recovered callee calling conventions and parameters against fresh caller decompilation. The existing recovered project occupies 717 MiB. Before starting that experiment, free disk space fell from 3 GiB to 282 MiB; work stops here under the user's explicit storage instruction. No files were deleted and no project-copy/storage workaround was started. The completed compiler/byte-comparison results above are retained. The 95% whole-DLL goal is unachieved.


## Signature-propagation pilot after storage recovery

Space recovered to 2.7 GiB, so the stopped work resumed. An APFS clone of the saved recovered project was created at `analysis/call-abi-propagation/ghidra`; the original project was not opened for modification. `tools/ghidra/PropagateCallSignatures.java` exports caller pseudocode before/after, commits inferred parameter/return conventions for unprotected callee signatures, preserves explicit imported/user-defined/custom-storage signatures, and pins the independently verified two-argument sized-delete wrapper ABI. `tools/run_signature_propagation.py` provides a reproducible headless runner and refuses both original project directories as mutation targets.

The pilot redecompiles 100 callers / 16,715 reference bytes and infers 103 callee signatures, preserving one explicit signature. Cookie pseudovariable mentions fall from 100 before propagation to 61 after; stack pseudovariable mentions fall from 100 to 62. These changes are decompiler evidence, not byte-match claims. Reports and the before/after corpus are in `analysis/call-abi-propagation`. The subsequent C++ gate accepts 18 caller functions / 2,685 reference bytes with 69 typed call sites and four virtual receiver sites. The separate `signature_pilot.cpp` variant awaits pinned MSVC comparison, leaving all earlier matching variants intact.

The exception graph verifier now indexes COFF symbol boundaries and parent-handler names once, and caches runtime/import identity checks. It reproduces the existing 4,625-function detailed graph report exactly in 2.4 seconds, replacing repeated full-symbol scans. The cumulative proven executable-body coverage remains 5.927039% until the new variant is measured.


A `--storage-only` runner option is prepared for a follow-up comparison: it asks HighFunctionDBUtil to commit inferred parameter storage/widths without its speculative pointee datatypes. This addresses a possible reason that only 18 of the 100 redecompiled callers pass the current primitive C++ gate. That alternate pass has not been run or measured. Free space fell again to 388 MiB, so further Ghidra database saves are held under the user's storage instruction; no cleanup was performed. The already-submitted compiler job for the datatype-propagation pilot remains independent of the local database work.

Space later recovered and the datatype-propagation pilot was measured with pinned MSVC run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36635992927 . Twelve of its 18 C++ candidates match exactly, adding 1,510 distinct executable bytes. The cumulative audit `analysis/recovery-msvc-signature-pilot/coverage-audit.json` reports 162,550 exact bodies / 1,517,805 bytes (5.932942%). Six candidates remain nonmatching.

The initial storage-only experiment revealed that `commitParamsToDatabase(..., false, COMMIT, ...)` fails when inferred return storage disagrees with the existing one-byte unknown return type. Preserving the return with `NO_COMMIT` eliminates all 56 failures: all 103 inferred callee parameter sets commit, and cookie pseudovariable mentions fall from 100 to 47 callers. This storage-only result admits 16 C++ functions / 2,354 reference bytes, but is not submitted because the datatype pass already admits 18 and retains better type evidence.

`PropagateCallSignatures.java` now independently checks stack-only conventions against each reference function's RET operand. A zero pop selects cdecl; a nonzero, word-aligned pop selects stdcall, with explicit unused stack parameters added only when the RET pop exceeds inferred used parameters. Register/custom storage models remain untouched. The 104-callee pilot verifies 16 cdecl and two stdcall conventions. This changes one of the 18 generated callers: a formerly omitted stdcall argument is now recovered. The new `signature_ret_pilot.cpp` variant awaits pinned MSVC byte comparison.

Pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36640104907 confirms the convention-aware variant still has the same 12 exact bodies / 1,510 bytes as the earlier signature pilot. It adds zero distinct coverage. The convention evidence remains useful for later callers, but this 18-function pilot is closed.

## Multi-state terminate-family tranche

Four disposable Ghidra experiment clones were removed after preserving their exported JSON results, recovering 2.8 GiB. The authoritative `analysis/thunk-recovery-full/ghidra` project was not touched. `tools/classify_multistate_eh.py` now ranks the entire validated multi-state EH inventory by normalized unwind topology and reference body bytes: 20,516 functions / 9,600,060 bytes across 6,225 normalized shapes. The first source-generatable family contains 3,558 functions / 651,910 bytes whose unwind actions are exclusively `__std_terminate`.

`tools/compile_multistate_terminate_guards.py` recovers sequential state spans as ordinary inline C++ `noexcept` scopes. It removes a security-cookie temporary only when the value is the frame-derived module cookie and only from its decompiler-invented final call-argument position. The local gate emits 825 compiling C++ functions / 152,810 reference bytes with no assembly. Pinned MSVC 14.28 run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36641607925 succeeded.

The first body comparison found 264 functions with identical lengths and every fixed byte matching, each pending one compiler-generated EH-handler relocation. The graph verifier now accepts an expected N-state count, verifies the 36-byte FuncInfo and the full `N * 8` unwind map, and recursively verifies every terminate action and runtime relocation. It verifies 733 complete EH graphs. After those proofs, all 264 pending bodies / 33,277 bytes are exact. The authoritative audit is `analysis/recovery-msvc-multistate-terminate-verified/coverage-audit.json`: 162,814 distinct exact bodies / 1,551,082 executable bytes (6.063018%).

Inspection of the closest remaining bodies identified a repeated two-byte deficit before base-destructor calls: Ghidra omitted the live ECX argument while retaining a zero-argument textual call. `CallABI` now has an opt-in recovery mode that prepends the current fastcall/thiscall receiver only when the resolved callee has exactly one additional leading register parameter. The multi-state generator enables it, recovering 524 call sites in C++ source. Pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36642720856 proves 466 exact functions / 74,338 bytes in the revised family. This adds 202 functions / 41,061 bytes beyond the previous multi-state checkpoint. The cumulative audit `analysis/recovery-msvc-multistate-implicit-register/coverage-audit.json` contains 163,016 distinct exact bodies / 1,592,143 bytes (6.223521%).

## Two-field RAII owner family

The next repeated graph combines a two-pointer owner destructor with a terminate-protected normal cleanup. `tools/compile_owner_pair_raii.py` recognizes the shared constructor thunk, two-field release pattern, destructor action target, and three-argument virtual call. It reconstructs a real C++ automatic owner whose inline constructor retains the cdecl stack receiver, whose slot-10 call uses thiscall, and whose noexcept destructor reproduces both the inlined normal cleanup and the compiler-owned unwind action. The generator emits 107 functions / 13,696 reference bytes with zero syntax rejects and no assembly.

Pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36645069465 produces identical lengths and fixed bytes for all 107 functions. The EH verifier now recursively checks ordinary recovered action targets through reference incremental thunks. It proves the parent handler and two-state FuncInfo, owner unwind funclet, complete out-of-line destructor body, the destructor's nested handler and FuncInfo, security-cookie references, runtime imports, and all relocations. All 107 bodies / 13,696 bytes are exact, and all 107 nested graphs / 24,610 graph bytes verify with zero rejects. The cumulative audit `analysis/recovery-msvc-owner-pair-raii-verified/coverage-audit.json` contains 163,123 exact bodies / 1,605,839 executable bytes (6.277057%).

## Measuring the previously unmeasured tranches

An audit of the local generated families against the pinned coverage reports
found 19,507 functions / 1.48 MB of reference body bytes that already compiled
locally but had never been compared under MSVC 14.28, because their families
were never wired into `tools/build_probe.cmd`. Wiring all 86 of them failed the
pinned build: 70 tranches emit `__thiscall` on free functions, which MSVC
rejects with C3865 although clang-cl accepts it. Every family already carrying a
verified coverage report contains zero `__thiscall`, so this is the reason those
tranches were never admitted rather than an oversight.

The remaining 17 tranches compile. Pinned run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36654316359
measured them and added **zero** exact bodies, leaving the cumulative audit at
163,123 exact bodies / 1,605,839 executable bytes (6.277057%).

The 16 EH-normalized parts contribute 254 functions and produce neither an
exact body nor a same-length fixed-byte match, confirming the local Clang
evidence that this tier is syntax coverage rather than byte recovery.
`owner_parameter_raii` is the stronger signal: all 52 functions have identical
lengths with every fixed byte matching and no unresolved relocations, but
`verify_eh_placement.py` rejects all 52 because the generated `FuncInfo` and
handler bytes differ from the reference. The by-value owner parameter
reconstructs a C++ exception specification the reference does not carry, so its
6,024 bytes stay one EH graph shape fix away rather than recovered.

Unlocking the 0.56 MB of `__thiscall` thunk, globals and bulk-base tranches
requires recovering that calling convention into a form MSVC accepts, which is
the callee-side analogue of the existing `tools/recovered_call_abi.py` work.

The two emit filters above accounted for the entire gap in the multi-state
terminate family. Widening them took the tranche from 824 to 1,629 functions and
from 152,503 to 322,156 reference body bytes, and raised EH graph verification
from 466 to 1,404 functions / 126,068 graph bytes. Pinned run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36659830884
adds no exact bodies, leaving the audit at 163,123 exact bodies / 1,605,839
executable bytes (6.277057%).

The remaining 459 same-length fixed-byte matches in the tranche are blocked by
how imported methods are called. Their dominant call forms are `int_release`
(2,608 sites) and `VirtualSlot2` (2,597 sites): the reference reaches these
through an indirect call through the import address table, while the recovered
source emits a direct call to a locally declared member function. The
instruction forms differ, so no relocation can reconcile them. Reproducing the
reference requires emitting the call through the import slot rather than to a
local declaration.

Resolving those relocations raised the multi-state terminate tranche from 466 to
925 exact functions and from 74,338 to 153,855 reference body bytes. Because the
four fixes apply to every family, the cumulative audit was recomputed over all
seventeen re-measured MSVC objects plus the carried-forward reports. Pinned run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36659830884
gives 163,583 exact bodies / 1,685,376 executable bytes (6.587959%), against
163,123 / 1,605,839 (6.277057%) before, for a gain of 79,537 bytes.

The recovered thunks tranche also gains, from 23,695 to 24,322 exact functions,
and the native typed tranche from 497 to 498, which confirms the resolution
failures were systemic rather than specific to the terminate family.

`owner_parameter_raii` remains at zero exact bodies: all 52 functions have
identical lengths with every fixed byte matching, but its generated exception
graph is rejected because a by-value owner parameter reconstructs a C++
exception specification the reference does not carry.

Admitting the reference's own runtime and exported calls widened both guard
tranches. Pinned run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36661659252
takes the single-state guards from 4635 to 4783 compiled functions and from
4466 to 4594 exact ones, and the cumulative audit to 163,711 exact bodies /
1,699,600 executable bytes (6.643559%), a gain of 14,224 bytes. The native
typed family regresses under the same widening and keeps its earlier source.

The 1,706-function multi-state terminate tranche holds at 925 exact bodies, so
its additional 77 functions remain pending. Of its 447 inexact functions,
186 / 50,165 bytes are held by the generated exception handler differing from
the reference handler; the recovered thunks tranche's remaining 8,392 inexact
functions fail on instruction differences rather than relocation failures, which
no resolution change can reach.
