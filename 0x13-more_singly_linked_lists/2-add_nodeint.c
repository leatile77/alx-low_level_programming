#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - adds a new node at the bginning of list
 * @head: double pointer to our list
 * @n: Int to add to the node
 *
 * Return: Address of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new;

new = malloc(sizeof(listint_t));

if (!new)
{
return (NULL);
}

new->n = n;
new->next = *head;
*head = new;

return (new);

}
