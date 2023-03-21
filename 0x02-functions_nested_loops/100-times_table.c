#include "main.h"

/**
 *print_times_table -  times table of input starting with 0.
 *@j: The value of the times table to be printed.
 */
void print_times_table(int j)
{
	int num, mult, prod;

	if (j >= 0 && j <= 15)
	{
		for (num = 0; num <= j; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= j; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
