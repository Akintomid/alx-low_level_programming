#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - function checks the number of bit flips to get from,
 * one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int toll = n ^ m;
	unsigned int log = 0;

	while (toll != 0)
	{
		log += toll & 1;
		toll >>= 1;
	}
	return (log);
}
