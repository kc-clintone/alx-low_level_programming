#include "hash_tables.h"

/**
 * hash_djb2 - A hash function fir implementing djb2 algorithm.
 * @str: Target str.
 * Return: Final hash.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int constant;
int index;

constant = 5381;
while ((index = *str++))
constant = ((constant << 5) + constant) +index;
return (constant);
}
