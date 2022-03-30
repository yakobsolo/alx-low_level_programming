#include "main.h"
/**
 * _pow_recursion - function to calculate the power of
 * @x: parameter
 * @y: argument
 *
 * Return: returns the values of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int count;
	int res;

	count = 0;
	res = 0;
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		y--;
		count = count + _pow_recursion(x,y);
	}
	count--;
	res = x * x;
	return (res);
}
