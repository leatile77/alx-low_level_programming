#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees list
 * @head: List we must free
 *
 *
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
