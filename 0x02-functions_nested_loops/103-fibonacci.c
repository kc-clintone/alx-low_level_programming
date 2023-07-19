#include <stdio.h>

/**
 * main - prints the sum of even fibonacci
 * numbers
 *
 * Return: 0
 *
*/

int main(void)
{
	unsigned long n = 0, n1 = 1, n2 = 0, sum = 0;
	while (n2 <= 4000000)
	{
		n2 = n + n1;
		n = n1;
		n1 = n2;
		if ((n % 2) == 0)
			sum += n;
	}
	printf("%ld\n", sum);
	return (0);
}
