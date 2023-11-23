#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number in which the bit should be set.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
/** Create a mask value with 1 at the desired index */
unsigned long int maskvalue = 1 << index;

if (index >= sizeof(unsigned long int) * 8)
return (-1);
/** Set the bit at the index to 1 using bitwise */
*n = *n | mask;
return (1);
}

