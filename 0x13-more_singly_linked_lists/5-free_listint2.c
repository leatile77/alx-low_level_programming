#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees list
 * @head: List to free
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{

listint_t *temp;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
