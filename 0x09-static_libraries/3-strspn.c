#include "main.h"

/**
 * _strspn - Function that gets the length of prefix substring
 * @s: String being checked
 * @accept: Char to check
 *
 * Return: num
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, num;
num = 0;

while (*s)
{
for (i = 0; accept[i]; i++)
{

if (*s == accept[i])
{
num++;
break;
}
else if (accept[i++] == '\0')
return (num);

}
s++;
}
return (num);
}
