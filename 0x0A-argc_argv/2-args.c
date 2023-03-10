#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	printf("%d\n", argc);

	for (a = 0; a < argc; a++)
	{
		printf("%s", argv[a]);
	}
	return (0);
}
