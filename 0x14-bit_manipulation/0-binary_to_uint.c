#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function that converts binary to unsigned int
 * @b: string containing bits to convert
 *
 * Return: 0 or converted uint
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result;
result = 0;

if (b == NULL)
{
return (0);
}

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}

result = 2 * result + (b[i] - '0');
}
return (result);
}
