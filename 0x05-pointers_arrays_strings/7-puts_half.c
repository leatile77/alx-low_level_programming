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

if (j % 2 == 0)
{
for (n = j / 2; n <= j; n++)
{
_putchar(str[n]);
}
}

else
{
for (n = (j - 1) / 2; n <= j; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
