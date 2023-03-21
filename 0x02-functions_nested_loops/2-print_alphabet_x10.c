#include "main.h"
/*
 * print_alphabet_x10 - repeats x10 lowercase
 */
void print_alphabet_x10(void)
{
	int times;
	char d;

	for(times = 1; times <= 10; times++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}

