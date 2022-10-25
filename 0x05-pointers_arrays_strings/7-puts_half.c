#include <string.h>
#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string to print half
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int i;

	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
