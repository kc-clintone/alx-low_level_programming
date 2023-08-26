#include "main.h"
/**
*_memset - this function fills the first n number of
* bytes of memory pointed to by s with the
* constant b
* @s: the target
* @b: the constant
* @n: te number of bytes
* Return: value of @s
*/

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
