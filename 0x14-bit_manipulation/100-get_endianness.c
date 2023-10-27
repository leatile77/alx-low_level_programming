#include "main.h"

/**
 * get_endianness - Function to Check system order of bytes
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
int x, lil_big;

x = 1;
lil_big = (int)(((char *)&x)[0]);

return (lil_big);
}
