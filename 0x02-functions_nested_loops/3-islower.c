#include "main.h"
#include "main_0.h"

/**
 * islower - this checks for lower case letter
 * ch - ch is the character argument to be checked
 * Return: 1 if islower, or 0 if not
 */
int islower(int ch)
{
	if (_islower(ch))
		return (1);
	else
		return (0);
}
