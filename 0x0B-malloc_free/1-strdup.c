#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
char *p;
int i, n;
i = 1;

if (str == NULL)
{
return (NULL);
}

while (str[i])
{
i++;
}

p = malloc(i * sizeof(char) + 1);

if (p == NULL)
{
return (NULL);
}

for (n = 0; n < i; n++)
{
p[n] = str[n];
}

return (p);
}
