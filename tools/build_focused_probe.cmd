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
exit /b %PROBE_FAILED%
