#include <stdio.h>
#include "main.h"
/**
 * print_sign - entry function
 * @n: accept input integer n
 * Return: returns 0 -1 and 1 success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
