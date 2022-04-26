#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - that deletes the node
 * @head: accepts the address of the pointer
 * @index: index of the node
 * Return: 1 if ti succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *ptr;
        listint_t *ptr2;
        unsigned int i;

        ptr2 = *head;
        i = 0;
        if (index == 0)
        {
                if (ptr2 == NULL)
                {
                        return (-1);
                }
                *head = *head->next;
               free(ptr2);
                return (1);
        }
        while (i < index)
        {
                if (ptr2 == NULL)
                {
                        return (-1);
                }
                ptr = ptr2;
                ptr2 = ptr2->next;
                i++;
        }
        ptr->next = ptr2->next;
        ptr2->next = NULL;
        return (1);
}
