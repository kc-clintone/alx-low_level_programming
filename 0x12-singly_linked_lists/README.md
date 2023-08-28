![header img](https://miro.medium.com/v2/resize:fit:1200/1*Z3vqMccS0Y8q7LVgvlyQ9A.png)

# 0x12 Singly Linked Lists

## Table of Contents

- [0x12 Singly Linked Lists](#0x12-singly-linked-lists)
  - [Table of Contents](#table-of-contents)
  - [Project Files](#project-files)
  - [Getting Started](#getting-started)
  - [Functions and Descriptions](#functions-and-descriptions)
  - [Compilation](#compilation)
  - [Usage](#usage)
  - [License](#license)
  - [Resources](#resources)

## Project Files

The project directory contains the following files:

- `.gitignore`: A Git configuration file specifying files and directories to be ignored in version control.
- `0-print_list.c`: Contains a function that prints all the elements of a linked list.
- `1-list_len.c`: Contains a function that returns the number of elements in a linked list.
- `2-add_node.c`: Contains a function that adds a new node at the beginning of a linked list.
- `3-add_node_end.c`: Contains a function that adds a new node at the end of a linked list.
- `4-free_list.c`: Contains a function that frees a linked list.
- `100-first.c`: Contains a function attributed with `constructor` that prints a message before the `main` function is executed.
- `101-hello_holberton.asm`: Contains a 64-bit assembly program that prints a message before the `main` function is executed.
- `lists.h`: Contains the prototypes of functions used in the project and the definition of the `list_t` structure.
- `README.md`: The file you are currently reading, which provides project information and instructions.

## Getting Started

1. Clone the repository to your local machine using the following command:

   ```sh
   git clone https://github.com/kc-clintone/alx-low_level_programming/0x12-singly_linked_lists.git
   ```

2. Navigate to the project directory:

   ```sh
   cd 0x12-singly_linked_lists
   ```

3. You're ready to explore and work on the project!

## Functions and Descriptions

Here's an overview of the functions implemented in this project:

- `print_list`: Prints all the elements of a linked list.
- `list_len`: Returns the number of elements in a linked list.
- `add_node`: Adds a new node at the beginning of a linked list.
- `add_node_end`: Adds a new node at the end of a linked list.
- `free_list`: Frees a linked list.
- `__attribute__((constructor)) first_function`: A function attributed with `constructor` that is executed before the `main` function.
- Assembly Program `101-hello_holberton.asm`: A 64-bit assembly program that prints a message before the `main` function is executed.

Each function has a specific purpose related to linked list manipulation.

## Compilation

To compile and test the provided C files, you can use the `gcc` compiler. For example, to compile the `0-print_list.c` file and create an executable named `print_list`, you can use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic 0-print_list.c -o print_list
```

Repeat this process for other source files as needed.

## Usage

After compiling the files, you can run the generated executables to test the functionality of the linked list functions. For example:

```sh
./print_list
```

The specific usage may vary based on the individual function's purpose.

## License

[MIT](LICENSE)

## Resources

Here are some additional resources that you may find useful for learning about linked lists, assembly programming, and related topics:

- [Holberton School - Singly Linked Lists](https://en.wikipedia.org/wiki/Linked_list)
- [Introduction to x86 Assembly Language](https://cs.lmu.edu/~ray/notes/x86assembly/)
- [NASM - The Netwide Assembler](https://www.nasm.us/)
- [C Programming Documentation](https://en.cppreference.com/w/)
- [Assembly Language Video Tutorial](https://www.youtube.com/watch?v=ViNnfoE56V8)

Feel free to explore these resources to deepen your understanding and skills related to the project's concepts.
