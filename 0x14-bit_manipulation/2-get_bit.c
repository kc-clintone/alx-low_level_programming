#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the given index (0 or 1)
 * or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value = -1;
unsigned int bit_position = 0;

/** Check if index is out of bounds */
if (index >= sizeof(unsigned long int) * 8)
return (-1);
while (bit_position <= index)
{
if (bit_position == index)
/** Get the least significant bit */
bit_value = (n & 1);
/** Right-shift to check the next bit */
n >>= 1;
bit_position++;
}
return (bit_value);
}

