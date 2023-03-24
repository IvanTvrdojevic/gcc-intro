# Compile source files and archive into static libraries
gcc -c Src/source_1.c -IHeaders -o Obj/source_1.o 
gcc -c Src/source_2.c -IHeaders -o Obj/source_2.o 

ar rcs Obj/lib.a  Obj/source_1.o Obj/source_2.o 

# Compile main file
gcc -c main.c -IHeaders -o main.o

# Link
gcc main.o -LObj -l:lib.a -o main

# Run
./main
