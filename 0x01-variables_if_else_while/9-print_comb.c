#include <stdio.h>

/**
 * main - print possible combunation of a digit
 * Return: return 0 always success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');
	return (0);
}
