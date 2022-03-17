#include "main.h"
/**
 * more_numbers - function to print more numbers
 *
 *
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int p;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				k = j / 10;
				_putchar(k + '0');
			}
			p = j % 10;
			_putchar(p + '0');
		}
		_putchar('\n');
	}
}
