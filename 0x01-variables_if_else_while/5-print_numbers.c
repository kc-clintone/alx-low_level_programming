#include<stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: A program that prints all single digit
 * numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
