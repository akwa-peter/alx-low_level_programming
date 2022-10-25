#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - print characters in a string
 * @str: string to print;
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
