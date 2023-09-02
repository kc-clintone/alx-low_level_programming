#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int count = 1;
	unsigned char *_ptr = (unsigned char *)&count;
	unsigned int _result = *_ptr;

	return ((_result == 1) ? 1 : 0);
}
