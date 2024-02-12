#include "hash_tables.h"
/**
 * hash_djb2 - This is a function for implementing the djb2 algo.
 * @str: The target string to be hashed.
 * Return: The final hash.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int _hash;
int index;

_hash = 5381;
while ((index = *str++))
_hash = ((_hash << 5) + _hash) + index;
return (_hash);
}

