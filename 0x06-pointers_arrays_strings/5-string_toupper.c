#include "main.h"
/**
 * string_toupper - function changes the lowercaseletters
 * @s: argumet of pointer to an address
 *
 * Return: returns address
 */
char *string_toupper(char *s)
{
	int i;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			ch = s[i];
			ch = ch - 32;
			s[i] = ch;
		}
	}
	return (s);
}
