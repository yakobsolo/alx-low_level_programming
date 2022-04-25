#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_lodeint_end - add a new node at the end
 * @head: pointer to pointer
 * @n: value of n
 *
 * Return: returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	return (new);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
