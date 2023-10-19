#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 * @s: String to be converted
 *
 * Return: integer
 */

int _atoi(char *s)
{
int x, low, y;
unsigned int _long;

x = 0;
low = 1;
y = 0;
_long = 0;

while (s[x])
{
if (s[x] == 45)
{
low = low * -1;
}

while (s[x] >= 48 && s[x] <= 57)
{
y = 1;
_long = (_long * 10) + (s[x] - '0');
x++;
}

if (y == 1)
{
break;
}
x++;
}

_long = _long *low;

return (_long);
}
