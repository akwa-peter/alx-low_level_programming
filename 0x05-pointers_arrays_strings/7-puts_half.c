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

	if ((len % 2) != 0)
	{
		for (i = n + 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
