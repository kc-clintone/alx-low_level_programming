#include <stdio.h>

/**
* main - prints the largest prime-factor
* of a given number
*
*Return: 0
*/

int main(void)
{
	long n = 612852475143;
	int i;

	while (i++ < n / 2)
	{
		if (n % i == 0)
		{
			n /= 2;
			continue;
		}
		for (i = 3; i < n / 2; i += 2)
		{
			if (n % i == 0)
				n /= i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
