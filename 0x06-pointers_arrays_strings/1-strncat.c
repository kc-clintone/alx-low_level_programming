#include "main.h"

/**
 * _strncat - writes n+1 bytes to dest
 * (n from src plus the terminating  null  byte)
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * @n: int parameter indicating the number of bytes
 *
 * Return: final results
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, dest_len = 0;

while (dest[i++])
	dest_len++;
for (i = 0; i < n && src[i] != '\0' ; i++)
	dest[dest_len++] = src[i];
return dest;
}
