#include "main.h"
/**
 * _memset - function that fill memorry with a constant byte
 * @s: pointer to an address
 * @b: argument parameter
 * @n: argumetn paramter
 * Return: returns pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	i = 0;
	while (i < n)
	{
		if (n <= j - 1)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}
