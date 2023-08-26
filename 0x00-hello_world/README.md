# 0x00-hello_world

Welcome to the `0x00-hello_world` project! This collection of files and scripts aims to provide a comprehensive introduction to the world of C programming. Through these files, you'll gain insights into preprocessing, compilation, assembly, and foundational output functions.

## Prerequisites

Before you begin, ensure that you have the following prerequisites installed:

- GCC (GNU Compiler Collection)
- Assembler (if not included with GCC)
- Basic command-line knowledge

## Instructions

Follow these steps to interact with each file:

1. Clone this repository to your local machine:
   ```
   git clone https://github.com/kc-clintone/alx-low_level_programming/0x00-hello_world
   ```
2. Navigate to the `0x00-hello_world` directory:

   ```
   cd 0x00-hello_world
   ```

3. Explore and execute each file as outlined below.

## 0-preprocessor

This script showcases the role of the C preprocessor. It includes directives like `#include`, `#define`, and conditional compilation. To observe the preprocessor's impact, run:

```
./0-preprocessor
```

## 1-compiler

The `1-compiler` file demonstrates the compilation process. Compile the script to generate an assembly file:

```
gcc -S -o 1-compiler.s 1-compiler.c
```

## 2-assembler

The `2-assembler` file contains assembly code generated from the `1-compiler` script. While the exact machine code isn't visible, this file provides insights into assembly instructions.

## 3-name

The `3-name` script compiles a C file while specifying a custom output filename:

```
./3-name
```

## 4-puts.c

The `4-puts.c` file includes a simple C program that uses the `puts` function to print text to the console:

```
gcc -o 4-puts 4-puts.c
./4-puts
```

## 5-printf.c

The `5-printf.c` file demonstrates the `printf` function for formatted output:

```
gcc -o 5-printf 5-printf.c
./5-printf
```

## 6-size.c

The `6-size.c` script displays the sizes of various data types:

```
gcc -o 6-size 6-size.c
./6-size
```

## 100-intel

Run the `100-intel` script to generate assembly code in Intel syntax from a C source file:

```
./100-intel 1-compiler.c
```

## 101-quote.c

The `101-quote.c` script uses the `write` system call to output a predefined string to the standard error output:

```
gcc -o 101-quote 101-quote.c
./101-quote
```

## Examples

Each file's description above includes example commands and expected outputs. Feel free to experiment and modify the code to observe different results.

## Tips and Tricks

- Use `gcc -E` to view the output of the preprocessor stage.
- Observe the generated assembly code using `gcc -S`.
- Experiment with different formatting options in the `printf` function.

## Further Reading

- [GCC Manual](https://gcc.gnu.org/onlinedocs/)
- [Introduction to Computer Systems](https://www.amazon.com/Introduction-Computer-Systems-2nd/dp/0072467509)

## Contributions

Contributions are welcome! Please refer to the [CONTRIBUTING](CONTRIBUTING.md) guidelines for details.

## License

This repository is licensed under the [MIT License](LICENSE).

## Contact Information

For questions or feedback, you can reach out to [kc-clintone](https://github.com/kc-clintone) or email at kayseeclintone@gmail.com.

By exploring and engaging with these files, you'll gain a comprehensive understanding of the various stages of C programming, from preprocessing and compilation to generating low-level instructions and producing executable code. This foundational knowledge will serve as a solid base for your journey into more advanced C programming topics.
