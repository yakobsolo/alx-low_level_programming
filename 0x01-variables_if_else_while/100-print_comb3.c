#include <stdio.h>
/**
 * main - entry point
 * Retrun: returns 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for(i = 48; i <= 57 ; i++)
	{
		for(j = 48; j <= 57; j++)
		{
			if ((i == 49 && j == 48) || (i == 50 && j == 49) || (i == 51 && j == 50) || (i == 52 && j == 51) || (i == 53 && j == 52) || (i == 54 && j == 53) || (i == 55 && j == 54) || (i == 56 && j ==55) || (i == 57 && j == 56) )
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
