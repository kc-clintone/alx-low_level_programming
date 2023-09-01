#include "main.h"
/**
 * flip_bits_recursive - Counts the number of bits needed
 * to flip recursively.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flipRecursive(unsigned long int n, unsigned long int m)
{
	int lb_n = n & 1;
	int lb_m = m & 1;

	if (n == 0 && m == 0)
		return (0);
	if (lb_n != lb_m)
		return (1 + flipRecursive(n >> 1, m >> 1));
	else
		return (flipRecursive(n >> 1, m >> 1));
}
/**
 * flip_bits - Wrapper function for flip_bits_recursive.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (flipRecursive(n ^ m, 0));
}
