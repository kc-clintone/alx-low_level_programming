#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that adds positive numbers
*
* @argc: number of cmd args
*
* @argv: array of cmd  args
*
* Return: 0 => success, 1 => error
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
