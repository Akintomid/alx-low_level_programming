#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * Desc: Entry
 *@n: int value
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list aa;
	int sum = 0;
	unsigned int r;

	if (n == 0)
		return (0);

	va_start(aa, n);
	int sum = 0;

	for (r = 0; r < n; r++)
		sum += va_arg(aa, int);
	va_end(aa);
	return (sum);
}
