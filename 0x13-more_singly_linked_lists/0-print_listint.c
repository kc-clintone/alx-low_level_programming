#include "lists.h"
/**
 * print_listint -  a function that prints all the
 * elements of a listint_t list
 * @h: head/start
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t index = 0;
	const listint_t *k = h;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		index += 1;
		k = k->next;
	}
	return (index);
}
