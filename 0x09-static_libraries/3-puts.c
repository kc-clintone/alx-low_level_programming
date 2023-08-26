#include "main.h"
#include <stdio.h>
/**
 * _puts - a function that
 * prints a string
 *
 * @str: target parameter
 *
 * Description: this function will print a
 * string to the standard output
 *
 * Return: number of characters printed to
 * the stdout
 *
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
