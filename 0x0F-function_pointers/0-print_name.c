#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: string char
 * @f: pointer that takes the string argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
