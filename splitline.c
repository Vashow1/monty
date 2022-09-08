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
	int comp;

	command = malloc(sizeof(command) * 2);

	if (command == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(*line, " ");
	if (token == NULL)
	{
		fprintf(stderr, "L%ld: empty line",  linenumber);
		exit(EXIT_FAILURE);
	}

	command[0] = token;
	comp = strcompr(token, "pall");
	if (comp != 0)
	{
		token = strtok(NULL, " ");
		command[1] = token;
	}
	return (command);
}

