#include "main.h"

/**
 * string_toupper - Converts lowercase to uppercae letters
 * @c: string to convert
 *
 * Return: n
 */

char *string_toupper(char *c)
{
int x;
x = 0;
if (c[x] != '\0')
{
if (c[x] >= 'a' && c[x] <= 'z')
{
c[x] = c[x] - 32;
x++;
}
}

return (c);
}
