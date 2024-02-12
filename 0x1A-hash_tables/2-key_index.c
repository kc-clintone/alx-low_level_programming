#include "hash_tables.h"
/**
 * key_index - This function gets the index at which the key-value
 * pair is stored in the array.
 * @key: The key target.
 * @size: The size of the array.
 * Return: The index.
 * Description: It uses the djb2 algo.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
