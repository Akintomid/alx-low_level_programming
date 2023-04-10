#include <stdio.h>
#include "main.h"

/**
 * print_binary - function prints the binary representation
 * of a number
 * @n: number
 * Return: Always 0 on success
 */

void print_binary(unsigned long int n)
{
	int a;

	for (a = (sizeof(unsigned long int) * 8) - 1; a >= 0; a--)
	{
		if ((n >> a) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
