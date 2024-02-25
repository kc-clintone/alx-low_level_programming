#include "hash_tables.h"
/**
 * hash_table_set - This function adds elements to the hash table.
 * @ht: Pointer to hash table.
 * @key: Key to add - (a non-empty string).
 * @value: Value associated with this key.
 * Return: 0 on failure, 1 Otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *_copy;
hash_node_t *new;
unsigned long int x, count;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
_copy = strdup(value);
if (_copy == NULL)
return (0);
x = key_index((const unsigned char *)key, ht->size);
for (count = x; ht->array[count]; count++)
{
if (strcmp(ht->array[count]->key, key) == 0)
{
free(ht->array[count]->value);
ht->array[count]->value = _copy;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(_copy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = _copy;
new->next = ht->array[x];
ht->array[x] = new;
return (1);
}
