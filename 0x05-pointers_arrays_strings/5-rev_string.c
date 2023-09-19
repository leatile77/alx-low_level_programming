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
length = 0;

for (i = 0; s[i] != '\0'; i++)
{
length++;
}

for (i  = 0; i < length / 2; i++)
{
char rev;

rev = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = rev;
}
}
