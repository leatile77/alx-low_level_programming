#include "main.h"

/**
 * _strcpy - Function that copies a string
 * @dest: Destination string
 * @src: String to be copied to destination
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';

return (dest);
}
