#include "main.h"

void print_alphabet();

/**
 * print_alphabet - print alphabets in lowercase
 */
void print_alphabet()
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
}

/**
 * main - main entry; print alphabets in lowercase
 * Return: return 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

