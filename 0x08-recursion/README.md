# 0x08-recursion

## Table of Contents

- [0x08-recursion](#0x08-recursion)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [File Descriptions](#file-descriptions)
    - [0-puts_recursion.c](#0-puts_recursionc)
    - [1-print_rev_recursion.c](#1-print_rev_recursionc)
    - [2-strlen_recursion.c](#2-strlen_recursionc)
    - [3-factorial.c](#3-factorialc)
    - [4-pow_recursion.c](#4-pow_recursionc)
    - [5-sqrt_recursion.c](#5-sqrt_recursionc)
    - [6-is_prime_number.c](#6-is_prime_numberc)
    - [100-is_palindrome.c](#100-is_palindromec)
    - [101-wildcmp.c](#101-wildcmpc)
  - [Usage](#usage)
  - [Compilation](#compilation)
  - [Examples](#examples)
  - [Tips](#tips)
  - [License](#license)

## Introduction

Welcome to the "Recursion" directory! This directory is a collection of C source code files that showcase the concept of recursion in programming. Recursion is a powerful technique where a function calls itself to solve a problem, and it can be used to elegantly solve a wide range of problems.

## File Descriptions

Here's a comprehensive overview of the files in this directory:

### 0-puts_recursion.c

This file showcases a recursive implementation of the `puts` function. The `puts` function is a standard library function in C used to output a string followed by a newline character (`'\n'`) to the standard output. In this implementation, the function `puts_recursion` takes a string as an argument and recursively prints each character of the string until it encounters the null terminator (`'\0'`). At each step, the function prints the current character and then makes a recursive call with the next character. This process continues until the null terminator is reached, effectively reproducing the behavior of the `puts` function.

### 1-print_rev_recursion.c

This file contains a recursive function named `print_rev_recursion` that prints a given string in reverse order. The function takes a string as an argument and, before making the recursive call, recursively moves to the next character in the string. As a result, the characters are printed in reverse order. The base case for this function is when the null terminator is encountered, at which point the recursion stops.

### 2-strlen_recursion.c

In this file, you'll find a recursive implementation of the `strlen` function, which calculates the length of a string. The function `strlen_recursion` takes a string as input and checks whether the current character is the null terminator (`'\0'`). If it's not, the function makes a recursive call with the next character and increments a count. This process continues until the null terminator is encountered, at which point the count represents the length of the string.

### 3-factorial.c

The `factorial` function in this file calculates the factorial of a given positive integer using recursion. The factorial of an integer `n` is the product of all positive integers from 1 to `n`. The recursive approach here involves checking for the base cases where `n` is 0 or 1. If `n` is either 0 or 1, the function returns 1. Otherwise, it makes a recursive call to calculate the factorial of `n - 1` and multiplies the result by `n`. This recursive process continues until the base cases are reached.

### 4-pow_recursion.c

Here, the `pow_recursion` function calculates the value of a number raised to a given power using recursion. This implementation employs a technique similar to exponentiation by squaring. If the power is 0, the function returns 1 (base case). Otherwise, it calculates the result of raising the base to half of the power recursively, squares that result, and then multiplies by the base if the power is odd. This recursive process continues until the base case is reached.

### 5-sqrt_recursion.c

This file contains the `sqrt_recursion` function, which calculates the square root of a given positive number using the Newton-Raphson method. The Newton-Raphson method is an iterative approach for approximating the square root of a number. The recursive function takes two additional arguments: the current estimate of the square root and the original number. It iteratively refines the estimate by applying the Newton-Raphson formula until the estimate converges to an accurate value within a certain threshold. This recursive approach helps achieve a more accurate square root calculation.

### 6-is_prime_number.c

In this file, you'll find the `is_prime_number` function, which recursively checks whether a given positive integer is a prime number. A prime number is a positive integer greater than 1 that has no positive divisors other than 1 and itself. The function iterates through potential divisors from 2 to the square root of the input number. If the number is divisible by any of these potential divisors, it is not prime. The recursive approach involves checking for divisibility at each step by making recursive calls with decreasing potential divisors. If no divisors are found, the number is prime.

### 100-is_palindrome.c

The `is_palindrome` function in this file recursively checks whether a given string is a palindrome. A palindrome is a sequence of characters that reads the same forwards and backwards. The function compares the first and last characters of the string and makes recursive calls with the substring excluding these characters. The base cases are when the string is empty or has only one character, both of which are considered palindromes. This recursive process continues until the base cases are reached, and the function determines whether the entire string is a palindrome.

### 101-wildcmp.c

Finally, in this file, the `wildcmp` function compares two strings, considering an asterisk `*` in the second string as a wildcard that can match any number of characters (including zero). This recursive function compares characters between the strings and handles cases where an asterisk is encountered in the second string. It makes recursive calls with different variations of the strings to ensure proper matching. This function is particularly complex due to the handling of wildcards and requires careful consideration of various scenarios.

## Usage

Each file contains a standalone C program demonstrating a specific aspect of recursion. You can study these files to understand how recursion works in solving different types of problems. To use them, you can follow these general steps:

1. **Choose a File**: Pick a file that corresponds to the problem you're interested in.

2. **Review the Code**: Open the selected file and review the C code and comments. Understand how recursion is used to solve the problem.

3. **Compile**: Compile the C file using a C compiler (e.g., gcc) to create an executable.

4. **Run**: Run the executable to see the recursive solution in action.

## Compilation

You can compile the C files using a C compiler. For instance, you can use the following command to compile a file named `filename.c`:

```bash
gcc -o output_filename filename.c
```

Replace `output_filename` with the desired name for the output executable.

## Examples

Here are a few examples of how you can use these recursive functions:

- Calculate the factorial of a number:

  ```c
  int result = factorial(5); // Calculates 5!
  ```

- Check if a number is prime:

  ```c
  int isPrime = is_prime_number(7); // Checks if 7 is prime
  ```

- Compare strings with wildcards:
  ```c
  int isMatch = wildcmp("hello*", "hello_world"); // Compares using wildcard
  ```

## Tips

- Recursion requires a base case to prevent infinite recursion. Make sure each recursive function has a condition that stops the recursion.
- Understand the call stack: each recursive call adds a new frame to the call stack. Be mindful of memory usage.
- Recursive solutions may not always be the most efficient for every problem. Consider trade-offs and alternatives.
- Debugging recursive code can be challenging. Use print statements and visualization tools to understand how the recursion unfolds.

## License

[MIT License](LICENSE)

## Contact
If you have any questions or need further assistance, feel free to contact me:

- Email: kayseeclintone@gmail.com
- Twitter: @kc_clintone
