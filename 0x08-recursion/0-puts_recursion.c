#include "main.h"
/**
 * _puts_recursion - function to print astring
 * @s: parametr argument
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
