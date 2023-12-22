#include "hash_tables.h"

/**
 * key_index - Function that gives index of a key
 * @key: key to retrieve index of
 * @size: Size of the hashtable
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
