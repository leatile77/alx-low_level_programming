#include "lists.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
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
