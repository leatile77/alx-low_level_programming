#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: none
 */

void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
