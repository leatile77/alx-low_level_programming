#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h, *n;
h = haystack;
n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}

if (*n == '\0')
{
return (h);
}
}
return ('\0');
}
