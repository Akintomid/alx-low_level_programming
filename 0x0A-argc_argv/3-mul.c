#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * atoi function converts a string into an integer
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int a, test = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 0; a < argc; a++)
		{
			test *= atoi(argv[a]);
		}
		printf("%d", test);
	}
	return (0);
}
