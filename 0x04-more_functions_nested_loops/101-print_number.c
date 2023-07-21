#include "main.h"

/**
 * print_number - a function that prints an
 * integer
 *
 * @n: the target number
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number > 9)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');
}
