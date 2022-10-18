#include "main.h"

void print_alphabet(void);

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

/**
 * main - main entry; print alphabets in lowercase
 * Return: return 0
 */
int main(void)
{
	Print_alphabet();
	return (0);
}

