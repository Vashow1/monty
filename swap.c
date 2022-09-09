#include "monty.h"
/**
 * swap - swaps the first two elements of a stack
 * @head: the head of the list
 * @linenumber: the current linenumber of the program
 */
void swap(stack_t **head, size_t linenumber)
{
	stack_t *node;

	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L%ld: can't swap, stack too short\n", linenumber);
	       exit(EXIT_FAILURE);
	}
	node = *head;
	*head = node->next;
	(node->next)->prev = NULL;
	node->next = (node->next)->next;
	(*head)->next = node;
	node->prev = *head;
}
