#include "main.h"

/**
 * print_number - a function that prints an
 * integer
 *
 * @n: the target number
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int reversed = 0;

	while (n > 0)
	{
		int digit = n % 10;

		reversed = reversed * 10 + digit;
		n /= 10;
	}
	while (reversed > 0)
	{
		int digit = reversed % 10;

		_putchar(digit + '0');
		reversed /= 10;
	}
}

