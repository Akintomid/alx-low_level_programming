#include <stdio.h>
#include "main.h"
/**
 * int _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercse
 * return 0 otherwise.
 */
int _isalpha(int c)
{
	if ((( c >= 'a') && ( c <= 'z')) || (( c >= 'A') && ( c <= 'Z')))
		return (1);
	else
		return (0);
}
