#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all th eelements of listint_t
 * @h: formal parameter
 *
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	const listint_t *ptr = h;

	if (ptr == NULL)
	{
		exit(1);
	}
	count = 0;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
