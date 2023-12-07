#include "lists.h"

/**
 * add_dnodeint - Function that adds new node at beginning of list
 * @head: head of list to add start node to
 * @n: data to be stored in added node
 *
 * Return: adress to new element, NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->prev = NULL;
tmp = *head;

if (tmp != NULL)
{
while (tmp->prev != NULL)
{
tmp = tmp->prev;
}
}
new->next = tmp;

if (tmp != NULL)
{
tmp->prev = new;
}

*head = new;

return (new);
}
