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
```

## Windows compiler probe through GitHub Actions

The manually triggered [Windows workflow](.github/workflows/msvc-142-probe.yml)
installs the historical VS 2019 16.9 Build Tools component for MSVC 14.28,
compiles the three C++ candidates for x86, and uploads their COFF objects and
compiler-version report. It does not upload or run the installed Sonos app.
The repository excludes `reference/`, derived `analysis/`, and local `build/`
outputs. After downloading the `msvc-14-28-x86-objects` artifact to
`ci-output/`, compare it with the local DLL using:

```sh
python3 tools/compare_ci_objects.py ci-output
```

An object comparison is a first code-generation probe. Relocations and DLL
layout require a later link comparison before declaring a function byte match.

The comparison command exits 0 only for a byte-identical file. The reference DLL is
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
