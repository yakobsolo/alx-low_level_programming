#include "main.h"
/**
 * print_last_digit - function entry
 * @j: parametric argument accepting an integer
 * Return: returns the value of the last digit
 */
int print_last_digit(int j)
{
	int result;

	result = j % 10;
	_putchar('result');
	return (result);
}
