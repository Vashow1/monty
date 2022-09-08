#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @head: the current head of the stack
 * @linenumber: the current line number of the opcode
 */
void pop(stack_t **head, size_t linenumber)
{
	stack_t *node;

	if (*head == NULL)
	{
		fprintf(stderr, "L%ld: can't pop an empty stack\n", linenumber);
		exit (EXIT_FAILURE);
	}
	node = *head;
	if (node->next == NULL)
	{
		*head = NULL;
		free(node);
	} else
	{
		*head = node->next;
		(node->next)->prev = NULL;
		free(node);
	}
}
