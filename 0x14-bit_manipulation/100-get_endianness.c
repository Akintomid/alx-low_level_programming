#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	short int word = 0x0001;
	char *byte = (char *) &word;

	return (byte[0] ? 1 : 0);
}
