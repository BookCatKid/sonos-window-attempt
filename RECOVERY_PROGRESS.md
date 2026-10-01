# Recovery checkpoint: 2026-09-29

The active target is a C/C++ rebuilt DLL matching 100% of the reference bytes. Earlier 95% checkpoints below record historical targets. No Sonos/DLL execution and no assembly embedding are permitted.

Latest upstream-library checkpoint: pinned zlib/Expat `/O2` objects verify 148
bodies / 31,861 body bytes. Their union with the prior accepted audit adds 102
distinct functions / 30,534 distinct executable bytes, bringing object-body
coverage to 165,876 bodies / 1,813,558 bytes / 7.089009%. Runtime-cookie identities,
compiled forwarding aliases and constant tables receive no additional byte credit.
The partial physical placement artifact now includes these bodies, with
11,679,539 proven compiler bytes / 31.435658% of the file. Reproduce with
`tools/audit_library_recovery.py` and `tools/link_recovery_image.py`; full details
and remaining constraints are in `docs/large-scale-recovery.md`.

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

## Bulk member and virtual-argument ABI recovery

The final acceptance target is now explicitly 100% file-byte identity from C or
C++, without authored assembly or embedded executable reference bytes. Readability
is optional. `docs/recovery-strategy.md` records the investigation and priorities.

`tools/promote_msvc_members.py` reuses the typed generator's genuine C++ member
lowering on four older primitive/global batches. Their 15,353 functions / 762,316
reference body bytes compile under pinned MSVC 19.28.29919 in run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36671806043 .
After relocation checks and the distinct executable-byte audit, this adds 1,324
functions / 36,772 bytes. The initial MSVC reject was an empty terminal case
label; applying the existing empty-statement normalization resolves it.

`tools/promote_virtual_arguments.py` restores implicit thiscall receivers for
simple Ghidra virtual calls with word-sized argument hypotheses. Run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36672322099
compiles 1,850 candidates and verifies 117 additional bodies / 3,496 distinct
bytes. The affected multi-state guard batch adds zero bytes. Provisional virtual
signatures remain hypotheses wherever complete body/relocation/EH proofs fail.

Five reproducible owner-parameter destructor variants were also measured.
Changing exception specifications, wrapping release in a noexcept lambda, or
marking virtual release noexcept adds zero exact bytes. The parent reference
FuncInfo has two states versus the current candidate's three; the reference's
out-of-line destructor has zero states and flags 5. The lambda variant preserves
all 52 normal bodies but fails its nested exception graph. These are recorded
negative results; the verifier was not relaxed.

The authoritative final audit is
`analysis/recovery-msvc-bulk-abi-final/coverage-audit.json`: 165,152 distinct
exact bodies / 1,739,868 executable bytes (6.800963%), up by 1,441 functions /
40,268 bytes from the preceding 6.643559% checkpoint. These remain object proofs
under reference-placement constraints. No full reconstructed DLL or 100% linked
file match is produced by this tranche.

The focused Windows probe caches only the pinned compiler binaries and skips
installation on a cache hit. Its first successful cache-hit run completed in
30 seconds instead of more than four minutes. Seven tests pass, including actual
x86 instruction equality for member receiver conversion and virtual dispatch
against a typed thiscall pointer. CodeRabbit's tooling robustness findings were
addressed. Work is on branch `codex/bulk-member-abi`; generated sources, indexes,
and manifests are checked in, while immutable reference and analysis stay local.

## Direct-call ABI and local string lifetimes

The explicit 100% C/C++ byte-identity goal remains active. No complete matching
DLL exists. The new checkpoint adds 494 distinct bodies / 25,342 executable
bytes, bringing reference-placement coverage to 165,646 / 1,765,210 bytes
(6.900022%). The consolidated audit is
`analysis/recovery-msvc-bulk-call-lifetime-final/coverage-audit.json`, using pinned
MSVC run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36677278050
against the preceding 6.800963% checkpoint.

`tools/promote_call_abi.py` applies inferred callee prototypes to the old member
batches, including preserved implicit receivers. Three batches compile 2,714
functions / 243,886 reference bytes and add 367 distinct bodies / 11,543 bytes.
Prototypes are hypotheses until the complete instruction and relocation proof
passes. Declaring nontrivial owner copy/move constructors preserves the previous
52 normal bodies but still adds zero verified EH bodies.

`tools/compile_scstr_local_raii.py` reconstructs the two-state local `SCStr`
family through actual inline C++ constructors and noexcept destructors. The
strict batch verifies one 109-byte body. A targeted, isolated APFS project clone
propagates 95 callee signatures for 68 callers, exposing missing ECX uses.
Receiver recovery requires agreement between word-sized stack parameters and
native RET cleanup; final body/EH proof remains mandatory. Its separate source
batch verifies 16 bodies / 1,792 bytes (1,683 new).

The extended-storage batch recovers scalar string slots and removes only a
pure parameter spill that has no read before output-buffer construction.
Of 338 candidates, 233 compile and 112 pass full proofs / 12,116 bytes
(12,007 new). Combined storage and propagated-signature recovery verifies
127 bodies / 13,799 bytes but adds no bytes beyond the separate variants.
Source variants and indexes remain separate, so a later experiment cannot erase
an earlier verified body.

The EH verifier now establishes external `SCStr` operand identities from the
immutable PE export table, follows reference thunks, and still checks the entire
recovered destructor, handler, FuncInfo and unwind graph. The earlier 107-owner
graph regression passes. An unknown-export mutation rejects all affected string
destructor graphs. Fifteen tests pass; CodeRabbit's missing-manifest finding was
fixed, and its subsequent review returned zero findings. All seven new source
tranches are included in the default comparison manifest and object build.

Next priorities are broader callee/receiver propagation for the remaining string
family, genuine by-value owner lifetime reconstruction, and explicit linked PE
placement of proven code/data/EH definitions. These object proofs do not prove
the reference's exported release body has been rebuilt, or that a linker can yet
produce matching file layout. Final acceptance is still the full 100% comparison.

## Compiler-fragment placement and complete non-executable data

`tools/link_recovery_image.py` places verified compiler-generated functions,
literals, destructors, handlers, FuncInfo and unwind fragments in a partial PE
at reference RVAs and file offsets. Every marked output byte is verified after
placement. Conflicting overlaps abort. Headers are constructed structurally;
unbuilt regions are zero-filled. The image has no entry point or reconstructed
import/export header directories and is not a loadable complete reconstruction.
No executable reference payload is copied.

The expanded manifest includes older primitive/typed/vtable families and all 32
ordinary C++ direct-jump chunks; compiler-flag variants are optional. All 165,646
previously proven bodies are physically placed. Compiler-generated EH helpers
bring verified `.text` content to 1,935,596 bytes. Base relocations are generated
from placed COFF DIR32 fields rather than copied from the reference directory.
Relocation entries for unbuilt code remain absent.

`tools/compile_recovered_data.py` emits packed C++ aggregates for all six
non-executable payload sections: byte constants/assets between symbolic pointer
fields, with writable initializers for writable sections. Reference HIGHLOW
metadata identifies 490,344 pointer fields, all targeting the image. C++ address
initializers generate their COFF relocations. Executable sections and `.reloc`
are rejected. Chunk sizes avoid COFF relocation overflow. Static assertions
preserve storage width; this generator emits no instruction bodies.

Pinned run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36679545252
proves the 64-KB pilot. Run
https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36680111341
compiles all 74 full-data batches / 9,691,648 bytes and proves every data byte and
pointer fixup. Sources, indexes, and hashes are checked in under
`src/generated/data`; both normal and focused builds compile them.

`analysis/linked-placement-data-full/recovery-layout.dll` has the reference's
37,153,792-byte length and SHA-256
`321fd9bdd03bba041e380c1a6b4df63625cf14087f5c499ce77f670f53e83a85`.
The independently executed `tools/compare.py` reports:

- `.rdata`, `.data`, `.idata`, `.tls`, `.00cfg`, and `.rsrc`: 100% each.
- Complete file: 13,846,222 aligned identical bytes / 37.2673%.
- Proven compiler bytes at final offsets: 11,627,244 / 31.294905% of the file.
- `.text`: 1,935,596 proven compiler bytes; aligned match 15.3003% includes
  coincidental zero matches in unbuilt regions.
- `.reloc`: 1,076,724 generated bytes; section match 12.7534%.
- Final 100% gate: FAIL, as expected for an incomplete image.

The placement report records 186,294 fragments, object/index hashes, fixups,
absent target addresses, and unbuilt section bytes. These physical proofs are
distinct from the 6.900022% function-body audit. Empty-byte coincidences are not
reconstructed source coverage.

The wider signature experiment (273 committed functions for 233 callers) adds
zero bytes and regresses the combined string batch from 127 to 33 exact bodies.
Its source remains separate and is not selected by default. The finished
experimental project clone was removed after preserving before/after exports.
Future inference must preserve proven caller information.

Twenty-one tests pass, including actual packed-data pointer fixups, writable
storage, overlap rejection, duplicate-fragment relocation preservation, and prior
ABI/EH checks. CodeRabbit's placement-tool review returned zero findings. The
later isolated data-tooling review reached the service's free-review rate limit;
pinned compilation, complete data verification, and local tests completed
independently. The goal remains active. Remaining work includes genuine C++
executable recovery, complete relocation layout, and PE startup/headers.


## Empty outgoing containers and compiler atomic intrinsics (2026-09-30)

Pinned MSVC run https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36687349560
verifies all 90 restored empty-tree argument callers / 14,403 bytes and their
complete EH graphs. Nontrivial copy/move declarations restore construction
straight into the outgoing eight-byte parameter slot. The sentinel is an ordinary
28-byte C++ aggregate. Volatile storage homes and compiler memory barriers
preserve required instruction sequencing; no authored assembly or instruction
payload is present.

The atomic generator verifies 21 functions / 433 bytes with real MSVC intrinsics.
It preserves access width and old-value returns, and rejects unsupported or
ambiguous patterns. Native thiscall RET cleanup recovers two unused stack
arguments. The prior scalar storage-type/spill probes add no distinct bytes;
none of those variants enters the default recovery manifest.

Together this pass adds 111 distinct functions / 14,836 executable bytes. Audit
`analysis/recovery-msvc-tree-barrier-atomic-arity/coverage-audit.json` now records
165,757 bodies / 1,780,046 bytes / 6.958014% executable coverage.

Physical placement `analysis/linked-placement-tree-atomic/recovery-layout.dll`
has 11,645,410 proven compiler bytes at final offsets (31.343799% of the file),
including 1,953,762 `.text` bytes. Its SHA-256 is
`59f7762cf27ac536cef667c4250f660d4fc13cfa589dcc58502f5ac11dfd81cb`.
All six non-executable sections remain 100% identical. The independent full-file
comparison verifies matching file size and 13,861,215 aligned identical bytes /
37.3077%, including coincidental zero-filled hole matches. The final 100% gate
still FAILS. Generated base relocations occupy 1,077,544 bytes; unbuilt code,
startup/import/export headers, and missing relocation layout remain.

Thirty tests pass, including actual compiler atomic instructions, byte accesses,
old-value returns, rejected multi-write/dependent patterns, genuine C++ outgoing
container lifetimes, and native stack cleanup. CodeRabbit's tooling review found
two issues; width inference and constructor-rewrite rejection were corrected.
Focused probes now omit unchanged data unless `include_data_probe=true`; full
builds always compile data. Pinned data artifacts remain required for placement.
The goal remains active. Next priority is bulk unused-argument recovery and
expanding the proven container families across existing Ghidra output.


## Bulk stack arity and iterator evidence (2026-09-30)

The broad stack-arity scan covers 148 compiling member hypotheses across six
batches. Pinned run 36688344412 verifies four new bodies / 218 bytes in
`thunk_members_stack_arity_reference_flags.obj`. Only this positive variant is
added to the default recovery manifest. Audit
`analysis/recovery-msvc-bulk-stack-arity/coverage-audit.json` verifies 165,761
functions / 1,780,264 bytes / 6.958867% executable coverage.

`analysis/linked-placement-bulk-stack-arity/recovery-layout.dll` places the new
bodies and has SHA-256
`a89e627641b94bde737f4766989e79b760f3e876709553ae328fc79cb111d92e`.
It contains 11,645,628 proven compiler bytes (31.344386% file coverage), including
1,953,980 executable bytes with EH helpers. Six non-executable sections remain
100% identical. Independent full-file comparison reports 13,861,193 aligned
matches / 37.3076%, matching file size, and a FAILED 100% gate. Relocation layout
is incomplete; source proof increases despite a small decrease in zero-fill
coincidences as new relocations shift that table.

Four genuine C++ iterator variants target 12 identical 88-byte postfix-increment
bodies. Pinned runs 36688984860, 36689303030, 36689749626, and 36690135114 add zero
coverage. The cached-node variant has correct native length and traversal but
different registers. These variants remain outside the authoritative manifest.
Thirty-six tests pass, including exact native cleanup from a compiled member
and semantic traversal on synthetic trees. No reference binary is executed.
Review disposition is saved locally in
`analysis/stack-arity-tooling-review-disposition.md`.

A corpus scan finds 126 callers with the known outgoing empty-tree pattern;
90 are already fully recovered. Remaining 36 involve branches/multiple lifetime
states and lost stack/receiver facts. Next work should restore the now-proven
callee parameter layout in an isolated Ghidra copy and batch further iterator
source variants. The 100% goal remains active.


## Isolated Ghidra container and event ABI recovery (2026-09-30)

`tools/recover_container_abi.py` restores the independently proven outgoing
container ABI in `analysis/container-call-abi/ghidra`, an APFS copy of the
original project. The Java script rejects other project paths; the runner also
rejects symlink redirection and verifies original-project hashes before/after.
It catches Ghidra script failures even when the headless process exits zero.

Native `FUN_10dee620` receives ECX plus twenty stack bytes: a text pointer,
event ID, properties pointer, and an eight-byte head/size container by value.
Restoring this storage exposes the missing argument across all 126 callers.
The optional event pass uses the pinned, hash-matched ninety-constructor index,
restores 24-byte event values, copy/destructor arguments and dispatcher arguments,
and gives virtual slot nine its receiver/key prototype. The two factory exports
now show the key explicitly rather than dropping its pushed stack argument.

Reproduce the guarded export:

```sh
python3 tools/recover_container_abi.py --event-objects \
  --output-dir analysis/container-call-abi/verified-event-vtable
```

The execution proof records 131 exported functions and unchanged original
project hashes. The second guarded run is idempotent (zero changed pseudocode).
Forty tests pass, including database-change detection, symlink rejection,
incomplete exports, and silent script failure. No reference binary is executed.

`tools/compile_event_factories.py` emits genuine C++ hypotheses for two 308-byte
factory bodies. Pinned runs 36728666054, 36729923629, 36730729383, and 36731922091
add zero verified bytes. Native evidence supports an explicit output pointer;
class-valued return hypotheses are also tested. Field layouts remove unwanted
stack-cookie checks, base construction restores the seven-state cleanup shape,
and nonnull temporary expressions recover constructor-result register use.
Remaining differences include temporary masks, string clearing, stack allocation,
and separate constructor/destructor symbol identities. These experiments remain
outside the authoritative default manifest. Run 36732748770 tests the remaining
noexcept class-valued forms and also adds zero verified bytes. Nine distinct
source variants were tested across five pinned runs; no factory hypothesis has
passed the full body/relocation/EH proof. CodeRabbit reported zero findings for
the reviewed generator and Java-script changes; the runner is additionally
covered by the isolation and export-failure tests.

Authoritative recovery remains 165,761 exact bodies / 1,780,264 executable bytes
(6.958867%), with 11,645,628 compiler-produced bytes physically placed. The full
DLL is still not byte-identical. Typed pseudocode and compiling hypotheses do
not increase these counts.


## Exact derived event callbacks (2026-09-30)

The typed Ghidra corpus exposes 11 straight-line dispatch callbacks, including
four whose unused stack word is absent from the decompiled header. Native RET
cleanup establishes the genuine C++ member parameters. Each callback constructs
a distinct 24-byte derived event; its separate destructor identity is required
for the native unwind action, while normal cleanup calls the common base dtor.

`tools/compile_event_factories.py` emits these C++ members and per-event classes.
`tools/verify_eh_placement.py` verifies auxiliary identities through a specific
native FuncInfo state, frame-relative unwind jump, and linker jump to the helper
body. Every defined helper body and its relocations still require complete byte
identity. Incorrect helper addresses, states, call operands, owners, and altered
linker jumps are rejected by six new tests. The prior ninety constructors remain
exact with zero unresolved relocations; forty-six tests pass. CodeRabbit reports
zero findings in the completed generator/verifier reviews.

Pinned run 36794110579 matches all 11 callbacks / 2,098 reference bytes, with all
11 EH graphs accepted and zero unresolved relocations. Only this positive batch
enters the default recovery manifest. Audit
`analysis/recovery-msvc-event-callbacks-derived/coverage-audit.json` records
165,772 bodies / 1,782,362 executable bytes / 6.967067% coverage.

`analysis/linked-placement-event-callbacks/recovery-layout.dll` has SHA-256
`cc5d2dc86fbaca3742d9a5e4b0e26ee93d1415a9641c979223941700f34cfc9f`.
It places 11,648,221 proven compiler bytes (31.351365% file coverage), including
1,956,573 executable bytes. The increase is 2,593 bytes: 2,098 callback bytes and
495 new EH-helper bytes. All six non-executable sections remain 100% identical.
The independent full-file gate matches size but FAILS identity, with 13,863,779
aligned matches / 37.3146%; unbuilt zero-fill contributes coincidental matches.
The regenerated relocation directory has 1,077,680 bytes and is incomplete.

Factory experiments remain separate from the default manifest. Their derived
helper identities now give complete EH proofs for the 315-byte variants. An
extern-template key produces the correct 308-byte body and matching fixed
instructions, but its locally emitted unwind destructor differs, so neither
factory is admitted. Four standalone derived destructor bridges match their
five-byte bodies; they were already covered and add no distinct bytes.

Next work should restore property-bag virtual setter prototypes at offsets 0x1c
and 0x28 in the isolated project. The remaining 247-byte callbacks lose their
forwarded value arguments there. Recover native stack cleanup alongside those
prototypes, then emit genuine derived event values and scoped property keys.
Linker alignment/reservation padding is another candidate for independently
verified compiler/linker coverage. Full-file identity remains the objective.

## Typed property callbacks awaiting pinned compilation (2026-09-30)

The isolated Ghidra project now models property-bag setters at vtable offsets
0x1c, 0x28, and 0x40, each with two four-byte stack arguments. The final slot
retains an opaque word payload; its semantic type is not established. The first
pass restores arguments in 19 decompilations; the additional word setter changes
two more. Both execution proofs confirm that the original project is unchanged.

`python3 tools/compile_property_callbacks.py` generates 14 genuine C++ members:
eight single-property callbacks, five two-property callbacks, and one
three-property callback, representing 3,843 reference body bytes. Keys have
separate lexical lifetimes; incoming values remain distinct when Ghidra reuses
their stack homes for later keys. Native indirect-call slots and RET cleanup
must agree with the recovered parameter sequence before a candidate is emitted.
All candidates compile locally with Clang. Forty-nine tooling tests pass,
including rejection of incorrect slots, cleanup sizes, and forwarded arguments.
Generated indexes now use LF line endings and pass `git diff --check`.
The attempted CodeRabbit review failed to connect to its service; no review
result is claimed for this batch.

These are experimental candidates, excluded from the authoritative default
manifest. GitHub and its API time out during this continuation, preventing the
branch push and pinned Windows build. **No verified bytes have been added**:
the latest accepted executable total remains 1,782,362 bytes / 6.967067%, with
11,648,221 proven compiler bytes physically placed. The full DLL still fails
identity.

When connectivity returns, push `codex/bulk-member-abi`, dispatch
`msvc-142-probe.yml` with `focused_probe=true`, download the actual run artifact,
and compare `property_callbacks_reference_flags` using
`src/generated/member_abi/tranches.json`, with baseline
`analysis/recovery-msvc-event-callbacks-derived/coverage-audit.json`.
Admission requires complete body, relocation, and EH proofs. Next ABI work can
recover the string-producing call used by the 329-byte callbacks; its omitted
receiver/result storage currently prevents faithful source generation.

## Property callback ABI and pinned lifetime probes (2026-09-30)

Connectivity returned and the previously queued source commits were pushed.
Pinned run 36797974225 compiles the fourteen named-key callbacks, but all fail
the exact gate: their bodies are seven bytes shorter per property and their
stack homes differ. Temporary keys passed by const reference in run 36798507703
produce the same mismatch, disproving that source change as a sufficient fix.
Neither experiment enters the authoritative default manifest; the accepted
coverage and physical PE placement remain unchanged.

The isolated project additionally restores FUN_1034e100 as a member taking a
caller-provided four-byte string destination, returning that destination in EAX
and popping four bytes. Both native exits establish this ABI. The caller loads
ECX from its first incoming word and pushes a frame-local destination pointer.
The resulting 132-function export exposes three changed decompilations, including
the two 329-byte callbacks. Original-project hashes remain unchanged in
`analysis/container-call-abi/string-result/execution-proof.json`.

`tools/compile_string_property_callbacks.py` now generates those two genuine
C++ callbacks (658 candidate bytes) with separate string-result and event
lifetimes. Both named-key and temporary-key variants compile locally. The
named-key variant in run 36798507703 also adds zero bytes; the temporary-key
variant is tested in run 36798702182. Additional property-key variants test
volatile representation storage and compiler barriers, including removal of
the manually forced outgoing-tree stack home. These remain experimental until
complete body, relocation, and EH verification succeeds. Forty-nine tests pass;
the attempted CodeRabbit review disconnected and supplied no completed result.

Run 36799004855 (the same source head as 36798702182) provides the downloaded
temporary-string callback evidence: both bodies still fail and add zero bytes.
Run 36799109447 builds the three storage/barrier variants at source head
64da924; its artifact is pending retrieval. A completed CodeRabbit review in
`analysis/property-callback-final-tooling-review.txt` reports zero findings for
the two generators, ABI runner/script, shared index writer, and parser tests.

`analysis/property-callback-lifetime-differences.json` records all fourteen
reference/compiler frame allocations, zero stores, and cleanup sizes. The
measured missing-byte counts are exactly 7, 14, and 21, tracking property count;
this evidence narrows the next source work to zero-store retention and reuse of
the outgoing-container pointer home by the first key. The storage-variant
artifact download is being retried after an incomplete transfer; no acceptance
is inferred from a successful compilation or partial download.

The storage-variant artifact has now been retrieved and compared. Run
36799109447 adds zero bytes. Volatile key representation restores all fourteen
body lengths and resolves every relocation, but frame offsets still disagree
(six fixed instruction bytes in each single-property callback). Compiler
barriers also preserve stores but change instruction scheduling. Removing the
forced tree home loses its three-byte store and does not fix frame allocation.
The next pinned probes retain volatile key writes while making the outgoing-tree
home a normally typed pointer or union, written through a volatile-qualified
lvalue, to test whether MSVC can then reuse its stack slot for the first key.

Run 36799879656 rejects both normally typed home variants as well: all fourteen
lengths and relocations match, but the same frame-offset differences remain.
No probe from this continuation increases authoritative coverage. To advance
an independent family, `tools/compile_conditional_event_callbacks.py` emits
two boolean dispatch callbacks (662 candidate bytes), each with distinct
derived events for its two branches. Native byte comparison and four-byte
RET cleanup establish the boolean argument; native unwind states establish
separate destructor identities. These candidates also require full pinned
body/relocation/EH proofs before admission.

## Exact conditional event callbacks and constructor fan-out (2026-09-30)

Pinned run 36800266351 matches both conditional callbacks / 662 reference
body bytes with zero unresolved relocations. Both complete EH graphs verify
(568 summed graph bytes); only this positive batch enters the default manifest.
`analysis/recovery-msvc-conditional-event/coverage-audit.json` records
165,774 exact bodies / 1,783,024 executable bytes / 6.969655% coverage.

`analysis/linked-placement-conditional-event/recovery-layout.dll` places
11,649,005 proven compiler bytes / 31.353475% of the file, including
1,957,357 executable bytes. SHA-256 is
`947696b9b5227f98c5ceab494f9beba6cb793d31cfccf9ba68181324119fef19`.
The increase is 784 bytes: 662 callback bytes plus 122 new EH-helper bytes.
All six recovered non-executable sections remain byte-identical. File size is
37,153,792; the independent full-file comparator still FAILS identity, with
13,864,396 aligned matches / 37.3162%. The image remains a partial, nonloadable
placement artifact; its generated base-relocation directory is 1,077,708 bytes.

Scanning the existing Ghidra exports finds 549 constructor-call leads. Some
contain decompiler-inlined callee bodies, so native calls must confirm every
lead. `tools/compile_external_event_callbacks.py` discovers and locally compiles
nine 88-byte callbacks (792 candidate bytes). Each constructs an externally
declared event using one of the ninety pinned, proven constructors, dispatches
it as a temporary reference, and destroys it. Native call endpoints, receiver
adjustments and RET cleanup constrain source generation; state-zero unwind
actions constrain derived destructor identities. These candidates remain
outside the default manifest until pinned body/relocation/EH checks succeed.

## Upstream C bodies physically placed and LINK forwarding verified (2026-09-30)

The strict dependency graph now follows an additional inventoried native E9
linker thunk to an independently verified compiler-emitted C forwarder. Both
hops must resolve to accepted dependencies; unknown or modified destinations
remain rejected. The additional hop unlocks eight zlib bodies / 4,667 bytes.
Zlib now verifies 54 bodies / 20,053 bytes and Expat 94 / 11,808 bytes.
`analysis/recovery-msvc-upstream-libraries-linker-aliases/coverage-audit.json`
records 165,876 distinct bodies / 1,813,558 executable bytes / 7.089009%.

The placement pipeline reruns pinned-library source, compiler, object and closed
relocation-graph checks, then emits patched compiler bytes only for accepted
bodies. `analysis/linked-placement-upstream-linker-aliases/recovery-layout.dll`
contains 11,679,539 proven compiler bytes, including 1,987,891 `.text` bytes.
SHA-256: `24015a1ebfa3c89f944cb2ff2366faa8f7f4993498781e1670bdabedd282fa94`.
Its generated base-relocation directory is 1,077,968 bytes. All six recovered
non-executable sections remain byte-identical. The whole-file identity gate
still fails; this remains a nonloadable partial placement artifact.

Compiler CodeView procedure extents now permit extraction of functions whose
sections contain embedded jump tables. Both COFF debug fixups must refer to the
same defined function, and the extent must fit its section without crossing the
next function. Entire native-body length, every fixed byte and all relocation
dependencies still must match. This extracts three additional Expat procedures,
but adds zero verified bytes in this checkpoint.

Validation: all 61 local verifier/placement tests pass. The independent whole-file
comparison reports 13,892,167 aligned bytes / 37.3910% and rejects identity,
including incidental zero-filled matches; those are not executable recovery
credit. Source object compilation remains the existing pinned MSVC artifact run
36803682931; this checkpoint changes verification and placement only.

## Recursive relocated constants and pointer-table placement (2026-09-30)

Library matching now admits read-only symbol extents that contain DIR32
pointer fixups. `immutable_data_definitions` emits entire compiler constant
initializers with their relocations only when every fixup is an in-bounds,
non-overlapping DIR32 against a resolvable symbol.
`verify_readonly_definition` treats a native operand address as a proposal:
fixed byte runs must match, and every pointer child must independently verify —
bound function endpoints via the closed dependency graph, or data children by
the same complete-extent proof applied recursively. Cyclic tables and unknown
children fail closed. Verified constants contribute dependency evidence only;
they grant zero separate byte credit.

Against the pinned library objects from run 36803682931 this unlocks the
bodies whose relocations reach relocated constant tables. Zlib verifies 57
bodies / 20,389 bytes and Expat 95 / 11,924 bytes. Thirteen accepted bodies
carry readonly dependency evidence, including `_z_errmsg` (the `_z_errmsg`
string pointer table), `_crc32_z`, `deflate`/`compress` static descriptor and
code tables, `inflate_table` local `lbase`/`lext`/`dbase`/`dext` tables, and
Expat `getEncodingIndex` (the `encodingNames` pointer table).
`analysis/recovery-msvc-upstream-pointer-tables/coverage-audit.json` records
165,879 distinct bodies / 1,813,993 executable bytes / 7.090710% coverage —
105 new distinct functions / 30,969 new distinct bytes over the
conditional-event baseline, or +3 distinct bodies / +435 bytes over the
linker-aliases checkpoint.

The placement pipeline reruns all pinned checks and places only closed-graph
compiler bytes. `analysis/linked-placement-upstream-pointer-tables/recovery-layout.dll`
contains 11,679,974 proven compiler bytes / 31.436829% of the file, including
1,988,326 `.text` bytes. SHA-256 is
`43a7f55c0dcb06bdfc31e7f326f22be55abc9224254b9210f60049bd98f30562`. Its
generated base-relocation directory is 1,077,988 bytes. All six recovered
non-executable sections remain byte-identical. The independent whole-file
comparator reports 13,891,746 aligned bytes / 37.3898% and still FAILS
identity; the image remains a partial, nonloadable placement artifact.

Validation: all 63 local tooling tests pass, including new recursive
pointer-table, empty-string leaf, and cyclic-rejection cases. Source object
compilation remains the pinned MSVC run 36803682931; this checkpoint changes
verification and placement only. Older superseded `analysis/linked-placement-*`
directories were removed locally to reclaim disk space; each is regenerable
from the pinned artifacts and the documented commands.
