#include "main.h"

/**
 * flip_bits - Function returns number of bits to flip & get next num
 * @n: Bits to flip
 * @m: bits to flip to
 *
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned long int prev, xor, flipped;

flipped = 0;
xor = n ^ m;

for (i = 63;  i >= 0; i--)
{
prev = xor >> i;
if (prev & 1)
{
flipped++;
}
}
return (flipped);
}
