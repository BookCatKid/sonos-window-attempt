#!/usr/bin/env python3
"""Compare a candidate DLL against the exact installed reference bytes."""
import argparse
import hashlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"


def digest(data):
    return hashlib.sha256(data).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("candidate", type=Path)
    parser.add_argument("--limit", type=int, default=20,
                        help="maximum distinct mismatch ranges to print")
    args = parser.parse_args()
    original = REFERENCE.read_bytes()
    candidate = args.candidate.read_bytes()
    print(f"reference: {len(original)} bytes, SHA-256 {digest(original)}")
    print(f"candidate: {len(candidate)} bytes, SHA-256 {digest(candidate)}")
    if original == candidate:
        print("BYTE IDENTICAL")
        return
    print(f"size difference: {len(candidate) - len(original):+d} bytes")
    ranges = []
    start = None
    for offset, (a, b) in enumerate(zip(original, candidate)):
        if a != b and start is None:
            start = offset
        elif a == b and start is not None:
            ranges.append((start, offset))
            start = None
    if start is not None:
        ranges.append((start, min(len(original), len(candidate))))
    print(f"mismatch ranges in shared length: {len(ranges)}")
    for start, end in ranges[:args.limit]:
        print(f"  0x{start:08x}..0x{end - 1:08x} ({end - start} bytes)")
    if len(ranges) > args.limit:
        print(f"  ... {len(ranges) - args.limit} more")
    raise SystemExit(1)


if __name__ == "__main__":
    main()
