Task 0 ==> 0x09. C - Static libraries

Task 1:
gcc -c *.c ==> compiles all the .c files into .o files
ar -rc liball.a *.o ==> creates the static library
ranlib liball.a ==> Index the library for faster linking
rm *.o ==> Cleans up the object files
