#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: pointer to listint_t struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *new;

	while (ptr)
	{
		new = ptr->next;
		free(ptr);
		ptr = new;
	}
	ptr = NULL;
}
