#include <stdio.h>

/**
 * main - main entry point of this program
 * Return: returns 0 always success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}

	return (0);
}
