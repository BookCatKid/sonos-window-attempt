@echo off
rem Link all compiled bulk objects into a recovered DLL image.
rem Generates stub/object + export .def + order file, then invokes link.exe.
if not exist out\stubs.obj (
  python tools\make_link_stubs.py --objects-dir out --pattern bulk_*.obj --stub out\stubs.obj --def out\sclib.def --order out\order.txt
  if errorlevel 1 exit /b 1
)
link /nologo /DLL /MACHINE:X86 /NOENTRY /NODEFAULTLIB /INCREMENTAL:NO /OPT:NOREF /OPT:NOICF /DYNAMICBASE /NXCOMPAT /SAFeseh:NO /BASE:0x10000000 /FORCE:MULTIPLE /DEF:out\sclib.def /ORDER:@out\order.txt /MAP:out\sclib.map /OUT:out\sclib-csharp.dll out\bulk_*.obj out\stubs.obj > out\sclib-link.log 2>&1
if errorlevel 1 (
  type out\sclib-link.log
  exit /b 1
)
echo Linked out\sclib-csharp.dll
