#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: first string to be added
 * @s2: second string to be added
 *
 * Return: conct or NULL
 */

char *str_concat(char *s1, char *s2)
{
char *conct;
int i, n, x, k;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

i = 0;
while (s1[i])
{
i++;
}

n = 0;
while (s2[n])
{
n++;
}

x = n + i;

conct = malloc((sizeof(char) * x) +1);

if (conct == NULL)
{
return (NULL);
}

n = 0;
for (k = 0; k < x; k++)
{

if (k <= i)
{
conct[k] = s1[k];
}

if (k >= i)
{
conct[k] = s2[n];
n++;
}
}
conct[k] = '\0';
return (conct);
}
