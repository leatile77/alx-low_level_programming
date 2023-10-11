#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Function that prints a name
 * @name: Name to print
 * @f: pointer to funtion that prints name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
{
return;
}

if (f == NULL)
{
return;
}

f(name);
}
