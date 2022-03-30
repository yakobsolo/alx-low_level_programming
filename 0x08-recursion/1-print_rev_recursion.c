#include "main.h"
/**
 * _print_rev_recursion - function to prints reverse of a string
 * @s: pointer to a string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_prints_rev_recursion(s++);
		_putchar(*s);
	}
}
