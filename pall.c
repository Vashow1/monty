#include "monty.h"
/**
 * pall - prints all the elements in a doubly linked list
 *
 * @h: an instance of the doubly linked list
 * Return: the number of nodes in the list
 */

size_t pall(const stack_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
