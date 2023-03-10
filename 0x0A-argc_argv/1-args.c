#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
	}
	printf("%d\n", t - 1);
	return (0);
}
