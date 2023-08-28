#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Integer value to be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 *         If it's not possible to add the new node at index idx, return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *currentNode = *head;
	unsigned int count = 0;

	if (!newNode)
	return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
	newNode->next = *head;
	*head = newNode;
	return (newNode);
	}
	for (; currentNode && count < idx - 1; currentNode = currentNode->next, count++)
		;
	if (!currentNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
