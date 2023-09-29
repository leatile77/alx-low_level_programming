#include "main.h"
#include <string.h>

/**
 * _strncat - Function that concatenates n chars from src into dest
 * @dest: destination char pointer
 * @src: source char pointer
 * @n: number of chars to be concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, x;
x = strlen(dest);

for (i = 0; i < n && *src != '\0'; i++)
{
dest[x + i] = *src;
src++;
}

dest[x + i] = '\0';

return (dest);
}
