#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function converts a binary number,
 * to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			output = (output << 1) | 0;
		}
		else if (*b == '1')
		{
			output = (output << 1) | 1;
		}
		else
			return (0);
		b++;
	}
	return (output);
}
