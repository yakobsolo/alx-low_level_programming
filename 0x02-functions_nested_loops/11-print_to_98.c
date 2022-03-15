#include "main.h"
/**
 * print_to_98 - function entry poiont
 * @n: accepts an integer
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n + '0');
	}
	for (n = 561; n >= 98; n--)
	{
		_putchar('0' + n);
	}
	for (n = -422; n <= 98; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
