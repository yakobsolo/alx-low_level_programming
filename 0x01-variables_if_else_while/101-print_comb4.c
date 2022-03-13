#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
