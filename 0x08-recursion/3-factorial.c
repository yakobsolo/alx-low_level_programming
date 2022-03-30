#include "main.h"
/**
 * factorial - function to calculate the vactorial
 * @n: parametr argument
 *
 * Return: returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
