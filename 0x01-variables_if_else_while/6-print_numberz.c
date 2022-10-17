#include <stdio.h>

/**
 * main - the entry point of this program
 * Return: return 0 always success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num + '0'));
		num++;
	}
	printf("\n");

	return (0);
}
