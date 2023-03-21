#include "main.h"
/**
 *_islower - checks for lower case character
 *@c - variable to be checked
 *return: 0 if passed variable is false, return 1 if it is correct
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
		return (0);
}

