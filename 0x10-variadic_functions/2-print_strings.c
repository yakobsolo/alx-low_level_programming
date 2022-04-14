#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  function that print anything
 * @separtor: recieves separator
 * @n: number of string passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nil");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(args);
}
