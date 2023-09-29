#include "main.h"

/**
 * _strchr - Function that lo0cates a character in a string
 * @s: String to locate char in
 * @c: Target character
 *
 * Return: c or NULL
 */

char *_strchr(char *s, char c)
{
int i;
char *ptr;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
ptr = &s[i];
return (ptr);
}
}
return ('\0');

}
