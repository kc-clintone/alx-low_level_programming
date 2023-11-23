#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to convert n to m.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor_oit = n ^ m;

while (xor_out > 0)
{
count += xor_out & 1;
xor_out >>= 1;
}
return (count);
}

