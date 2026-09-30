# Windows Sonos communication library reconstruction

## Objective

Reconstruct `sclib-csharp.dll` from source and compare each candidate build byte for
byte with the installed Windows binary. The installed files are retained as immutable
reference inputs. A matching build has **not** been produced yet.
All authored reconstruction source in this workspace is C++ only; do not add
handwritten assembler source or inline assembler instructions.
The [rebuild target](docs/rebuild-target.md) requires 100% byte identity
and distinguishes pseudocode, compiled objects, matched functions, and a linked DLL.
The earlier 95% scores are intermediate milestones. C or C++ source may be
mechanically generated and need not be readable; authored assembly and embedded
reference executable bytes are excluded.

The latest [recovery strategy and measured results](docs/recovery-strategy.md)
record 165,757 verified object bodies / 1,780,046 executable bytes (6.958014%),
including another 14,836-byte gain from by-value tree arguments and compiler atomic intrinsics.
This is function-body coverage; no full matching DLL exists yet.

The partial PE placement build contains 11,645,410 verified compiler-produced
bytes at their final file offsets. All six recovered non-executable sections
are byte-identical. Its complete-file aligned match is 37.3077%, including
coincidental matches in zero-filled unbuilt regions; the 100% gate still fails.
See the recovery strategy for the reproducible placement command.

## Layout

- `reference/SonosV2/`: complete copied Windows Sonos installation (110 MB).
- `analysis/`: generated hashes, PE inventory, export/import catalogs, and topic leads.
- `tools/inventory.py`: refreshes the automated inventory using radare2.
- `tools/compare.py`: compares a candidate DLL with the reference.
- `tools/protocol_clues.py`: extracts relevant strings with file offsets.
- `tools/check_boundary.py`: checks decompiled C# P/Invoke names against PE exports.
- `analysis/zonegroup-first-tranche.md`: completed first offline
  `GetZoneGroupState` trace with exact addresses and explicit remaining gaps.
- `analysis/zonegroup-ghidra.txt`: Ghidra's offline string xrefs, native
  function boundaries, and selected pseudocode for the same path. Ghidra
  completed without the original PDB; its saved project is in `analysis/ghidra/`.
- `tools/export_ghidra_slice.py`: reuse the saved Ghidra project to export
  selected native function pseudocode, signatures, and call relationships as
  JSON Lines. `tools/ghidra/communication-seeds.txt` is the initial work list.
- `analysis/source-match.md`: current C++ comparison results and the remaining
  mismatch for the operation factory. Reproduce with
  `python3 tools/match_functions.py` and `python3 tools/compare_factory_cpp.py`.
- `analysis/toolchain-target.md`: exact v142 14.28 toolset target, measured
  PE build settings, and a first compiler/linker parameter profile. Reproduce
  the local evidence with `python3 tools/fingerprint_build.py`.
- `agents/`: six bounded static-analysis packets and a three-at-a-time Luna
  dispatch queue. See `agents/README.md`.
- `src/`: C++ reconstruction source.

## First commands

```sh
python3 tools/inventory.py
python3 tools/protocol_clues.py
python3 tools/check_boundary.py
python3 tools/agent_queue.py
python3 tools/compare.py build/sclib-csharp.dll
python3 tools/export_ghidra_slice.py --addresses-file tools/ghidra/communication-seeds.txt --output analysis/communication-slice.jsonl
```

The saved Ghidra project took about 44 minutes to analyze initially. The
read-only export command above reuses it without analyzing or launching Sonos;
the first 11-function communication slice completed in about 10 seconds.
Ghidra supplies candidate semantics and call graphs. Exact source recovery
still requires C++ type and lifetime reconstruction, compilation with the
pinned MSVC toolchain, and byte comparison against the reference. Start with
smaller communication helpers, then work upward to the 707-byte operation
factory and its nested constructors.

## Bulk pseudocode coverage

The saved Ghidra project identifies **255,978 functions**, including **58,554
thunks**. Their identified bodies total **15,819,044 bytes**. The bulk exporter
in `tools/ghidra/BulkDecompile.java` writes one JSON Lines record per function,
including its decompiled C-like source or an error. `tools/run_bulk_decomp.py`
resumes size-bounded chunks, and `tools/materialize_decomp.py` produces
address-indexed `.pseudo.c` files plus `coverage.json` and `index.tsv`.
Coverage is reported against these identified function bodies, separately by
function count and body bytes, with non-thunk numbers alongside. The generated
files are inspection material; the readable, compilable C++ candidates remain
under `src/` and require separate byte comparisons.

The completed exports currently cover 72,877 identified functions and
14,431,770 of 15,819,044 identified body bytes (91.23%). Within the structural
non-glue classification, they cover 14,426,850 of 14,812,990 body bytes
(97.39%). These are pseudocode coverage numbers, not rebuilt bytes.

## Mechanical C++ compilation gate

`tools/compile_ghidra_cpp.py` selects Ghidra functions with no unresolved globals
or class calls, emits their C-like bodies as C++, and compiles real x86 COFF
objects with `clang-cl`. Its type aliases preserve known widths, and its
declarations for `thunk_FUN_*` calls are provisional integer-returning stubs.
They require signature recovery before linking or byte comparison. It records
every accepted address in
`compiled-index.tsv` and compiler rejection in `failures.tsv`. Generated C++
and objects are local under `analysis/compiled-cpp*`; they are not checked in.

```sh
python3 tools/compile_ghidra_cpp.py analysis/bulk-medium/*.jsonl --output-dir analysis/compiled-cpp-thunk
python3 tools/compile_ghidra_cpp.py analysis/bulk-64-pilot.jsonl analysis/bulk-64-rest.jsonl analysis/bulk-64-final/*.jsonl --output-dir analysis/compiled-cpp-high-thunk
python3 tools/compile_ghidra_cpp.py analysis/communication-slice.jsonl --output-dir analysis/compiled-cpp-communication-thunk
python3 tools/compiled_cpp_coverage.py analysis/compiled-cpp-thunk analysis/compiled-cpp-high-thunk analysis/compiled-cpp-communication-thunk
```

At the September 28 checkpoint, the combined gate compiled 12,576 distinct
functions with 404,691 reference body bytes: 11.42% of non-glue function count
and 2.73% of non-glue body bytes. Of those functions, 4,674 are Ghidra
`Unwind@` handlers, so raw
function count overstates progress on the communication code. Four of the 11
selected communication functions compile, including two simple getters. The
compilation percentage is distinct from Ghidra pseudocode coverage and from
byte-identical code generation. These objects have not been linked into the
target DLL.

With the typed `SCStr` pass added, the distinct local object compilation total
is 15,288 functions and 590,165 reference body bytes, or 3.98% of the
non-glue body-byte denominator. This still measures compilation only.

The selected communication source is checked in at
`src/generated/communication.cpp` so the pinned MSVC GitHub Actions build can
test it. `tools/compile_scstr_cpp.py` mechanically rewrites supported Ghidra
`SCStr::` calls into typed C++ member calls. Its generated candidates and index
are checked in under `src/generated/` for the pinned compiler probe. The
`SCStr` declarations remain provisional, and these objects have no exact body
matches under local Clang. The other bulk generated C++ remains local under
`analysis/` until its placeholder types and call declarations have been reviewed.
Three additional readable communication C++ candidates and their current byte
comparison results are recorded in [communication-candidate-status.md](docs/communication-candidate-status.md).

Regenerate the typed batch from the completed local exports with:

```sh
python3 tools/compile_scstr_cpp.py analysis/bulk-64-pilot.jsonl analysis/bulk-64-rest.jsonl analysis/bulk-64-final/chunk-*.jsonl analysis/bulk-medium/chunk-*.jsonl analysis/bulk-small/chunk-*.jsonl
python3 tools/compare_compiled_ghidra.py analysis/compiled-cpp-scstr
```

The generator writes its local object and address index under
`analysis/compiled-cpp-scstr/`; the checked-in C++ and index under
`src/generated/` are the inputs to the pinned MSVC job.

```sh
# Export the remaining functions smaller than 64 bytes, including thunks.
python3 tools/run_bulk_decomp.py --max-size 64 --include-thunks --output-dir analysis/bulk-small

# Render completed JSONL exports as browsable source chunks and measured coverage.
python3 tools/materialize_decomp.py analysis/bulk-64-pilot.jsonl analysis/bulk-64-rest.jsonl analysis/bulk-64-final/chunk-*.jsonl analysis/bulk-medium/chunk-*.jsonl analysis/bulk-small/chunk-*.jsonl --labels-file tools/ghidra/communication-seeds.txt --output-dir analysis/readable-source
```

## Windows compiler probe through GitHub Actions

The [Windows workflow](.github/workflows/msvc-142-probe.yml) runs when a C++
candidate or the workflow changes, and can also be started manually. It
installs the historical VS 2019 16.9.10 Build Tools for MSVC 14.28.29919,
compiles the C++ candidates for x86, and uploads their COFF objects and
compiler-version report. It does not upload or run the installed Sonos app.
The repository excludes `reference/`, derived `analysis/`, and local `build/`
outputs. After downloading the `msvc-14-28-x86-objects` artifact to
`ci-output/`, compare it with the local DLL using:

```sh
python3 tools/compare_ci_objects.py ci-output
```

An object comparison is a first code-generation probe. Relocations and DLL
layout require a later link comparison before declaring a function byte match.
The [pinned compiler run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36365837967)
used MSVC 19.28.29919: both small getter bodies match their reference bytes;
the 707-byte operation factory does not yet match. The base `/O2` body is 591
bytes. The `/Oy-` frame-pointer profile is 597 bytes and matches the first
three reference bytes. The typed lifetime candidate is 663 bytes and emits
exception registration and the reference's direct controller vtable call.
The two-reference ownership candidate is 686 bytes. Its first fixed-byte
difference is at offset 17, where the reference reserves eight stack bytes
for construction state. Compare all variants with
`python3 tools/compare_ci_objects.py ci-output/msvc-29919-owner --variants`.
The [generated communication probe](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36505982711)
also compiled with the pinned MSVC toolset. Its two Ghidra-derived getters
match exactly (5 and 9 bytes); its 61-byte and 255-byte communication functions
compile but differ. Compare the downloaded object with
`python3 tools/compare_compiled_ghidra.py analysis/compiled-cpp-communication-thunk --object ci-output/msvc-ghidra-comm/ghidra_communication.obj`.
`src/ref_wrapper_ctor.cpp` is a typed C++ candidate for a 41-byte body repeated
520 times; `tools/compare_ref_wrapper.py` checks its object bytes.
The [typed `SCStr` MSVC run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36526232383)
compiled 2,306 recovered C++ functions. Of those, 156 have the reference body
length and all non-relocation bytes equal, totaling 9,655 reference body bytes.
No function in this batch is fully verified byte-identical until its object
relocations are resolved in a linked build.
The [promoted query-family run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36527932817)
raises that object result to **788 functions and 74,751 reference body bytes**.
`tools/verify_scstr_relocations.py` verifies all 3,131 pending relocation
targets against the reference exports, thunk entries, and string contents;
this verifies target semantics, not linked operand bytes. The repeated
103-byte interface-query family contributes 632 functions and 65,096 bytes.
The [pinned string-equality probe](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36528773340)
also compiled `SCStr::operator==(char const *)` from readable C++ to a
74-byte body with all 70 fixed bytes equal; its one absolute relocation names
an empty literal whose content matches the reference target.

The same run produced a 7,168-byte `wrapper_link_probe.dll` from the exact
41-byte wrapper C++ using the pinned 14.28.29919 linker. Its PE is x86 at base
`0x10000000` with 4,096-byte section and 512-byte file alignment. It has only
three sections and matches 976 of the reference's 37,153,792 aligned file
bytes. Its linked `RefWrapper::Init` function remains **41/41 bytes identical**
to the representative reference body. This probe establishes a linker
measurement path; it does not reconstruct the full library.
Run `tools/inspect_link_probe.py` with the downloaded DLL and map paths to
check both the linked body and the PE profile without executing the DLL.

The [linked C++ probe run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36529782013)
links three ownership functions together and a separate coherent interface-query
subsystem. All three ownership bodies remain byte identical after linking:
41/41, 61/61, and 33/33 bytes. In the 104 KiB query DLL, all **633** checked
functions (632 interface queries plus `SCStr::operator==(char const *)`) retain
their reference length and all **55,054/55,054 fixed bytes**. The linker resolves
all **2,529/2,529 relocation targets** to corresponding calls or equal string
contents; its incremental call thunks are followed during verification. The
relocation operands differ because the probe has a different layout, so none
of those 633 whole bodies is byte identical. Run `tools/inspect_query_link.py`
with the downloaded DLL, map, and two objects to reproduce this check.
The linked ownership probe remains 7,168 bytes and has 948 aligned bytes equal
to the 37,153,792-byte reference. The 105,984-byte query probe has 3,548
aligned bytes equal to the reference (0.00955%). These probes establish C++ source and link
fidelity for specific functions; **95% whole-DLL byte matching has not been
reached**.

The [repeated SWIG deletion run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36583273952)
compiles 327 generated, readable C++ deletion wrappers under pinned MSVC.
`tools/inspect_swig_delete_family.py` verifies **327/327 exact 16-byte object
bodies**, **327/327 exact linked bodies**, and **327/327 named PE exports**.
This accounts for 5,232 reference body bytes with independent functions rather
than one representative body. In the same run, a 24-byte single-reference
constructor remains exact after linking; four ownership bodies now total
159/159 exact linked bytes. The dedicated deletion DLL is 42,496 bytes and has
2,636 aligned bytes equal to the full reference (0.007095%).

The [combined family run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36584555678)
adds 217 single-reference constructors and 297 reset/replacement methods generated
as separate C++ functions. All **514/514** have exact object and linked bodies,
representing 13,266 reference body bytes. The combined probe retains the 327
exact exported deletions, six exact representative ownership bodies, and the
633 query/equality bodies with 55,054/55,054 fixed bytes and 2,529/2,529
matching relocation targets. Counting overlapping representatives only once,
its exact linked bodies correspond to **844 unique reference entries and
18,633 body bytes**. Its whole-file aligned match is still only **6,435 /
37,153,792 bytes (0.01732%)**; matching the complete PE layout, data, imports,
resources, and remaining code is still required for the 95% goal.
`python3 tools/inspect_combined_probe.py ci-output/msvc-mutations-36584555678/msvc-14-28-x86-objects`
reproduces the linked function, export, relocation, and aligned file metrics
together. Pass `--threshold 95` to make the aligned whole-file score a failing
gate for the final target.

The [cleanup family run](https://github.com/BookCatKid/sonos-window-attempt/actions/runs/36586250013)
adds 191 individually compiled and linked C++ cleanup functions, all exact
against their native bodies (6,824 reference bytes). The combined probe now
covers **1,035 unique exact linked reference functions / 25,457 body bytes**.
Its 633 query/equality functions still match all 55,054 fixed bytes and all
2,529 relocation targets, while the whole-file aligned score is **7,201 /
37,153,792 bytes (0.019382%)**. `tools/inspect_combined_probe.py` reproduces
these measurements from the downloaded run artifact.

The full-DLL comparison command requires complete identity by default; pass
`--threshold 95` to check the documented aligned-byte and per-section target.
The reference DLL is
32-bit native MSVC code with a SWIG C# boundary. Most named exports are generated
wrappers. The underlying communication implementation still needs analysis.

## Build clues already present

- The PE debug record names
  `C:\jenkins\workspace\release_controllers-wdcr-release-nightly\all\out\build\x86-Release\sclib\sclib\wrappers\csharp\sclib-csharp.pdb`.
- This path indicates a CMake-like `out/build/x86-Release` layout and a C# wrapper
  target. It does not provide the PDB or original build configuration.
- PE metadata reports a May 7, 2026 build timestamp and an MSVC x86 target.
- Do not treat a successful decompile as a byte match: use `tools/compare.py`.

## Initial inventory

- Reference `sclib-csharp.dll`: 37,153,792 bytes; SHA-256
  `3518f71487c58f378cc62562d257e1ffd7145288aba9153823b49ec3009af9ca`.
- 6,222 exports: 5,523 SWIG C# wrappers, 694 MSVC C++ decorated names, and 5 others.
- 438 imports, including Winsock socket, connection, send, and receive functions.
- `.text` holds 25,583,104 bytes; `.rdata` holds 9,115,648 bytes.
- Protocol strings include `AVTransport`, `ZoneGroupTopology`,
  `ContentDirectory`, `GetZoneGroupState`, and UPnP service URNs.
- `analysis/csharp-interop/` contains 451 decompiled files from the managed
  interop assembly; `sclibPINVOKE.cs` alone has 5,476 native import declarations.
- `analysis/csharp-desktop/` contains 1,121 decompiled files from the desktop
  assembly, including the GUI's cached household/zone-group read path.
- All 5,476 P/Invoke entry points in that file match exports in the copied native
  DLL after accounting for x86 symbol decoration. This confirms the managed/native
  boundary is mapped by name, not that the native implementation is recovered.
- `agents/reports/` contains bounded, address-backed static analyses of
  discovery, SOAP construction, response extraction, async lifecycle, and
  byte-match build metadata, plus network errors and retry boundaries.

## Next investigation

1. Identify the call paths from selected C# wrapper exports into discovery,
   transport, and request parsing code. Start with zone group discovery and
   `AVTransport` operations.
2. Recover the C# interop declarations and compare their signatures with the
   exported functions. Generated SWIG plumbing should be isolated from core logic.
3. Continue static reconstruction of the native communication path from the
   copied binaries. Do not launch either Sonos app.
4. Establish an x86 Windows MSVC build using the exact PE metadata as constraints;
   run `tools/compare.py` on each candidate.
