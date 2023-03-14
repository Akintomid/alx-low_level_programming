#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: lowercase or uppercase character.
 * Return: 1 if 'c' is a letter, lowercase or uppercse, 0 otherwise.
 */
int _isalpha(int c)
{
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
                return (1);
        else
                return (0);
}
