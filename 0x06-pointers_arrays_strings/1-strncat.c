#include <string.h>
#include "main.h"
/**
 * _strncat - function to concatinate n elemenets
 * @dest: pointer to variable dest
 * @src: another argument
 * @n: input argument
 * Return: returns string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while(dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
