#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - function sets the value of bit to 0 at a given index
 * @n: number 
 * @index: index
 * Return: 1 if worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	{
		return (1);
	}
}
