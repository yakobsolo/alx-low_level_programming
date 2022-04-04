#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array of charecters
 * @size: size of an array
 * @c: character for input
 *
 * Return: null if size is zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = NULL;

	if (size != 0)
	{
		s = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (s);
}
