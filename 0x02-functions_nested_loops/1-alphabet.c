#include "main.h"
#include <stdio.h>

/**
 * main - main entry; print alphabets in lowercase
 * Return: return 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}


/**
 * print_alphabet - print alphabets in lowercase
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
