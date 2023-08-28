#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newHead = reverse_listint(&((*head)->next));

	if (!head || !*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);
	(*head)->next->next = *head;
	(*head)->next = NULL;
	return (newHead);
}
