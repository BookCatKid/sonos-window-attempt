# Communication C++ candidates

These are readable C++ reconstructions of native communication functions. All six
compile with the pinned VS2019 16.9.10 x86 compiler in GitHub Actions, without
executing Sonos. The object comparison below is from run `36588153344`. The
comparison masks four-byte COFF relocation slots and tests all other bytes at
their original offsets. It does not count object matches as linked-DLL bytes.

| Reference entry | Function | Reference body | Pinned MSVC body | Equal fixed bytes | Relocations |
| --- | --- | ---: | ---: | --- |
| `0x102f7150` | `SCLibrary::getHousehold` | 97 | 99 | 48/85 | 3 |
| `0x11096620` | discovery object start | 61 | 61 | 37/37 | 6 |
| `0x111c3530` | service/action storage constructor | 286 | 233 | 21/209 | 6 |
| `0x111c52e0` | SOAP HTTP header builder | 392 | 404 | 184/347 | 12 |
| `0x11252c80` | SOAP body length | 255 | 239 | 26/231 | 2 |
| `0x11253130` | SOAP parameter-length helper | 188 | 189 | 48/180 | 2 |

The discovery start method's six relocation targets also resolve to the six
reference call targets. It is therefore a complete relocatable 61-byte function
body match. Linking it at the original address with the original target layout
is still required for the 61 bytes to count toward aligned whole-file equality.

The source and comparison commands are:

- `src/discovery_get_household.cpp`; `python3 tools/discovery_compare_household.py`
- `src/discovery_native_start.cpp`; `python3 tools/discovery_compare_native_start.py`
- `src/soap_builder_storage_candidate.cpp`; `python3 tools/soap_builder_storage_compare.py`
- `src/soap_builder_candidate.cpp`; `python3 tools/soap_builder_compare.py`
- `src/soap_length_candidate.cpp`; `python3 tools/soap_length_compare.py`
- `src/soap_length_parameter_helper.cpp`; `python3 tools/soap_length_helper_compare.py`

The byte counts show the remaining code-generation gap. The current combined
linked reconstruction does not include these six candidate objects; none of
their bytes contributes to its whole-file score yet.
