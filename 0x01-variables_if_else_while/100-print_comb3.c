#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57 ; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == 49 && j == 48)
			{
				continue;
			}
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j && j == i)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
