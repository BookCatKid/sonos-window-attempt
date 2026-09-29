#!/usr/bin/env python3
"""Rank multi-state MSVC EH families by recoverable reference bytes.

The report groups functions by unwind topology and normalized cleanup actions.
It is intentionally coverage weighted: large source-generatable families appear
before small, unusual functions.
"""
import argparse
import collections
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESS = re.compile(r"0x[0-9a-f]+")
STACK_SLOT = re.compile(r"\[(?:e[bs]p|esp)(?:\s*[+-]\s*0x[0-9a-f]+)?\]")


def normalize_instruction(text):
    if "0x1008c50b" in text:
        return "SCSTR_DTOR"
    if "0x122fc54c" in text or "0x122fc548" in text:
        return "TERMINATE_IAT"
    text = STACK_SLOT.sub("[STACK]", text)
    return ADDRESS.sub("ADDR", text)


def action_shape(action):
    return {
        "next_state": action["next_state"],
        "instructions": [normalize_instruction(x) for x in action["instructions"]],
    }


def shape_key(row):
    meta = row["metadata"]
    return json.dumps(
        {
            "state_count": meta["state_count"],
            "actions": [action_shape(x) for x in meta["actions"]],
        },
        sort_keys=True,
        separators=(",", ":"),
    )


def add(bucket, key, row):
    value = bucket.setdefault(key, {"functions": 0, "reference_body_bytes": 0, "examples": []})
    value["functions"] += 1
    value["reference_body_bytes"] += row["body_bytes"]
    if len(value["examples"]) < 12:
        value["examples"].append(row["entry"])


def ranked(bucket, limit=None):
    values = []
    for key, value in bucket.items():
        values.append({"key": key, **value})
    values.sort(key=lambda x: (-x["reference_body_bytes"], -x["functions"], x["key"]))
    return values[:limit] if limit else values


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--evidence", type=Path, default=ROOT / "analysis/eh-lifetime-evidence.jsonl")
    parser.add_argument("--output", type=Path, default=ROOT / "analysis/multistate-eh-families.json")
    parser.add_argument("--top", type=int, default=250)
    args = parser.parse_args()

    state_counts = {}
    scstr_states = {}
    shapes = {}
    total_functions = total_bytes = 0
    for line in args.evidence.open():
        row = json.loads(line)
        states = row["metadata"]["state_count"]
        if states <= 1:
            continue
        total_functions += 1
        total_bytes += row["body_bytes"]
        add(state_counts, str(states), row)
        add(scstr_states, f"scstr={str(row['contains_scstr']).lower()};states={states}", row)
        add(shapes, shape_key(row), row)

    report = {
        "scope": "Validated multi-state reference EH records, grouped by normalized unwind actions",
        "total": {"functions": total_functions, "reference_body_bytes": total_bytes},
        "by_state_count": ranked(state_counts),
        "by_scstr_and_state_count": ranked(scstr_states),
        "top_normalized_shapes": ranked(shapes, args.top),
        "distinct_normalized_shapes": len(shapes),
    }
    args.output.write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
