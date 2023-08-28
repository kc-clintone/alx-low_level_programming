#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked
 * list using Floyd's Tortoise and Hare algorithm.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop
 * starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sponge = head, *bob = head;

	while (sponge && bob && bob->next)
	{
		printf("[%p] %d\n", (void *)sponge, sponge->n);
		printf("[%p] %d\n", (void *)bob, bob->n);
		sponge = sponge->next;
		bob = bob->next->next;
		if (sponge == bob)
		{
			sponge = head;
			while (sponge != bob)
			{
				sponge = sponge->next;
				bob = bob->next;
			}
			printf("Loop starts at [%p] %d\n",
				(void *)sponge, sponge->n);
			return (sponge);
		}
	}
	return (NULL);
}

