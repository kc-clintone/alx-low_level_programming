#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int numbr = 1;
unsigned char *byte_pointer = (unsigned char *)&numbr;
unsigned int final_byte_value = *byte_pointer;

return ((final_byte_value == 1) ? 1 : 0);
}

