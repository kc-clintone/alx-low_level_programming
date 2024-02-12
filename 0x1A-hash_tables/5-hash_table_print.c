#include "./hash_tables.h"
/**
 * hash_table_print - This function prints the hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key-value pairs are printed in the order
 * they appear in the array in the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *nd;
unsigned long int x;
unsigned char _flag = 0;

if (ht == NULL)
return;
printf("{");
for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
if (_flag == 1)
printf(", ");
nd = ht->array[x];
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

