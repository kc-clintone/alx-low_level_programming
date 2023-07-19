#include <stdio.h>

/**
 * main - prints out first 50 fibonacci numbers
 *
 * Return: 0
 *
*/

int main(void)
{
	int count;
	unsigned long n = 0, n1 = 1, n2;	
	for (count = 0; count < 50; count++)
	{
		n2 = n + n1;
		printf("%lu", n2);
		n = n1;
		n1 = n2;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
