#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: the string to search the character
 * @c: the character to be located
 * Return: a ponter to the character location
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
		{
			return (s);
		}
	}
	if (c == '\0')
		return (0);
	
	return (NULL);
}
