@echo off
setlocal
if not exist out mkdir out
call C:\VS2019BuildTools\VC\Auxiliary\Build\vcvarsall.bat amd64_x86 -vcvars_ver=14.28 > out\setup.log 2>&1
if errorlevel 1 exit /b 1
cl /Bv > out\toolchain.txt 2>&1
where cl >> out\toolchain.txt
where link >> out\toolchain.txt
for %%F in (src\generated\member_abi\*.cpp) do (
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 exit /b 1
)
for %%F in (src\generated\owner_parameter_variants\*.cpp) do (
  cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c /Foout\%%~nF_reference_flags.obj %%F > out\%%~nF_reference_flags.log 2>&1
  if errorlevel 1 exit /b 1
)
exit /b 0
