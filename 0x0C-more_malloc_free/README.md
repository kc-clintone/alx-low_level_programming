# Dynamic Memory Allocation in C Programming

![Hero](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Ftse1.mm.bing.net%2Fth%3Fid%3DOIP.e19ZGccTQsUWvvctfwX1cAHaEK%26pid%3DApi&f=1&ipt=87801883a9c6e4e26815d5f2c03aff949591794181ffaae9146ea25c41fbb40b&ipo=images)

Dynamic memory allocation is a powerful technique in C programming that allows you to allocate memory at runtime. It's particularly useful when you need to manage memory for data structures whose size is not known beforehand or when you want to allocate memory that can be resized during program execution.

## Table of Contents

- [Dynamic Memory Allocation in C Programming](#dynamic-memory-allocation-in-c-programming)
  - [Table of Contents](#table-of-contents)
  - [Introduction to Dynamic Memory Allocation](#introduction-to-dynamic-memory-allocation)
  - [Memory Allocation Functions](#memory-allocation-functions)
    - [`malloc`](#malloc)
    - [`calloc`](#calloc)
    - [`realloc`](#realloc)
  - [Memory Deallocation](#memory-deallocation)
  - [Handling Memory Allocation Failures](#handling-memory-allocation-failures)
  - [Using `exit(3)` for Graceful Termination](#using-exit3-for-graceful-termination)
  - [Example](#example)
  - [References](#references)

## Introduction to Dynamic Memory Allocation

In C, dynamic memory allocation is performed using the heap. Unlike static memory allocation, which occurs at compile time, dynamic memory allocation allows you to allocate and deallocate memory during program execution.

## Memory Allocation Functions

### `malloc`

The `malloc` (memory allocation) function allocates a specified number of bytes of memory from the heap and returns a pointer to the first byte of the allocated block. If memory allocation fails, it returns `NULL`.

```c
#include <stdlib.h>

void *malloc(size_t size);
```

### `calloc`

The `calloc` (contiguous allocation) function allocates memory for an array of elements, each of a specified size, and initializes all bytes to zero. It returns a pointer to the first byte of the allocated block. If memory allocation fails, it returns `NULL`.

```c
#include <stdlib.h>

void *calloc(size_t num, size_t size);
```

### `realloc`

The `realloc` (reallocate) function changes the size of a previously allocated block of memory. It takes a pointer to the previously allocated memory and the new size as arguments. It returns a pointer to the resized memory block. If the reallocation fails, it returns `NULL`. If `realloc` is used with a `NULL` pointer, it behaves the same as `malloc`.

```c
#include <stdlib.h>

void *realloc(void *ptr, size_t size);
```

## Memory Deallocation

Dynamic memory allocated using `malloc`, `calloc`, or `realloc` should be deallocated using the `free` function. Failing to free memory can result in memory leaks.

```c
#include <stdlib.h>

void free(void *ptr);
```

## Handling Memory Allocation Failures

When using dynamic memory allocation functions, it's essential to check if the returned pointer is `NULL`. If it is `NULL`, memory allocation has failed, and you should handle this condition appropriately.

## Using `exit(3)` for Graceful Termination

The `exit(3)` function allows you to terminate your program gracefully, freeing allocated memory before exiting. It can be particularly useful when memory allocation fails or other critical errors occur.

```c
#include <stdlib.h>

void exit(int status);
```

## Example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;

    // To allocate memory for an array of 5 integers use calloc
    numbers = (int *)calloc(5, sizeof(int));
    if (numbers == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    // Populating the array with values
    for (int i = 0; i < 5; i++) {
        numbers[i] = i * 10;
    }

    // Reallocating the memory to hold 10 integers
    int *new_numbers = (int *)realloc(numbers, 10 * sizeof(int));
    if (new_numbers == NULL) {
        fprintf(stderr, "Memory reallocation failed.\n");
        free(numbers);
        exit(1);
    }

    // Deallocating the memory
    free(new_numbers);

    return 0;
}
```

## References

Read more about these topics from the following links

- [C Library - `malloc`](https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm)
- [C Library - `calloc`](https://www.tutorialspoint.com/c_standard_library/c_function_calloc.htm)
- [C Library - `realloc`](https://www.tutorialspoint.com/c_standard_library/c_function_realloc.htm)
- [C Library - `free`](https://www.tutorialspoint.com/c_standard_library/c_function_free.htm)
- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Memory Allocation and Deallocation in C](https://www.tutorialspoint.com/memory-allocation-and-deallocation-in-c)
- [C Library - `exit`](https://www.tutorialspoint.com/c_standard_library/c_function_exit.htm)

