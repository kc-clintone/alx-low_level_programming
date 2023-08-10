#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point for te program
 * @argv: number of arguments
 * @argc: args count
 * Return: The length of the string.
 */
int main(int argc, char *argv[])
{
unsigned long long int result =
strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);
char *num1 = argv[1];
char *num2 = argv[2];
int i;

if (argc != 3)
{
printf("Error\n");
return (98);
}
for (i = 0; num1[i] != '\0'; i++)
{
if (!isdigit(num1[i]))
{
printf("Error\n");
return (98);
}
}
for (i = 0; num2[i] != '\0'; i++)
{
if (!isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}
printf("%llu\n", result);
return (0);
}
