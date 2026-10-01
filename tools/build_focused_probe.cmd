@echo off
setlocal
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
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
rem LTCG probes: /GL objects carry IL, so member-ctor calls keep their
rem construction scopes until link time; link /LTCG inlines the bodies and
rem the realized machine code shows whether the spill repoint survives
for %%F in (src\generated\ltcg_variants\*.cpp) do (
  cl /nologo /O2 /bigobj /GS /GR /EHsc /GL /c /Foout\%%~nF_ltcg.obj %%F > out\%%~nF_ltcg.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
  link /nologo /LTCG /DLL /NOENTRY /NODEFAULTLIB /FORCE:UNRESOLVED /OUT:out\%%~nF_ltcg.dll /MAP:out\%%~nF_ltcg.map out\%%~nF_ltcg.obj >> out\%%~nF_ltcg.log 2>&1
)
if "%SONOS_INCLUDE_DATA_PROBE%"=="1" if exist src\generated\data\*.cpp for %%F in (src\generated\data\*.cpp) do (
  cl /nologo /O2 /bigobj /c /Foout\%%~nF.obj %%F > out\%%~nF.log 2>&1
  if errorlevel 1 set PROBE_FAILED=1
)
exit /b %PROBE_FAILED%
