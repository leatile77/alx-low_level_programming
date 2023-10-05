#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: bytes each element will take
 *
 * Return: NULL or ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i, j;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

j = nmemb * size;
ptr = malloc(j);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < j; i++)
{
ptr[i] = 0;
}

return (ptr);
}
