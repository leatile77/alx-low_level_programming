#include "main.h"

/**
 * _strncpy - Copies n chars from src to dest
 * @dest: Destination of copied string
 * @src: String copied
 * @n: Number of chars to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
