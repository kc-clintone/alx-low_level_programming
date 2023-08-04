#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - this will write the character c
 * to the standard output
 *
 * @c: gets the character to print
 *
 * Return: On success 1, 0 otherwise
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
