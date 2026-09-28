#!/usr/bin/env python3
"""Print the next static-analysis work packets for direct subagent dispatch."""
import argparse
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TASKS = ROOT / "agents" / "tasks"
REPORTS = ROOT / "agents" / "reports"
ACTIVE = ROOT / "agents" / "active.json"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--batch", type=int, default=3)
    args = parser.parse_args()
    active = set(json.loads(ACTIVE.read_text())) if ACTIVE.exists() else set()
    pending = [p for p in sorted(TASKS.glob("*.md"))
               if not (REPORTS / p.name).is_file() and p.stem not in active]
    for packet in pending[:args.batch]:
        task_name = packet.stem.replace("-", "_")
        print(f"TASK {task_name}")
        print(f"  model=gpt-6-luna reasoning_effort=xhigh fork_turns=none")
        print(f"  message=Read {packet} and complete it. Work only in {ROOT}. "
              "Follow its safety and output rules.")
    print(f"Available packets: {len(pending)}; active packets: {len(active)}")


if __name__ == "__main__":
    main()
