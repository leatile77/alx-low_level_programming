#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
  hash_table_t *hash;
  hash_node_t *node, *tmp;
  unsigned long int i;

  hash = ht;
  
  for (i = 0; i < ht->size; i++)
    {
      if (ht->array[i] != NULL)
	{
	  node = ht->array[i];
	  while (node != NULL)
	    {
	      tmp = node->next;
	      free(node->key);
	      free(node->value);
	      free(node);
	      node = tmp;
	    }
	}
    }
  free(hash->array);
  free(hash);
}
