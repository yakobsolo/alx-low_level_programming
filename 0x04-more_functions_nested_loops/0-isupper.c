#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks for upper case letter
 * @c: accepts an integer
 * Return: returns 1 if it is upper case
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}
