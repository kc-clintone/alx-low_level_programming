#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to the binary string containing 0s and 1s.
 *
 * Return: The converted number, or 0 if there are invalid characters or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int my_result = 0;

if (b == NULL)
return (0);

for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
return (0);
my_result = (my_result << 1) | (*b - '0');
}
return (my_result);
}

