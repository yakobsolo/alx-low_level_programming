#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that return pointer to new string
 * @str: argument parameter
 *
 * Return: returns pointer to nw string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s = NULL;
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	s = (char *)malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (s);
}
