#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Function that returns a pointer to a newly allocated,
 * space in memory.
 * @str: string
 * Return: Always 0 upon success
 */
char *_strdup(char *str)
{
	int a, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}
	end++;

	array = malloc(sizeof(char) * end);

	for (a = 0; a < end; a++)
		array[a] = str[a];

	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
