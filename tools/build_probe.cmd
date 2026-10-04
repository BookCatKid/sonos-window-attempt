@echo off
setlocal
if not exist out mkdir out

call C:\VS2019BuildTools\VC\Auxiliary\Build\vcvarsall.bat amd64_x86 -vcvars_ver=14.28 > out\setup.log 2>&1
if errorlevel 1 goto failed

cl /Bv > out\toolchain.txt 2>&1
where cl >> out\toolchain.txt
where link >> out\toolchain.txt

if "%SONOS_SWEEP_FLAGS%"=="1" (
  call tools\build_flag_sweep.cmd
  if errorlevel 1 goto failed
)

for %%F in (src\generated\direct_jumps\direct_jump_*.cpp) do (
  cl /nologo /O2 /Gy /bigobj /c /Foout\%%~nF.obj %%F > out\%%~nF.log 2>&1
  if errorlevel 1 goto failed
)

for %%F in (src\generated\member_abi\*.cpp) do (
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 goto failed
)

powershell -NoProfile -ExecutionPolicy Bypass -File tools\build_bulk_parallel.ps1

if "%SONOS_PART_SLICE%"=="0" (
  cl /nologo /O2 /MD /GS /GR /EHsc /c /Foout\ehprobe_ehsc_gs.obj src\eh_frame_probe.cpp > out\ehprobe_ehsc_gs.log 2>&1
  cl /nologo /O2 /MD /GS- /GR /EHsc /c /Foout\ehprobe_ehsc_nogs.obj src\eh_frame_probe.cpp > out\ehprobe_ehsc_nogs.log 2>&1
  cl /nologo /O2 /MD /GS /GR /EHa /c /Foout\ehprobe_eha_gs.obj src\eh_frame_probe.cpp > out\ehprobe_eha_gs.log 2>&1
  cl /nologo /O2 /MD /GS /GR /EHsc /d2FH4- /c /Foout\ehprobe_nofh4.obj src\eh_frame_probe.cpp > out\ehprobe_nofh4.log 2>&1
  cl /nologo /O2 /MD /GS /GR /EHs- /c /Foout\ehprobe_ehs0.obj src\eh_frame_probe.cpp > out\ehprobe_ehs0.log 2>&1
  cl /nologo /O2 /MD /GS /GR /EHa /d2FH4- /c /Foout\ehprobe_eha_nofh4.obj src\eh_frame_probe.cpp > out\ehprobe_eha_nofh4.log 2>&1
)

cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\zonegroup_getter.obj src\zonegroup_getter.cpp > out\getter.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\zonegroup_result.obj src\zonegroup_result.cpp > out\result.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\zonegroup_factory_candidate.obj src\zonegroup_factory_candidate.cpp > out\factory.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /Oy- /MD /GS /GR /EHsc /Zi /c /Foout\factory_frame_pointer.obj src\zonegroup_factory_candidate.cpp > out\factory_frame_pointer.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /Oy- /MD /GS /GR /EHsc /Zi /c /Foout\factory_lifetime.obj src\zonegroup_factory_lifetime_candidate.cpp > out\factory_lifetime.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /Oy- /MD /GS /GR /EHsc /Zi /c /Foout\factory_owner.obj src\zonegroup_factory_owner_candidate.cpp > out\factory_owner.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\leaf_true.obj src\leaf_true.cpp > out\leaf_true.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\leaf_false.obj src\leaf_false.cpp > out\leaf_false.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\leaf_self.obj src\leaf_self.cpp > out\leaf_self.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\ghidra_communication.obj src\generated\communication.cpp > out\ghidra_communication.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\ref_wrapper_ctor.obj src\ref_wrapper_ctor.cpp > out\ref_wrapper_ctor.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\signature_pilot_reference_flags.obj src\generated\signature_pilot.cpp > out\signature_pilot_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\signature_ret_pilot_reference_flags.obj src\generated\signature_ret_pilot.cpp > out\signature_ret_pilot_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\single_state_guards_reference_flags.obj src\generated\single_state_guards.cpp > out\single_state_guards_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\multistate_terminate_guards_reference_flags.obj src\generated\multistate_terminate_guards.cpp > out\multistate_terminate_guards_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\owner_parameter_raii_reference_flags.obj src\generated\owner_parameter_raii.cpp > out\owner_parameter_raii_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00003_reference_flags.obj src\generated\eh_part-00003.cpp > out\eh_part-00003_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00037_reference_flags.obj src\generated\eh_part-00037.cpp > out\eh_part-00037_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00042_reference_flags.obj src\generated\eh_part-00042.cpp > out\eh_part-00042_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00050_reference_flags.obj src\generated\eh_part-00050.cpp > out\eh_part-00050_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00055_reference_flags.obj src\generated\eh_part-00055.cpp > out\eh_part-00055_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00059_reference_flags.obj src\generated\eh_part-00059.cpp > out\eh_part-00059_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00080_reference_flags.obj src\generated\eh_part-00080.cpp > out\eh_part-00080_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00083_reference_flags.obj src\generated\eh_part-00083.cpp > out\eh_part-00083_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00087_reference_flags.obj src\generated\eh_part-00087.cpp > out\eh_part-00087_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00106_reference_flags.obj src\generated\eh_part-00106.cpp > out\eh_part-00106_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00108_reference_flags.obj src\generated\eh_part-00108.cpp > out\eh_part-00108_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00116_reference_flags.obj src\generated\eh_part-00116.cpp > out\eh_part-00116_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00159_reference_flags.obj src\generated\eh_part-00159.cpp > out\eh_part-00159_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00167_reference_flags.obj src\generated\eh_part-00167.cpp > out\eh_part-00167_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00170_reference_flags.obj src\generated\eh_part-00170.cpp > out\eh_part-00170_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\eh_part-00187_reference_flags.obj src\generated\eh_part-00187.cpp > out\eh_part-00187_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\owner_pair_raii_reference_flags.obj src\generated\owner_pair_raii.cpp > out\owner_pair_raii_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\inline_cleanup_reference_flags.obj src\generated\inline_cleanup.cpp > out\inline_cleanup_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\noexcept_cleanup_reference_flags.obj src\generated\noexcept_cleanup.cpp > out\noexcept_cleanup_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /Oy- /MD /GS /GR /EHsc /Zi /c /Foout\noexcept_cleanup_frame_pointer.obj src\generated\noexcept_cleanup.cpp > out\noexcept_cleanup_frame_pointer.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\native_typed_expanded_o2.obj src\generated\native_typed_expanded.cpp > out\native_typed_expanded_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\native_typed_expanded_reference_flags.obj src\generated\native_typed_expanded.cpp > out\native_typed_expanded_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\native_virtual_slots_o2.obj src\generated\native_virtual_slots.cpp > out\native_virtual_slots_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\scstr_virtual_slots_o2.obj src\generated\scstr_virtual_slots.cpp > out\scstr_virtual_slots_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\scstr_byte_offsets_o2.obj src\generated\scstr_byte_offsets.cpp > out\scstr_byte_offsets_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\scstr_byte_virtual_o2.obj src\generated\scstr_byte_virtual.cpp > out\scstr_byte_virtual_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\scstr_byte_virtual_reference_flags.obj src\generated\scstr_byte_virtual.cpp > out\scstr_byte_virtual_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\native_virtual_o2.obj src\generated\native_virtual.cpp > out\native_virtual_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\native_virtual_reference_flags.obj src\generated\native_virtual.cpp > out\native_virtual_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\scstr_virtual_o2.obj src\generated\scstr_virtual.cpp > out\scstr_virtual_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\native_typed_o2.obj src\generated\native_typed.cpp > out\native_typed_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\native_typed_reference_flags.obj src\generated\native_typed.cpp > out\native_typed_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\scstr_typed_o2.obj src\generated\scstr_typed.cpp > out\scstr_typed_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /c /Foout\scstr_expanded_o2.obj src\generated\scstr_expanded.cpp > out\scstr_expanded_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\scstr_expanded_reference_flags.obj src\generated\scstr_expanded.cpp > out\scstr_expanded_reference_flags.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\scstr_recovered.obj src\generated\scstr_recovered.cpp > out\scstr_recovered.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\query_family_candidate.obj src\generated\query_family_candidate.cpp > out\query_family_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\scstr_equals_candidate.obj src\scstr_equals_candidate.cpp > out\scstr_equals_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\ref_wrapper_assign.obj src\ref_wrapper_assign.cpp > out\ref_wrapper_assign.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\resource_cleanup.obj src\resource_cleanup.cpp > out\resource_cleanup.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\swig_delete_candidate.obj src\swig_delete_candidate.cpp > out\swig_delete_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\single_ref_wrapper_candidate.obj src\single_ref_wrapper_candidate.cpp > out\single_ref_wrapper_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\swig_delete_family.obj src\generated\swig_delete_family.cpp > out\swig_delete_family.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\single_ref_reset_candidate.obj src\single_ref_reset_candidate.cpp > out\single_ref_reset_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\single_ref_replace_candidate.obj src\single_ref_replace_candidate.cpp > out\single_ref_replace_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\single_ref_family.obj src\generated\single_ref_family.cpp > out\single_ref_family.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\single_ref_mutations.obj src\generated\single_ref_mutations.cpp > out\single_ref_mutations.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\two_field_clear_candidate.obj src\two_field_clear_candidate.cpp > out\two_field_clear_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\resource_cleanup_return_candidate.obj src\resource_cleanup_return_candidate.cpp > out\resource_cleanup_return_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\single_ref_clear_candidate.obj src\single_ref_clear_candidate.cpp > out\single_ref_clear_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\cleanup_families.obj src\generated\cleanup_families.cpp > out\cleanup_families.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\discovery_get_household.obj src\discovery_get_household.cpp > out\discovery_get_household.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\discovery_native_start.obj src\discovery_native_start.cpp > out\discovery_native_start.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\soap_builder_candidate.obj src\soap_builder_candidate.cpp > out\soap_builder_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\soap_builder_storage_candidate.obj src\soap_builder_storage_candidate.cpp > out\soap_builder_storage_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\soap_length_candidate.obj src\soap_length_candidate.cpp > out\soap_length_candidate.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /MD /GS /GR /EHsc /Zi /c /Foout\soap_length_parameter_helper.obj src\soap_length_parameter_helper.cpp > out\soap_length_parameter_helper.log 2>&1
if errorlevel 1 goto failed
rem Compile the bulk recovered Ghidra tranche under the pinned MSVC toolchain.
rem Keep a minimal /O2 variant close to the local clang-cl experiment and a
rem second variant with the flags inferred for the original application build.
cl /nologo /O2 /bigobj /c /Foout\recovered_thunks_o2.obj src\generated\recovered_thunks.cpp > out\recovered_thunks_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\recovered_thunks_reference_flags.obj src\generated\recovered_thunks.cpp > out\recovered_thunks_reference_flags.log 2>&1
if errorlevel 1 goto failed
rem Compile the mechanically lowered vtable-reference tranche separately so
rem its function-body score can be measured without changing thunk ordering.
cl /nologo /O2 /bigobj /c /Foout\recovered_vftables_o2.obj src\generated\recovered_vftables.cpp > out\recovered_vftables_o2.log 2>&1
if errorlevel 1 goto failed
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\recovered_vftables_reference_flags.obj src\generated\recovered_vftables.cpp > out\recovered_vftables_reference_flags.log 2>&1
if errorlevel 1 goto failed
rem Packed non-executable constants and real symbolic pointer initializers.
if exist src\generated\data\*.cpp for %%F in (src\generated\data\*.cpp) do (
  cl /nologo /O2 /bigobj /c /Foout\%%~nF.obj %%F > out\%%~nF.log 2>&1
  if errorlevel 1 goto failed
)
link /nologo /DLL /MACHINE:X86 /NOENTRY /DEBUG /INCREMENTAL /DYNAMICBASE /NXCOMPAT /BASE:0x10000000 /FILEALIGN:512 /MAP:out\wrapper_link_probe.map /OUT:out\wrapper_link_probe.dll out\ref_wrapper_ctor.obj out\ref_wrapper_assign.obj out\resource_cleanup.obj out\single_ref_wrapper_candidate.obj out\single_ref_reset_candidate.obj out\single_ref_replace_candidate.obj > out\wrapper_link_probe.log 2>&1
if errorlevel 1 goto failed
link /nologo /DLL /MACHINE:X86 /NOENTRY /DEBUG /INCREMENTAL /DYNAMICBASE /NXCOMPAT /BASE:0x10000000 /FILEALIGN:512 /MAP:out\query_link_probe.map /OUT:out\query_link_probe.dll out\query_family_candidate.obj out\scstr_equals_candidate.obj > out\query_link_probe.log 2>&1
if errorlevel 1 goto failed
link /nologo /DLL /MACHINE:X86 /NOENTRY /DEBUG /INCREMENTAL /OPT:NOICF /DYNAMICBASE /NXCOMPAT /BASE:0x10000000 /FILEALIGN:512 /MAP:out\swig_delete_family.map /OUT:out\swig_delete_family.dll out\swig_delete_family.obj > out\swig_delete_family_link.log 2>&1
if errorlevel 1 goto failed
link /nologo /DLL /MACHINE:X86 /NOENTRY /DEBUG /INCREMENTAL /OPT:NOICF /DYNAMICBASE /NXCOMPAT /BASE:0x10000000 /FILEALIGN:512 /MAP:out\combined_link_probe.map /OUT:out\combined_link_probe.dll out\swig_delete_family.obj out\single_ref_family.obj out\single_ref_mutations.obj out\cleanup_families.obj out\query_family_candidate.obj out\scstr_equals_candidate.obj out\ref_wrapper_ctor.obj out\ref_wrapper_assign.obj out\resource_cleanup.obj out\single_ref_wrapper_candidate.obj out\single_ref_reset_candidate.obj out\single_ref_replace_candidate.obj > out\combined_link_probe.log 2>&1
if errorlevel 1 goto failed
exit /b 0

:failed
for %%F in (out\signature_pilot*.log) do if exist %%F type %%F
for %%F in (out\signature_ret_pilot*.log) do if exist %%F type %%F
for %%F in (out\single_state_guards*.log) do if exist %%F type %%F
for %%F in (out\multistate_terminate_guards*.log) do if exist %%F type %%F
for %%F in (out\owner_parameter_raii_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00003_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00037_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00042_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00050_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00055_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00059_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00080_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00083_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00087_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00106_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00108_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00116_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00159_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00167_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00170_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\eh_part-00187_reference_flags*.log) do if exist %%F type %%F
for %%F in (out\owner_pair_raii*.log) do if exist %%F type %%F
for %%F in (out\inline_cleanup*.log) do if exist %%F type %%F
for %%F in (out\noexcept_cleanup*.log) do if exist %%F type %%F
for %%F in (out\scstr_virtual_slots*.log) do if exist %%F type %%F
for %%F in (out\scstr_byte*.log) do if exist %%F type %%F
for %%F in (out\native_virtual*.log out\scstr_virtual*.log) do if exist %%F type %%F
for %%F in (out\native_typed*.log out\scstr_typed*.log) do if exist %%F type %%F
for %%F in (out\direct_jump_*.log) do if exist %%F type %%F
for %%F in (out\setup.log out\getter.log out\result.log out\factory.log out\factory_frame_pointer.log out\factory_lifetime.log out\factory_owner.log out\leaf_true.log out\leaf_false.log out\leaf_self.log out\ghidra_communication.log out\ref_wrapper_ctor.log out\scstr_recovered.log out\scstr_expanded_o2.log out\scstr_expanded_reference_flags.log out\query_family_candidate.log out\scstr_equals_candidate.log out\ref_wrapper_assign.log out\resource_cleanup.log out\swig_delete_candidate.log out\single_ref_wrapper_candidate.log out\swig_delete_family.log out\single_ref_reset_candidate.log out\single_ref_replace_candidate.log out\single_ref_family.log out\single_ref_mutations.log out\two_field_clear_candidate.log out\resource_cleanup_return_candidate.log out\single_ref_clear_candidate.log out\cleanup_families.log out\discovery_get_household.log out\discovery_native_start.log out\soap_builder_candidate.log out\soap_builder_storage_candidate.log out\soap_length_candidate.log out\soap_length_parameter_helper.log out\recovered_thunks_o2.log out\recovered_thunks_reference_flags.log out\recovered_vftables_o2.log out\recovered_vftables_reference_flags.log out\wrapper_link_probe.log out\query_link_probe.log out\swig_delete_family_link.log out\combined_link_probe.log) do if exist %%F for /f "usebackq delims=" %%L in ("%%F") do echo ::error::%%L
exit /b 1
