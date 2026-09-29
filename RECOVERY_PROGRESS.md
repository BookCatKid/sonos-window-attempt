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
