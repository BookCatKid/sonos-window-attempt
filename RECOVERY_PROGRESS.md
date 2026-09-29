# Recovery checkpoint: 2026-09-29

The target remains a C++ rebuilt DLL matching at least 95% of the reference by byte and PE metrics. No Sonos/DLL execution and no assembly embedding are permitted.

## SCStr expansion

Commit `04d8031` adds placement constructors, exported method overloads, exported-definition normalization, global declarations, and support for lowering vtable addresses. The generated source is `src/generated/scstr_expanded.cpp`; its inventory is `src/generated/scstr-expanded-index.tsv`.

Local x86 clang-cl syntax/object gate: 4,033 candidates, 4,019 compiled functions, 223,870 reference body bytes, 14 rejected functions. Relative to the existing SCStr inventory, all 2,306 old entries are retained and 1,713 entries / 78,278 reference bytes are added. No vtable references survived eligibility in this particular tranche; the lowering is available for later mixed-function recovery. Caller-frame-dependent unwind handlers remain excluded.

Pinned MSVC 14.28 build: https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36619654703 . Compare both `scstr_expanded_o2.obj` and `scstr_expanded_reference_flags.obj` against `analysis/compiled-cpp-scstr-expanded` after downloading the artifacts. At this checkpoint that build is in progress; no MSVC match score for the expanded source is claimed.

## Relocation verification

The comparator now maps SCStr decorated signatures from `analysis/exports.csv` through reference incremental-link jumps. It ignores access control and char-pointee constness, which do not change the x86 call ABI; overloads and calling conventions remain distinguished. It also verifies narrow string contents at candidate reference addresses before accepting literal placement constraints. Wide strings are not handled by this pass.

Rechecking the existing MSVC SCStr object verifies 787 matching function bodies / 74,734 reference bytes after resolving these relocations. Combined with the disjoint recovered-thunk and vtable tranches, the checked reports total 25,509 exact bodies / 316,972 reference body bytes under their original-address placement constraints.

These scores compare compiled object bodies after relocation resolution. A linked DLL with the required section layout and data placement has not been produced or measured at 95%. The verified literal addresses are constraints for the eventual linker/layout reconstruction, not evidence that a current linked DLL already places them there.
