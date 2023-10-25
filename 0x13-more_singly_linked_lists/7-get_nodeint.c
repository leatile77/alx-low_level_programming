#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that return nth node
 * @head: List to retireve nth node from
 * @index: Position of node to return
 *
 * Return: NULL or nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *n_node;
n_node = head;

if (head == NULL)
{
return (NULL);
}


else
{
while (n_node && i < index)
{
n_node = n_node->next;
i++;
}
}

return (n_node);
}
