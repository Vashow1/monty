#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at the index specified
 * in the doubly linked list starting from index 0
 *
 * @head: the head of the list
 * @index: the index of the node being sought
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (i < index && node)
	{
		node = node->next;
		i++;
	}
	return (node);
}
