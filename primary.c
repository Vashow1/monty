#include "monty.h"
/**
 * main - the main program to read and manipulate results
 * from the bytecode file
 * @argc: the number of arguments passed in the command line
 * @argv: an array containing strings of the arguments
 * Return: an integer depending on the state of succes of program
 */

int main(int argc, char *argv[])
{
	FILE *fp;
	size_t linenumber = 1, len = 0;
	char *line = NULL;
	ssize_t read;
	char **command;
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, fp)) != -1)
	{
		if (line[0] != '\n')
		{
			command = splitline(&line, linenumber);
		}
		whatdo(command, &head, linenumber);
		linenumber++;
	}

	fclose(fp);
	if (line)
		free(line);

	free(command);
	free_stackt(head);
	exit(EXIT_SUCCESS);
}
