#include "main.h"

/**
 * times_table - prints 9 ties table
 *
 * Return: none/void
 */

void times_table(void)
{
int num, multi, ans;

for (num = 0; num <=9; num++)
{
_putchar('0');
for (multi = 1; multi <= 9; multi++)
{
_putchar(',');
_putchar(' ');

ans = num * multi;

if(ans <= 9)
{
_putchar(' ');
}
else
{
_putchar((ans / 10) + '0');
}
_putchar((ans % 10) + '0');
}
_putchar('\n');
}
}
