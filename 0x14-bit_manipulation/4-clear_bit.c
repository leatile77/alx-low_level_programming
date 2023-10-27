#include "main.h"

/**
 * clear_bit - Function that sets indexth bit to 0
 * @n: Complete bit to search and change
 * @index: Position of bit to be changed
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}

*n = (~(1UL << index) & *n);
return (1);
}
