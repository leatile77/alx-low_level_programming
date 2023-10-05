#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of int
 * @min: first value
 * @max: last value
 *
 * Return: NULL or arrNum
 */

int *array_range(int min, int max)
{
int *arrNum;
int i, j, x;

if (min > max)
{
return (NULL);
}

j = (max - min) + 1;
arrNum = malloc(sizeof(int) * j);

if (arrNum == NULL)
{
return (NULL);
}

for (x = 0; x < j; x++)
{
for (i = min; i <= max; i++)
{
arrNum[x] = i;
}
}

return (arrNum);
}
