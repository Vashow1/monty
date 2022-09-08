#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * followed by a new line
 * @head: the head of the doubly linked list
 * @linenumber: the current linenumber containing opcode
 */

void pint(stack_t *head, size_t linenumber)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%ld: can't pint, stack empty\n", linenumber);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
