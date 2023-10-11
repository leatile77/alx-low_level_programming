#include "function_pointers.h"

/**
 * array_iterator - Function that exe another func as
 * parameter on array elements
 * @array: array whose elements used to exe action
 * @size: size of array
 * @action: function to execute on each array element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (array == NULL || action == NULL)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
