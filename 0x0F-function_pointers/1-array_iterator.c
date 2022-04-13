#include "function_pointers.h"
/**
 * array_iterator - function executer
 * @array: pointer to char
 * @size: size fo the array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
