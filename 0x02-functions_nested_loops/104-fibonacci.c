#include <stdio.h>

/**
 * main - prints the first 98 fibonacci
 * suit numbers
 *
 * Return: 0
 *
*/

int main(void)
{
	int count;
	unsigned long const1 = 10000000000, const2 = 9999999999;
	unsigned long n = 0, n1 = 1, n2;
	unsigned long a1, a2, b1, b2;
	unsigned long a, b;
	
	for (count = 0; count < 92; count++)
	{
		n2 = n + n1;
		printf("%lu, ", n2);
		n = n1;
		n1 = n2;
	}
	a1 = n / const1;
	b1 = n1 / const1;
	a2 = n % const1;
	b2 = n1 % const1;
	for (count = 93; count < 99; count++)
	{
		a = a1 + b1;
		b = a2 + b2;
		if ((a2 + b2) > const2)
		{
			a += 1;
			b %= const1;
		}
		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = a;
		b2 = b;
	}
	printf("\n");
	return (0);
}
