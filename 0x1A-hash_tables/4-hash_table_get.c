#include "hash_tables.h"
/**
 * hash_table_get - A  function that retrieves a value
 * associated with a key.
 * @ht: Pointer to hash table.
 * @key: The target key.
 * Return: If no match - NULL.
 * Otherwise - Value of the key in the table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *nd;
unsigned long int x;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
x = key_index((const unsigned char *)key, ht->size);
if (x >= ht->size)
return (NULL);
nd = ht->array[x];
while (nd && strcmp(nd->key, key) != 0)
nd = nd->next;
return ((nd == NULL) ? NULL : nd->value);
}
