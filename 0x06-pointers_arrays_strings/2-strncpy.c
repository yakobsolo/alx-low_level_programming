#include "main.h"
/**
 * _strncpy - function to copt n elements of a string
 * @dest: argument pointer
 * @src: argument poointer
 * @n: argument n
 * Return: returns compied destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	if (k == j)
	{
		for (j = j; dest[j] != i; j++)
		{
			dest[j] = '\0';
		}
	}
	return (dest);
}
