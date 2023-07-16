#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: This program will print value of n
 * each time the program runs and determine it's type
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	/*Logic*/
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
