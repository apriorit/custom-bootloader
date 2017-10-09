.\VC152\CL.EXE /AT /G2 /Gs /Gx /c /Zl *.cpp

.\VC152\ML.EXE /AT /c *.asm 

.\VC152\LINK.EXE /T /NOD StartPoint.obj bootmain.obj cdisplay.obj cstring.obj

del *.obj

mkdir ..\..\bin\Boot
move /Y *.com ..\..\bin\Boot\