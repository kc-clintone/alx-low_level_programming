#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to be added.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!head || !str)
		return (NULL);
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return NULL;
	}
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (!(*head))
	{
		*head = newNode;
	}
	else
	{
		list_t *current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}

