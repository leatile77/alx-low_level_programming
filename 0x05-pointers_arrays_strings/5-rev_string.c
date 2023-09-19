#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
int i, length;
char rev;

while (s[i++])
{
length++;
}

for (i  = length - 1; i >= length; i--)
{
rev = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = rev;
}
}
