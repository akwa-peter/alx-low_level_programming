#include <string.h>
#include "main.h"

/**
 * print_rev - print the string in reverse order
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = strlen(s);

	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
