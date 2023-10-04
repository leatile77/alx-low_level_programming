#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns 2D array of integers
 * @width: no. of columns of array
 * @height: no. of rows of array
 *
 * Return: NULL or array
 */

int **alloc_grid(int width, int height)
{
int i, j, n, m, **arr;

if (width <= 0 || height <= 0)
{
return (NULL);
}

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
{
free(arr);
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);

if (arr[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(arr[j]);
}

free(arr);
return (NULL);
}
}

for (n = 0; n < height; n++)
{
for (m = 0; m < width; m++)
{
arr[n][m] = 0;
}
}

return (arr);
}
