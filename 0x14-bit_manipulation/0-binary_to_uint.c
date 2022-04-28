#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * binary_to_uint - function that convers a binary n ymber to an int
 * @b: pointer to binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	const char *binary;
	unsigned int i;
	unsigned int sum;
	double va;

	binary = b;
	sum = 0;
	while (binary)
	{
		i++;
	}
	i--;
	while (binary[i])
	{
		va = binary[i];
		sum = sum + binary[i] * pow(2,va);
		i--;
	}
	return (sum);
}
