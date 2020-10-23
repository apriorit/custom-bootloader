@echo off
rem
rem You may need to select 16-bit compiler for yourself.
rem
rem CL.EXE /AT /G2 /Gs /Gx /c /Zl *.cpp

set SRC=CDisplay.cpp BootMain.cpp CString.cpp

.\DMC\dmc -c -cpp -mt %SRC%

.\VC152\ML.EXE /AT /c *.asm 

.\VC152\LINK.EXE /T /NOD StartPoint.obj bootmain.obj cdisplay.obj cstring.obj

del *.obj
del *.dep

mkdir /p ..\..\bin\Boot
move /Y *.com ..\..\bin\Boot\
