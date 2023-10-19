#include "main.h"

/**
 * _isdigit - checks digit
 * @c: test subject
 * Return: 0 (if @c is not a digit) or 1 (if @c is a digit)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

else
{
return (0);
}
}
