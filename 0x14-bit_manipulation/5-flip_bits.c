#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function returns the number of bits you will need,
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output = n ^ m;
	unsigned int count = 0;

	while (output)
	{
		count += output & 1;
		output >>= 1;
	}
	return (count);
}
