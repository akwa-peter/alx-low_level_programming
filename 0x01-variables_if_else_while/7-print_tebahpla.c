#include <stdio.h>

/**
 * main - main is the entry point of this program containing code to
 * print alphabets in reverse order
 * Return: return 0 always success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
