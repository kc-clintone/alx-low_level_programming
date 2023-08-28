#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer value to be added.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *currentNode;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	return (newNode);
}
