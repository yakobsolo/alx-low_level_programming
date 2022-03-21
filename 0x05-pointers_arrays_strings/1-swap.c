#include "main.h"
/**
 * swap_int - function to swap
 * @a: pointer argument
 * @b: anoter pointer argument
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
