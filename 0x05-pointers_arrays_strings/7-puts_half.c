#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String printed in half
 *
 * Return: void
 */

void puts_half(char *str)
{
int j, n;
j = 0;
while (str[j] != '\0')
{
j++;
}

if (j % 2 == 1)
{
n = (j - 1) / 2;
}

else
{
n = j / 2;
}
for (; n < j; n++)
{
_putchar(str[n]);
}

_putchar('\n');
}
