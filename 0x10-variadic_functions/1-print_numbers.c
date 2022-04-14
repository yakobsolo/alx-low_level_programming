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
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (separator != NULL && i < n - 1)
			{
				printf("s", separator);
			}
		}
	printf("\n");
	va_end(args);
}
