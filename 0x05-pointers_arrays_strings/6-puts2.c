#include "main.h"

/**
 * puts2 - a function that prints
 * certain part of a string
 *
 * @str: string parameter on target
 *
 * Return: void
*/

void puts2(char *str)
{
int j = 0;

while (str[j] != '\0')
{
if (j % 2 == 0)
_putchar(str[j]);
j++;
}
_putchar('\n');
}
