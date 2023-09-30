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
int i, x, y;
x = 0;
y = 0;
for (i = 0; dest[i] != '\0'; i++)
{
x++;
}

for (i = 0; src[i] != '\0'; i++)
{
y++;
}

for (i = 0; i <= y; i++)
{
dest[x + i] = src[i];
}



return (dest);
}
