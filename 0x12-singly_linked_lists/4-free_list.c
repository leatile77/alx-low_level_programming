#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function to free the list
 * @head: List function must free
 *
 * Return: void
 */

void free_list(list_t *head)
{
list_t *tempo;

while (head)
{
tempo = head->next;
free(head->str);
free(head);
head = tempo;
}
}
