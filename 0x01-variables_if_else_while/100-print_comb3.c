#include <stdio.h>

/**
 * main - print possible combination of 2 digits
 * Return: return 0 always success
 */
int main(void)
{
	int num = 0;
	int num2 = 0;

	while (num < 10)
	{
		while (num2 < 10)
		{
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num != 9 && num2 != 9)
			{
				putchar((num % 10) + '0');
				putchar((num2 % 10) + '0');
			}
			num2++;
		}

		num++;
	}

	putchar('\n');
	return (0);
}

