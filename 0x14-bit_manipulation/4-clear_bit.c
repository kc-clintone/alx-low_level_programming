#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which the bit should be cleared.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask_value = 1 << index;

/** Create a mask with 1 at the desired index */
if (index >= sizeof(unsigned long int) * 8)
return (-1);
/** Invert the mask to clear the bit */
mask_value = ~mask_value;
/** Clear the bit at the index using bitwise AND */
*n = *n & mask_value;
return (1);
}

