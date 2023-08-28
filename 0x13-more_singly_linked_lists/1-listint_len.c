#include "lists.h"
/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: points to head of the list
 * Return: number of elements in the listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t elements;

	for (elements = 0 ; h ; elements++)
	{
		h = h->next;
	}
	return (elements);
}
