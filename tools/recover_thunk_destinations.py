#!/usr/bin/env python3
"""Enumerate linker jump-thunk destinations and recover missing Ghidra functions.

The Ghidra phase always uses a separate copy of the saved project. It asks
Ghidra's own disassembler/function manager to define code at destinations, then
decompiles the newly defined functions to JSON Lines. No assembly source is
generated or embedded.
"""

import argparse
import csv
import json
import shutil
import struct
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"
INVENTORY = ROOT / "analysis" / "function-inventory.tsv"
SOURCE_PROJECT = ROOT / "analysis" / "ghidra"
GHIDRA = Path("/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless")


def u16(data, offset):
    return struct.unpack_from("<H", data, offset)[0]


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def pe_sections(data):
    pe = u32(data, 0x3C)
    if data[pe:pe + 4] != b"PE\0\0":
        raise ValueError("reference is not a PE image")
    coff = pe + 4
    optional = coff + 20
    if u16(data, coff) != 0x14C or u16(data, optional) != 0x10B:
        raise ValueError("expected a 32-bit x86 PE image")
    image_base = u32(data, optional + 28)
    section_table = optional + u16(data, coff + 16)
    sections = []
    for index in range(u16(data, coff + 2)):
        offset = section_table + index * 40
        sections.append({
            "name": data[offset:offset + 8].split(b"\0")[0].decode("ascii"),
            "rva": u32(data, offset + 12),
            "raw_size": u32(data, offset + 16),
            "file_offset": u32(data, offset + 20),
            "characteristics": u32(data, offset + 36),
        })
    return image_base, sections


def enumerate_missing(reference, inventory):
    data = reference.read_bytes()
    image_base, sections = pe_sections(data)
    text = next(section for section in sections if section["name"] == ".text")
    start = text["file_offset"] + 5
    stop = text["file_offset"] + text["raw_size"]
    inventory_entries = set()
    with inventory.open(newline="") as file:
        for row in csv.DictReader(file, delimiter="\t"):
            inventory_entries.add(int(row["entry"], 16))

    # The first E9 belongs to the linker startup shim; the run begins at +5.
    count = 0
    occurrences = []
    while start + count * 5 + 5 <= stop:
        offset = start + count * 5
        if data[offset] != 0xE9:
            break
        source = image_base + text["rva"] + (offset - text["file_offset"])
        destination = source + 5 + struct.unpack_from("<i", data, offset + 1)[0]
        occurrences.append((source, destination))
        count += 1
    unique_missing = sorted({destination for _, destination in occurrences
                             if destination not in inventory_entries})
    all_targets = {destination for _, destination in occurrences}
    missing_occurrences = [(source, destination) for source, destination in occurrences
                           if destination not in inventory_entries]
    return {
        "image_base": image_base,
        "sections": sections,
        "run_count": count,
        "run_bytes": count * 5,
        "unique_destinations": len(all_targets),
        "inventory_functions": len(inventory_entries),
        "missing_unique_destinations": unique_missing,
        "missing_occurrences": missing_occurrences,
    }


def write_inputs(result, output_dir, reference):
    output_dir.mkdir(parents=True, exist_ok=True)
    targets_path = output_dir / "missing-targets.txt"
    with targets_path.open("w") as file:
        for address in result["missing_unique_destinations"]:
            file.write(f"{address:08x}\n")
    occurrence_path = output_dir / "thunk-targets.tsv"
    with occurrence_path.open("w") as file:
        file.write("source\tdestination\tin_inventory\n")
        missing = set(result["missing_unique_destinations"])
        for source, destination in result["missing_occurrences"]:
            file.write(f"{source:08x}\t{destination:08x}\tfalse\n")
        # Preserve a complete mapping separately so repeated/mapped targets are auditable.
        complete_path = output_dir / "all-thunk-targets.tsv"
    data = reference.read_bytes()
    image_base, sections = pe_sections(data)
    text = next(section for section in sections if section["name"] == ".text")
    start = text["file_offset"] + 5
    with complete_path.open("w") as file:
        file.write("source\tdestination\tmissing_destination\n")
        for index in range(result["run_count"]):
            offset = start + index * 5
            source = image_base + text["rva"] + (offset - text["file_offset"])
            destination = source + 5 + struct.unpack_from("<i", data, offset + 1)[0]
            file.write(f"{source:08x}\t{destination:08x}\t"
                       f"{str(destination in missing).lower()}\n")
    summary = {
        "run_count": result["run_count"],
        "run_bytes": result["run_bytes"],
        "unique_destinations": result["unique_destinations"],
        "inventory_functions": result["inventory_functions"],
        "missing_occurrence_count": len(result["missing_occurrences"]),
        "missing_unique_destination_count": len(result["missing_unique_destinations"]),
        "duplicate_missing_occurrences": (len(result["missing_occurrences"])
                                           - len(result["missing_unique_destinations"])),
        "addresses_file": str(targets_path),
        "occurrences_file": str(occurrence_path),
        "complete_mapping_file": str(complete_path),
    }
    (output_dir / "enumeration.json").write_text(json.dumps(summary, indent=2) + "\n")
    return summary


def clone_project(destination):
    source_gpr = SOURCE_PROJECT / "WindowAttempt.gpr"
    source_rep = SOURCE_PROJECT / "WindowAttempt.rep"
    if not source_gpr.is_file() or not source_rep.is_dir():
        raise SystemExit(f"Saved Ghidra project not found: {SOURCE_PROJECT}")
    destination.mkdir(parents=True, exist_ok=True)
    target_gpr = destination / source_gpr.name
    target_rep = destination / source_rep.name
    if target_gpr.exists() or target_rep.exists():
        if target_gpr.is_file() and target_rep.is_dir():
            return
        raise SystemExit(f"Incomplete recovery project already exists: {destination}")
    shutil.copy2(source_gpr, target_gpr)
    shutil.copytree(source_rep, target_rep, copy_function=shutil.copy2)


def run_ghidra(output_dir, max_functions, start_index):
    project_dir = output_dir / "ghidra"
    clone_project(project_dir)
    if not GHIDRA.is_file():
        raise SystemExit(f"Ghidra headless launcher not found: {GHIDRA}")
    addresses = output_dir / "missing-targets.txt"
    if not addresses.is_file():
        raise SystemExit(f"Address list not found: {addresses}; run enumeration first")
    target_count = sum(1 for _ in addresses.open())
    end_index = min(target_count, start_index + max_functions) if max_functions else target_count
    suffix = "" if start_index == 0 and end_index == target_count else f"-{start_index:06d}-{end_index:06d}"
    exported = output_dir / f"recovered-targets{suffix}.jsonl"
    stats = output_dir / f"ghidra-recovery{suffix}.tsv"
    log = output_dir / f"ghidra-recovery{suffix}.log"
    command = [
        str(GHIDRA), str(project_dir), "WindowAttempt",
        "-process", "sclib-csharp.dll", "-noanalysis",
        "-scriptPath", str(ROOT / "tools" / "ghidra"),
        "-postScript", "RecoverThunkDestinations.java",
        str(addresses), str(stats), str(exported), str(start_index), str(max_functions),
        "-log", str(log),
    ]
    with log.open("w") as log_file:
        result = subprocess.run(command, stdout=log_file, stderr=subprocess.STDOUT)
    if result.returncode:
        raise SystemExit(f"Ghidra exited {result.returncode}; see {log}")
    print(f"Ghidra recovery finished; stats={stats}; pseudocode={exported}")


def export_recovered_ranges(output_dir):
    project_dir = output_dir / "ghidra"
    if not (project_dir / "WindowAttempt.gpr").is_file():
        raise SystemExit(f"Recovery project not found: {project_dir}; run with --run-ghidra first")
    ranges = output_dir / "recovered-function-ranges.tsv"
    log = output_dir / "export-function-ranges.log"
    command = [
        str(GHIDRA), str(project_dir), "WindowAttempt",
        "-process", "sclib-csharp.dll", "-noanalysis", "-readOnly",
        "-scriptPath", str(ROOT / "tools" / "ghidra"),
        "-postScript", "ExportRecoveredFunctionRanges.java", str(ranges),
        "-log", str(log),
    ]
    with log.open("w") as log_file:
        result = subprocess.run(command, stdout=log_file, stderr=subprocess.STDOUT)
    if result.returncode:
        raise SystemExit(f"Ghidra range export exited {result.returncode}; see {log}")
    print(f"Recovered function ranges exported to {ranges}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--reference", type=Path, default=REFERENCE)
    parser.add_argument("--inventory", type=Path, default=INVENTORY)
    parser.add_argument("--output-dir", type=Path,
                        default=ROOT / "analysis" / "thunk-recovery")
    parser.add_argument("--run-ghidra", action="store_true",
                        help="define/decompile targets in an isolated project copy")
    parser.add_argument("--export-ranges", action="store_true",
                        help="export recovered function body ranges from the isolated project")
    parser.add_argument("--max-functions", type=int, default=0,
                        help="limit Ghidra processing (0 processes all targets)")
    parser.add_argument("--start-index", type=int, default=0,
                        help="first missing target index to process (supports resuming in chunks)")
    args = parser.parse_args()
    if args.max_functions < 0 or args.start_index < 0:
        parser.error("--max-functions and --start-index must be nonnegative")
    result = enumerate_missing(args.reference, args.inventory)
    summary = write_inputs(result, args.output_dir, args.reference)
    print(json.dumps(summary, indent=2))
    if args.run_ghidra:
        run_ghidra(args.output_dir.resolve(), args.max_functions, args.start_index)
    if args.export_ranges:
        export_recovered_ranges(args.output_dir.resolve())


if __name__ == "__main__":
    main()
