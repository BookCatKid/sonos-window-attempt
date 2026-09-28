#!/usr/bin/env python3
"""Extract protocol and build clues from printable strings in the native DLL."""
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DLL = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"
OUT = ROOT / "analysis" / "protocol-clues.txt"

# Keep this narrow so the report remains a useful list of leads, not a giant strings dump.
PATTERN = re.compile(
    r"urn:schemas-(?:upnp|sonos)|urn:schemas-rincon|"
    r"(?:AVTransport|ContentDirectory|ZoneGroupTopology|DeviceProperties|"
    r"RenderingControl|AlarmClock|MusicServices|SystemProperties)|"
    r"(?:GetZoneGroupState|GetTransportInfo|SetAVTransportURI|GetPositionInfo)|"
    r"(?:<s:Envelope|SOAPACTION|SOAPAction)|"
    r"(?:[A-Za-z]:\\[^\s]{1,220}\.(?:pdb|h|hpp|cpp|c))",
    re.IGNORECASE,
)


def main():
    result = subprocess.run(["strings", "-a", "-t", "x", str(DLL)],
                            capture_output=True, text=True, check=True)
    seen = set()
    lines = []
    for line in result.stdout.splitlines():
        match = re.match(r"\s*([0-9a-f]+)\s+(.*)", line)
        if not match:
            continue
        offset, value = match.groups()
        value = value.strip()
        if PATTERN.search(value) and value not in seen:
            seen.add(value)
            lines.append(f"0x{offset}: {value[:500]}")
    OUT.parent.mkdir(exist_ok=True)
    OUT.write_text("\n".join(lines) + "\n")
    print(f"Wrote {len(lines)} distinct protocol/build leads to {OUT}")


if __name__ == "__main__":
    main()
