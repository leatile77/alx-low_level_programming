#include "main.h"

/**
 * factorial - Function that calculates  factorial of n
 * @n: Number used to get factorial
 *
 * Eeturn: -1 or 1 or more
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n <= 1)
{
return (1);
}

return (n * factorial(n - 1));
}
