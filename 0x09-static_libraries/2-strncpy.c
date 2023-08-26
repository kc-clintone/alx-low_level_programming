#include "main.h"

/**
* _strncpy - similar to the strcpy() function, except
* that it copies only the specified number of characters
* from source string to destination string
* @dest: the destination
* @src: the source
* @n: bytes copied
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for ( ; i < n; i++)
	dest[i] = '\0';
return (dest);
}
