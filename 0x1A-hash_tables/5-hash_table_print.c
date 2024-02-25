#include "./hash_tables.h"
/**
 * hash_table_print - A function that prints the hash table.
 * @ht: A pointer to target tabke.
 * Description: Key-value pairs printed in order as they
 *              appear in the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned char _flag = 0;
hash_node_t *nd;
unsigned long int index;

if (ht == NULL)
return;
printf("{");
for (index = 0; index < ht->size; index++)
{
if (ht->array[index] != NULL)
{
if (_flag == 1)
printf(", ");
nd = ht->array[index];
while (nd != NULL)
{
printf("'%s': '%s'", nd->key, nd->value);
nd = nd->next;
if (nd != NULL)
printf(", ");
}
_flag = 1;
}
}
printf("}\n");
}
