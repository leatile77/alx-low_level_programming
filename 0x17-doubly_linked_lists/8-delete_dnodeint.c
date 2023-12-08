#include "lists.h"



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int pos;
dlistint_t *prv, *nxt, *tmp, *tmp2;

pos = 1;


if (*head == NULL)
{
return (-1);
}

tmp = *head;
if (index == 0)
{
tmp = tmp->next;
tmp->prev = NULL;
*head = tmp;
return (1);
}

if (index == pos)
{
tmp2 = tmp->next->next;
tmp2->prev = tmp;
tmp->next = tmp2;
*head = tmp;
return (1);
}

else
{
prv = *head;
nxt = prv->next->next;

while (pos != index)
{
prv = prv->next;
nxt = nxt->next;
pos++;
}

nxt->prev = prv;
prv->next = nxt;
}

return (1);
}
