#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *curr;
int comma_check;
unsigned long int i;

comma_check = 0;

if (ht == NULL)
{
return;
}

printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (comma_check == 1)
{
printf(", ");
}

curr = ht->array[i];
while (curr != NULL)
{
printf("'%s': '%s'", curr->key, curr->value);
curr = curr->next;
if (curr != NULL)
{
printf(", ");
}
}
comma_check = 1;
}
}
printf("}\n");
}
