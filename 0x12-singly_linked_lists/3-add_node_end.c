#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds node at end of list
 * @head: pointer to list
 * @str: string to put in new node
 *
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
unsigned int len;

len = 0;

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
new->next = NULL;

if (*head == NULL)
{
*head = new;
}

return (new);
}
