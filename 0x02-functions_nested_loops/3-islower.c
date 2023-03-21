#include "main.h"
/**
 *_islower - checks for lower case character
 *@c: variable to be checked
 *Return: 0 if passed variable is not lowercase, return 1 if  correct
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

