#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Function that return sumof all parameters
 * @n: Number of all parameters
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int i, sum;
va_list arg;
sum = 0;
if (n == 0)
{
return (0);
}

va_start(arg, n);

for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}

va_end(arg);

return (sum);
}
