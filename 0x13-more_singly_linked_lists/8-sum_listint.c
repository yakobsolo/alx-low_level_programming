#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint -function that returns the sum of all the data(N)
 * @head: pointer to struct
 *
 * Return: the sum of all the data(n)
 */
int sum_listint(listint_t *head)
{
        unsigned int sum;
        listint_t *ptr;

        sum = 0;
        ptr = head;
        while (ptr)
        {
                sum = sum + ptr->n;
                ptr = ptr->next;
        }
        return (sum);
}
