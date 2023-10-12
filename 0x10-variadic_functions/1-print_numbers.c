#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers
 * @seperator: String printed between numbers
 * @n: Number of int passed to func
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int num;
num = 0;

va_start(arg, n);

for (i = 0; i < n; i++)
{
num = va_arg(arg, int);
printf("%d", num);

if ((separator != NULL) && (i < n - 1))
{
printf("%s", separator);
}
}

printf("\n");
va_end(arg);
}
