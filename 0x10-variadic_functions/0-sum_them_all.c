#include "variadic_functions.h"
/**
 * sum_them_all - returns the total args used
 * @n: number of args
 * Return: count of args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list arg;
	va_start(arg, n);
	for (i = 0; i < n; ++i)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}

