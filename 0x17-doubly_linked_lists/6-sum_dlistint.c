#include "lists.h"

/**
 * sum_dlistint - Function that adds all the n's in a list
 * @head: head of list to add n's from
 *
 * Return: the sum or 0 on failure
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
int sum;

sum = 0;

if (head == NULL)
{
return (0);
}

tmp = head;

while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
