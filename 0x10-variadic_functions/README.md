
![variadic functions in c](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2F1.bp.blogspot.com%2F-F5XUb19Xjko%2FYCVl67bctII%2FAAAAAAAASNA%2FDWY_Wo7Kk9gWFmPspkCAmCmxwNCXxXSQgCLcBGAsYHQ%2Fs2048%2Fhackerrank-variadic-functions-in-c-programing-solution.png&f=1&nofb=1&ipt=b2153ae47118c5d87c5b0b9a452968866e6ccf8fcad94bc35675f441e06043dd&ipo=images)

# Project: 0x10-variadic_functions

## Table of Contents

-   [Project: 0x10-variadic_functions](#project-0x10-variadic_functions)
    -   [Table of Contents](#table-of-contents)
    -   [Description](#description)
    -   [Prerequisites](#prerequisites)
    -   [Installation](#installation)
    -   [Usage Examples](#usage-examples)
    -   [License](#license)
    -   [Contact Information](#contact-information)

## Description

Welcome to the "0x10-variadic_functions" project! This project focuses on variadic functions in C, a powerful feature that allows functions to take a variable number of arguments. The project includes several functions that demonstrate the utility of variadic functions.

![How to define variadic functions](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fi.ytimg.com%2Fvi%2F1EjqkIPMy-A%2Fhqdefault.jpg&f=1&nofb=1&ipt=5572ef57d7d5a851c46d8db821ad06d9c112e26a37cdaf76d195ed9ad09d023f&ipo=images)

## Prerequisites

Before using this project, ensure that you have the following prerequisites:

-   A C compiler (e.g., GCC)
-   Basic knowledge of C programming

## Installation

To compile the provided C files, use a C compiler like GCC with the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o my_program
```

Replace `my_program` with your desired output executable name.

## Usage Examples

Here are some examples of how to use the functions provided in this project:

1. **0-sum_them_all.c**: This function returns the sum of its variable number of arguments.

```c
#include "variadic_functions.h"
#include <stdio.h>

int main() {
    int sum = sum_them_all(4, 1, 2, 3, 4);
    printf("Sum: %d\n", sum);
    return 0;
}
```

2. **1-print_numbers.c**: This function prints numbers followed by a new line.

```c
#include "variadic_functions.h"
#include <stdio.h>

int main() {
    print_numbers(", ", 4, 1, 2, 3, 4);
    return 0;
}
```

3. **2-print_strings.c**: This function prints strings followed by a new line.

```c
#include "variadic_functions.h"
#include <stdio.h>

int main() {
    print_strings(", ", 3, "Hello", "World", "!");
    return 0;
}
```

4. **3-print_all.c**: This function prints anything based on the provided format specifier.

```c
#include "variadic_functions.h"
#include <stdio.h>

int main() {
    print_all("ceis", 'H', 3.14, "Hello");
    return 0;
}
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact Information

If you have any questions, feedback, or need assistance, please feel free to contact me at [kayseeclintone@gmail.com](mailto:kayseeclintone@gmail.com).

Thank you for checking out the "0x10-variadic_functions" project. Enjoy exploring and using these variadic functions in your C projects!

Best regards,
Kaysee
Intermediate Software Engineer
