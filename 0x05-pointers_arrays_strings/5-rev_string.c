#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char c;

	for (i = len - 1; i >= 0; i--)
	{
		c += s[i];
	}

	*s = c;
}
