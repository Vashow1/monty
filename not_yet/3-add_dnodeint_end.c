#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 *
 * @head: the current head of the list
 * @n: the n element of the list
 * Return: the added node or NULL if malloc fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (last == NULL)
	{
		return (NULL);
	}
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
		*head = last;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		last->prev = tmp;
		tmp->next = last;
	}
	return (last);
}
