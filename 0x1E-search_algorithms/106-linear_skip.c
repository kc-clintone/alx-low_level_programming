#include "search_algos.h"
/**
 * linear_skip - This function searches for a value
 * in s skip list; assumes a
 * @list: Pointer to the head of the list
 * @value: Target value
 * Return: Pointer on the first node or NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *tmp = NULL, *halt = NULL;

if (!list)
return (NULL);
tmp = list;
while (tmp && tmp->express && tmp->express->n < value)
{
printf("Value checked at index [%lu] = [%i]\n",
tmp->express->index, tmp->express->n);
tmp = tmp->express;
}
halt = tmp;
while (halt && halt->next != halt->express)
halt = halt->next;
if (tmp->express)
{
printf("Value checked at index [%lu] = [%i]\n",
tmp->express->index, tmp->express->n);
printf("Value found between indexes [%lu] and [%lu]\n",
tmp->index, tmp->express->index);
}
else
printf("Value found between indexes [%lu] and [%lu]\n",
tmp->index, halt->index);
while (tmp != halt && tmp->n < value)
{
printf("Value checked at index [%lu] = [%i]\n",
tmp->index, tmp->n);
tmp = tmp->next;
}
printf("Value checked at index [%lu] = [%i]\n",
tmp->index, tmp->n);
if (tmp == halt)
return (NULL);
return (tmp);
}
