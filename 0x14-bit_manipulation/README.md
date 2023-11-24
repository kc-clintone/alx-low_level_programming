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

```c
#include "main.h"

int main()
{
    unsigned long int number = 42;  // Example number
    unsigned int bit_index = 3;     // Example bit index

    int bit_value = get_bit(number, bit_index);

    if (bit_value == -1)
        printf("Error: Invalid bit index.\n");
    else
        printf("Bit at index %u: %d\n", bit_index, bit_value);

    return 0;
}

```

3-set_bit.c

This file contains a function int set_bit(unsigned long int *n, unsigned int index) that sets the value of a bit to 1 at a given index.

Usage example:

```c
#include "main.h"

int main()
{
    unsigned long int number = 42;  // Example number
    unsigned int bit_index = 3;     // Example bit index

    int result = set_bit(&number, bit_index);

    if (result == -1)
        printf("Error: Invalid bit index.\n");
    else
        printf("Number after setting bit at index %u: %lu\n", bit_index, number);

    return 0;
}

```

4-clear_bit.c

This file contains a function int clear_bit(unsigned long int *n, unsigned int index) that sets the value of a bit to 0 at a given index.

Usage example:

```c
#include "main.h"

int main()
{
    unsigned long int number = 42;  // Example number
    unsigned int bit_index = 3;     // Example bit index

    int result = clear_bit(&number, bit_index);

    if (result == -1)
        printf("Error: Invalid bit index.\n");
    else
        printf("Number after clearing bit at index %u: %lu\n", bit_index, number);

    return 0;
}

```

5-flip_bits.c

This file contains a function unsigned int flip_bits(unsigned long int n, unsigned long int m) that calculates the number of bits needed to flip to convert one number to another.

Usage example:

```c
#include "main.h"

int main()
{
    unsigned long int n = 42;  // Example number n
    unsigned long int m = 57;  // Example number m

    unsigned int flipped_bits = flip_bits(n, m);

    printf("Number of flipped bits between %lu and %lu: %u\n", n, m, flipped_bits);

    return 0;
}

```

100-get_endianness.c

This file contains a function int get_endianness(void) that checks the endianness of the system. It returns 0 for big endian and 1 for little endian.

Usage example:

```c
#include "main.h"

int main()
{
    int endianness = get_endianness();

    if (endianness == 0)
        printf("Big Endian\n");
    else if (endianness == 1)
        printf("Little Endian\n");
    else
        printf("Unknown Endianness\n");

    return 0;
}

```

## Contributing
I welcome contributions from any interested programmer. To get started, follow these steps:

1. Fork the project.
2. Create a new branch for your feature or bug fix.
3. Make your changes and test thoroughly.
4. Submit a pull request with a clear description of your changes.

## Conclussion

I hope this project help you learn and understand the basics of bit manipulation.
For any questions, corrections or any feedback, reach out through github or my email as follows:
- [Email](kayseeclintone@gamil.com)
- [Github](github.com/kc-clintone)
Happy coding
