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

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
}
