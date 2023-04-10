#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int figure = 0;
	int a = 0;

	if (b == NULL)
		return (0);

	while (b[a])
	{
		if (b[a] == '0' || b[a] == '1')
		{
			figure <<= 1;
			figure += b[a] - '0';
			a++;
		}
		else
			return (0);
	}
	return (figure);
}
