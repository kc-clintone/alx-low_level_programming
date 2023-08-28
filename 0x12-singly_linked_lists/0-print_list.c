#include "lists.h"
/**
 * print_list - prints the elements of a list
 * @h: points to list head
 * Return: elements of head (node)
*/
size_t print_list(const list_t *h)
{
size_t counter = 0;
const list_t *head = h;
while (head != NULL)
{
if (head->str != NULL)
printf("[%d] %s\n", head->len, head->str);
else
printf("[0] (nil)\n");
counter++;
head = head->next;
}
return (counter);
}
