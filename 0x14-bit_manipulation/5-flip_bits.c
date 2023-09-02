#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to
 * flip to convert n to m.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
       	unsigned long int _val = n ^ m;
	unsigned int counter = 0;

	while (_val > 0)
	{
		counter += (_val & 1);
		_val >>= 1;
	}
	return (counter);
}
