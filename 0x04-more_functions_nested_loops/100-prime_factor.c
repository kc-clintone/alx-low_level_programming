#include <stdio.h>

/**
* main - prints the largest prime factor
* of a given number
*
* Return: 0
*/

int main(void)
{
	long number = 612852475143;
	long largest_prime_factor = 0;

	for (long i = 2; i * i <= number; i++)
	{
		while (number % i == 0)
		{
			largest_prime_factor = i;
			number /= i;
		}
	}

	if (number > 1)
		largest_prime_factor = number;

	printf("%ld\n", largest_prime_factor);
	return 0;
}
