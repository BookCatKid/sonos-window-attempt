# Windows Sonos communication library reconstruction

## Objective

Reconstruct `sclib-csharp.dll` from source and compare each candidate build byte for
byte with the installed Windows binary. The installed files are retained as immutable
reference inputs. A matching build has **not** been produced yet.
All authored reconstruction source in this workspace is C++ only; do not add
handwritten assembler source or inline assembler instructions.

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

```sh
# Export the remaining functions smaller than 64 bytes, including thunks.
python3 tools/run_bulk_decomp.py --max-size 64 --include-thunks --output-dir analysis/bulk-small

# Render completed JSONL exports as browsable source chunks and measured coverage.
python3 tools/materialize_decomp.py analysis/bulk-64-pilot.jsonl analysis/bulk-64-rest.jsonl analysis/bulk-small/chunk-*.jsonl --labels-file tools/ghidra/communication-seeds.txt --output-dir analysis/readable-source
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

The full-DLL comparison command exits 0 only for a byte-identical file. The reference DLL is
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
