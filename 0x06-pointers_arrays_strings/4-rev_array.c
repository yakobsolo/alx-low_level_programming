#include "main.h"
/**
 * reverse_array - function to reverse the content of array of a sring
 * @a: pointer to array
 * @n: argument requiring input n
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;
	int *start;
	int *end;

	start = a;
	end = a;
	for (i = 0; i < n; i++)
	{
		end++;
	}
	for (j = 0; j <= n / 2; j++)
	{
		end--;
		temp = *start;
		*start = *end;
		*end = temp;
		end--;
		start++;
	}
}
