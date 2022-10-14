#include <stdio.h>

/**
 * main - main entry part of the program
 * return 0 - return integer to standard output
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int logLongIntType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
	printf("Size of an int: %ld byte(s)\n",sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n",sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(lonLongIntType));
	printf("Size of a float: %ld byte(s)",sizeof(floatType));

	return (0);
}