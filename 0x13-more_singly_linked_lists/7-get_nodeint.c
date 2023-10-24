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
listint_t *n_node;
n_node = head;

if (head == NULL)
{
return (NULL);
}

if (index == 0)
{
return (head);
}

else
{
while (index != 0)
{
n_node = n_node->next;
index--;
}
if (!n_node)
{
return (NULL);
}
}
return (n_node);
}
