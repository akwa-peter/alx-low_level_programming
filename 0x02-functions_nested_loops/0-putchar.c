#include <stdio.h>
#include "main.h"

/**
 * main - main entry point of program to print _putchar
 * Return: return 0
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
