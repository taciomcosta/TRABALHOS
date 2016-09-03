/*
SHARING .h header files
-There are 3 ways of doing it:
	-store the h. files in a standar directory, li usr/include
	-Put the full pathname in your include statement. EX: #include "/my_header_files/encrypt.h"
	-You can tell the compiler where to find them: gcc -I/my_header_files test_code.c ... -o test_code
----------------------------------------------------------------------------------------------------------
SHARING .o OBJECT FILES:gcc -I/my_header_files test_code.c  /my_object_files/encrypt.o /my_object_files/checksum.o -o test_code

-Using the full pathname tothe object files means you don’t need a separate copy for each C project.
-----------------------------------------------------------------------------------------------------
ARCHIVE OF OBJECT FILES
-When you have a bunch of .o that you need to use in several projects, you can create an archive of object files.

-Creating: ar -rcs lib<something>.a encrypt.o checksum.o
-Now you store it wherever you want. It's up to you.
-The nm lib<name>.a shows the .o of the archive file

-Compiling projects with the .a:
	Standard Library: gcc test_code.c -lsecurity -o test_code ==IT'S NOT LIB! ITS -l==

	Somewhere else: gcc test_code.c -L/my_lib -lsecurity -o test_code ==-L is used when your .a is not in the Standard, you can ue '.' 
	if it's in the current one

-Extracting the encrypt.o file from libsecurity.a, use ar -x libsecurity.a encrypt.o .
-------------------------------------------------------------------------------------------------------------
DYNAMIC LIBRARIES 
- So, dynamic libraries are similar to those .o object files you’ve been creating for a while, but they’re not quite the
same. Like an archive file, a dynamic library can be built from several .o object files, but unlike an archive, the object
files are properly linked together in a dynamic library to form a single piece of object code.
---------------------------------------------------------------------------------------------------------------
COMPILING .a AT RUNTIME (LINKING .O AT RUNTIME)

gcc -I/includes -fPIC -c hfcal.c -o hfcal.o
	-fPIC tells gcc that you want to create position-independent code, this can be moved aroung in memory.

-To create a dynamic library: 
	-Windows: gcc -shared hfcal.o -o C:\libs\hfcal.dll
	-Linux: gcc -shared hfcal.o -o /libs/libhfcal.so

-If your library isn't in a Standard path, so you need to put this before run the program
	EX: export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/.




*/