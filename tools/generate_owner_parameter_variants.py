#!/usr/bin/env python3
"""Emit isolated C++ exception-specification probes for the by-value owner.

These are hypotheses. Full pinned body and recursive EH comparison decide
whether any formulation reproduces the reference's two-state unwind map.
"""
import json
import re
from compile_ghidra_cpp import ROOT


def main():
    source = (ROOT / "src/generated/owner_parameter_raii.cpp").read_text()
    variants = {
        "owner_parameter_throw_spec": source.replace("() noexcept { if (second)", "() throw() { if (second)"),
        "owner_parameter_maythrow": source.replace("() noexcept { if (second)", "() noexcept(false) { if (second)"),
        "owner_parameter_nothrow": source.replace("~RecoveredParamOwner_FUN_", "__declspec(nothrow) ~RecoveredParamOwner_FUN_").replace("() noexcept { if (second)", "() { if (second)"),
        "owner_parameter_lambda_guard": re.sub(
            r"(~RecoveredParamOwner_FUN_[0-9a-f]+\(\)) noexcept (\{ if \(second\).*?VirtualSlot2\(\); \} )\}",
            r"\1 noexcept(false) { [this]() noexcept \2}(); }", source),
    }
    output = ROOT / "src/generated/owner_parameter_variants"
    output.mkdir(parents=True, exist_ok=True)
    manifest = []
    baseline = ROOT / "analysis/compiled-cpp-owner-parameter-raii"
    for name, text in variants.items():
        if text == source:
            raise ValueError(f"Owner declaration shape no longer recognized: {name}")
        (output / (name + ".cpp")).write_text(text)
        directory = ROOT / "analysis" / ("compiled-cpp-" + name.replace("_", "-"))
        directory.mkdir(parents=True, exist_ok=True)
        (directory / "ghidra_recovered.cpp").write_text(text)
        for filename in ("compiled-index.tsv", "reference-eh-inventory.json"):
            (directory / filename).write_bytes((baseline / filename).read_bytes())
        manifest.append({"object": name + "_reference_flags", "directory": str(directory.relative_to(ROOT))})
    (output / "tranches.json").write_text(json.dumps(manifest, indent=2) + "\n")


if __name__ == "__main__":
    main()
