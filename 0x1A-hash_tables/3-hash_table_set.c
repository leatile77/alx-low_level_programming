#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Function that adds new element to hash table
 * @ht: hashtable to add to
 * @key: key for element
 * @value: value held by key
 *
 * Return: 0 fail, 1 success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int ind, x;
hash_node_t *new;
int i;
char *value2;


if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}

value2 = strdup(value);
ind = key_index((const unsigned char *)key, ht->size);

for (x = ind; ht->array[x]; x++)
{
if (strcmp(ht->array[x]->key, key) == 0)
{
ht->array[x]->value = value2;
return (1);
}
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
return (0);
}

new->value = value2;
new->key = strdup(key);

for (i = ind; ht->array[i]; i++)
{
if (ht->array[i]->key == NULL)
{
ht->array[i] = new;
return (1);
}
}

ht->array[i] = new;
return (1);

}
