#include "lists.h"




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
