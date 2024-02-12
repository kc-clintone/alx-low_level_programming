#include "hash_tables.h"
/**
 * hash_table_delete - This function deletes the hash table.
 * @ht: The pointer to the hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *hd = ht;
hash_node_t *nd, *temp;
unsigned long int index;

for (index = 0; index < ht->size; index++)
{
if (ht->array[index] != NULL)
{
nd = ht->array[index];
while (nd != NULL)
{
temp = nd->next;
free(nd->key);
free(nd->value);
free(nd);
nd = temp;
}
}
}
free(hd->array);
free(hd);
}

