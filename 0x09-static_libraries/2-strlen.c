#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: the string parameter
 *
 * Return: returns the length of s;
 *
 */
int _strlen(char *s)
{
int count, i;
i = 0;
for (count = 0; s[count] != '\0'; count++)
i++;
return (i);
}
