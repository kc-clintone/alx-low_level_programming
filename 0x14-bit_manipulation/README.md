# 0x14-bit_manipulation

![https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Ftse1.mm.bing.net%2Fth%3Fid%3DOIP.rAnjB3VvWCNl0LctslJK8AHaED%26pid%3DApi&f=1&ipt=37d2dc0545a8b9666ae80d13e64da430233e7ba9ce5153303fce4980d20238e6&ipo=images]

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
