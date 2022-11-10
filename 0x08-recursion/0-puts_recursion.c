#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - print the string on screen
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\n')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
