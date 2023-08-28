#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list
 * @head: points to the head of listint_t list
 * @n: target int
 * Return: the address of the new elemen, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	while (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
