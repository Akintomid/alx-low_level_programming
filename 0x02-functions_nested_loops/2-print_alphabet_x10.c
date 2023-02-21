#include <stdio.h>
/**
 * main - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int ch;

	for (ch = '0'; ch <= '10'; ch++)
	{
		printf("abcdefghijklmnopqrstuvwxyz");
	}
	putchar ('\n');
	return (0);
}
