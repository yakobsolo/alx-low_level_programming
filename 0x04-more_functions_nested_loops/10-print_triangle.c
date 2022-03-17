#include "main.h"
/**
 * print_triangle - function to print a triangle
 * @size: parameter size
 *
 */
void print_triangle(int size)
{

	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		if (size >= 1)
		{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				for (k = size - 1 - i; k >= 1; k--)
				{
					_putchar(' ');
				}
			}
			_putchar('#');
		}
		if ((i != size - 1) && (k != -1))
		{
		_putchar('\n');
		}
		}
	}
	_putchar('\n');
}
