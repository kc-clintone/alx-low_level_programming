#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *currentNode = *h, *next;
	size_t count = 0;

	if (!h)
		return (0);
	while (currentNode)
	{
		count++;
		next = currentNode->next;
		free(currentNode);
		if (next >= currentNode)
		{
			*h = NULL;
			return (count);
		}
		currentNode = next;
	}
	*h = NULL;
	return (count);
}
