#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to struct
 * @index: index of the node
 *
 * Return: the nth node of listint
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int i;
        listint_t *ptr;

        ptr = head;
        if (ptr == NULL)
        {
                return (NULL);
        }
        i = 0;
        while (i < index)
        {
                if (ptr == NULL)
                {
                        return (NULL);
                }
                ptr = ptr->next;
                i++;
        }
        return (ptr);
}
