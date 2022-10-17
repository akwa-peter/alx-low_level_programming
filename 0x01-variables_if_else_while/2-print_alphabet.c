#include <stdio.h>

/**
 * main - main is the entry point of this program
 * return 0 - 0 is the return value of this program
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
