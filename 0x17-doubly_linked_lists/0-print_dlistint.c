#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint_t - Function that prints int data in a list
 * @h: list to print data from
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  int num;
  num = 0;
  if (h == NULL)
    {
      return (num);
    }

  while (h->prev != NULL)
    {
      h = h->prev;
    }
      
  while (h != NULL)
    {
      printf("%d\n", h->n);
      h = h->next;
      num++;
    }
  return (num);
}
