#include <stdio.h>

/**
 * main - print possible combination of 2 digits
 * Return: return 0 always success
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
	{
		int num2;

		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
