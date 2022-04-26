#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer
 * @idx: index of the node starting from 0
 * @n: value data of the node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *ptr;
        listint_t *new;
        unsigned int i;

        ptr = *head;
        new = malloc(sizeof(listint_t));
        if (new == NULL)
        {
                return (NULL);
        }
        i = 0;
        while (i < idx - 1)
        {
                if (ptr == NULL)
                {
                        return (NULL);
                }
                ptr = ptr->next;
                i++;
        }
        new->next = ptr->next;
        new->n = n;
        ptr->next = new;
        return (new);
}
