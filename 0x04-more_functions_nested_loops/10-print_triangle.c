#include "main.h"

/**
 * print_triangle - Prints a triangle using '#' char
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
if (size > 0)
{
int i, k, j;
for (i = 1; i <= size; i++)
{
for (k = 1; k <= size - i; k++)
{
_putchar(' ');
}

for (j = 1; j <= i; j++)
{
_putchar('#');
}

_putchar('\n');

}
}

else
{
_putchar('\n');
}

}
