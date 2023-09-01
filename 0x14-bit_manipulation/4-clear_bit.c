#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which the bit should be cleared.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = sizeof(unsigned long int) * 8;
	unsigned long int temp = 1 << index;

	if (index >= x)
		return (-1);
	temp = ~temp;
	*n = *n & temp;
	return (1);
}
