#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * char *create_array - Function that creates an array
 * @size: size of array
 * @c: char
 * Return: Always 0 upon success
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}
