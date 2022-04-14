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
	unsigned int i;
	va_list args;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
		{
			printf("(nil)");
			}
			else
			{
				printf("%s", x);
			}
			if (separator != NULL && i < n - 1)
			{
				printf("%s ", separator);
			}
	}
	printf("\n");
	va_end(args);
}
