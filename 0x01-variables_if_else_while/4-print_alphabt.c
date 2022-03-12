#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0 (success)
 */
int main(void)
{
	char c;

	for( c = 'a'; c <= 'z'; ++c)
	{
		if ( c == 'q')
		{
			continue;
		}
		else if ( c == 'e')
		{
			continue;
		}
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
