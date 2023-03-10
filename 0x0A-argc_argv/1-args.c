#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int t;

	printf("%d\n", argc);

	for (t = 0; t < argc; t++)
	{
		printf("%s", argv[t]);
	}
	return (0);
}
