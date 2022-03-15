#include <main.h>
/**
 * _isalpha - function than checks for alphabetic character
 * @c: accepts an integer value
 * Return: returns 1 if is letter lowercae or uppercase
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

