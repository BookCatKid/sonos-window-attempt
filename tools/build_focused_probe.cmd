@echo off
setlocal enabledelayedexpansion
if not exist out mkdir out
set "PROBE_BIN=C:\VS2019BuildTools\VC\Tools\MSVC\14.28.29910\bin\HostX64"
if not exist "%PROBE_BIN%\x86\cl.exe" exit /b 1
set "PATH=%PROBE_BIN%\x86;%PROBE_BIN%\x64;%PATH%"
cl /Bv > out\toolchain.txt 2>&1
where cl >> out\toolchain.txt
where link >> out\toolchain.txt
set PROBE_FAILED=0
for %%F in (src\generated\member_abi\*.cpp) do (
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
for %%F in (src\generated\owner_parameter_variants\*.cpp) do (
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
for %%F in (src\generated\ctor_scope_variants\*.cpp) do (
  set "EXTRA_FLAGS="
  echo %%~nF | findstr /C:"_cxx17" >nul && set "EXTRA_FLAGS=/std:c++17"
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /FAcs !EXTRA_FLAGS! /Faout\%%~nF.cod /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
rem flag sweep on the best copier candidate — the native TU may have been
rem built with different optimization flags, which could reorder the dead
rem this-store relative to the first temp-ctor lea
cl /nologo /O1 /bigobj /MD /GS /GR /EHsc /Zi /FAcs /Faout\copier_wm0_o1.cod /c /Foout\copier_wm0_o1.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_o1.log 2>&1
cl /nologo /Os /O2 /bigobj /MD /GS /GR /EHsc /Zi /FAcs /Faout\copier_wm0_os.cod /c /Foout\copier_wm0_os.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_os.log 2>&1
cl /nologo /O2 /Oy- /bigobj /MD /GS /GR /EHsc /Zi /FAcs /Faout\copier_wm0_oym.cod /c /Foout\copier_wm0_oym.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_oym.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHa /Zi /FAcs /Faout\copier_wm0_eha.cod /c /Foout\copier_wm0_eha.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_eha.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /guard:ehcont /FAcs /Faout\copier_wm0_geh.cod /c /Foout\copier_wm0_geh.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_geh.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHs /Zi /FAcs /Faout\copier_wm0_ehs.cod /c /Foout\copier_wm0_ehs.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_ehs.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /JMC /FAcs /Faout\copier_wm0_jmc.cod /c /Foout\copier_wm0_jmc.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_jmc.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /ZI /FAcs /Faout\copier_wm0_zi.cod /c /Foout\copier_wm0_zi.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_zi.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /std:c++17 /Zi /FAcs /Faout\copier_wm0_c17.cod /c /Foout\copier_wm0_c17.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_c17.log 2>&1
cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /arch:IA32 /Zi /FAcs /Faout\copier_wm0_ia32.cod /c /Foout\copier_wm0_ia32.obj src\generated\ctor_scope_variants\copier_wrap_member0.cpp > out\copier_wm0_ia32.log 2>&1
rem LTCG probes: /GL objects carry IL, so member-ctor calls keep their
rem construction scopes until link time; link /LTCG inlines the bodies and
rem the realized machine code shows whether the spill repoint survives
for %%F in (src\generated\ltcg_variants\*.cpp) do (
  cl /nologo /O2 /bigobj /GS /GR /EHsc /GL /c /Foout\%%~nF_ltcg.obj %%F > out\%%~nF_ltcg.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
rem two-TU probes link their _a+_b object pair; the rest link alone
for %%F in (src\generated\ltcg_variants\*_2tu_a_ltcg.cpp) do (
  set "PAIR_A=%%~nF"
  set "PAIR_B=!PAIR_A:_a_ltcg=_b_ltcg!"
  link /nologo /LTCG /DLL /NOENTRY /NODEFAULTLIB /FORCE:UNRESOLVED /OUT:out\!PAIR_A!_ltcg.dll /MAP:out\!PAIR_A!_ltcg.map out\!PAIR_A!_ltcg.obj out\!PAIR_B!_ltcg.obj >> out\%%~nF_ltcg.log 2>&1
)
for %%F in (src\generated\ltcg_variants\*.cpp) do (
  echo %%~nF | findstr /C:"_2tu_" >nul || link /nologo /LTCG /DLL /NOENTRY /NODEFAULTLIB /FORCE:UNRESOLVED /OUT:out\%%~nF_ltcg.dll /MAP:out\%%~nF_ltcg.map out\%%~nF_ltcg.obj >> out\%%~nF_ltcg.log 2>&1
)
if "%SONOS_INCLUDE_DATA_PROBE%"=="1" if exist src\generated\data\*.cpp for %%F in (src\generated\data\*.cpp) do (
  cl /nologo /O2 /bigobj /c /Foout\%%~nF.obj %%F > out\%%~nF.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
exit /b %PROBE_FAILED%
