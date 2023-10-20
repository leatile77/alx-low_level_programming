#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adss node to the start of the list
 * @head: double pointer to our list
 * @str: string to add to node
 *
 * Return: Address of added element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len;
len - 0;

while (str[len])
{
len++;
}

new = malloc(sizeof(list_t));

if (!new)
{
return (NULL);
}

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (head);
}
