#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, k, j, m, x;
i = 0;
k = 0;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

while (s1[i])
{
i++;
}

while (s2[k])
{
k++;
}

if (n >= k)
{
j = i + k;
}

else
{
j = i + n;
}

p = malloc(sizeof(char *) * j);


if (p == NULL)
{
return (NULL);
}

x = 0;
for (m = 0; m < j; m++)
{
if (m <= i)
{
p[m] = s1[m];
}

if (m >= i)
{

p[m] = s2[x];
x++;
}
}

p[j] = '\0';

return (p);
}
