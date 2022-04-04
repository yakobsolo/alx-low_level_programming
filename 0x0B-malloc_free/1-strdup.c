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

	s = (char *)malloc(sizeof(char) * strlen(str));
	if (str == NULL)
	{
		return (NULL);
	}
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
	}
	return (s);
}
