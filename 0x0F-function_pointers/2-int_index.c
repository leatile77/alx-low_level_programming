#include "function_pointers.h"

/**
 * int_index - Function that searches for int and return its index
 * @array: array to search for match in
 * @size: size of array
 * @cmp: Pointer to function that compares values
 *
 * Return: i or -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{

int i;
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return(-1);
}
