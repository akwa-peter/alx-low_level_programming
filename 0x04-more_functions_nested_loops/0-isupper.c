#include <stdio.h>

/**
 * _isupper - checks for upper case letter
 * Return: returns 0 or 1
 * @c: character
 */

int _isupper(int c)
{
	int i = 'A';

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
