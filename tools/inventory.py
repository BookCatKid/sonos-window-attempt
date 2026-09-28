#!/usr/bin/env python3
"""Reproducible inventory of the installed Windows Sonos communication DLL."""
import csv
import hashlib
import json
import re
import subprocess
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REF = ROOT / "reference" / "SonosV2"
OUT = ROOT / "analysis"
TARGET = REF / "sclib-csharp.dll"


def r2_json(command):
    result = subprocess.run(["r2", "-q", "-c", command, str(TARGET)],
                            capture_output=True, text=True, check=True)
    data = result.stdout.strip()
    start = min((i for i in (data.find("["), data.find("{")) if i >= 0), default=-1)
    if start < 0:
        raise RuntimeError(f"No JSON returned by radare2 for {command}: {data[:300]}")
    return json.loads(data[start:])


def sha256(path):
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def export_kind(name):
    if name.startswith("_CSharp_"):
        return "SWIG C# wrapper"
    if name.startswith("?"):
        return "MSVC C++ decorated"
    return "other"


def main():
    OUT.mkdir(exist_ok=True)
    files = sorted(p for p in REF.rglob("*") if p.is_file())
    with (OUT / "reference-sha256.txt").open("w") as output:
        for path in files:
            print(f"{sha256(path)}  {path.relative_to(REF)}", file=output)

    exports = r2_json("iEj")
    imports = r2_json("iij")
    sections = r2_json("iSj")
    info = r2_json("iIj")

    with (OUT / "exports.csv").open("w", newline="") as output:
        writer = csv.writer(output)
        writer.writerow(["ordinal", "address", "kind", "name", "demangled"])
        for item in exports:
            name = item.get("name", "")
            writer.writerow([item.get("ordinal", ""), item.get("vaddr", ""),
                             export_kind(name), name, item.get("demname", "")])

    with (OUT / "imports.csv").open("w", newline="") as output:
        writer = csv.writer(output)
        writer.writerow(["library", "name", "address"])
        for item in imports:
            writer.writerow([item.get("libname", ""), item.get("name", ""),
                             item.get("vaddr", "")])

    # Names at this boundary are leads, not proof of the protocol implementation.
    topics = ("AVTransport", "ZoneGroup", "DeviceProperties", "Queue", "Alarm",
              "ContentDirectory", "MusicServices", "Discovery", "Netstart")
    with (OUT / "communication-entry-points.csv").open("w", newline="") as output:
        writer = csv.writer(output)
        writer.writerow(["topic", "kind", "name"])
        for item in exports:
            name = item.get("name", "")
            for topic in topics:
                if topic.lower() in name.lower():
                    writer.writerow([topic, export_kind(name), name])

    summary = {
        "target": str(TARGET.relative_to(ROOT)),
        "size_bytes": TARGET.stat().st_size,
        "sha256": sha256(TARGET),
        "reference_file_count": len(files),
        "pe_info": info,
        "sections": sections,
        "export_count": len(exports),
        "export_kinds": dict(Counter(export_kind(x.get("name", "")) for x in exports)),
        "import_count": len(imports),
        "import_libraries": dict(Counter(x.get("libname", "") for x in imports)),
        "topic_export_counts": {topic: sum(topic.lower() in x.get("name", "").lower()
                                           for x in exports) for topic in topics},
    }
    (OUT / "inventory.json").write_text(json.dumps(summary, indent=2, sort_keys=True) + "\n")
    print(f"Wrote inventory for {len(files)} reference files, {len(exports)} exports, "
          f"and {len(imports)} imports to {OUT}")


if __name__ == "__main__":
    main()
