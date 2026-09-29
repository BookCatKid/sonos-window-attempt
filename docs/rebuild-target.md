# `sclib-csharp.dll` rebuild target

The target is a DLL linked from recovered C++ source, without authored assembly
or embedded copies of executable bytes. The installed Sonos DLL is read-only
reference material. No Sonos application is launched during reconstruction.

## Primary score

The reference is 37,153,792 bytes. A 95% aligned byte match requires at least
35,296,103 identical bytes at the same file offsets, with candidate size also
reported. `python3 tools/compare.py <candidate.dll> --threshold 95` computes
this score and reports it separately for every named PE section. The same
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

No linked reconstruction DLL exists yet. A copied or wrapped reference DLL
would not count as a source rebuild. Each reported percentage names its
denominator and stage so decompiler output is never mistaken for a byte match.
