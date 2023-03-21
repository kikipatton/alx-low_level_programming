#include "main.h"
/**
 *_islower(int c) - checks for lower case character
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

