#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *tmp;
	unsigned int count;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	currentNode = *head;
	for (count = 0; currentNode && count < index - 1; currentNode
			= currentNode->next, count++)
		;
	if (!currentNode || !currentNode->next)
		return (-1);
	tmp = currentNode->next;
	currentNode->next = tmp->next;
	free(tmp);
	return (1);
}
