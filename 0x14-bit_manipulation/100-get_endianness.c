#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n;

	n = -1;

	if ((n >> 1) & 1)
		return (0);
	else
		return (1);
}
