#include <stdio.h>
#include "main.h"

/**
 * print_array - print the contents of an array
 * @a: array of numbers
 * @n: total items in the array
 */
void print_array(int *a, int n)
{
	int i;

	if (n == (sizeof(a) / sizeof(int)))
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else printf("\n\n");
}
