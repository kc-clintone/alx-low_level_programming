#include "hash_tables.h"
/**
 * hash_table_create - A function that creates a hash table.
 * @size: Size of the array.
 * Return: If an error - NULL, Otherwise - Pointer to new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashed;
unsigned long int x;

hashed = malloc(sizeof(hash_table_t));
if (hashed == NULL)
return (NULL);
hashed->size = size;
hashed->array = malloc(sizeof(hash_node_t *) * size);
if (hashed->array == NULL)
return (NULL);
for (x = 0; x < size; x++)
hashed->array[x] = NULL;
return (hashed);
}
