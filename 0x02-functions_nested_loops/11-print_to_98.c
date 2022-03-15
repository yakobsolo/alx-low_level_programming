#include "main.h"
/**
 *
 *
 *
 *
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n + '0');
	}
	for (n = 561749; n >= 98; n--;)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
