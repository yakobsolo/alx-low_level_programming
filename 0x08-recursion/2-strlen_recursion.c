#include "main.h"
/**
 * _strlen_recursion - funciton returns the length of a string
 * @s: pointer to a string
 *
 * Return: returns length of a string
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 1;
	if (*s == '\0')
	{
		return (0);
	}
	if (*s)
	{
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
