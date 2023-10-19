#include "main.h"

/**
 * _pow_recursion - Function that return x to the power y
 * @x: Base
 * @y: Exponent
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

else if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}
