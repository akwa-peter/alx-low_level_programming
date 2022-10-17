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
		printChar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		printChar(CH);
		CH++;
	}

	printf("\n");

}
