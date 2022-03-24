#include "main.h"
/**
 * _strcat - funciton to concatinate strings
 * @dest: pointer to variable
 * @src: pointer to variable src
 * Return: returns a resulting stirng dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
