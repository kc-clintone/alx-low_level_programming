![singly linked list](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fimage1.slideserve.com%2F2598108%2Fsingly-linked-list1-l.jpg&f=1&nofb=1&ipt=023402f26656bf92f53c3bc2a02710dea5d1d649a17bc3f9bd76be04f394830c&ipo=images)

# 0x13-More_Singly_Linked_Lists

Welcome to the "0x13-More_Singly_Linked_Lists" project! In this project, we dive deeper into the world of singly linked lists and implement additional functions to manipulate and work with linked lists using the C programming language.

## Table of Contents

- [0x13-More_Singly_Linked_Lists](#0x13-more_singly_linked_lists)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Files](#files)
  - [Function Prototypes](#function-prototypes)
  - [Usage](#usage)
  - [License](#license)
  - [Resources](#resources)

## Introduction

Singly linked lists are fundamental data structures in computer science that consist of nodes, where each node contains data and a reference to the next node. In this project, we build upon the concepts introduced in previous projects and implement a variety of functions to perform operations on singly linked lists.

## Files

This project includes the following files:

- `0-print_listint.c`: Print all elements of a `listint_t` linked list.
- `1-listint_len.c`: Return the number of elements in a `listint_t` linked list.
- `10-delete_nodeint.c`: Delete a node at a specific position in a `listint_t` linked list.
- `100-reverse_listint.c`: Reverse a `listint_t` linked list.
- `101-print_listint_safe.c`: Safely print a `listint_t` linked list (handles loops).
- `102-free_listint_safe.c`: Safely free a `listint_t` linked list (handles loops).
- `103-find_loop.c`: Find the start of a loop in a `listint_t` linked list.
- `2-add_nodeint.c`: Add a new node at the beginning of a `listint_t` linked list.
- `3-add_nodeint_end.c`: Add a new node at the end of a `listint_t` linked list.
- `4-free_listint.c`: Free a `listint_t` linked list.
- `5-free_listint2.c`: Free a `listint_t` linked list and set the head to NULL.
- `6-pop_listint.c`: Delete the head node of a `listint_t` linked list and return its data.
- `7-get_nodeint.c`: Return the nth node of a `listint_t` linked list.
- `8-sum_listint.c`: Return the sum of all data (n) in a `listint_t` linked list.
- `9-insert_nodeint.c`: Insert a new node at a specific position in a `listint_t` linked list.
- `lists.h`: Header file containing function prototypes and the `listint_t` structure definition.

## Function Prototypes

The `lists.h` header file contains the prototypes for all the functions provided in this project.

```c
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Definition of the listint_t structure */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
/* (Add your function prototypes here) */

#endif /* LISTS_H */
```

## Usage

To use the functions in this project, follow these steps:

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Implement the functions in your program or project as needed.
4. Compile your code with the appropriate source files from this project.
5. Run the compiled program to perform linked list operations.

For example, to use the `print_listint` function to print the elements of a linked list, you can do the following:

```c
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    /* Create and manipulate the linked list as needed */

    printf("Linked list elements:\n");
    print_listint(head);

    /* Clean up memory as needed */

    return 0;
}
```
## Resources

Here are some additional resources that you may find useful for learning about linked lists, assembly programming, and related topics:

- [Holberton School - Singly Linked Lists](https://en.wikipedia.org/wiki/Linked_list)
- [C Programming Documentation](https://en.cppreference.com/w/)

Feel free to explore these resources to deepen your understanding and skills related to the project's concepts.

## License
- [MIT](MIT)
