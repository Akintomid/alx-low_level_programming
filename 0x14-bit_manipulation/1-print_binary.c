#include <stdio.h>
#include "main.h"

/**
 * print_binary - function prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
