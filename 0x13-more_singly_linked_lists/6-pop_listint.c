#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - funtion tha t deletes the head node
 * @head: pointer to pointer
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
        listint_t *new;
        listint_t *ptr;
        int i;

        new = *head;
        ptr = *head;
        i = ptr->n;
        if (ptr == NULL)
        {
                return (0);
        }
        new = ptr->next;
        ptr->next = NULL;
        ptr = NULL;
        *head = new;
        return (i);
}
