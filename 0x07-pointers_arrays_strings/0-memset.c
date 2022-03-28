#include "main.h"
/**
 * _memset - funciton to fill memory with a constant byte
 * @s: point to variable
 * @b: argument parameter
 * @n: arument parameter
 *
 * Return: returns the pointer to the memory are s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	i = 0;
	while (i < n)
	{
		if (n < j - 1)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}	
