# `sclib-csharp.dll` rebuild target

The target is a DLL linked from recovered C++ source, without authored assembly
or embedded copies of executable bytes. The installed Sonos DLL is read-only
reference material. No Sonos application is launched during reconstruction.

## Primary score

The reference is 37,153,792 bytes. A 95% aligned byte match requires at least
35,296,103 identical bytes at the same file offsets. The candidate must also
have the same file size, and each reference PE section must independently reach
95%. `python3 tools/compare.py <candidate.dll> --threshold 95` enforces
these scores. The same
command with its default threshold requires complete byte identity.

The section byte counts show why function matching alone is insufficient:

| Section | Reference bytes | Share of file |
|---|---:|---:|
| `.text` | 25,583,104 | 68.86% |
| `.rdata` | 9,115,648 | 24.53% |
| `.reloc` | 1,878,016 | 5.05% |
| all other sections and headers | 577,024 | 1.55% |

The complete mismatch allowance at 95% is 1,857,689 bytes. The relocation
section alone exceeds that allowance, so reproducing code without compatible
link layout cannot meet the file target.

## Independent progress measures

1. **Ghidra pseudocode coverage:** identified function bodies with exported
   C-like output, by count and reference body bytes. This is analysis coverage.
2. **Compilable C++ coverage:** distinct Ghidra-derived functions that compile
   to x86 COFF objects, by count and reference body bytes. Provisional types
   and unresolved call declarations are recorded as such.
3. **Instruction-body match:** C++ object bodies equal to complete reference
   function bodies, with unlinked relocations excluded from an exact verdict.
   Pinned MSVC results take precedence over local Clang results.
4. **Linked DLL match:** aligned bytes by file and section, candidate size,
   imports and exports, PE header fields, and relocation layout. This is the
   acceptance measure.

The current bulk recovered-thunk object contains 31,878 C++ functions. With
the pinned VS 2019 16.9.10 / MSVC 14.28 toolchain, 22,865 function bodies
match the reference exactly before linking, covering 208,829 reference body
bytes. A further 1,309 functions have the same length and all non-relocation
bytes matching, bringing the relocation-pending tranche to 24,174 functions
and 234,984 reference body bytes. Across the common prefixes, 335,154 of
440,518 fixed bytes match. These are object-function metrics only; they do not
measure aligned bytes in a rebuilt DLL.

Linked C++ probes exist, including a combined probe with verified function
bodies, but no full reconstruction DLL exists yet. A copied or wrapped reference DLL
would not count as a source rebuild. Each reported percentage names its
denominator and stage so decompiler output is never mistaken for a byte match.

`tools/profile_reference_coverage.py` measures the remaining layout problem.
The `.text` section has 25,583,104 raw bytes; identified function bodies occupy
15,818,515 distinct byte positions. Of the 9,764,589 unclassified positions,
6,765,148 contain `0xCC`. This byte value is consistent with linker padding,
but unclassified bytes are not assumed to be padding. `.rdata` contributes
9,115,648 bytes, including 3,962,133 zero bytes. Exact function bodies alone
cannot satisfy the section and whole-file targets; C++ code order, data, and
relocation layout must be reconstructed.

The reference begins `.text` with 125,900 consecutive five-byte incremental
link thunks (629,500 bytes). The current pinned combined probe produces the
same thunk form for 1,671 destinations, showing that ordinary C++ plus the
pinned linker can recreate this structure. Of the reference thunk destinations,
46,486 do not currently coincide with an inventoried Ghidra function entry.
Recovering those entries is the next bulk analysis target. The reference
`.reloc` directory contains 808,521 `HIGHLOW` records, including 479,999
relocations into `.rdata` and 318,177 into `.text`; data and code ordering both
matter for the final aligned score.
