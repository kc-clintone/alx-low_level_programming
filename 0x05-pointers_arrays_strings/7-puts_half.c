#include "main.h"

/**
* puts_half - this function prints
* half of a string
*
* @str: string parameter on target
*
 *Return: void
*/
void puts_half(char *str)
{
int length = _strlen(str);

if (length % 2 == 0)
length = length / 2;

else
length = (length + 1) / 2;

while (str[length] != '\0')
{
_putchar(str[length]);
length++;
}
_putchar('\n');
}

/**
 * _strlen - returns the length of the string
 *
 * @s: the string parameter
 *
 * Return: length;
 */
int _strlen(char *s)
{
int count, x;
x = 0;
for (count = 0; s[count] != '\0'; count++)
x++;
return (x);
}
