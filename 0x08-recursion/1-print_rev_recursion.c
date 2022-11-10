#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - print string in reverse usin recursion
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(s[strlen(s) - 1]);
	*s[strlen(s) - 1] = '\0';
	_print_rev_recursion(s);

	_putchar('\n');
}
