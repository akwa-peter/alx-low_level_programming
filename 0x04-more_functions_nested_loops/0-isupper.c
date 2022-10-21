#include <stdio.h>

/**
 * _isupper - checks for upper case letter
 * Return: returns 0 or 1
 * @c: character
 */

int _isupper(int c)
{
	for (int i = 'a'; i < 'z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
}
