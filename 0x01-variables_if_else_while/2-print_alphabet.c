#include <stdio.h>

/**
 * main - main is the entry point of this program
 * Return: return 0 always success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");

	return (0);
}
