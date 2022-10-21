#include "main.h"

/**
 * _isupper - checks for upper case letter
 * Return: returns 0 or 1
 * @c: character
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
