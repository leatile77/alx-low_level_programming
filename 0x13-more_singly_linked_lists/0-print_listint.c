#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints a list of integers
 * @h: list to print from
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{

size_t num;
num = 0;

while (h)
{

printf("%d\n", h->n);
h = h->next;

num++;
}
return (num);
}
