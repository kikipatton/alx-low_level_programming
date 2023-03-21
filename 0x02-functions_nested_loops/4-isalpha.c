#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *@c: is the variable being checked
 *Return: 1 if letter(either lower/upper) otherwise 0
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
		return (0);
}
