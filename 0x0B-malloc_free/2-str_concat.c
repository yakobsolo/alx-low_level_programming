#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that ocncatenates two srings
 * @s1: parametr
 * @s2: another parametr
 *
 * Return: returns pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int n1, n2, i, j;
	char *newstr = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n1 = 0; s1[n1] != '\0'; n1++)
	{
	}
	for (n2 = 0; s2[n2] != '\0'; n2++)
	{
	}
	newstr = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		newstr[i] = s2[j];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
