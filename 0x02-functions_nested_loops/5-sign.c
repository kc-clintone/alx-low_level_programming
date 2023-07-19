#include "main.h"

/**
 * print_sign - will print the  sign of a number to
 * standard output
 *
 * @n: the character to be checked
 *
 * Return: 0 for success, 1 otherwise
 *
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
