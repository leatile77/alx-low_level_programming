#include "main.h"
#include <stddef.h>

/**
 * print_binary - Function that converts a number to binary
 * @n: Number to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
int i;
unsigned long int bin;

for (i = 63; i >= 0; i--)
{
bin = n >> i;

if (bin == 1)
{
_putchar('1');
}

else if (bin)
{
_putchar('0');
}
}

if (!bin)
{
_putchar('0');
}
}
