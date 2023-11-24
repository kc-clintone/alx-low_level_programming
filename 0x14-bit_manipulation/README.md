# 0x14-bit_manipulation

![bitman](https://www.cronj.com/blog/wp-content/uploads/bit-manipulation.png)

## Description

This project focuses on bit manipulation in the C programming language. It provides various functions for performing operations on binary data, including converting binary numbers to unsigned integers, printing binary representations, checking endianness, and manipulating individual bits.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation

To use the functions in this project, follow these steps:

1. Clone the project repository:
   ```bash
   git clone https://github.com/kc-clintone/alx-low_level_programming//0x14-bit_manipulation.git

2. cd `0x14-bit_manipulation`

3. Compile the source files to create the executable or library.

4. Include the necessary header file main.h in your C code to use the provided functions

## Usage

0-binary_to_uint.c

This file contains a function unsigned int binary_to_uint(const char *b) that converts a binary string to an unsigned integer.

Usage example:


```c
#include "main.h"

int main()
{
    const char *binary = "110101";  // Example binary string
    unsigned int decimal = binary_to_uint(binary);
    printf("Binary: %s\nDecimal: %u\n", binary, decimal);
    return 0;
}
```

2-get_bit.c

This file contains a function int get_bit(unsigned long int n, unsigned int index) that returns the value of a bit at a given index.

Usage example:
