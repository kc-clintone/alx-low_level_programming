#include "main.h"

/**
 * positive_or_negative - prints if an integer is positive or negative
 *
 * @n: the integer to be checked
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("P\n");
	}
	else if (n < 0)
	{
		printf("N\n");
	}
	else
	{
		printf("Z\n");
	}
}

