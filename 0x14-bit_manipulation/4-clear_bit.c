#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0,
 * at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (1);
}
