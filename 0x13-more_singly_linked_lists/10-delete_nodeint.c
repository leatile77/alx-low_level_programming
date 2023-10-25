#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function to delete node at index n
 * @head: Our list
 * @index: index of node to delete
 *
 * Return: -1 (fail) or 1 (success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *curr, *prev;
curr = *head;
prev = *head;

if (*head == NULL)
{
return (-1);
}

else
{
if (index == 0)
{
*head = curr->next;
free(curr);
curr = NULL;
}

else
{
while (index != 0)
{
prev = curr;
curr = curr->next;
index--;
}
prev->next = curr->next;
free(curr);
curr = NULL;
}
}
return (1);
}
