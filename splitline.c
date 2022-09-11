#include "monty.h"
/**
 * splitline - splits a line into an array of strings
 *
 * @line: the line
 * @linenumber: the line number from the bytecode file
 * Return: a pointer to an array of lines
 */

char **splitline(char **line, size_t linenumber)
{
	char **command;
	char *token;
	int comp0, comp1, comp2, comp3, comp4, comp5, comp6;
	int comp7;

	command = malloc(sizeof(command) * 2);

	if (command == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(*line, " ");
	command[0] = token;
	comp0 = strcompr(token, "pall");
	comp1 = strcompr(token, "push");
	comp2 = strcompr(token, "pop");
	comp3 = strcompr(token, "add");
	comp4 = strcompr(token, "nop");
	comp5 = strcompr(token, "swap");
	comp6 = strcompr(token, "pint");
	comp7 = strcompr(token, "sub");


	if (comp0 != 0 && comp1 != 0 && comp2 != 0
			&& comp3 != 0 && comp4 != 0
			&& comp5 != 0 && comp6 != 0
			&& comp7 != 0)
	{
		fprintf(stderr, "L%ld: unknown instruction %s", linenumber, token);
		exit(EXIT_FAILURE);
	}
	if (comp1 == 0)
	{
		token = strtok(NULL, " ");
		if (token == NULL)
		{
			fprintf(stderr, "L%ld: usage: push integer\n", linenumber);
			exit(EXIT_FAILURE);
		}
		command[1] = token;
	}
	return (command);
}

