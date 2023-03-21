#include "main.h"
/**
 * main - main code here
 * return: 0 (success)
 */
/*function returning lowercase alphabet*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
