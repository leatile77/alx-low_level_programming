#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Return: none
 */

void jack_bauer(void)
{
for (int h = 0; h <= 23; h++)
{
for (int m = 0; m <= 59; m++)
{
while (h < 10)
{
while (m < 10)
{
_putchar(h + '0');
_putchar(':');
_putchar(m + '0');
}
}
_putchar(h);
_putchar(':');
_putchar(m);
_putchar('\n');
}
}
}
