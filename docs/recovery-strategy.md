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

## Following work, in priority order

Rank remaining failures by distinct reference bytes and repeated instruction/EH
shape. Repair shared lowering before spending time on individual long functions.
Prioritize the existing multi-state handler failures (186 functions / 50,165
bytes at the prior checkpoint), destructor families, and recovered call ABIs.
When exported pseudocode demonstrably lacks necessary receiver/type information,
run targeted Ghidra signature propagation in an isolated project; retain the
before/after corpus and independently check its conventions against reference
instructions. Avoid speculative signature propagation across the entire project.

In parallel with body recovery, develop a linked-layout tranche that places
already verified definitions, data, incremental thunks, and EH metadata at their
reference locations. The .text, .rdata, and .reloc sections must be measured
together. Reference placement in an object verifier is a constraint for the
linker work, not evidence that the linker already meets it.

The final acceptance command remains `python3 tools/compare.py <rebuilt.dll>`.
No function count, pseudocode percentage, syntax percentage, or placement-based
object proof substitutes for that complete file comparison.
