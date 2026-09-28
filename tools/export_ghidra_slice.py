#!/usr/bin/env python3
"""Export selected native functions from the saved Ghidra project."""

import argparse
import json
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
PROJECT = ROOT / "analysis" / "ghidra"
GHIDRA = Path("/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("addresses", nargs="*", help="Function entry addresses in hex")
    parser.add_argument("--addresses-file", type=Path, help="One entry address per line; # starts a comment")
    parser.add_argument("--output", type=Path, required=True, help="JSON Lines output file")
    args = parser.parse_args()
    if not GHIDRA.is_file() or not (PROJECT / "WindowAttempt.gpr").is_file():
        parser.error("Installed Ghidra and saved WindowAttempt project are required")
    requested = list(args.addresses)
    if args.addresses_file:
        for line in args.addresses_file.read_text().splitlines():
            address = line.split("#", 1)[0].strip()
            if address:
                requested.append(address)
    if not requested:
        parser.error("Supply addresses or --addresses-file")
    addresses = list(dict.fromkeys(f"{int(address, 16):08x}" for address in requested))
    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    log = output.with_suffix(".ghidra.log")
    command = [
        str(GHIDRA), str(PROJECT), "WindowAttempt",
        "-process", "sclib-csharp.dll", "-noanalysis", "-readOnly",
        "-scriptPath", str(ROOT / "tools" / "ghidra"),
        "-postScript", "ExportFunctionSlice.java", str(output), *addresses,
        "-log", str(log),
    ]
    with log.open("w") as log_file:
        result = subprocess.run(command, stdout=log_file, stderr=subprocess.STDOUT)
    if result.returncode:
        raise SystemExit(f"Ghidra exited {result.returncode}; see {log}")
    if not output.is_file():
        raise SystemExit(f"Ghidra produced no output; see {log}")
    records = [json.loads(line) for line in output.read_text().splitlines()]
    if len(records) != len(addresses):
        raise SystemExit(f"Expected {len(addresses)} records, got {len(records)}; see {log}")
    for record in records:
        name = record.get("name", "unknown")
        detail = record.get("error", f"{record['body_bytes']} bytes, {len(record['callees'])} callees")
        print(f"{record['requested_address']} {name}: {detail}")
    print(output)


if __name__ == "__main__":
    main()
