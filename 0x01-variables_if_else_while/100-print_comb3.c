#include <stdio.h>

/**
 * main - print possible combination of 2 digits
 * Return: return 0 always success
 */
int main(void)
{
	int num = 0;

	while (num < 100)
	{
		if (num < 10)
			putchar('0' + (num % 10));
		else
			putchar((num % 10) + '0');

		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);
}

