#include <stdio.h>

/**
 * main - main program point to print base 16 numbers
 * Return: return 0 always success
 */
int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
