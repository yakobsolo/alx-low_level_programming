#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer to an int
 * @size: size  of an array
 * @cmp: function pointer
 *
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
