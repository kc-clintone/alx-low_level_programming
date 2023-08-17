#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum
 * of all its parameters
 * @n: first parameter
 * Return: if n == null, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
