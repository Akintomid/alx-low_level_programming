#include <main.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch = 'z'; ch++)
		putchar (ch);
	putchar('\n');
	return (0);
}
