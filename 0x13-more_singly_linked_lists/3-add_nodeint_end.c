#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function to add node at the end of list
 * @head: pointer to our list
 * @n: Integer to place in new node
 *
 * Return: Address to new element/node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;

temp = *head;

new = malloc(sizeof(listint_t));

if (!new)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}

else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (new);
}
