#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for digits between 1 and 9.
 * @c - input
 * Return: 1 if c is betweeen 1 and 9, otherwise 0.
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
		c++;
	}
	else
		return (0);
}
