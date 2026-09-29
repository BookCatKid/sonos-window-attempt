# Communication C++ candidates

These are readable C++ reconstructions of native communication functions. They
compile locally for x86 Windows with the `clang-cl` flags recorded in their
comparison tools, which read the installed DLL without executing it. They are working
candidates, not byte-matched functions. The pinned MSVC linker has not yet been
used for these three candidates.

| Reference entry | Function | Reference body | Candidate body | Current comparison |
| --- | --- | ---: | ---: | --- |
| `0x102f7150` | `SCLibrary::getHousehold` | 97 | 128 | 8/89 fixed bytes in common prefix; two relocations |
| `0x11096620` | discovery object start | 61 | 63 | 23/37 fixed bytes in common prefix; six relocations |
| `0x111c3530` | service/action storage constructor | 286 | 251 | 33/251 equal positions in common prefix after resolving six helper calls |
| `0x111c52e0` | SOAP HTTP header builder | 392 | 376 | 16/376 equal positions in common prefix after resolving ten helper calls |
| `0x11252c80` | SOAP body length | 255 | 237 | 12/229 fixed bytes in common prefix; two helper calls resolve to the reference thunk |
| `0x11253130` | SOAP parameter-length helper | 188 | 234 | 5/184 fixed bytes in common prefix; two helper calls resolve to reference thunks |

The source and comparison commands are:

- `src/discovery_get_household.cpp`; `python3 tools/discovery_compare_household.py`
- `src/discovery_native_start.cpp`; `python3 tools/discovery_compare_native_start.py`
- `src/soap_builder_storage_candidate.cpp`; `python3 tools/soap_builder_storage_compare.py`
- `src/soap_builder_candidate.cpp`; `python3 tools/soap_builder_compare.py`
- `src/soap_length_candidate.cpp`; `python3 tools/soap_length_compare.py`
- `src/soap_length_parameter_helper.cpp`; `python3 tools/soap_length_helper_compare.py`

The byte counts are evidence of the remaining code-generation gap. None of
these functions contributes to the exact-body or 95% whole-file score yet.
