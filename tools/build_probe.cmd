@echo off
setlocal
if not exist out mkdir out

call C:\VS2019BuildTools\VC\Auxiliary\Build\vcvarsall.bat amd64_x86 -vcvars_ver=14.28 > out\setup.log 2>&1
if errorlevel 1 goto failed

cl /Bv > out\toolchain.txt 2>&1
where cl >> out\toolchain.txt
where link >> out\toolchain.txt

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
exit /b 0

:failed
for %%F in (out\setup.log out\getter.log out\result.log out\factory.log out\factory_frame_pointer.log out\factory_lifetime.log out\factory_owner.log) do if exist %%F for /f "usebackq delims=" %%L in ("%%F") do echo ::error::%%L
exit /b 1
