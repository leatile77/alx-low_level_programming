#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Function that retrieves vale at key
 * @ht: hash table to search in
 * @key: key to search for in ht
 *
 * Return: NULL or value at key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int ind;

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}

ind = key_index((const unsigned char *)key, ht->size);
if (ind >= ht->size)
{
return (NULL);
}

node = ht->array[ind];
while (node && strcmp(node->key, key) != 0)
{
node = node->next;
}

if (node == NULL)
{
return (NULL);
}

return (node->value);
}
