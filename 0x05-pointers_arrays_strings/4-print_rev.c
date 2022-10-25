#include "main.h"

/**
 * print_rev - print the string in reverse order
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = strlen(s);
	char c[len] = s;

	for (int i = len-1; i >= 0; i--)
	{
		_putchar(c[i]);
	}
	_putchar("\n");

}
