#include "monty.h"
/**
 * free_stackt - frees a doubly linked list
 * @head: the head of the list
 */
void free_stackt(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
