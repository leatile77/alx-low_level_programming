#include "lists.h"

/**
 * reverse_listint - Function that reverses the list
 * @head: list to reverse
 *
 * Return: list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *next, *prev;
next = NULL;
prev = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;
return (*head);

}
