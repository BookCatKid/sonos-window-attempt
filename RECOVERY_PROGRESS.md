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
