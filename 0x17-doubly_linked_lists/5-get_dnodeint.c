#include "lists.h"

/**
 * get_dnodeint_at_index - Function to retrieve a node at unique position
 * @head: head of list to search for node in
 * @index: position of node to retrieve
 *
 * Return: adress to node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node;
unsigned int len;

len = 0;

if (head == NULL)
{
return (NULL);
}

node = head;

while (node)
{
if (index == len)
{
return (node);
}
node = node->next;
len++;
}
return (NULL);
}
