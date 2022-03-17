#include "main.h"
/**
 * print_line - function to draw a straight line
 * @n: parameter n
 *
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
