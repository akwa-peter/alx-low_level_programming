#include <stdio.h>

/**
 * main - main entry of the program
 * Return: return 0 always success
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	printf("\n");

}
