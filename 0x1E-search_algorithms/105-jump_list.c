#include "search_algos.h"
/**
 * jump_list - This function searches for an algo in a
 * singly linked list of integers using jump search.
 * @list: Pointer to the  head of the list
 * @size: Number of nodes in the list
 * @value: Target value
 * Return: NULL if empty, otherwise pointer to the
 *         first node
 * Description: Prints a value
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t k, m;
listint_t *i, *j;

if (list == NULL || size == 0)
return (NULL);
k = 0;
m = sqrt(size);
for (i = j = list; j->index + 1 < size && j->n < value;)
{
i = j;
for (k += m; j->index < k; j = j->next)
{
if (j->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
}
printf("Value found between indexes [%ld] and [%ld]\n",
i->index, j->index);
for (; i->index < j->index && i->n < value; i = i->next)
printf("Value checked at index [%ld] = [%d]\n", i->index, i->n);
printf("Value checked at index [%ld] = [%d]\n", i->index, i->n);
return (i->n == value ? i : NULL);
}
