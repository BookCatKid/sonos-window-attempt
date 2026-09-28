#!/usr/bin/env python3
"""Cross-check decompiled C# P/Invoke declarations against native DLL exports."""
import csv
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "analysis/csharp-interop/Sonos.SCLib.Interop/sclibPINVOKE.cs"
EXPORTS = ROOT / "analysis/exports.csv"
OUT = ROOT / "analysis/boundary-check.txt"


def normalize(name):
    return re.sub(r"@\d+$", "", name.lstrip("_"))


def main():
    source = SOURCE.read_text()
    declarations = re.findall(
        r'\[DllImport\("sclib-csharp"(?:,\s*EntryPoint\s*=\s*"([^"]+)")?\)\]'
        r'(?:\s*\[[^\]]+\])*\s*'
        r'(?:public|internal|private)\s+static\s+extern\s+[^\n(]+?\s+(\w+)\s*\(', source)
    with EXPORTS.open(newline="") as stream:
        exports = list(csv.DictReader(stream))
    native = {normalize(row["name"]) for row in exports}
    required = {entry or method for entry, method in declarations}
    missing = sorted(required - native)
    lines = [
        f"C# P/Invoke declarations: {len(declarations)}",
        f"Distinct native entry points requested: {len(required)}",
        f"Native exports: {len(exports)}",
        f"Requested entry points found in exports: {len(required) - len(missing)}",
        f"Requested entry points missing from exports: {len(missing)}",
        "",
        *missing,
    ]
    OUT.write_text("\n".join(lines) + "\n")
    print("\n".join(lines[:5]))
    if missing:
        print(f"See {OUT} for missing names")


if __name__ == "__main__":
    main()
