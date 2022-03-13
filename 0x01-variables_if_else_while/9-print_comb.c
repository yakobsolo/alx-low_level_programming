#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 (success)
 */
int main(void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
