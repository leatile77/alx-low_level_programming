#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: string to get length from
 *
 *  Return: length of string
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}

s++;


return (_strlen_recursion(s) + 1);
}
