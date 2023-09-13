#include "main.h"

/**
 * print_last_digit - Prints the last digit of int n
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;
}
n = n % 10;
_putchar('n');
return (n);
}
