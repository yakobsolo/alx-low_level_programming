#include "main.h"
/**
 * _islower - entry point
 * Return: retruns 1 if c is lower case
 */
int _islower(int c)
{
	int i;

	for (c = 97; c <= 122; c++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
