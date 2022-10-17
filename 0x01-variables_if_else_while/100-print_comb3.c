#include <stdio.h>

/**
 * main - print possible combination of 2 digits
 * Return: return 0 always success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		int num2 = 0;
		while (num2 < 10)
		{
			if (num2 != 0)
			{
				putchar((num % 10) + '0');
				putchar((num2 % 10) + '0');

				if (num != 9 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}

		num++;
	}

	putchar('\n');
	return (0);
}

