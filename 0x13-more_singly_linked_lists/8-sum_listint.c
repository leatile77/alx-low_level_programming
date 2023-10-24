#include "lists.h"



/**
 * sum_listint - Function  that returns sum of data(n) in list
 * @head: List whose data we will add
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
int sum;
listint_t *tmp;
sum = 0;
tmp = head;

if (head == NULL)
{
return (0);
}

while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}

return (sum);
}
