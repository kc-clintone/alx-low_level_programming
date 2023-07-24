#include "main.h"

/**
* print_rev - this function will
* print a string in reverse to stdout
*
* @s: the string parameter to print
*
*/

void print_rev(char *s)
{
int length = 0, index = 0;
length = _strlen(s);

for (index = length - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}

/**
 *
 * _strlen - this returns length of the string
 *
 * @s: the string parameter
 *
 * Return: lenght
 *
 */

int _strlen(char *s)
{
int count, j;
j = 0;
for (count = 0; s[count] != '\0'; count++)
j++;
return (j);
}
