#include "main.h"
/**
* _memcpy - copies n bytes from memory area *src
* to memory area *dest
*
* @dest: the destination
* @src: the source
* @n: the number of bytes copied
* Return: pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
dest[i] = src[i];
return (dest);
}
