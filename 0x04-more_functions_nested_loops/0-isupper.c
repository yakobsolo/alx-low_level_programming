#include "main.h"
/**
 * _isupper - function that return 1 if is is upper case
 * @c: parameter c
 * Return: returns 1 if it is upper case
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
