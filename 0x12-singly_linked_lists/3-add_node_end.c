#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to be added.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (!head || !str)
		return (NULL);
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
	free(new);
	return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
	}
	else
	{
	list_t *current = *head;

	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	}
	return (new);
}
