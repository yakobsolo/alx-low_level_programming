#include "function_pointers.h"
/**
 * print_name - function that prits a name
 * @name: pointer to char
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
