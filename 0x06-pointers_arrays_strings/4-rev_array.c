#include "main.h"

/**
 * reverse_array - Reverses contents of an array
 * @a: array reversed
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n; i++) 
{
j = a[i];
a[i] = a[n];
a[n] = j;
}

}
