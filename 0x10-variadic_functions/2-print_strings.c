#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints a string
 * @separator: String to be printed between strings
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list arg;

va_start(arg, n);

for (i = 0; i < n; i++)
{
s = va_arg(arg, char *);

if (s == NULL)
{
printf("(nil)");
}

else
{
printf("%s", s);
}

if ((separator != NULL) && (i < n - 1))
{
printf("%s", separator);
}
}

va_end(arg);

printf("\n");
}
