# Whole-library and original-layout recovery

The accepted object-body audit now contains 1,808,891 executable bytes (7.070766%).
The partial PE placement build still contains 11,649,005 physically placed compiler
bytes (31.353475% of the file); upstream-library placement remains to be integrated.
The active goal remains 100% binary identity from C/C++.

## Reproduce LINK behavior, then reconstruct the layout

The fresh inventory has 8,632,312 unclassified `.text` bytes. Of these,
4,930,450 lie in entirely `0xCC` gaps, and 1,832,567 additional `0xCC` bytes
lie in mixed gaps. Neither category alone proves padding.

110,252 gaps, totaling 4,206,371 bytes, immediately follow an inventoried
function and fit this hypothesis, where `entry` and `size` describe that body:

```
next_address = align_up(entry + size + floor(size / 4), 16)
```

Run 36803682931 compiled real C++ checksum functions with x86 MSVC
19.28.29919 and linked them with the pinned LINK. All five measured gaps in
the fresh incremental image fit this rule, across bodies from 17 to 2,984
bytes. A nonincremental control shows ordinary alignment without the large
reservations. The growth experiment also fits the rule, but neighboring
addresses move; it does not establish reproduction of a historical `.ilk`
state. The reference PDB age is 2, so history remains a relevant unknown.

This confirms the rule's compiler/linker origin in the probe, not the identity
of every matching reference gap. The next layout milestone is to link complete
recovered object contributions in their original order and compare the bytes
LINK emits, including boundaries and thunk destinations. Do not fill unknown
code with byte arrays, patch the image with reference padding, or promote a
gap merely because its length fits the rule.

Microsoft documents code/data reservation and jump thunks for
[/INCREMENTAL](https://learn.microsoft.com/en-us/cpp/build/reference/incremental-link-incrementally?view=msvc-170),
and the dependence on the incremental link database. The current physical
placement artifact remains a partial, nonloadable image.

Reproduce the experiment using `tools/run_build_experiments.py layout` under
the pinned x86 compiler environment. Inspect downloaded artifacts with
`tools/inspect_layout_experiment.py DIRECTORY --output REPORT.json`.
`tools/investigate_build_layout.py --output REPORT.json` inventories the
reference hypotheses without claiming coverage.

## Rebuild original library modules

Native strings identify [zlib 1.2.12](https://github.com/madler/zlib/tree/v1.2.12)
and [Expat 2.5.0](https://github.com/libexpat/libexpat/tree/R_2_5_0).
Upstream source archives are SHA-256 pinned in `tools/fetch_library_sources.py`.
Their licenses remain in the extracted source trees. Only their C modules
are compiled; upstream assembler implementations are not built.

Seven configurations compiled successfully in run 36803682931: zlib `/O2`,
`/O2 /Oy-`, `/O1`; Expat DTD on/off with namespaces enabled, each with `/O2`
and `/O2 /Oy-`. These use `/MD /GS /Gy /Zi`. The pinned compiler/LINK binaries
used the hosted Windows 10 SDK 10.0.26100.0 and VS 2022 C headers after the
historical installer failed. That environment is recorded in each artifact's
`environment.json`; it is not presented as the original header environment.
The layout probe includes no headers and uses `/NODEFAULTLIB`.

The first strict correspondence pass finds:

| Configuration | Unique fixed-byte candidates | Verified closed-graph bodies | Body bytes |
| --- | ---: | ---: | ---: |
| Expat DTD on, `/O2` | 146 | 93 | 11,796 |
| Expat DTD off, `/O2` | 62 | 52 | 4,756 |
| zlib `/O2` | 74 | 40 | 11,856 |
| zlib `/O1` | 9 | 1 | 42 |
| All `/Oy-` configurations | 0 | 0 | 0 |

These historical first-pass totals include overlaps and are not new distinct coverage.
The DTD-on and `/O2` results identify the most productive next configurations.
The matcher searches whole inventoried body extents, requires a unique full
fixed-byte correspondence, validates every relocation, and removes functions
whose dependencies fail verification until the remaining graph is closed.
Import bindings come from native PE import names and decoded jump chains.
Read-only data bindings require complete relocation-free compiler data to
match at a native read-only address. Unknown runtime, EH, writable-data and
pointer-table bindings remain rejected. Negative tests cover unresolved calls,
changed dependencies, malformed relocations and invalid import destinations.

The current matcher deliberately excludes short/ambiguous functions, undecodable
COFF bodies, and data graphs containing relocations. Complete module recovery
requires those constraints to be recovered independently, followed by integration
with the existing placement and coverage verifier. Do not weaken these gates to
increase the percentage.

SQLite identifies itself as 3.31.1 but reports `HAS_CODEC`, `THREADSAFE=2`,
`MAX_EXPR_DEPTH=0`, several `OMIT_*` options and a source ID ending `alt2`.
Stock SQLite is therefore not an established source match. Determine the codec
implementation and local patches before rebuilding it as an original module.
The Rich fingerprint also contains multiple toolchain builds, so another library
may require an older compiler rather than the application compiler.

### Accepted upstream-library body audit

The dependency verifier now independently identifies the MSVC fastcall security
cookie checker against the cookie address in the PE load config, including its
success return and failure jump. It also checks complete immutable data definitions
across object files, and verifies compiler-emitted five-byte C forwarding functions
as dependency aliases. Runtime identities and forwarding aliases receive zero
additional byte credit. Missing callees, modified tables, writable memory and wrong
forwarding destinations remain rejected, with per-relocation diagnostics.

Reverification of the existing pinned `/O2` C objects yields 46 zlib bodies / 15,386
bytes and 94 Expat bodies / 11,808 bytes. The union with the prior accepted audit adds
94 distinct functions and **25,867 distinct executable bytes** after removing overlaps.
The resulting audit is `analysis/recovery-msvc-upstream-libraries/coverage-audit.json`:
165,868 distinct bodies / 1,808,891 executable bytes / 7.070766%.

Reproduce it without recompiling or executing any DLL:

```sh
python3 tools/audit_library_recovery.py \
  ci-output/build-experiments-run-36803682931/libraries \
  --baseline analysis/recovery-msvc-conditional-event/coverage-audit.json \
  --output-dir analysis/recovery-msvc-upstream-libraries
```

The admission tool checks the pinned compiler, source-archive records, recorded
configuration and reference hash; then reruns full correspondence/relocation-graph
verification and the distinct-body audit. It records object hashes and environment
provenance. This proves object bodies at reference-address placement constraints,
not a complete linked DLL. Integrating these normal C symbol names and bindings into
the physical placement pipeline is the next required step.

## Structured Ghidra evidence

`tools/export_structured_recovery.py ENTRIES.txt --output-dir DIRECTORY` runs
the exporter against the isolated project with `-readOnly`, hashes both protected
original projects before/after, and validates every exported native range.
The compressed JSONL contains database parameter/storage information, instruction
pcode and call references, typed high pcode, SSA definition links and CFG edges.
This uses Ghidra's [HighFunction API](https://ghidra.re/ghidra_docs/api/ghidra/program/model/pcode/HighFunction.html).

The validated sample contains 14 functions, 145,181 native bytes, 39,641
instructions and 419,160 high-pcode operations. Function `10dbda10` has 42,562
high operations whose origin is outside its native body and is marked ineligible
for automated lowering. Treat this flag as one necessary gate; eligibility is
not proof that inferred types, C++ lifetimes, EH or source semantics are correct.
The exporter is the structured input foundation. General C++ lowering and an
automatic source-variant search engine are not implemented by this change.

## Persistent Windows worker

The workflow now supports `persistent_worker=true`, selecting a registered
Windows x64 worker labelled `sonos-msvc142`. Library compilation and strict
comparison then run on the same host. Download `out/matching/summary.json` for
compact results; complete correspondence reports and objects remain available
for review. Hosted Actions remains the tested compilation fallback.

There were zero registered runners when checked. No persistent machine has
been provisioned or registered. To activate this path:

1. Register an available Windows machine following GitHub's
   [self-hosted runner setup](https://docs.github.com/en/actions/how-tos/manage-runners/self-hosted-runners/add-runners)
   for this repository, with label `sonos-msvc142`.
2. Install Python, CMake and the full pinned VS 2019 toolset. The experiment
   enforces x86 compiler version 19.28.29919. Keep its compiler, headers, SDK
   and runtime libraries persistent rather than reinstalling each job.
3. Run `python3 tools/prepare_worker_evidence.py analysis/windows-evidence.zip`
   locally and extract that private archive into `C:\SonosRecovery\evidence`
   on the authorized worker. The worker checks both reference and inventory
   hashes. This helper does not publish or upload the reference DLL.
4. Dispatch `msvc-142-probe.yml` with both `build_experiments=true` and
   `persistent_worker=true`. A missing worker will leave the job queued;
   use the hosted setting until the worker is online.

With `build_experiments=false`, the same-host comparison also processes compiled
member-ABI candidate objects through the existing strict body/EH verifier.
The private evidence bundle contains their indexes, EH inventories, auxiliary
bindings and native symbol/export metadata. Refresh it when generators change
those files. Compilation and exact correspondence remain distinct from
promotion into the accepted coverage audit.
