#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into its corresponding .o file
for c_file in $c_files; do
  obj_file="${c_file%.c}.o"
  gcc -c "$c_file" -o "$obj_file"
  if [ $? -ne 0 ]; then
          A
    echo "Error while compiling $c_file"
    exit 1
  fi
done

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up the temporary .o files
rm -f *.o
