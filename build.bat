@echo off

cl /c filestuff\*.c /I .
cl /c todos\*.c /I .
cl /c args\*.c /I .
cl main.c /Fe:todo-test *.obj

del *.obj