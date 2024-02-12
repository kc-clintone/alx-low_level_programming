#include "hash_tables.h"
/**
 * hash_table_get - This function retrieves the value associated with
 * the key in the hash table.
 * @ht: The pointer to the hash table.
 * @key: The target.
 * Return: NULL - if key can't be matched | value of the key.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int x;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
x = key_index((const unsigned char *)key, ht->size);
if (x >= ht->size)
return (NULL);
node = ht->array[x];
while (node && strcmp(node->key, key) != 0)
node = node->next;
return ((node == NULL) ? NULL : node->value);
}

