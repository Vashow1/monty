#include "monty.h"

/**
 * push - adds a new node at the head of a doubly linked list
 *
 * @head: the soon-to-be previous head of the list
 * @n: the integer value of the new node
 * Return: the new_node
 */
stack_t *push(stack_t **head, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
