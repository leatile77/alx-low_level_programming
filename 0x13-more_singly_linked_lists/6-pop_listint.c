#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - Function that deletes head node
 * @head: list to delete from
 *
 * Return: n
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;


if (!(*head) || !head)
{
return (0);
}

else
{
n = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
}
return (n);
}
