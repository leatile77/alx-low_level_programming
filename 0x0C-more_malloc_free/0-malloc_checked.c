#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory of size b
 * @b: Size of memory to allocate in bytes
 *
 * Return: void p
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);

if (p == NULL)
{
exit(98);
}
return (p);
}
