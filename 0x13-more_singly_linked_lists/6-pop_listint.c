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
listint_t *tmp;

if (*head == NULL)
{
return (0);
}

else
{
tmp = *head;
(*head) = (*head)->next;
free(tmp);
tmp = NULL;
}
return ((*head)->n);
}
