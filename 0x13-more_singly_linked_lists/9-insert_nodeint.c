#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - Function to add node at given index
 * @head: double pointer to list
 * @idx: Index to add node
 * @n: data to add to node
 *
 * Return: Address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new, *tmp, *tmp2;

tmp = *head;
tmp2 = *head;

if (head == NULL)
{
return (NULL);
}


new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;

if (*head == NULL)
{
*head = new;
return (new);
}

if (idx != 0)
{
for (i = 0; i < idx - 1 && tmp != NULL ; i++)
{
tmp = tmp->next;
}
}

if (idx == 0)
{
new->next = tmp;
}

if (tmp == NULL)
{
return (NULL);
}

tmp2 = tmp->next;
tmp->next = new;
new->next = tmp2;


return (new);

}
