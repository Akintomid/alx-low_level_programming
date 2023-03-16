#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function cause normal process termination with,
 * a status value of 98
 * @b: input amount
 * Return: new mem
 */
void *malloc_checked(unsigned int b)
{
	void *q = malloc(b);

	if (q == NULL)
	{
		exit(98);
	}
	return (q);
}
