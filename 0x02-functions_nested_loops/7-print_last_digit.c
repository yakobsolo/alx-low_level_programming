#include "main.h"
/**
 * print_last_digit - function entry
 * @j: parametric argument accepting an integer
 * Return: returns the value of the last digit
 */
int print_last_digit(int j)
{
	int k;

	k = j % 10;
	
	if (j > 0)
	{
		_putchar(k + '0');
	}
	else if (j < 0)
	{
		_putchar('0' + k);
	}
	else
	{
		_putchar('0' + k);
	}
	return (k);
}
