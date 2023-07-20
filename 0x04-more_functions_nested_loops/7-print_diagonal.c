#include "main.h"

/**
* print_diagonal - prints charachters
* diagonally
*
* @n: function parameter
*
* Return:returns nothing
*/

void print_diagonal(int n)
{
	int b, w;
	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (w = 0; w < b; w++)
				_putchar(' ');
			_putchar('\\');
			if (b == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
