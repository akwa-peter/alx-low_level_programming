#include "main.h"

/**
 * _strlen_recursion - get length of a string
 * @s: string to get the length
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\n')
	{
		count++;
		_strlen_recursion(s + 1);
	}

	return count;
}
