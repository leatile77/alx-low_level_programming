#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Destination of copy
 * @src: source of ncopy
 * @n: Number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
