#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on terminal
 * @n: length of diagonal line
 * Return: void
 */

void print_diagonal(int n)
{

if (n > 0)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

else
{
_putchar('\n');
}
}
