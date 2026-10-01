#!/usr/bin/env python3
"""Fetch hash-pinned upstream C sources; never import executable/assembler objects."""
import argparse
import hashlib
import io
import json
import urllib.request
import zipfile
from pathlib import Path

SOURCES = [
    {'name': 'zlib', 'url': 'https://codeload.github.com/madler/zlib/zip/refs/tags/v1.2.12',
     'archive_sha256': '7c9917b80c125e317e44c9d83a4c15390dac9967df27397024beaf4342e0f8cd'},
    {'name': 'expat', 'url': 'https://codeload.github.com/libexpat/libexpat/zip/refs/tags/R_2_5_0',
     'archive_sha256': '087971674bba3688be7db9ed9f1601553326ccdc32f660148571ba5c500e5e10'},
]


def fetch(destination):
    destination = destination.resolve()
    destination.mkdir(parents=True, exist_ok=True)
    for item in SOURCES:
        data = urllib.request.urlopen(item['url'], timeout=60).read()
        if hashlib.sha256(data).hexdigest() != item['archive_sha256']:
            raise ValueError('Upstream archive hash changed: '+item['name'])
        target_root = destination/item['name']
        target_root.mkdir(exist_ok=True)
        with zipfile.ZipFile(io.BytesIO(data)) as archive:
            for info in archive.infolist():
                relative = Path(*Path(info.filename).parts[1:])
                if not relative.parts or info.is_dir():
                    continue
                target = target_root/relative
                if target_root.resolve() not in target.resolve().parents:
                    raise ValueError('Archive path escapes destination')
                target.parent.mkdir(parents=True, exist_ok=True)
                target.write_bytes(archive.read(info))
        print('Verified source archive:', item['name'], flush=True)
    (destination/'sources.json').write_text(json.dumps(SOURCES, indent=2)+'\n')


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('destination', type=Path)
    fetch(p.parse_args().destination)
