#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @head: the current head of the stack
 * @linenumber: the linenumber with the opcode
 */

void sub(stack_t **head, size_t linenumber)
{
	int sum;
	stack_t *node = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%ld: can't add, stack too short\n", linenumber);
		exit(EXIT_FAILURE);
	}
	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L%ld: can't add, stack too short\n", linenumber);
		exit(EXIT_FAILURE);
	}
	sum = -(node->n) + (node->next)->n;
	pop(head, linenumber);
	node = *head;
	node->n = sum;
}
