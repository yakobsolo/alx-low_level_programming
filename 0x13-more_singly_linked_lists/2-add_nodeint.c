#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function that add node to the beginning
 * @head: pointer to pointer
 * @n: the value of the n
 *
 * Return: returns the address for the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = ptr;
	*head = new;
	return (new);
}
