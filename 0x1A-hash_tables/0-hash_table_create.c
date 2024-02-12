#include "hash_tables.h"
/**
 * hash_table_create - This is a function that creates hash tables.
 * @size: The size of the array.
 * Return: NULL on error | pointer.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashed;
unsigned long int index;
hashed = malloc(sizeof(hash_table_t));

if (hashed == NULL)
return (NULL);
hashed->size = size;
hashed->array = malloc(sizeof(hash_node_t *) * size);
if (hashed->array == NULL)
return (NULL);
for (index = 0; index < size; index++)
hashed->array[index] = NULL;
return (hashed);
}

