#include <stdio.h>
/**
 * main - Entry point
 * Return: retrun 0 (success)
 */
int main(void)
{
	int c;
	
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
