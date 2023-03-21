#include "main.h"
/**
 *print_last_digit - this outouts last digiof a number
 *@number: the varibale passed
 *Return: last digit value
 */
int print_last_digit(int number)
{
	int digit = number % 10;

	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0');

	return (digit);
}
