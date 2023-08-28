#include "lists.h"
/**
 * free_list - this frees a list once used
 * @head: previous node
 * Return: head
*/
void free_list(list_t *head)
{
	if (head)

	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
