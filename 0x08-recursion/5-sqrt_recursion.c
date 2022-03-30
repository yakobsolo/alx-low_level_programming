#include "main.h"
/**
 * sqr - function aditional
 * @n: argument
 * @j: parameter
 *
 * Return: returns the natuaral square root
 */
int sqr(int n, int j)
{
	if (j < n)
	{
		if (j * j == n)
		{
			return (j);
		}
		return (sqr(n, j + 1));
	}
	return (-1);
}
/**
 * _sqrt_recursion - funciont to return sqrt root
 * @n: parametr
 * Return: returns the sqrt root
 */
int _sqrt_recursion(int n)
{
	int i;

	i = sqr(n, 0);
	return (i);
}
