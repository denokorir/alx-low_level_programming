#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up object files
rm -f *.o

