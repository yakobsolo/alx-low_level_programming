#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all its parameters
 * @n: variable argument
 *
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	va_end(args);
	return (sum);
}
