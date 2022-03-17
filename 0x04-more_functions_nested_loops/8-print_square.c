#include "main.h"
/**
 * print-square - function to print a square
 * @size: parameter of the argument
 *
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		if (size >= 1)
		{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if ((i != size - 1) && (j != size - 1))
		{
		_putchar('\n');
		}
		}
	}
	_putchar('\n');
}
