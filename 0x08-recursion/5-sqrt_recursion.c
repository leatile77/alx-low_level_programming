#include "main.h"

/**
 * _sqrt_recursion - Function the gets the square root
 * @n: number wich we are getting the square root of
 *
 * Return: Square root of n
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
return _sqrt(n, 1);
}


int _sqrt(int n, int i)
{
int sqrt;
sqrt = i * i;

if (sqrt > n)
{
return (-1);
}

if (sqrt == n)
{
return (i);
}

return (_sqrt(n, i + 1));
}
