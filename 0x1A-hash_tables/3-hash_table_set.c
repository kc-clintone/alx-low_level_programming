#include "hash_tables.h"
/**
 * hash_table_set - This function adds or updates an element in the
 * hash table.
 * @ht: This pointer to the hash table.
 * @key: The target key to be added (a non-empty string)
 * @value: Value associated with key.
 * Return: 0 on fail | 1 on success.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *vcp;
unsigned long int index, x;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
vcp = strdup(value);
if (vcp == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (x = index; ht->array[i]; x++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[x]->value);
ht->array[x]->value = vcp;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(vcp);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = vcp;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}

