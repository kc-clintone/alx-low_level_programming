#include "main.h"

/**
* rev_string - a function that
* reverses a string
*
* @s: the string parameter on target
*
* Return: othing
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter
 *
 * Return: s;
 */
int _strlen(char *s)
{
int count, y;
y = 0;
for (count = 0; s[count] != '\0'; count++)
y++;

return (y);
}

/**
* swap_char - this func swaps two characters
*
* @a: the first char
*
* @b: the second character
*
* Return: nothing
*/

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
