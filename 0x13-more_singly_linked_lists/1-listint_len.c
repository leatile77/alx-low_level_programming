#include "lists.h"


/**
 * listint_len - Function that returns number of elements in list
 * @h: Our linked list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{

size_t i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
