#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at
 * a given position.
 * @h: Head of the list.
 * @idx: Index of new node.
 * @n: Value of new node.
 * Return: Address of new node on success, othereise NULL.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *head;
unsigned int x;
dlistint_t *new;

new = NULL;
if (idx == 0)
new = add_dnodeint(h, n);
else
{
head = *h;
x = 1;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
if (x == idx)
{
if (head->next == NULL)
new = add_dnodeint_end(h, n);
else
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = head->next;
new->prev = head;
head->next->prev = new;
head->next = new;
}
}
break;
}
head = head->next;
x++;
}
}
return (new);
}
