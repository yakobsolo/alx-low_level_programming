#include <ctype.h>
#include "main.h"
/**
 * _islower - entry point
 * @c: is argument for user to enter
 * Return: retruns 1 if c is lower case
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

