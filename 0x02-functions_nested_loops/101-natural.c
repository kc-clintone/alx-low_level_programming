#include <stdio.h>

/**
 * main - prints count of multiples of 3 or 5
 * under 1024
 *
 * @n: the multiples on test
 *
 * Return: 0
 *
*/

int main(void)
{
	int count, n= 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			count += n;
	}
	printf("%d\n", count);
	return (0);
}

/**
 *
 *@count: the increment variable
 *
*/
