#include "monty.h"
/**
 * whatdo - depending on the command[0] it decides what to do
 * @head: current head of stack
 * @command: an array of pointers containing the command to
 * be executed and the int operator or none
 * @linenumber: the current line number in the bytecode file
 */

void whatdo(char **command, stack_t **head, size_t linenumber)
{
	int n = 0;

	if ((strcompr(command[0], "push")) == 0)
	{
		if ((strcompr(command[1], "0")) == 0)
		{
			n = 0;
			push(head, n);
			return;
		}
		n = atoi(command[1]);
		if (n == 0)
		{
			fprintf(stderr, "L%ld: usage: push integer\n", linenumber);
			exit(EXIT_FAILURE);
		}
		push(head, n);
	} else if (strcompr(command[0], "pall") == 0)
	{
		pall(*head);
	} else if (strcompr(command[0], "pint") == 0)
	{
		pint(*head, linenumber);
	}
}
