#include "main.h"


/**
 * get_bit - Function that return value of bit at given index
 * @n: Number to search for indexth bit
 * @index: Position of bit to retrieve
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
int result;

if (index > 63)
{
return (-1);
}

result = (n >> index) & 1;

return (result);
}
