#include "main.h"

/**
 * print_line - Prints a line
 * @n: number of _
 * Return: 0
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}

else
{
for (int i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

return (0);
}
