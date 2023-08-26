#include "lists.h"
/**
 * list_len - lists the contents of a linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	return (1 + list_len(h->next));
}
