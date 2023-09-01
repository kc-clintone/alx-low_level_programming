#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the given index (0 or 1) or -1
 * if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _value = -1;
	unsigned int pos = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	while (pos <= index)
	{
		if (pos == index)
			_value = (n & 1);
		n >>= 1;
		pos++;
	}
	return (_value);
}
