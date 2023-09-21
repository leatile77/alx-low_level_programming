#include "main.h"

/**
 * _strcat - Function that concatenates src into dest
 * @dest: destination char pointer
 * @src: source char pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
;
}

j = -1;
do
{
j++;
dest[i] = src[j];
i++;
}
while (src[j] != '\0');

dest[i++] = '\0';

return (dest);
}
