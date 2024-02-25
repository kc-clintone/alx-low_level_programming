#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Create sorted hash table.
 * @size: The size of new sorted hash table.
 * Return: If error - NULL.
 *         Otherwise - Pointer to new sorted hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int index;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);
ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
return (NULL);
for (index = 0; index < size; index++)
ht->array[index] = NULL;
ht->shead = NULL;
ht->stail = NULL;
return (ht);
}

/**
 * shash_table_set - Add elements to sorted hash table.
 * @ht: Pointer to sorted hash table.
 * @key: The target key - (a non-empty string).
 * @value: Value associated with key.
 * Return: 0 on failure, Otherwise - 1.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
char *_copy;
unsigned long int x;
shash_node_t *new, *temp;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
_copy = strdup(value);
if (_copy == NULL)
return (0);
x = key_index((const unsigned char *)key, ht->size);
temp = ht->shead;
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = _copy;
return (1);
}
temp = temp->snext;
}
new = malloc(sizeof(shash_node_t));
if (new == NULL)
{
free(_copy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(_copy);
free(new);
return (0);
}
new->value = _copy;
new->next = ht->array[x];
ht->array[x] = new;
if (ht->shead == NULL)
{
new->sprev = NULL;
new->snext = NULL;
ht->shead = new;
ht->stail = new;
}
else if (strcmp(ht->shead->key, key) > 0)
{
new->sprev = NULL;
new->snext = ht->shead;
ht->shead->sprev = new;
ht->shead = new;
}
else
{
temp = ht->shead;
while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
temp = temp->snext;
new->sprev = temp;
new->snext = temp->snext;
if (temp->snext == NULL)
ht->stail = new;
else
temp->snext->sprev = new;
temp->snext = new;
}
return (1);
}

/**
 * shash_table_get - Get the value associated with
 * a key in a sorted hash table.
 * @ht: Pointer to the sorted hash table.
 * @key: The target key.
 * Return: If no matches - NULL.
 *         Otherwise - the value associated with key in ht.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *nde;
unsigned long int x;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
x = key_index((const unsigned char *)key, ht->size);
if (x >= ht->size)
return (NULL);
nde = ht->shead;
while (nde != NULL && strcmp(nde->key, key) != 0)
nde = nde->snext;
return ((nde == NULL) ? NULL : nde->value);
}

/**
 * shash_table_print - Print a sorted hash table in order.
 * @ht: Pointer to the sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *nde;

if (ht == NULL)
return;
nde = ht->shead;
printf("{");
while (nde != NULL)
{
printf("'%s': '%s'", nde->key, nde->value);
nde = nde->snext;
if (nde != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - Print a sorted hash table in reverse.
 * @ht: Pointer to the target sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *nde;

if (ht == NULL)
return;
nde = ht->stail;
printf("{");
while (nde != NULL)
{
printf("'%s': '%s'", nde->key, nde->value);
nde = nde->sprev;
if (nde != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table.
 * @ht: A pointer to the sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *hd = ht;
shash_node_t *nde, *temp;

if (ht == NULL)
return;
nde = ht->shead;
while (nde)
{
temp = nde->snext;
free(nde->key);
free(nde->value);
free(nde);
nde = temp;
}
free(hd->array);
free(hd);
}
