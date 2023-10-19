#include "lists.h"

/**
 * list_len - Functio that counts number of list elements
 * @h: Pointer to the list whose elements will be counted
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
size_t p;
p = 0;

while (h)
{
p++;
h = h->next;
}
return (p);
}
