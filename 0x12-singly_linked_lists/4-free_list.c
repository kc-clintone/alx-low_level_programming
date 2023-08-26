#include "lists.h"
/**
 * free_list - this frees a list once used
 * @head: previous node
 * Return: head
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
