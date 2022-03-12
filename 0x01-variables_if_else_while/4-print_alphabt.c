#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0 (success)
 */
int main(void)
{
	char c;
	char q = 'q';
	char e = 'e';

	for( c = 'a'; c <= 'z'; ++c)
	{
		if( c == q && c == e)
		{
			putchar(c);
		        continue;
		}
		else
		{
			putchar(c);
		}
	}
	return (0);
}
