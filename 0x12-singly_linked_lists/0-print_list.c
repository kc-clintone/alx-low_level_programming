#include "lists.h"
/**
 * print_list - prints the elements in a list
 * @counter: head
 * @str: the targer string
 *
*/
size_t print_list(const list_t *h)
{
size_t counter = 0;
const list_t *head = h;
while (head != NULL)
{
head->str != NULL
? printf("[%d] %s\n", head->len, head->str)
: printf("[0] (nil)\n");
counter++;
head = head->next;
}
return counter;
}
~
