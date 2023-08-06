#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins
* to make change
*
* @argc: number of cmd  args
*
* @argv: array of cmd args
*
* Return: 1 => error, 0 => success
*/
int main(int argc, char *argv[])
{
int cents;
int coins[5] = {25, 10, 5, 2, 1};
int num_coins = 0;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (sscanf(argv[1], "%d", &cents) != 1 || cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
num_coins += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", num_coins);
return (0);
}

