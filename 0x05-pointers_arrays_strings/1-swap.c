#include "main.h"

/**
 * swap_int - swap the values of th variables passed
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int copy = *a;
	*a = *b;
	*b = copy;
}
