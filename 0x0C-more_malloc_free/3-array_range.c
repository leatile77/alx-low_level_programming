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
int j, x;

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

if (min <= max)
{
for (x = 0; x < j; x++)
{
arrNum[x] = min;
min++;
}
}


return (arrNum);
}
