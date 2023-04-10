#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if success, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned long int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n != (1UL << index);
	{
		return (1);
	}
}
