# 0x14-bit_manipulation

![header image](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fwww.cronj.com%2Fblog%2Fwp-content%2Fuploads%2Fbit-manipulation.png&f=1&nofb=1&ipt=3a7b285495b81600aebea62dc51dc3ec27e674ed28becd127c3c8b2feca69f58&ipo=images)

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
   git clone https://github.com/kc-clintone/alx-low_level_programming/0x14-bit_manipulation.git
   ```

2. Navigate to the project directory:

   ```bash
   cd 0x14-bit_manipulation
   ```

3. Compile the source files to create the executable or library.

4. Include the necessary header file `main.h` in your C code to use the provided functions.

## Usage

### 0-binary_to_uint.c

This file contains a function `unsigned int binary_to_uint(const char *b)` that converts a binary string to an unsigned integer.

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

### 1-print_binary.c

This file contains a function `void print_binary(unsigned long int n)` that prints the binary representation of a number.

Usage example:

```c
#include "main.h"

int main()
{
    unsigned long int number = 42;  // Example number
    printf("Binary representation of %lu: ", number);
    print_binary(number);
    printf("\n");
    return 0;
}
```

### 2-get_bit.c

This file contains a function `int get_bit(unsigned long int n, unsigned int index)` that returns the value of a bit at a given index.

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

### 3-set_bit.c

This file contains a function `int set_bit(unsigned long int *n, unsigned int index)` that sets the value of a bit to 1 at a given index.

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

### 4-clear_bit.c

This file contains a function `int clear_bit(unsigned long int *n, unsigned int index)` that sets the value of a bit to 0 at a given index.

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

### 5-flip_bits.c

This file contains a function `unsigned int flip_bits(unsigned long int n, unsigned long int m)` that calculates the number of bits needed to flip to convert one number to another.

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

### 100-get_endianness.c

This file contains a function `int get_endianness(void)` that checks the endianness of the system. It returns 0 for big endian and 1 for little endian.

Usage example:

```c
#include "main.h"

int main()
{
    int endianness = get_endianness();

    if (endi

anness == 0)
        printf("Big Endian\n");
    else if (endianness == 1)
        printf("Little Endian\n");
    else
        printf("Unknown Endianness\n");

    return 0;
}
```

## License

This project is licensed under the [MIT](LICENSE).


## Contact
For any questions concerning this or other ptojects, please do not hesitate to contact me throug the following channels:
- Email: [kayseeclintone@gmail.com](kayseeclintone@gmail.com)
- Github: [github.com/kc-clintone](github.com/kc-clintone)
- Twitter(X): [twitter.com/kc_clintone](@kc_clintone)
