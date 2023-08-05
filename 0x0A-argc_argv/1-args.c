#include <stdio.h>
/**
* main - this program will print the number
* of arguments used
*
* @argc: the number of arguments
*
* @argv: the array of arguments
*
* Return: returns @argv
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
