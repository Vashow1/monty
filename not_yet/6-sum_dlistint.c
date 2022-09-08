#include "lists.h"
/**
 * sum_dlistint - gives the sum of n values in the dlistint_t
 *
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (0);

	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
