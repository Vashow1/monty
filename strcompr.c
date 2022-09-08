#include "monty.h"
/**
 * strcompr - compares whether two strings are equal
 * @str1: a pointer to the first string
 * @str2: a pointer to the second string
 * Return: 0 if okay -1 if not
 */
int strcompr(char *str1, char *str2)
{
	size_t index = 0;

	while (str1[index] && str2[index])
	{
		if (str1[index] != str2[index])
			return (-1);
		index++;
	}
	return (0);
}
