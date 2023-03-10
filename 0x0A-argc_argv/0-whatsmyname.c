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
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	printf("%s\n", argv[0]);
	return (0);
}
