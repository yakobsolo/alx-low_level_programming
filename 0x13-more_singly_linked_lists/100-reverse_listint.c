#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverse a listint_t
 * @head: pointer to pointer
 *
 * Return: a ponter to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
        listint_t *ptr;
        listint_t *temp;

        ptr = NULL;
        while (*head != NULL)
        {
                temp = head->next;
                *head->next = ptr;
                ptr = *head;
                *head = temp;
        }
        *head = temp;
        return (*head);
}
