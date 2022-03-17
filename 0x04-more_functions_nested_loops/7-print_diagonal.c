#include "main.h"
/**
 * print_diagonal - function to pringt diagonal line
 * @n: parameter n
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n >= 1)
		{
		_putchar('\\');
		if (i != (n - 1))
		{
		_putchar('\n');
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		}
		}
	}
	_putchar('\n');
}

