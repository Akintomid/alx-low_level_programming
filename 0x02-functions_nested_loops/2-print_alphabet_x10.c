#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x, ch;

	ch = 0;

	while (ch < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar (x);
		}
		ch++;
		putchar ('\n');
	}
}
