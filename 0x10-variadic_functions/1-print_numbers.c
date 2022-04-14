#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: recieves a separotor
 * @n: number of integers passed to the funcion
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d%s ", x, separator);
		}
	printf("\n");
}
