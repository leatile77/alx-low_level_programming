#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts node at index
 * @h: list to add node in
 * @idx: index to insert node
 * @n: data to insert at position
 *
 * Return: address of new node, or NULL on failure
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *prv, *nxt, *new;
unsigned int pos;

pos = 1;

if (*h == NULL)
{
return (NULL);
}

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

prv = *h;
nxt = *h;
nxt = nxt->next;
while (pos != idx)
{
prv = prv->next;
nxt = nxt->next;
pos++;
}
new->n = n;
new->prev = prv;
new->next = nxt;

prv->next = new;
nxt->prev = new;

return (new);
}
