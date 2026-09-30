# Byte-identical recovery strategy

The acceptance target is the complete 37,153,792-byte reference DLL, built from
C or C++ with no authored assembly and no embedded reference executable bytes.
The default `tools/compare.py` gate requires complete identity.

## Evidence at the start of this investigation

The latest prior audit, `analysis/recovery-msvc-round2/coverage-audit.json`,
proves 163,711 distinct bodies / 1,699,600 executable bytes under verified
reference placement constraints: 6.643559% of executable virtual bytes.
This does not establish a full linked DLL or aligned file coverage.
The existing pinned compiler is MSVC 19.28.29919, installed from the VS 2019
16.9.10 bootstrapper. Local Clang checks syntax; pinned MSVC decides matching.

Ghidra already supplies broad pseudocode coverage. The best immediate return
is repairing recurring C++ lowering and ABI errors across existing exports.
Restarting bulk analysis before exhausting that corpus adds little information
to the compiler and exception-lifetime problems currently blocking recovery.

## Immediate experiments

1. Promote the old primitive and globals batches' explicit Ghidra `__thiscall`
   receivers into genuine C++ members with the typed generator's existing
   lowering. Preserve the original batches and measure a separate variant.
   Four batches contain 15,353 compiling functions / 762,316 reference body
   bytes, including overlaps; these counts are candidates, not incremental gain.
2. Test the owner-parameter exception graph. The current candidate's first
   FuncInfo has three unwind states while the reference has two. Its normal
   instructions already match. Probe exception specifications and a destructor
   whose virtual release is inside a C++ `noexcept` lambda. Accept only full
   body, relocation, and recursively verified exception-graph equality.
3. Compare these experiments in one focused Windows job, then audit the union
   of verified executable byte positions against the prior baseline. Keep
   negative results so the same formulations are not tried repeatedly.

Reproduce the member candidates with:

```sh
python3 tools/promote_msvc_members.py analysis/compiled-cpp-thunk analysis/compiled-cpp-globals analysis/compiled-cpp-high-thunk analysis/compiled-cpp-high
python3 tools/generate_owner_parameter_variants.py
python3 tools/promote_virtual_arguments.py
python3 tools/promote_virtual_arguments.py analysis/compiled-cpp-thunk-members
python3 tools/promote_virtual_arguments.py analysis/compiled-cpp-globals-members
python3 tools/promote_virtual_arguments.py analysis/compiled-cpp-high-thunk-members
gh workflow run msvc-142-probe.yml --ref codex/bulk-member-abi -f focused_probe=true
python3 tools/compare_recovery_tranches.py <downloaded-artifact-directory> --manifest src/generated/member_abi/tranches.json --baseline analysis/recovery-msvc-round2/coverage-audit.json --output-dir analysis/recovery-msvc-member-abi
```

## Measured outcome

Pinned [run 36671806043](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36671806043)
compiled all four promoted batches and added 1,324 distinct exact bodies /
36,772 executable bytes. The four initial owner specification variants added
zero bytes; the lambda formulation preserved all 52 normal bodies but did not
reproduce their complete exception graphs.

Pinned [run 36672322099](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36672322099)
compiled 1,850 virtual-argument candidates across four batches. Restoring their
implicit member receivers added another 117 bodies / 3,496 distinct executable
bytes. The multi-state batch added zero, so receiver recovery alone does not
resolve those larger lifetime/stack discrepancies. Declaring virtual release
`noexcept` in [run 36672486405](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36672486405)
also added zero owner-family bytes.

The final audit is
`analysis/recovery-msvc-bulk-abi-final/coverage-audit.json`:
165,152 bodies / 1,739,868 executable bytes (6.800963%). The total gain is
1,441 bodies / 40,268 bytes over the starting checkpoint. None of this is a
full linked DLL score. The reference SHA-256 remains
`3518f71487c58f378cc62562d257e1ffd7145288aba9153823b49ec3009af9ca`.

The focused build now caches only the pinned compiler binaries; it requires no
Windows headers or import libraries because these experiments are self-contained
object compilations. The successful cache-hit run finished in 30 seconds and
skipped installation, compared with more than four minutes in the preceding run.
The full build retains SDK/toolchain setup and linked probes. The eight new
member/virtual batches are also wired into the default object build and default
recovery-tranche manifest. A consolidated comparison of all thirteen experiments
against run 36672486405 reproduces the full 40,268-byte gain.

Seven tests check receiver and stack ABI preservation, virtual dispatch against
a typed thiscall pointer, argument parsing, and conservative rejection. All pass.
CodeRabbit reviewed the tooling; its output-path and manifest/index robustness
findings were addressed.

## Direct-call and string-lifetime continuation

The direct-call/string-lifetime checkpoint recorded 165,646 distinct exact bodies /
1,765,210 executable bytes (6.900022%). The additional gain over 6.800963% is
494 bodies / 25,342 bytes. The consolidated audit is
`analysis/recovery-msvc-bulk-call-lifetime-final/coverage-audit.json`, pinned to
[run 36677278050](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36677278050).

Recovered direct-call prototypes add 367 bodies / 11,543 bytes across three
member batches. True C++ local string lifetimes add 127 bodies / 13,799 bytes.
The strongest string batch combines scalar storage recovery with callee
propagation in a separate Ghidra project; separate variants preserve all earlier
proofs. The out-of-line destructor's entire bytes and nested exception graph are
verified. External release identities come from the PE export table; they do not
count the release implementation as rebuilt. Unknown-export mutation tests
reject the graph, and the previous owner-graph regression remains intact.

Fifteen checks pass. Further nontrivial owner copy/move declarations add zero
bytes and remain recorded negative results. CodeRabbit's missing-manifest
finding was addressed; its follow-up review reported zero findings. The seven
new source tranches are part of the default build and comparison manifest.

Reproduce the local lifetime source by running
`tools/compile_scstr_local_raii.py` against the bulk and recovered-target JSONL
corpus. `--extended-storage` enables the separate scalar/spill experiment.
`--signature-exports` overlays the isolated propagation corpus and emits another
separate tranche. `tools/run_signature_propagation.py --storage-only` performs
the callee experiment on an isolated project, preserving before/after exports.
No reference application is executed and no original Ghidra project is modified.

## Physical PE placement and C++ data recovery

The partial PE places all 165,761 proven function bodies and accepted compiler
EH/literal fragments at reference offsets. Its `.text` has 1,953,980 verified
compiler bytes, including EH helpers. A conflicting overlap, unresolved fixup,
or mismatched marked byte aborts. Unknown regions remain empty and are reported.

Packed C++ constants and symbolic pointer initializers reconstruct all six
non-executable payload sections, including 490,344 HIGHLOW fields. The compiler
produces their pointer relocations. Executable sections and `.reloc` are rejected
as data input. All 74 full-data objects / 9,691,648 bytes compile and pass final
byte/fixup proofs under pinned MSVC in
[run 36680111341](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36680111341).

`analysis/linked-placement-bulk-stack-arity/recovery-layout.dll` has six byte-identical
sections: `.rdata`, `.data`, `.idata`, `.tls`, `.00cfg`, and `.rsrc`. It contains
11,645,628 proven compiler bytes (31.344386% of the file). The independent
full-file comparator scores 37.3076%, including coincidental empty-region zero
matches, and **fails the 100% gate**. The image lacks an entry point and
import/export header directories; its base relocations are incomplete. It is a
placement artifact, not a usable or complete DLL. No reference instructions are
embedded.

Reproduce the current placement using the pinned artifacts available locally:

```sh
python3 tools/compile_recovered_data.py --tag full
python3 tools/link_recovery_image.py \
  --artifact-dirs ci-output/run-36690135114 ci-output/run-36687349560 \
    ci-output/run-36680111341 \
    ci-output/run-36661659252 \
    analysis/msvc-14-28-x86-objects-5490d21-run36626235420 \
  --include-flag-sweep --output-dir analysis/linked-placement-bulk-stack-arity
python3 tools/compare.py analysis/linked-placement-bulk-stack-arity/recovery-layout.dll
```

Generation alone is a local Clang syntax/COFF experiment. Placement requires
artifact `toolchain.txt` evidence for pinned MSVC 19.28.29919. Each data source
has a manifest hash and page index. Reports retain object provenance, fixups,
missing targets and unbuilt byte counts. The original placement pass had twenty-one passing tests. CodeRabbit's
placement review returned zero findings; its later data-tooling review reached
the service's free-review rate limit.

Wider callee-signature propagation added zero bytes and regressed a previously
verified string batch. That source remains separate and is not selected by
default. Future inference must preserve proven caller signatures and variants.

## Following work, in priority order

Rank remaining failures by distinct reference bytes and repeated instruction/EH
shape. Repair shared lowering before spending time on individual long functions.
Prioritize the existing multi-state handler failures (186 functions / 50,165
bytes at the prior checkpoint), destructor families, and recovered call ABIs.
When exported pseudocode demonstrably lacks necessary receiver/type information,
run targeted Ghidra signature propagation in an isolated project; retain the
before/after corpus and independently check its conventions against reference
instructions. Avoid speculative signature propagation across the entire project.

Extend physical placement with new source definitions, complete compiler
relocation coverage, and PE startup/header reconstruction. Measure `.text`,
`.rdata`, and `.reloc` together. Data and existing thunks now have final-offset
proofs, but most native executable code remains missing. The full relocation
table must follow real recovered address fields; copying instruction bodies or
counting empty holes is excluded.

The final acceptance command remains `python3 tools/compare.py <rebuilt.dll>`.
No function count, pseudocode percentage, syntax percentage, or placement-based
object proof substitutes for that complete file comparison.


## Empty tree arguments and atomic operations

Pinned [run 36687349560](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36687349560)
verifies all 90 empty-tree argument callers / 14,403 bytes. Ghidra omitted an
eight-byte outgoing container. A genuine C++ by-value object restores its
allocation, 28-byte self-linked sentinel, two adjacent flag bytes, copy/move ABI,
and parameter lifetime. Volatile storage writes and compiler-only
`_ReadWriteBarrier` sequencing preserve the observed receiver homes. The complete
EH graph is independently verified for all 90 callers; no handler byte or
exception state is patched into the generated source.

`tools/compile_atomic_intrinsics.py` translates conservative LOCK/UNLOCK patterns
into MSVC intrinsics. Pointer declarations/casts must establish a supported
1/2/4-byte width. Unknown widths, multiple writes, dependent increments, pointer
mutation after reading the old value, and control flow are rejected. Native RET
cleanup can establish omitted unused word parameters. The final atomic object
verifies 21 exact functions / 433 bytes. Together these families add 111 distinct
functions / 14,836 bytes over the previous checkpoint.

The tree/atomic checkpoint audit is
`analysis/recovery-msvc-tree-barrier-atomic-arity/coverage-audit.json`: 165,757
exact bodies / 1,780,046 distinct bytes / 6.958014% executable coverage. Thirty
tests pass. CodeRabbit reported two tooling findings; both were addressed and
validated. Broader scalar storage/spill variants added zero coverage and remain
outside the accepted manifest.

Focused code probes now omit unchanged packed data by default. Add
`-f include_data_probe=true` to rebuild data in a focused job; normal builds
always include it. This reduces repeated compilation and artifact transfer while
placement still requires the previously pinned, hash-verified data objects.

The next bulk pass should apply native argument-count evidence across the
remaining Ghidra headers and generalize container recovery where node/layout
proofs support it. Exact caller bodies, full EH graphs, and final file offsets
remain the acceptance criteria.


## Broad member stack-arity probes

`tools/promote_stack_arity.py` restores unused word arguments where native RET
cleanup exceeds the emitted genuine C++ member parameter list. It updates both
member declarations and definitions, rejects ambiguous or non-word signatures,
and preserves baseline source. Across six batches, 148 source hypotheses compile.
Pinned [run 36688344412](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36688344412)
accepts four exact bodies / 218 new bytes. Other five variants add zero and remain
outside the default recovery manifest.

The authoritative audit is now
`analysis/recovery-msvc-bulk-stack-arity/coverage-audit.json`: 165,761 distinct
bodies / 1,780,264 bytes / 6.958867% executable coverage. The current physical
placement uses the latest focused objects from run 36690135114 and older pinned
data/full/sweep artifacts. Proven file bytes increase to 11,645,628. The 100%
gate still fails. Raw aligned coincidences decrease by 22 bytes because newly
emitted relocations shift the incomplete relocation table; this score includes
unbuilt zero-fill and is not the reconstructed-source byte count.

`tools/compile_tree_iterators.py` probes genuine class-valued postfix increment
for 12 identical 88-byte tree traversals. Native return behavior establishes the
hidden result pointer and unused postfix argument. Branch orientation removes
three excess bytes; caching the current node gives the correct length but
register allocation still differs. Four variants add zero bytes. Traversal tests
execute only synthetic trees, covering left/right descent, ascent, sentinel end,
returned snapshots, and receiver mutation. Thirty-six tests pass.

CodeRabbit's stack-arity review identified fresh-checkout directory creation and
partial-output manifest durability; both were addressed. Suggestions to discard
Clang mismatches before MSVC or remove production compiler flags were declined:
Clang is the local compilation gate, while original MSVC/relocation/EH proofs
control acceptance. Candidate metrics explicitly mark matching as unverified.

Next experiments should batch iterator/helper source variants in one pinned job,
and restore the verified eight-byte container call ABI in an isolated Ghidra
project for the 36 remaining branch/multistate callers. Original projects and
reference binaries remain immutable.
