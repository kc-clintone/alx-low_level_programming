#include <stdio.h>
/**
* main - this program will print all arguments
* it received
*
* @argc: counts the number of args
*
* @argv: the argument vector
*
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
