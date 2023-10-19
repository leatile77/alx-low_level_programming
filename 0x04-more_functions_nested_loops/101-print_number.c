#include "main.h"

/**
 * print_number - Prints numbers usinf _putchar
 * @n: Number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
if (n >= 10 && n < 100)
{
_putchar(n / 10 + '0');
_putchar(n % 10);
}

else if (n >= 100 && n < 1000)
{
_putchar(n / 100 + '0');
_putchar(n / 10 + '0');
_putchar(n % 10);
}

else if (n >= 1000 && n < 10000)
{
_putchar(n / 1000 + '0');
_putchar(n / 100 + '0');
_putchar(n / 10 + '0');
_putchar(n % 10);
}

else if (n > 0 && n < 10)
{
_putchar(n);
}

else
{
_putchar('-' + n / 10 + '0');
}
_putchar('\n');
}
