#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - main entry of the program
 * Return: always 0 success
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%u is positive\n", n);
	else if (n == 0)
		printf("%u is zero\n", n);
	else
		printf("%u is negative\n", n);

	n = 0;
	return (0);
}
