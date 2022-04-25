#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - funtion that returns the nubmer of elments in a linked list
 * @h: formal parameter
 *
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	const listint_t *ptr = h;

	count = 0;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
