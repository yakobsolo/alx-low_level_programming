#include <stddef.h>
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	const char *binary;
	unsigned int sum;
	unsigned int i;

	binary = b;
	if (binary == NULL)
	{
		return (0);
	}
	for (sum = 0, i = 0; binary[i] != '\0'; i++)
	{
		if (binary[i] == '1')
			sum = (sum << 1) | 1;
		else if (binary[i] == '0')
			sum <<= 1;
		else if (binary[i] != '0' && binary[i] != '1')
			return (0);
	}

	return (sum);
}
