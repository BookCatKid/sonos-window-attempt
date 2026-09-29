#!/usr/bin/env python3
"""Compare a candidate DLL against the exact installed reference bytes."""
import argparse
import hashlib
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / "reference" / "SonosV2" / "sclib-csharp.dll"


def digest(data):
    return hashlib.sha256(data).hexdigest()


def sections(data):
    if len(data) < 0x40 or data[:2] != b'MZ':
        raise ValueError('candidate is not a PE file')
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    if data[pe:pe + 4] != b'PE\0\0':
        raise ValueError('invalid PE signature')
    coff = pe + 4
    count = struct.unpack_from('<H', data, coff + 2)[0]
    first = coff + 20 + struct.unpack_from('<H', data, coff + 16)[0]
    result = {}
    for number in range(count):
        header = first + number * 40
        name = data[header:header + 8].split(b'\0')[0].decode('ascii', errors='replace')
        length, offset = struct.unpack_from('<II', data, header + 16)
        result[name] = data[offset:offset + length]
    return result


def score(reference, candidate):
    return sum(a == b for a, b in zip(reference, candidate)), len(reference)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("candidate", type=Path)
    parser.add_argument("--limit", type=int, default=20,
                        help="maximum distinct mismatch ranges to print")
    parser.add_argument("--threshold", type=float, default=100,
                        help="minimum aligned reference-file byte match percentage (default: exact)")
    args = parser.parse_args()
    if not 0 <= args.threshold <= 100:
        parser.error("--threshold must be between 0 and 100")
    original = REFERENCE.read_bytes()
    candidate = args.candidate.read_bytes()
    print(f"reference: {len(original)} bytes, SHA-256 {digest(original)}")
    print(f"candidate: {len(candidate)} bytes, SHA-256 {digest(candidate)}")
    matched, total = score(original, candidate)
    percent = 100 * matched / total
    print(f"aligned identical reference bytes: {matched:,}/{total:,} ({percent:.4f}%)")
    reference_sections = sections(original)
    try:
        candidate_sections = sections(candidate)
    except ValueError as error:
        print(f"candidate PE sections unavailable: {error}")
        candidate_sections = {}
    for name, reference_bytes in reference_sections.items():
        part, whole = score(reference_bytes, candidate_sections.get(name, b''))
        print(f"  {name}: {part:,}/{whole:,} ({100 * part / whole if whole else 0:.4f}%)")
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
    if percent < args.threshold or (args.threshold == 100 and original != candidate):
        raise SystemExit(1)


if __name__ == "__main__":
    main()
