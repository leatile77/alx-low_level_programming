#include "main.h"

/**
 * puts2 - Printsnevery other character of a string
 * @str: String to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
int i, j;
j = 0;

while (str[j] != '\0')
{
j++;
}

for (i = 0; i < j; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
