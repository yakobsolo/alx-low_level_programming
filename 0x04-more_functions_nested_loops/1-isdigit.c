#include <ctype.h>
#include "main.h"
/**
 * _isdigit - function to check if it is an integer
 * @c: parameter value
 * Return: returns 1 if it is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}
