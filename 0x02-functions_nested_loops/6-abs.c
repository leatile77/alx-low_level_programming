#include "main.h"

/**
 * _abs - finds the absolute value of int
 *
 * Return: positive int
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}

else
{
n *= -1;
return (n);
}
}
