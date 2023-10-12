#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: data type of choice
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
int i;
char *s, *b;
va_list arg;

b = " ";
i = 0;

va_start(arg, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
	printf("%s%c", b, va_arg(arg, int));
	break;

case 'i':
        printf("%s%d", b, va_arg(arg, int));
        break;

case 'f':
        printf("%s%f", b, va_arg(arg, double));
        break;

case 's':
	s = va_arg(arg, char *);
	if (!s)
	{
	s = "(nil)";
	}
        printf("%s%s", b, s);
        break;

default:
	i++;
	continue;
}
b = ",";
i++;
}

}
va_end(arg);
printf("\n");
}
