#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
i++;
}

for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
