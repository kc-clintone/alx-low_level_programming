#include "hash_tables.h"
/**
 * key_index - A function that provides you with an index key.
 * @key: The target key.
 * @size: Size of array of target hash table.
 * Return: The index of target key.
 * Description: This function uses the djb2 algorithm.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
