#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit we want to get
 * Return: the value of bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}


int main(void)
{
	unsigned long int n = 10101101;
	unsigned int index = 3;
	int bite = get_bit(n, index);

	if (bite == -1)
		printf("Error: index out of range\n");
	else
		printf("The bit at index %d is %d\n", index, bite);
	return (0);
}
