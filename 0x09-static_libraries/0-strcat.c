#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the
 * end of dest, and then adds a terminating null byte
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0, dest_len = 0;

while (dest[i++])
	dest_len++;
for (i = 0; src[i]; i++)
	dest[dest_len++] = src[i];
return (dest);
}
