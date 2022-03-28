#include "main.h"
/**
<<<<<<< HEAD
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
=======
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
>>>>>>> f968095dfe48b629ace9ad00fbc59ac00945236e

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	i = 0;
	while (i < n)
	{
<<<<<<< HEAD
		if (n < j - 1)
=======
		if (n <= j - 1)
>>>>>>> f968095dfe48b629ace9ad00fbc59ac00945236e
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
<<<<<<< HEAD
}	
=======
}
>>>>>>> f968095dfe48b629ace9ad00fbc59ac00945236e
