#include <stdio.h>

/**
 * _isupper - checks for upper case letter
 * Return: returns 0 or 1
 * @c: character
 */

int _isupper(char c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
