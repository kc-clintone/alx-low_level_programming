
# 0x0A-argc_argv
## Table of Contents

- [Table of Contents](#table-of-contents)
- [Introduction](#introduction)
- [File Descriptions](#file-descriptions)
  - [0-whatsmyname.c](#0-whatsmynamec)
  - [1-args.c](#1-argsc)
  - [2-args.c](#2-argsc)
  - [3-mul.c and 4-add.c](#3-mulc-and-4-addc)
  - [100-change.c](#100-changec)
- [Usage](#usage)
- [Examples](#examples)
- [Advanced Usage](#advanced-usage)
  - [0-whatsmyname.c](#0-whatsmynamec-1)
  - [1-args.c](#1-argsc-1)
  - [2-args.c](#2-argsc-1)
  - [3-mul.c and 4-add.c](#3-mulc-and-4-addc-1)
  - [100-change.c](#100-changec-1)
- [References](#references)
- [Real-World Applications](#real-world-applications)
- [Further Reading](#further-reading)
- [License](#license)
- [Contact](#contact)

## Introduction

Welcome to the "Command Line Arguments" directory! This directory contains C source code files that showcase the utilization of command line arguments in C programming. Command line arguments allow you to pass inputs to your program when launching it from the command line, enabling dynamic behavior and customization. This guide provides detailed explanations of the provided files and demonstrates their functionality.

## File Descriptions

Here's an in-depth overview of each file in this directory:

### 0-whatsmyname.c

This program demonstrates how to access and print the name of the currently executed program using the `argv` parameter. It highlights the significance of the first argument (`argv[0]`) as the program's name and showcases its utility for context and error messages.

### 1-args.c

The `1-args.c` program iterates through the `argv` array to print each command line argument on a separate line. This basic example serves as a foundation for more complex argument processing, such as flag detection or parameter extraction.

### 2-args.c

Building upon the previous example, `2-args.c` uses the `argc` parameter to print the number of arguments provided. This program explains the distinction between `argc` and the actual argument count, considering that the program's name is also counted.

### 3-mul.c and 4-add.c

Both of these programs illustrate how to convert string arguments to numeric values for arithmetic operations. They employ functions like `atoi` or `strtol` for conversion and showcase error handling for non-numeric or insufficient arguments.

### 100-change.c

This program calculates the minimum number of coins required to make change for a given amount of money. It offers an in-depth look into the algorithm used for optimization and customization of coin denominations.

## Usage

1. **Compiling the Programs**: Compile each C program using a C compiler, such as `gcc`. For instance:

   ```bash
   gcc -o whatsmyname 0-whatsmyname.c
   ```

2. **Running the Programs**: Execute the compiled programs and provide command line arguments as needed. For example:

   ```bash
   ./whatsmyname argument1 argument2
   ```

## Examples

Here are some practical examples of how these programs can be used:

- Running `./whatsmyname Hello World` will output:

  ```
  ./whatsmyname
  ```

- Running `./1-args arg1 arg2 arg3` will output:

  ```
  arg1
  arg2
  arg3
  ```

- Running `./2-args argument1 argument2 argument3` will output:

  ```
  Number of arguments: 4
  ```

- Running `./3-mul 5 10` will output:

  ```
  Result: 50
  ```

- Running `./4-add 3 5 7` will output:

  ```
  Sum: 15
  ```

- Running `./100-change 67` will output:
  ```
  4
  ```

## Advanced Usage

Explore advanced usage scenarios for each program:

### 0-whatsmyname.c

This program's utilization of the `argv` parameter is especially valuable for generating informative error messages or for differentiating between program instances in more complex systems.

### 1-args.c

Extend this program to handle flags, options, or specific argument patterns. This could involve detecting and processing arguments like `-v` for verbose output.

### 2-args.c

Consider scenarios where you need to ensure a specific number of arguments are provided. You can build upon this program for cases where certain arguments are required.

### 3-mul.c and 4-add.c

Explore alternative methods for string-to-numeric conversion, such as using the `sscanf` function. Handle cases where the conversion fails due to invalid input.

### 100-change.c

Investigate different coin denominations and ways to optimize the coin combinations for various currencies or use cases.

## References

The following resources provide further insights into command line argument processing and C programming:

- [GNU C Library: Program Arguments](https://www.gnu.org/software/libc/manual/html_node/Program-Arguments.html)
- [C Programming For Beginners - Command Line Arguments](https://www.learn-c.org/en/Command_Line_Arguments)

## Real-World Applications

Understanding command line arguments is crucial for various scenarios:

- Writing command-line utilities and scripts.
- Building system administration tools.
- Developing software that requires runtime configuration.

## Further Reading

Explore more about command line argument processing and related C programming concepts with these resources:

- [Advanced Command Line Arguments in C](https://www.cs.purdue.edu/homes

/grr/SystemsProgrammingBook/Book/Chapter5-WritingYourOwnShell.pdf)

- [C Command Line Arguments](https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm)

## License

[MIT License](LICENSE)

## Contact

If you have any questions or need further assistance, feel free to contact me:

- Email: kayseeclintone@gmail.com
- Twitter: @kc_clintone

By diving into these examples and exploring advanced usage, you'll become adept at harnessing the power of command line arguments in your C programs for increased flexibility and functionality.
