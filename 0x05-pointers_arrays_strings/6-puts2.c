#include "main.h"

/**
 * puts2 - print characters in a string
 * @str: string to print;
 */
void puts2(char *str)
{
	_putchar(str[0]);
	putchar('\n');

	int len = strlen(str);
	int i;

	for (i = 1; i < len; i++)
	{
		_putchar(str[i]);
	}
}
