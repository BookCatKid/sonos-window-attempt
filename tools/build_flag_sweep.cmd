@echo off
rem Pinned toolchain environment is initialized by build_probe.cmd.
cl /nologo /bigobj /Gy /O1 /c /Foout\sweep_native_typed_o1.obj src\generated\native_typed.cpp > out\sweep_native_typed_o1.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o1.log & exit /b 1)
cl /nologo /bigobj /Gy /O1 /c /Foout\sweep_recovered_thunks_o1.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o1.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o1.log & exit /b 1)
cl /nologo /bigobj /Gy /O1 /c /Foout\sweep_scstr_expanded_o1.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o1.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o1.log & exit /b 1)
cl /nologo /bigobj /Gy /O1 /c /Foout\sweep_recovered_vftables_o1.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o1.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o1.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oy- /c /Foout\sweep_native_typed_o2_oy_off.obj src\generated\native_typed.cpp > out\sweep_native_typed_o2_oy_off.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o2_oy_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oy- /c /Foout\sweep_recovered_thunks_o2_oy_off.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o2_oy_off.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o2_oy_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oy- /c /Foout\sweep_scstr_expanded_o2_oy_off.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o2_oy_off.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o2_oy_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oy- /c /Foout\sweep_recovered_vftables_o2_oy_off.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o2_oy_off.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o2_oy_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob0 /c /Foout\sweep_native_typed_o2_ob0.obj src\generated\native_typed.cpp > out\sweep_native_typed_o2_ob0.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o2_ob0.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob0 /c /Foout\sweep_recovered_thunks_o2_ob0.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o2_ob0.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o2_ob0.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob0 /c /Foout\sweep_scstr_expanded_o2_ob0.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o2_ob0.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o2_ob0.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob0 /c /Foout\sweep_recovered_vftables_o2_ob0.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o2_ob0.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o2_ob0.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob1 /c /Foout\sweep_native_typed_o2_ob1.obj src\generated\native_typed.cpp > out\sweep_native_typed_o2_ob1.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o2_ob1.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob1 /c /Foout\sweep_recovered_thunks_o2_ob1.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o2_ob1.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o2_ob1.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob1 /c /Foout\sweep_scstr_expanded_o2_ob1.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o2_ob1.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o2_ob1.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Ob1 /c /Foout\sweep_recovered_vftables_o2_ob1.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o2_ob1.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o2_ob1.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oi- /c /Foout\sweep_native_typed_o2_oi_off.obj src\generated\native_typed.cpp > out\sweep_native_typed_o2_oi_off.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o2_oi_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oi- /c /Foout\sweep_recovered_thunks_o2_oi_off.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o2_oi_off.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o2_oi_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oi- /c /Foout\sweep_scstr_expanded_o2_oi_off.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o2_oi_off.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o2_oi_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Oi- /c /Foout\sweep_recovered_vftables_o2_oi_off.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o2_oi_off.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o2_oi_off.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /arch:IA32 /c /Foout\sweep_native_typed_o2_ia32.obj src\generated\native_typed.cpp > out\sweep_native_typed_o2_ia32.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o2_ia32.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /arch:IA32 /c /Foout\sweep_recovered_thunks_o2_ia32.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o2_ia32.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o2_ia32.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /arch:IA32 /c /Foout\sweep_scstr_expanded_o2_ia32.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o2_ia32.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o2_ia32.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /arch:IA32 /c /Foout\sweep_recovered_vftables_o2_ia32.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o2_ia32.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o2_ia32.log & exit /b 1)
cl /nologo /bigobj /Gy /Od /Oy- /c /Foout\sweep_native_typed_od.obj src\generated\native_typed.cpp > out\sweep_native_typed_od.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_od.log & exit /b 1)
cl /nologo /bigobj /Gy /Od /Oy- /c /Foout\sweep_recovered_thunks_od.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_od.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_od.log & exit /b 1)
cl /nologo /bigobj /Gy /Od /Oy- /c /Foout\sweep_scstr_expanded_od.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_od.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_od.log & exit /b 1)
cl /nologo /bigobj /Gy /Od /Oy- /c /Foout\sweep_recovered_vftables_od.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_od.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_od.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Os /c /Foout\sweep_native_typed_o2_os.obj src\generated\native_typed.cpp > out\sweep_native_typed_o2_os.log 2>&1
if errorlevel 1 (type out\sweep_native_typed_o2_os.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Os /c /Foout\sweep_recovered_thunks_o2_os.obj src\generated\recovered_thunks.cpp > out\sweep_recovered_thunks_o2_os.log 2>&1
if errorlevel 1 (type out\sweep_recovered_thunks_o2_os.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Os /c /Foout\sweep_scstr_expanded_o2_os.obj src\generated\scstr_expanded.cpp > out\sweep_scstr_expanded_o2_os.log 2>&1
if errorlevel 1 (type out\sweep_scstr_expanded_o2_os.log & exit /b 1)
cl /nologo /bigobj /Gy /O2 /Os /c /Foout\sweep_recovered_vftables_o2_os.obj src\generated\recovered_vftables.cpp > out\sweep_recovered_vftables_o2_os.log 2>&1
if errorlevel 1 (type out\sweep_recovered_vftables_o2_os.log & exit /b 1)
exit /b 0
