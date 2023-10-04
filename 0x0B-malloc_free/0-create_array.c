#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array
 * @size: size of array
 * @c: Specific char to initialize array
 *
 * Return: NULL or ptr
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
{
return (NULL);
}

ptr = (char *)malloc(size * sizeof(char));

if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);



}
